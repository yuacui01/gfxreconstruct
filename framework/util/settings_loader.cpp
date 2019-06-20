/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include "util/settings_loader.h"

#include "util/file_path.h"
#include "util/logging.h"
#include "util/platform.h"

#include <cassert>
#include <cerrno>
#include <cstdio>
#include <fstream>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
GFXRECON_BEGIN_NAMESPACE(settings)

// Using the same settings file search locations as the Vulkan validation layers.
#if defined(WIN32)
const char kSettingsKey[] = "Software\\Khronos\\Vulkan\\Settings";
#elif !defined(__ANDROID__)
const char kDataHome[]       = "XDG_DATA_HOME";
const char kUserHome[]       = "HOME";
const char kUserShareDir[]   = ".local/share/";
const char kSettingsDir[]    = "vulkan/settings.d/";
#endif

#if defined(__ANDROID__)
const char kSettingsEnvVar[] = "debug.gfxrecon.settings_path";
#else
const char kSettingsEnvVar[] = "VK_LAYER_SETTINGS_PATH";
#endif

const char kSettingsFilename[] = "vk_layer_settings.txt";
const char kCommentDelimiter   = '#';

const size_t kDefaultTokenSize = 512;

std::string RemoveQuotes(const std::string& source)
{
    size_t start_index = 0;
    size_t quote_count = 0;

    if (source.front() == '\"' || source.front() == '\'')
    {
        start_index = 1;
        ++quote_count;
    }

    if (source.back() == '\"' || source.back() == '\'')
    {
        ++quote_count;
    }

    if (quote_count > 0)
    {
        return source.substr(start_index, source.length() - quote_count);
    }

    return source;
}

std::string FindLayerSettingsFile()
{
    std::string settings_file;

    // The first Windows/Linux search locations are for a file generated by vkconfig, which currently overrides other
    // files that the user could specify.
#if defined(WIN32)
    HKEY    hive   = 0;
    LSTATUS result = RegOpenKeyExA(HKEY_CURRENT_USER, kSettingsKey, 0, KEY_READ, &hive);

    if (result == ERROR_SUCCESS)
    {
        std::vector<char> data(MAX_PATH);
        DWORD             index      = 0;
        DWORD             type       = 0;
        DWORD             value      = 0;
        DWORD             data_size  = static_cast<DWORD>(data.size());
        DWORD             value_size = sizeof(value);

        for (;;)
        {
            result = RegEnumValueA(
                hive, index, data.data(), &data_size, nullptr, &type, reinterpret_cast<LPBYTE>(&value), &value_size);

            if (result == ERROR_MORE_DATA)
            {
                data.resize(data_size);

                result = RegEnumValueA(hive,
                                       index,
                                       data.data(),
                                       &data_size,
                                       nullptr,
                                       &type,
                                       reinterpret_cast<LPBYTE>(&value),
                                       &value_size);
            }

            if (result == ERROR_SUCCESS)
            {
                // The file path is stored in the sub-key name, where sub-key type is DWORD and value is zero.
                if ((type == REG_DWORD) && (value == 0) && filepath::IsFile(data.data()))
                {
                    // Found a valid file path.
                    settings_file = data.data();
                    GFXRECON_LOG_DEBUG(
                        "Using settings file %s from Windows registry key %s.", settings_file.c_str(), kSettingsKey);
                    break;
                }
                else
                {
                    // Check next entry.
                    ++index;
                }
            }
            else
            {
                // Reached end of list, or an error occured.
                break;
            }
        }

        RegCloseKey(hive);
    }
#elif !defined(__ANDROID__)
    std::string search_path = platform::GetEnv(kDataHome);

    if (search_path.empty())
    {
        search_path = platform::GetEnv(kUserHome);
        if (!search_path.empty())
        {
            search_path = filepath::Join(search_path, kUserShareDir);
        }
    }

    if (!search_path.empty())
    {
        search_path = filepath::Join(search_path, kSettingsDir);
        search_path += kSettingsFilename; // Current search_path ends with the path separator.

        if (filepath::IsFile(search_path))
        {
            settings_file = search_path;
            GFXRECON_LOG_DEBUG("Using settings file %s from %s or %s environment variable.",
                               settings_file.c_str(),
                               kDataHome,
                               kUserHome);
        }
    }
#endif

    if (settings_file.empty())
    {
        // If the settings file was not found at a system specific location (or the current platform is Android), try
        // the layer settings environment variable.
        std::string env_path = platform::GetEnv(kSettingsEnvVar);

        if (!env_path.empty())
        {
            // If this is a directory, append the default settings file name.
            if (filepath::IsDirectory(env_path))
            {
                env_path = filepath::Join(env_path, kSettingsFilename);
            }

            if (filepath::IsFile(env_path))
            {
                settings_file = env_path;
            }
        }
    }

    if (settings_file.empty())
    {
        // Try the current working directory.
        if (filepath::IsFile(kSettingsFilename))
        {
            settings_file = kSettingsFilename;
        }
    }

    return settings_file;
}

int32_t LoadLayerSettingsFile(const std::string&                            filename,
                              const std::string&                            filter,
                              std::unordered_map<std::string, std::string>* settings)
{
    if (settings == nullptr)
    {
        return EINVAL;
    }

    int32_t       result = 0;
    std::ifstream file(filename);

    if (file.good())
    {
        char        key[kDefaultTokenSize]   = { '\0' };
        char        value[kDefaultTokenSize] = { '\0' };
        std::string line;

        std::getline(file, line);

        while (file.good())
        {
            // Strip comments that appear in the line.
            size_t comment_start = line.find_first_of(kCommentDelimiter);
            if (comment_start != std::string::npos)
            {
                line.erase(comment_start, std::string::npos);
            }

            // This is the same format string that the Vulkan validation layers use.
#if defined(WIN32)
            if (sscanf_s(line.c_str(),
                         " %511[^\r\n\t =] = %511[^\r\n \t]",
                         key,
                         kDefaultTokenSize,
                         value,
                         kDefaultTokenSize) == 2)
#else
            if (sscanf(line.c_str(), " %511[^\r\n\t =] = %511[^\r\n \t]", key, value) == 2)
#endif
            {
                // Ignore entries with keys that do not start with the filter prefix.
                if (filter.empty() || (platform::StringCompare(key, filter.c_str(), filter.length()) == 0))
                {
                    (*settings)[key] = RemoveQuotes(value);
                }
            }

            std::getline(file, line);
        }

        if (!file.eof())
        {
            // An error occurred.
            result = errno;
        }
    }
    else
    {
        // Failed to open file.
        result = errno;
    }

    return result;
}

GFXRECON_END_NAMESPACE(settings)
GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)
