/*
** Copyright (c) 2021 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to
** deal in the Software without restriction, including without limitation the
** rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
** sell copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
** IN THE SOFTWARE.
*/

/*
** This file is generated from dx12_wrapper_body_generator.py.
**
*/

#include "generated/generated_dx12_struct_wrappers.h"
#include "generated/generated_dx12_wrappers.h"

#include "encode/custom_dx12_api_call_encoders.h"
#include "encode/custom_dx12_struct_unwrappers.h"
#include "encode/custom_dx12_wrapper_commands.h"
#include "encode/d3d12_capture_manager.h"
#include "encode/d3d12_dispatch_table.h"
#include "encode/dx12_object_wrapper_util.h"
#include "encode/dxgi_dispatch_table.h"
#include "generated/generated_dx12_api_call_encoders.h"
#include "generated/generated_dx12_struct_unwrappers.h"
#include "generated/generated_dx12_wrapper_creators.h"
#include "util/defines.h"

#include <dxgi.h>
#include <dxgi1_2.h>
#include <dxgi1_3.h>
#include <dxgi1_4.h>
#include <dxgi1_5.h>
#include <dxgi1_6.h>
#include <dxgicommon.h>
#include <dxgiformat.h>
#include <dxgitype.h>
#include <d3d12.h>
#include <d3dcommon.h>
#include <Unknwnbase.h>
#include <guiddef.h>
#include <windef.h>
#include <minwinbase.h>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

IDXGIKeyedMutex_Wrapper::ObjectMap IDXGIKeyedMutex_Wrapper::object_map_;
std::mutex IDXGIKeyedMutex_Wrapper::object_map_lock_;
IDXGIDisplayControl_Wrapper::ObjectMap IDXGIDisplayControl_Wrapper::object_map_;
std::mutex IDXGIDisplayControl_Wrapper::object_map_lock_;
IDXGIOutputDuplication_Wrapper::ObjectMap IDXGIOutputDuplication_Wrapper::object_map_;
std::mutex IDXGIOutputDuplication_Wrapper::object_map_lock_;
IDXGISurface_Wrapper::ObjectMap IDXGISurface_Wrapper::object_map_;
std::mutex IDXGISurface_Wrapper::object_map_lock_;
IDXGIResource_Wrapper::ObjectMap IDXGIResource_Wrapper::object_map_;
std::mutex IDXGIResource_Wrapper::object_map_lock_;
IDXGIDecodeSwapChain_Wrapper::ObjectMap IDXGIDecodeSwapChain_Wrapper::object_map_;
std::mutex IDXGIDecodeSwapChain_Wrapper::object_map_lock_;
IDXGIFactoryMedia_Wrapper::ObjectMap IDXGIFactoryMedia_Wrapper::object_map_;
std::mutex IDXGIFactoryMedia_Wrapper::object_map_lock_;
IDXGISwapChainMedia_Wrapper::ObjectMap IDXGISwapChainMedia_Wrapper::object_map_;
std::mutex IDXGISwapChainMedia_Wrapper::object_map_lock_;
IDXGISwapChain_Wrapper::ObjectMap IDXGISwapChain_Wrapper::object_map_;
std::mutex IDXGISwapChain_Wrapper::object_map_lock_;
IDXGIDevice_Wrapper::ObjectMap IDXGIDevice_Wrapper::object_map_;
std::mutex IDXGIDevice_Wrapper::object_map_lock_;
IDXGIAdapter_Wrapper::ObjectMap IDXGIAdapter_Wrapper::object_map_;
std::mutex IDXGIAdapter_Wrapper::object_map_lock_;
IDXGIOutput_Wrapper::ObjectMap IDXGIOutput_Wrapper::object_map_;
std::mutex IDXGIOutput_Wrapper::object_map_lock_;
IDXGIFactory_Wrapper::ObjectMap IDXGIFactory_Wrapper::object_map_;
std::mutex IDXGIFactory_Wrapper::object_map_lock_;
ID3D12RootSignature_Wrapper::ObjectMap ID3D12RootSignature_Wrapper::object_map_;
std::mutex ID3D12RootSignature_Wrapper::object_map_lock_;
ID3D12RootSignatureDeserializer_Wrapper::ObjectMap ID3D12RootSignatureDeserializer_Wrapper::object_map_;
std::mutex ID3D12RootSignatureDeserializer_Wrapper::object_map_lock_;
ID3D12VersionedRootSignatureDeserializer_Wrapper::ObjectMap ID3D12VersionedRootSignatureDeserializer_Wrapper::object_map_;
std::mutex ID3D12VersionedRootSignatureDeserializer_Wrapper::object_map_lock_;
ID3D12CommandAllocator_Wrapper::ObjectMap ID3D12CommandAllocator_Wrapper::object_map_;
std::mutex ID3D12CommandAllocator_Wrapper::object_map_lock_;
ID3D12Fence_Wrapper::ObjectMap ID3D12Fence_Wrapper::object_map_;
std::mutex ID3D12Fence_Wrapper::object_map_lock_;
ID3D12PipelineState_Wrapper::ObjectMap ID3D12PipelineState_Wrapper::object_map_;
std::mutex ID3D12PipelineState_Wrapper::object_map_lock_;
ID3D12DescriptorHeap_Wrapper::ObjectMap ID3D12DescriptorHeap_Wrapper::object_map_;
std::mutex ID3D12DescriptorHeap_Wrapper::object_map_lock_;
ID3D12QueryHeap_Wrapper::ObjectMap ID3D12QueryHeap_Wrapper::object_map_;
std::mutex ID3D12QueryHeap_Wrapper::object_map_lock_;
ID3D12CommandSignature_Wrapper::ObjectMap ID3D12CommandSignature_Wrapper::object_map_;
std::mutex ID3D12CommandSignature_Wrapper::object_map_lock_;
ID3D12CommandQueue_Wrapper::ObjectMap ID3D12CommandQueue_Wrapper::object_map_;
std::mutex ID3D12CommandQueue_Wrapper::object_map_lock_;
ID3D12PipelineLibrary_Wrapper::ObjectMap ID3D12PipelineLibrary_Wrapper::object_map_;
std::mutex ID3D12PipelineLibrary_Wrapper::object_map_lock_;
ID3D12LifetimeOwner_Wrapper::ObjectMap ID3D12LifetimeOwner_Wrapper::object_map_;
std::mutex ID3D12LifetimeOwner_Wrapper::object_map_lock_;
ID3D12SwapChainAssistant_Wrapper::ObjectMap ID3D12SwapChainAssistant_Wrapper::object_map_;
std::mutex ID3D12SwapChainAssistant_Wrapper::object_map_lock_;
ID3D12LifetimeTracker_Wrapper::ObjectMap ID3D12LifetimeTracker_Wrapper::object_map_;
std::mutex ID3D12LifetimeTracker_Wrapper::object_map_lock_;
ID3D12StateObject_Wrapper::ObjectMap ID3D12StateObject_Wrapper::object_map_;
std::mutex ID3D12StateObject_Wrapper::object_map_lock_;
ID3D12StateObjectProperties_Wrapper::ObjectMap ID3D12StateObjectProperties_Wrapper::object_map_;
std::mutex ID3D12StateObjectProperties_Wrapper::object_map_lock_;
ID3D12DeviceRemovedExtendedDataSettings_Wrapper::ObjectMap ID3D12DeviceRemovedExtendedDataSettings_Wrapper::object_map_;
std::mutex ID3D12DeviceRemovedExtendedDataSettings_Wrapper::object_map_lock_;
ID3D12DeviceRemovedExtendedData_Wrapper::ObjectMap ID3D12DeviceRemovedExtendedData_Wrapper::object_map_;
std::mutex ID3D12DeviceRemovedExtendedData_Wrapper::object_map_lock_;
ID3D12ProtectedResourceSession_Wrapper::ObjectMap ID3D12ProtectedResourceSession_Wrapper::object_map_;
std::mutex ID3D12ProtectedResourceSession_Wrapper::object_map_lock_;
ID3D12Device_Wrapper::ObjectMap ID3D12Device_Wrapper::object_map_;
std::mutex ID3D12Device_Wrapper::object_map_lock_;
ID3D12Resource_Wrapper::ObjectMap ID3D12Resource_Wrapper::object_map_;
std::mutex ID3D12Resource_Wrapper::object_map_lock_;
ID3D12Heap_Wrapper::ObjectMap ID3D12Heap_Wrapper::object_map_;
std::mutex ID3D12Heap_Wrapper::object_map_lock_;
ID3D12MetaCommand_Wrapper::ObjectMap ID3D12MetaCommand_Wrapper::object_map_;
std::mutex ID3D12MetaCommand_Wrapper::object_map_lock_;
ID3D12Tools_Wrapper::ObjectMap ID3D12Tools_Wrapper::object_map_;
std::mutex ID3D12Tools_Wrapper::object_map_lock_;
ID3D12GraphicsCommandList_Wrapper::ObjectMap ID3D12GraphicsCommandList_Wrapper::object_map_;
std::mutex ID3D12GraphicsCommandList_Wrapper::object_map_lock_;
ID3D10Blob_Wrapper::ObjectMap ID3D10Blob_Wrapper::object_map_;
std::mutex ID3D10Blob_Wrapper::object_map_lock_;
ID3DDestructionNotifier_Wrapper::ObjectMap ID3DDestructionNotifier_Wrapper::object_map_;
std::mutex ID3DDestructionNotifier_Wrapper::object_map_lock_;

/*
** This part is generated from dxgi.h in Windows SDK: 10.0.19041.0
**
*/

HRESULT WINAPI CreateDXGIFactory(
    REFIID riid,
    void** ppFactory)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_CreateDXGIFactory>::Dispatch(
            manager,
            riid,
            ppFactory);

        result = manager->GetDxgiDispatchTable().CreateDXGIFactory(
            riid,
            ppFactory);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppFactory, nullptr);
        }

        Encode_CreateDXGIFactory(
            result,
            riid,
            ppFactory);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_CreateDXGIFactory>::Dispatch(
            manager,
            result,
            riid,
            ppFactory);
    }
    else
    {
        result = manager->GetDxgiDispatchTable().CreateDXGIFactory(
            riid,
            ppFactory);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI CreateDXGIFactory1(
    REFIID riid,
    void** ppFactory)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_CreateDXGIFactory1>::Dispatch(
            manager,
            riid,
            ppFactory);

        result = manager->GetDxgiDispatchTable().CreateDXGIFactory1(
            riid,
            ppFactory);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppFactory, nullptr);
        }

        Encode_CreateDXGIFactory1(
            result,
            riid,
            ppFactory);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_CreateDXGIFactory1>::Dispatch(
            manager,
            result,
            riid,
            ppFactory);
    }
    else
    {
        result = manager->GetDxgiDispatchTable().CreateDXGIFactory1(
            riid,
            ppFactory);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIObject_Wrapper::IDXGIObject_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIObject_Wrapper::SetPrivateData(
    REFGUID Name,
    UINT DataSize,
    const void* pData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIObject_SetPrivateData>::Dispatch(
            manager,
            this,
            Name,
            DataSize,
            pData);

        result = GetWrappedObjectAs<IDXGIObject>()->SetPrivateData(
            Name,
            DataSize,
            pData);

        Encode_IDXGIObject_SetPrivateData(
            GetCaptureId(),
            result,
            Name,
            DataSize,
            pData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIObject_SetPrivateData>::Dispatch(
            manager,
            this,
            result,
            Name,
            DataSize,
            pData);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIObject>()->SetPrivateData(
            Name,
            DataSize,
            pData);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIObject_Wrapper::SetPrivateDataInterface(
    REFGUID Name,
    const IUnknown* pUnknown)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIObject_SetPrivateDataInterface>::Dispatch(
            manager,
            this,
            Name,
            pUnknown);

        result = GetWrappedObjectAs<IDXGIObject>()->SetPrivateDataInterface(
            Name,
            encode::GetWrappedObject<IUnknown>(pUnknown));

        Encode_IDXGIObject_SetPrivateDataInterface(
            GetCaptureId(),
            result,
            Name,
            pUnknown);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIObject_SetPrivateDataInterface>::Dispatch(
            manager,
            this,
            result,
            Name,
            pUnknown);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIObject>()->SetPrivateDataInterface(
            Name,
            pUnknown);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIObject_Wrapper::GetPrivateData(
    REFGUID Name,
    UINT* pDataSize,
    void* pData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIObject_GetPrivateData>::Dispatch(
            manager,
            this,
            Name,
            pDataSize,
            pData);

        result = GetWrappedObjectAs<IDXGIObject>()->GetPrivateData(
            Name,
            pDataSize,
            pData);

        Encode_IDXGIObject_GetPrivateData(
            GetCaptureId(),
            result,
            Name,
            pDataSize,
            pData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIObject_GetPrivateData>::Dispatch(
            manager,
            this,
            result,
            Name,
            pDataSize,
            pData);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIObject>()->GetPrivateData(
            Name,
            pDataSize,
            pData);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIObject_Wrapper::GetParent(
    REFIID riid,
    void** ppParent)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIObject_GetParent>::Dispatch(
            manager,
            this,
            riid,
            ppParent);

        result = GetWrappedObjectAs<IDXGIObject>()->GetParent(
            riid,
            ppParent);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppParent, nullptr);
        }

        Encode_IDXGIObject_GetParent(
            GetCaptureId(),
            result,
            riid,
            ppParent);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIObject_GetParent>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppParent);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIObject>()->GetParent(
            riid,
            ppParent);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDeviceSubObject_Wrapper::IDXGIDeviceSubObject_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIDeviceSubObject_Wrapper::GetDevice(
    REFIID riid,
    void** ppDevice)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDeviceSubObject_GetDevice>::Dispatch(
            manager,
            this,
            riid,
            ppDevice);

        result = GetWrappedObjectAs<IDXGIDeviceSubObject>()->GetDevice(
            riid,
            ppDevice);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppDevice, nullptr);
        }

        Encode_IDXGIDeviceSubObject_GetDevice(
            GetCaptureId(),
            result,
            riid,
            ppDevice);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDeviceSubObject_GetDevice>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppDevice);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDeviceSubObject>()->GetDevice(
            riid,
            ppDevice);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIResource_Wrapper::IDXGIResource_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDeviceSubObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIResource_Wrapper::~IDXGIResource_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIResource>(), object_map_, object_map_lock_);
}

IDXGIResource_Wrapper* IDXGIResource_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIResource_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIResource_Wrapper::GetSharedHandle(
    HANDLE* pSharedHandle)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource_GetSharedHandle>::Dispatch(
            manager,
            this,
            pSharedHandle);

        result = GetWrappedObjectAs<IDXGIResource>()->GetSharedHandle(
            pSharedHandle);

        Encode_IDXGIResource_GetSharedHandle(
            GetCaptureId(),
            result,
            pSharedHandle);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource_GetSharedHandle>::Dispatch(
            manager,
            this,
            result,
            pSharedHandle);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource>()->GetSharedHandle(
            pSharedHandle);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIResource_Wrapper::GetUsage(
    DXGI_USAGE* pUsage)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource_GetUsage>::Dispatch(
            manager,
            this,
            pUsage);

        result = GetWrappedObjectAs<IDXGIResource>()->GetUsage(
            pUsage);

        Encode_IDXGIResource_GetUsage(
            GetCaptureId(),
            result,
            pUsage);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource_GetUsage>::Dispatch(
            manager,
            this,
            result,
            pUsage);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource>()->GetUsage(
            pUsage);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIResource_Wrapper::SetEvictionPriority(
    UINT EvictionPriority)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource_SetEvictionPriority>::Dispatch(
            manager,
            this,
            EvictionPriority);

        result = GetWrappedObjectAs<IDXGIResource>()->SetEvictionPriority(
            EvictionPriority);

        Encode_IDXGIResource_SetEvictionPriority(
            GetCaptureId(),
            result,
            EvictionPriority);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource_SetEvictionPriority>::Dispatch(
            manager,
            this,
            result,
            EvictionPriority);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource>()->SetEvictionPriority(
            EvictionPriority);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIResource_Wrapper::GetEvictionPriority(
    UINT* pEvictionPriority)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource_GetEvictionPriority>::Dispatch(
            manager,
            this,
            pEvictionPriority);

        result = GetWrappedObjectAs<IDXGIResource>()->GetEvictionPriority(
            pEvictionPriority);

        Encode_IDXGIResource_GetEvictionPriority(
            GetCaptureId(),
            result,
            pEvictionPriority);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource_GetEvictionPriority>::Dispatch(
            manager,
            this,
            result,
            pEvictionPriority);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource>()->GetEvictionPriority(
            pEvictionPriority);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIKeyedMutex_Wrapper::IDXGIKeyedMutex_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDeviceSubObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIKeyedMutex_Wrapper::~IDXGIKeyedMutex_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIKeyedMutex>(), object_map_, object_map_lock_);
}

IDXGIKeyedMutex_Wrapper* IDXGIKeyedMutex_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIKeyedMutex_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIKeyedMutex_Wrapper::AcquireSync(
    UINT64 Key,
    DWORD dwMilliseconds)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIKeyedMutex_AcquireSync>::Dispatch(
            manager,
            this,
            Key,
            dwMilliseconds);

        result = GetWrappedObjectAs<IDXGIKeyedMutex>()->AcquireSync(
            Key,
            dwMilliseconds);

        Encode_IDXGIKeyedMutex_AcquireSync(
            GetCaptureId(),
            result,
            Key,
            dwMilliseconds);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIKeyedMutex_AcquireSync>::Dispatch(
            manager,
            this,
            result,
            Key,
            dwMilliseconds);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIKeyedMutex>()->AcquireSync(
            Key,
            dwMilliseconds);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIKeyedMutex_Wrapper::ReleaseSync(
    UINT64 Key)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIKeyedMutex_ReleaseSync>::Dispatch(
            manager,
            this,
            Key);

        result = GetWrappedObjectAs<IDXGIKeyedMutex>()->ReleaseSync(
            Key);

        Encode_IDXGIKeyedMutex_ReleaseSync(
            GetCaptureId(),
            result,
            Key);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIKeyedMutex_ReleaseSync>::Dispatch(
            manager,
            this,
            result,
            Key);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIKeyedMutex>()->ReleaseSync(
            Key);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISurface_Wrapper::IDXGISurface_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDeviceSubObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGISurface_Wrapper::~IDXGISurface_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGISurface>(), object_map_, object_map_lock_);
}

IDXGISurface_Wrapper* IDXGISurface_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGISurface_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGISurface_Wrapper::GetDesc(
    DXGI_SURFACE_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGISurface>()->GetDesc(
            pDesc);

        Encode_IDXGISurface_GetDesc(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface_GetDesc>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface>()->GetDesc(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISurface_Wrapper::Map(
    DXGI_MAPPED_RECT* pLockedRect,
    UINT MapFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface_Map>::Dispatch(
            manager,
            this,
            pLockedRect,
            MapFlags);

        result = GetWrappedObjectAs<IDXGISurface>()->Map(
            pLockedRect,
            MapFlags);

        Encode_IDXGISurface_Map(
            GetCaptureId(),
            result,
            pLockedRect,
            MapFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface_Map>::Dispatch(
            manager,
            this,
            result,
            pLockedRect,
            MapFlags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface>()->Map(
            pLockedRect,
            MapFlags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISurface_Wrapper::Unmap()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface_Unmap>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGISurface>()->Unmap();

        Encode_IDXGISurface_Unmap(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface_Unmap>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface>()->Unmap();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISurface1_Wrapper::IDXGISurface1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISurface_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGISurface1_Wrapper::GetDC(
    BOOL Discard,
    HDC* phdc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface1_GetDC>::Dispatch(
            manager,
            this,
            Discard,
            phdc);

        result = GetWrappedObjectAs<IDXGISurface1>()->GetDC(
            Discard,
            phdc);

        Encode_IDXGISurface1_GetDC(
            GetCaptureId(),
            result,
            Discard,
            phdc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface1_GetDC>::Dispatch(
            manager,
            this,
            result,
            Discard,
            phdc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface1>()->GetDC(
            Discard,
            phdc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISurface1_Wrapper::ReleaseDC(
    RECT* pDirtyRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface1_ReleaseDC>::Dispatch(
            manager,
            this,
            pDirtyRect);

        result = GetWrappedObjectAs<IDXGISurface1>()->ReleaseDC(
            pDirtyRect);

        Encode_IDXGISurface1_ReleaseDC(
            GetCaptureId(),
            result,
            pDirtyRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface1_ReleaseDC>::Dispatch(
            manager,
            this,
            result,
            pDirtyRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface1>()->ReleaseDC(
            pDirtyRect);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIAdapter_Wrapper::IDXGIAdapter_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIAdapter_Wrapper::~IDXGIAdapter_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIAdapter>(), object_map_, object_map_lock_);
}

IDXGIAdapter_Wrapper* IDXGIAdapter_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIAdapter_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter_Wrapper::EnumOutputs(
    UINT Output,
    IDXGIOutput** ppOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter_EnumOutputs>::Dispatch(
            manager,
            this,
            Output,
            ppOutput);

        result = GetWrappedObjectAs<IDXGIAdapter>()->EnumOutputs(
            Output,
            ppOutput);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutput, reinterpret_cast<void**>(ppOutput), nullptr);
        }

        Encode_IDXGIAdapter_EnumOutputs(
            GetCaptureId(),
            result,
            Output,
            ppOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter_EnumOutputs>::Dispatch(
            manager,
            this,
            result,
            Output,
            ppOutput);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter>()->EnumOutputs(
            Output,
            ppOutput);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter_Wrapper::GetDesc(
    DXGI_ADAPTER_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIAdapter>()->GetDesc(
            pDesc);

        Encode_IDXGIAdapter_GetDesc(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter_GetDesc>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter>()->GetDesc(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter_Wrapper::CheckInterfaceSupport(
    REFGUID InterfaceName,
    LARGE_INTEGER* pUMDVersion)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter_CheckInterfaceSupport>::Dispatch(
            manager,
            this,
            InterfaceName,
            pUMDVersion);

        result = GetWrappedObjectAs<IDXGIAdapter>()->CheckInterfaceSupport(
            InterfaceName,
            pUMDVersion);

        Encode_IDXGIAdapter_CheckInterfaceSupport(
            GetCaptureId(),
            result,
            InterfaceName,
            pUMDVersion);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter_CheckInterfaceSupport>::Dispatch(
            manager,
            this,
            result,
            InterfaceName,
            pUMDVersion);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter>()->CheckInterfaceSupport(
            InterfaceName,
            pUMDVersion);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput_Wrapper::IDXGIOutput_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIOutput_Wrapper::~IDXGIOutput_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIOutput>(), object_map_, object_map_lock_);
}

IDXGIOutput_Wrapper* IDXGIOutput_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIOutput_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetDesc(
    DXGI_OUTPUT_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetDesc(
            pDesc);

        Encode_IDXGIOutput_GetDesc(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDesc>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetDesc(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetDisplayModeList(
    DXGI_FORMAT EnumFormat,
    UINT Flags,
    UINT* pNumModes,
    DXGI_MODE_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDisplayModeList>::Dispatch(
            manager,
            this,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetDisplayModeList(
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        Encode_IDXGIOutput_GetDisplayModeList(
            GetCaptureId(),
            result,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDisplayModeList>::Dispatch(
            manager,
            this,
            result,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetDisplayModeList(
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::FindClosestMatchingMode(
    const DXGI_MODE_DESC* pModeToMatch,
    DXGI_MODE_DESC* pClosestMatch,
    IUnknown* pConcernedDevice)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_FindClosestMatchingMode>::Dispatch(
            manager,
            this,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);

        result = GetWrappedObjectAs<IDXGIOutput>()->FindClosestMatchingMode(
            pModeToMatch,
            pClosestMatch,
            encode::GetWrappedObject<IUnknown>(pConcernedDevice));

        Encode_IDXGIOutput_FindClosestMatchingMode(
            GetCaptureId(),
            result,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_FindClosestMatchingMode>::Dispatch(
            manager,
            this,
            result,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->FindClosestMatchingMode(
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::WaitForVBlank()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_WaitForVBlank>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIOutput>()->WaitForVBlank();

        Encode_IDXGIOutput_WaitForVBlank(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_WaitForVBlank>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->WaitForVBlank();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::TakeOwnership(
    IUnknown* pDevice,
    BOOL Exclusive)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_TakeOwnership>::Dispatch(
            manager,
            this,
            pDevice,
            Exclusive);

        result = GetWrappedObjectAs<IDXGIOutput>()->TakeOwnership(
            encode::GetWrappedObject<IUnknown>(pDevice),
            Exclusive);

        Encode_IDXGIOutput_TakeOwnership(
            GetCaptureId(),
            result,
            pDevice,
            Exclusive);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_TakeOwnership>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            Exclusive);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->TakeOwnership(
            pDevice,
            Exclusive);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIOutput_Wrapper::ReleaseOwnership()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_ReleaseOwnership>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<IDXGIOutput>()->ReleaseOwnership();

        Encode_IDXGIOutput_ReleaseOwnership(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_ReleaseOwnership>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<IDXGIOutput>()->ReleaseOwnership();
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetGammaControlCapabilities(
    DXGI_GAMMA_CONTROL_CAPABILITIES* pGammaCaps)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetGammaControlCapabilities>::Dispatch(
            manager,
            this,
            pGammaCaps);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetGammaControlCapabilities(
            pGammaCaps);

        Encode_IDXGIOutput_GetGammaControlCapabilities(
            GetCaptureId(),
            result,
            pGammaCaps);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetGammaControlCapabilities>::Dispatch(
            manager,
            this,
            result,
            pGammaCaps);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetGammaControlCapabilities(
            pGammaCaps);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::SetGammaControl(
    const DXGI_GAMMA_CONTROL* pArray)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_SetGammaControl>::Dispatch(
            manager,
            this,
            pArray);

        result = GetWrappedObjectAs<IDXGIOutput>()->SetGammaControl(
            pArray);

        Encode_IDXGIOutput_SetGammaControl(
            GetCaptureId(),
            result,
            pArray);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_SetGammaControl>::Dispatch(
            manager,
            this,
            result,
            pArray);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->SetGammaControl(
            pArray);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetGammaControl(
    DXGI_GAMMA_CONTROL* pArray)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetGammaControl>::Dispatch(
            manager,
            this,
            pArray);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetGammaControl(
            pArray);

        Encode_IDXGIOutput_GetGammaControl(
            GetCaptureId(),
            result,
            pArray);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetGammaControl>::Dispatch(
            manager,
            this,
            result,
            pArray);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetGammaControl(
            pArray);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::SetDisplaySurface(
    IDXGISurface* pScanoutSurface)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_SetDisplaySurface>::Dispatch(
            manager,
            this,
            pScanoutSurface);

        result = GetWrappedObjectAs<IDXGIOutput>()->SetDisplaySurface(
            encode::GetWrappedObject<IDXGISurface>(pScanoutSurface));

        Encode_IDXGIOutput_SetDisplaySurface(
            GetCaptureId(),
            result,
            pScanoutSurface);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_SetDisplaySurface>::Dispatch(
            manager,
            this,
            result,
            pScanoutSurface);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->SetDisplaySurface(
            pScanoutSurface);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetDisplaySurfaceData(
    IDXGISurface* pDestination)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDisplaySurfaceData>::Dispatch(
            manager,
            this,
            pDestination);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetDisplaySurfaceData(
            encode::GetWrappedObject<IDXGISurface>(pDestination));

        Encode_IDXGIOutput_GetDisplaySurfaceData(
            GetCaptureId(),
            result,
            pDestination);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetDisplaySurfaceData>::Dispatch(
            manager,
            this,
            result,
            pDestination);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetDisplaySurfaceData(
            pDestination);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput_Wrapper::GetFrameStatistics(
    DXGI_FRAME_STATISTICS* pStats)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput_GetFrameStatistics>::Dispatch(
            manager,
            this,
            pStats);

        result = GetWrappedObjectAs<IDXGIOutput>()->GetFrameStatistics(
            pStats);

        Encode_IDXGIOutput_GetFrameStatistics(
            GetCaptureId(),
            result,
            pStats);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput_GetFrameStatistics>::Dispatch(
            manager,
            this,
            result,
            pStats);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput>()->GetFrameStatistics(
            pStats);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISwapChain_Wrapper::IDXGISwapChain_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDeviceSubObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGISwapChain_Wrapper::~IDXGISwapChain_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGISwapChain>(), object_map_, object_map_lock_);
}

IDXGISwapChain_Wrapper* IDXGISwapChain_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGISwapChain_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::Present(
    UINT SyncInterval,
    UINT Flags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_Present>::Dispatch(
            manager,
            this,
            SyncInterval,
            Flags);

        result = GetWrappedObjectAs<IDXGISwapChain>()->Present(
            SyncInterval,
            Flags);

        Encode_IDXGISwapChain_Present(
            GetCaptureId(),
            result,
            SyncInterval,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_Present>::Dispatch(
            manager,
            this,
            result,
            SyncInterval,
            Flags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->Present(
            SyncInterval,
            Flags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetBuffer(
    UINT Buffer,
    REFIID riid,
    void** ppSurface)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetBuffer>::Dispatch(
            manager,
            this,
            Buffer,
            riid,
            ppSurface);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetBuffer(
            Buffer,
            riid,
            ppSurface);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppSurface, nullptr);
        }

        Encode_IDXGISwapChain_GetBuffer(
            GetCaptureId(),
            result,
            Buffer,
            riid,
            ppSurface);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetBuffer>::Dispatch(
            manager,
            this,
            result,
            Buffer,
            riid,
            ppSurface);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetBuffer(
            Buffer,
            riid,
            ppSurface);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::SetFullscreenState(
    BOOL Fullscreen,
    IDXGIOutput* pTarget)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_SetFullscreenState>::Dispatch(
            manager,
            this,
            Fullscreen,
            pTarget);

        result = GetWrappedObjectAs<IDXGISwapChain>()->SetFullscreenState(
            Fullscreen,
            encode::GetWrappedObject<IDXGIOutput>(pTarget));

        Encode_IDXGISwapChain_SetFullscreenState(
            GetCaptureId(),
            result,
            Fullscreen,
            pTarget);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_SetFullscreenState>::Dispatch(
            manager,
            this,
            result,
            Fullscreen,
            pTarget);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->SetFullscreenState(
            Fullscreen,
            pTarget);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetFullscreenState(
    BOOL* pFullscreen,
    IDXGIOutput** ppTarget)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetFullscreenState>::Dispatch(
            manager,
            this,
            pFullscreen,
            ppTarget);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetFullscreenState(
            pFullscreen,
            ppTarget);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutput, reinterpret_cast<void**>(ppTarget), nullptr);
        }

        Encode_IDXGISwapChain_GetFullscreenState(
            GetCaptureId(),
            result,
            pFullscreen,
            ppTarget);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetFullscreenState>::Dispatch(
            manager,
            this,
            result,
            pFullscreen,
            ppTarget);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetFullscreenState(
            pFullscreen,
            ppTarget);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetDesc(
    DXGI_SWAP_CHAIN_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetDesc(
            pDesc);

        Encode_IDXGISwapChain_GetDesc(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetDesc>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetDesc(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::ResizeBuffers(
    UINT BufferCount,
    UINT Width,
    UINT Height,
    DXGI_FORMAT NewFormat,
    UINT SwapChainFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_ResizeBuffers>::Dispatch(
            manager,
            this,
            BufferCount,
            Width,
            Height,
            NewFormat,
            SwapChainFlags);

        result = GetWrappedObjectAs<IDXGISwapChain>()->ResizeBuffers(
            BufferCount,
            Width,
            Height,
            NewFormat,
            SwapChainFlags);

        Encode_IDXGISwapChain_ResizeBuffers(
            GetCaptureId(),
            result,
            BufferCount,
            Width,
            Height,
            NewFormat,
            SwapChainFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_ResizeBuffers>::Dispatch(
            manager,
            this,
            result,
            BufferCount,
            Width,
            Height,
            NewFormat,
            SwapChainFlags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->ResizeBuffers(
            BufferCount,
            Width,
            Height,
            NewFormat,
            SwapChainFlags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::ResizeTarget(
    const DXGI_MODE_DESC* pNewTargetParameters)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_ResizeTarget>::Dispatch(
            manager,
            this,
            pNewTargetParameters);

        result = GetWrappedObjectAs<IDXGISwapChain>()->ResizeTarget(
            pNewTargetParameters);

        Encode_IDXGISwapChain_ResizeTarget(
            GetCaptureId(),
            result,
            pNewTargetParameters);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_ResizeTarget>::Dispatch(
            manager,
            this,
            result,
            pNewTargetParameters);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->ResizeTarget(
            pNewTargetParameters);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetContainingOutput(
    IDXGIOutput** ppOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetContainingOutput>::Dispatch(
            manager,
            this,
            ppOutput);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetContainingOutput(
            ppOutput);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutput, reinterpret_cast<void**>(ppOutput), nullptr);
        }

        Encode_IDXGISwapChain_GetContainingOutput(
            GetCaptureId(),
            result,
            ppOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetContainingOutput>::Dispatch(
            manager,
            this,
            result,
            ppOutput);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetContainingOutput(
            ppOutput);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetFrameStatistics(
    DXGI_FRAME_STATISTICS* pStats)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetFrameStatistics>::Dispatch(
            manager,
            this,
            pStats);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetFrameStatistics(
            pStats);

        Encode_IDXGISwapChain_GetFrameStatistics(
            GetCaptureId(),
            result,
            pStats);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetFrameStatistics>::Dispatch(
            manager,
            this,
            result,
            pStats);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetFrameStatistics(
            pStats);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain_Wrapper::GetLastPresentCount(
    UINT* pLastPresentCount)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetLastPresentCount>::Dispatch(
            manager,
            this,
            pLastPresentCount);

        result = GetWrappedObjectAs<IDXGISwapChain>()->GetLastPresentCount(
            pLastPresentCount);

        Encode_IDXGISwapChain_GetLastPresentCount(
            GetCaptureId(),
            result,
            pLastPresentCount);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain_GetLastPresentCount>::Dispatch(
            manager,
            this,
            result,
            pLastPresentCount);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain>()->GetLastPresentCount(
            pLastPresentCount);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory_Wrapper::IDXGIFactory_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIFactory_Wrapper::~IDXGIFactory_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIFactory>(), object_map_, object_map_lock_);
}

IDXGIFactory_Wrapper* IDXGIFactory_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIFactory_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIFactory_Wrapper::EnumAdapters(
    UINT Adapter,
    IDXGIAdapter** ppAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory_EnumAdapters>::Dispatch(
            manager,
            this,
            Adapter,
            ppAdapter);

        result = GetWrappedObjectAs<IDXGIFactory>()->EnumAdapters(
            Adapter,
            ppAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIAdapter, reinterpret_cast<void**>(ppAdapter), nullptr);
        }

        Encode_IDXGIFactory_EnumAdapters(
            GetCaptureId(),
            result,
            Adapter,
            ppAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory_EnumAdapters>::Dispatch(
            manager,
            this,
            result,
            Adapter,
            ppAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory>()->EnumAdapters(
            Adapter,
            ppAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory_Wrapper::MakeWindowAssociation(
    HWND WindowHandle,
    UINT Flags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory_MakeWindowAssociation>::Dispatch(
            manager,
            this,
            WindowHandle,
            Flags);

        result = GetWrappedObjectAs<IDXGIFactory>()->MakeWindowAssociation(
            WindowHandle,
            Flags);

        Encode_IDXGIFactory_MakeWindowAssociation(
            GetCaptureId(),
            result,
            WindowHandle,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory_MakeWindowAssociation>::Dispatch(
            manager,
            this,
            result,
            WindowHandle,
            Flags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory>()->MakeWindowAssociation(
            WindowHandle,
            Flags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory_Wrapper::GetWindowAssociation(
    HWND* pWindowHandle)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory_GetWindowAssociation>::Dispatch(
            manager,
            this,
            pWindowHandle);

        result = GetWrappedObjectAs<IDXGIFactory>()->GetWindowAssociation(
            pWindowHandle);

        Encode_IDXGIFactory_GetWindowAssociation(
            GetCaptureId(),
            result,
            pWindowHandle);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory_GetWindowAssociation>::Dispatch(
            manager,
            this,
            result,
            pWindowHandle);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory>()->GetWindowAssociation(
            pWindowHandle);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory_Wrapper::CreateSwapChain(
    IUnknown* pDevice,
    DXGI_SWAP_CHAIN_DESC* pDesc,
    IDXGISwapChain** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory_CreateSwapChain>::Dispatch(
            manager,
            this,
            pDevice,
            pDesc,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactory>()->CreateSwapChain(
            encode::GetWrappedObject<IUnknown>(pDevice),
            pDesc,
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISwapChain, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactory_CreateSwapChain(
            GetCaptureId(),
            result,
            pDevice,
            pDesc,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory_CreateSwapChain>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            pDesc,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory>()->CreateSwapChain(
            pDevice,
            pDesc,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory_Wrapper::CreateSoftwareAdapter(
    HMODULE Module,
    IDXGIAdapter** ppAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory_CreateSoftwareAdapter>::Dispatch(
            manager,
            this,
            Module,
            ppAdapter);

        result = GetWrappedObjectAs<IDXGIFactory>()->CreateSoftwareAdapter(
            Module,
            ppAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIAdapter, reinterpret_cast<void**>(ppAdapter), nullptr);
        }

        Encode_IDXGIFactory_CreateSoftwareAdapter(
            GetCaptureId(),
            result,
            Module,
            ppAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory_CreateSoftwareAdapter>::Dispatch(
            manager,
            this,
            result,
            Module,
            ppAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory>()->CreateSoftwareAdapter(
            Module,
            ppAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDevice_Wrapper::IDXGIDevice_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIDevice_Wrapper::~IDXGIDevice_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIDevice>(), object_map_, object_map_lock_);
}

IDXGIDevice_Wrapper* IDXGIDevice_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIDevice_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIDevice_Wrapper::GetAdapter(
    IDXGIAdapter** pAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice_GetAdapter>::Dispatch(
            manager,
            this,
            pAdapter);

        result = GetWrappedObjectAs<IDXGIDevice>()->GetAdapter(
            pAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIAdapter, reinterpret_cast<void**>(pAdapter), nullptr);
        }

        Encode_IDXGIDevice_GetAdapter(
            GetCaptureId(),
            result,
            pAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice_GetAdapter>::Dispatch(
            manager,
            this,
            result,
            pAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice>()->GetAdapter(
            pAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice_Wrapper::CreateSurface(
    const DXGI_SURFACE_DESC* pDesc,
    UINT NumSurfaces,
    DXGI_USAGE Usage,
    const DXGI_SHARED_RESOURCE* pSharedResource,
    IDXGISurface** ppSurface)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice_CreateSurface>::Dispatch(
            manager,
            this,
            pDesc,
            NumSurfaces,
            Usage,
            pSharedResource,
            ppSurface);

        result = GetWrappedObjectAs<IDXGIDevice>()->CreateSurface(
            pDesc,
            NumSurfaces,
            Usage,
            pSharedResource,
            ppSurface);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISurface, reinterpret_cast<void**>(ppSurface), nullptr);
        }

        Encode_IDXGIDevice_CreateSurface(
            GetCaptureId(),
            result,
            pDesc,
            NumSurfaces,
            Usage,
            pSharedResource,
            ppSurface);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice_CreateSurface>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            NumSurfaces,
            Usage,
            pSharedResource,
            ppSurface);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice>()->CreateSurface(
            pDesc,
            NumSurfaces,
            Usage,
            pSharedResource,
            ppSurface);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice_Wrapper::QueryResourceResidency(
    IUnknown* const* ppResources,
    DXGI_RESIDENCY* pResidencyStatus,
    UINT NumResources)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice_QueryResourceResidency>::Dispatch(
            manager,
            this,
            ppResources,
            pResidencyStatus,
            NumResources);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGIDevice>()->QueryResourceResidency(
            UnwrapObjects<IUnknown>(ppResources, NumResources, unwrap_memory),
            pResidencyStatus,
            NumResources);

        Encode_IDXGIDevice_QueryResourceResidency(
            GetCaptureId(),
            result,
            ppResources,
            pResidencyStatus,
            NumResources);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice_QueryResourceResidency>::Dispatch(
            manager,
            this,
            result,
            ppResources,
            pResidencyStatus,
            NumResources);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice>()->QueryResourceResidency(
            ppResources,
            pResidencyStatus,
            NumResources);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice_Wrapper::SetGPUThreadPriority(
    INT Priority)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice_SetGPUThreadPriority>::Dispatch(
            manager,
            this,
            Priority);

        result = GetWrappedObjectAs<IDXGIDevice>()->SetGPUThreadPriority(
            Priority);

        Encode_IDXGIDevice_SetGPUThreadPriority(
            GetCaptureId(),
            result,
            Priority);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice_SetGPUThreadPriority>::Dispatch(
            manager,
            this,
            result,
            Priority);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice>()->SetGPUThreadPriority(
            Priority);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice_Wrapper::GetGPUThreadPriority(
    INT* pPriority)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice_GetGPUThreadPriority>::Dispatch(
            manager,
            this,
            pPriority);

        result = GetWrappedObjectAs<IDXGIDevice>()->GetGPUThreadPriority(
            pPriority);

        Encode_IDXGIDevice_GetGPUThreadPriority(
            GetCaptureId(),
            result,
            pPriority);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice_GetGPUThreadPriority>::Dispatch(
            manager,
            this,
            result,
            pPriority);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice>()->GetGPUThreadPriority(
            pPriority);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory1_Wrapper::IDXGIFactory1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIFactory1_Wrapper::EnumAdapters1(
    UINT Adapter,
    IDXGIAdapter1** ppAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory1_EnumAdapters1>::Dispatch(
            manager,
            this,
            Adapter,
            ppAdapter);

        result = GetWrappedObjectAs<IDXGIFactory1>()->EnumAdapters1(
            Adapter,
            ppAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIAdapter1, reinterpret_cast<void**>(ppAdapter), nullptr);
        }

        Encode_IDXGIFactory1_EnumAdapters1(
            GetCaptureId(),
            result,
            Adapter,
            ppAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory1_EnumAdapters1>::Dispatch(
            manager,
            this,
            result,
            Adapter,
            ppAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory1>()->EnumAdapters1(
            Adapter,
            ppAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

BOOL STDMETHODCALLTYPE IDXGIFactory1_Wrapper::IsCurrent()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory1_IsCurrent>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIFactory1>()->IsCurrent();

        Encode_IDXGIFactory1_IsCurrent(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory1_IsCurrent>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory1>()->IsCurrent();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIAdapter1_Wrapper::IDXGIAdapter1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIAdapter_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter1_Wrapper::GetDesc1(
    DXGI_ADAPTER_DESC1* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter1_GetDesc1>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIAdapter1>()->GetDesc1(
            pDesc);

        Encode_IDXGIAdapter1_GetDesc1(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter1_GetDesc1>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter1>()->GetDesc1(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDevice1_Wrapper::IDXGIDevice1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDevice_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIDevice1_Wrapper::SetMaximumFrameLatency(
    UINT MaxLatency)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice1_SetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            MaxLatency);

        result = GetWrappedObjectAs<IDXGIDevice1>()->SetMaximumFrameLatency(
            MaxLatency);

        Encode_IDXGIDevice1_SetMaximumFrameLatency(
            GetCaptureId(),
            result,
            MaxLatency);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice1_SetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            result,
            MaxLatency);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice1>()->SetMaximumFrameLatency(
            MaxLatency);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice1_Wrapper::GetMaximumFrameLatency(
    UINT* pMaxLatency)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice1_GetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            pMaxLatency);

        result = GetWrappedObjectAs<IDXGIDevice1>()->GetMaximumFrameLatency(
            pMaxLatency);

        Encode_IDXGIDevice1_GetMaximumFrameLatency(
            GetCaptureId(),
            result,
            pMaxLatency);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice1_GetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            result,
            pMaxLatency);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice1>()->GetMaximumFrameLatency(
            pMaxLatency);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from dxgi1_2.h in Windows SDK: 10.0.19041.0
**
*/

IDXGIDisplayControl_Wrapper::IDXGIDisplayControl_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIDisplayControl_Wrapper::~IDXGIDisplayControl_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIDisplayControl>(), object_map_, object_map_lock_);
}

IDXGIDisplayControl_Wrapper* IDXGIDisplayControl_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIDisplayControl_Wrapper>(object, object_map_, object_map_lock_);
}

BOOL STDMETHODCALLTYPE IDXGIDisplayControl_Wrapper::IsStereoEnabled()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDisplayControl_IsStereoEnabled>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIDisplayControl>()->IsStereoEnabled();

        Encode_IDXGIDisplayControl_IsStereoEnabled(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDisplayControl_IsStereoEnabled>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDisplayControl>()->IsStereoEnabled();
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIDisplayControl_Wrapper::SetStereoEnabled(
    BOOL enabled)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDisplayControl_SetStereoEnabled>::Dispatch(
            manager,
            this,
            enabled);

        GetWrappedObjectAs<IDXGIDisplayControl>()->SetStereoEnabled(
            enabled);

        Encode_IDXGIDisplayControl_SetStereoEnabled(
            GetCaptureId(),
            enabled);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDisplayControl_SetStereoEnabled>::Dispatch(
            manager,
            this,
            enabled);
    }
    else
    {
        GetWrappedObjectAs<IDXGIDisplayControl>()->SetStereoEnabled(
            enabled);
    }

    manager->DecrementCallScope();
}

IDXGIOutputDuplication_Wrapper::IDXGIOutputDuplication_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIObject_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIOutputDuplication_Wrapper::~IDXGIOutputDuplication_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIOutputDuplication>(), object_map_, object_map_lock_);
}

IDXGIOutputDuplication_Wrapper* IDXGIOutputDuplication_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIOutputDuplication_Wrapper>(object, object_map_, object_map_lock_);
}

void STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::GetDesc(
    DXGI_OUTDUPL_DESC* pDesc)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);

        GetWrappedObjectAs<IDXGIOutputDuplication>()->GetDesc(
            pDesc);

        Encode_IDXGIOutputDuplication_GetDesc(
            GetCaptureId(),
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetDesc>::Dispatch(
            manager,
            this,
            pDesc);
    }
    else
    {
        GetWrappedObjectAs<IDXGIOutputDuplication>()->GetDesc(
            pDesc);
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::AcquireNextFrame(
    UINT TimeoutInMilliseconds,
    DXGI_OUTDUPL_FRAME_INFO* pFrameInfo,
    IDXGIResource** ppDesktopResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_AcquireNextFrame>::Dispatch(
            manager,
            this,
            TimeoutInMilliseconds,
            pFrameInfo,
            ppDesktopResource);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->AcquireNextFrame(
            TimeoutInMilliseconds,
            pFrameInfo,
            ppDesktopResource);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIResource, reinterpret_cast<void**>(ppDesktopResource), nullptr);
        }

        Encode_IDXGIOutputDuplication_AcquireNextFrame(
            GetCaptureId(),
            result,
            TimeoutInMilliseconds,
            pFrameInfo,
            ppDesktopResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_AcquireNextFrame>::Dispatch(
            manager,
            this,
            result,
            TimeoutInMilliseconds,
            pFrameInfo,
            ppDesktopResource);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->AcquireNextFrame(
            TimeoutInMilliseconds,
            pFrameInfo,
            ppDesktopResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::GetFrameDirtyRects(
    UINT DirtyRectsBufferSize,
    RECT* pDirtyRectsBuffer,
    UINT* pDirtyRectsBufferSizeRequired)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFrameDirtyRects>::Dispatch(
            manager,
            this,
            DirtyRectsBufferSize,
            pDirtyRectsBuffer,
            pDirtyRectsBufferSizeRequired);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFrameDirtyRects(
            DirtyRectsBufferSize,
            pDirtyRectsBuffer,
            pDirtyRectsBufferSizeRequired);

        Encode_IDXGIOutputDuplication_GetFrameDirtyRects(
            GetCaptureId(),
            result,
            DirtyRectsBufferSize,
            pDirtyRectsBuffer,
            pDirtyRectsBufferSizeRequired);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFrameDirtyRects>::Dispatch(
            manager,
            this,
            result,
            DirtyRectsBufferSize,
            pDirtyRectsBuffer,
            pDirtyRectsBufferSizeRequired);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFrameDirtyRects(
            DirtyRectsBufferSize,
            pDirtyRectsBuffer,
            pDirtyRectsBufferSizeRequired);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::GetFrameMoveRects(
    UINT MoveRectsBufferSize,
    DXGI_OUTDUPL_MOVE_RECT* pMoveRectBuffer,
    UINT* pMoveRectsBufferSizeRequired)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFrameMoveRects>::Dispatch(
            manager,
            this,
            MoveRectsBufferSize,
            pMoveRectBuffer,
            pMoveRectsBufferSizeRequired);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFrameMoveRects(
            MoveRectsBufferSize,
            pMoveRectBuffer,
            pMoveRectsBufferSizeRequired);

        Encode_IDXGIOutputDuplication_GetFrameMoveRects(
            GetCaptureId(),
            result,
            MoveRectsBufferSize,
            pMoveRectBuffer,
            pMoveRectsBufferSizeRequired);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFrameMoveRects>::Dispatch(
            manager,
            this,
            result,
            MoveRectsBufferSize,
            pMoveRectBuffer,
            pMoveRectsBufferSizeRequired);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFrameMoveRects(
            MoveRectsBufferSize,
            pMoveRectBuffer,
            pMoveRectsBufferSizeRequired);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::GetFramePointerShape(
    UINT PointerShapeBufferSize,
    void* pPointerShapeBuffer,
    UINT* pPointerShapeBufferSizeRequired,
    DXGI_OUTDUPL_POINTER_SHAPE_INFO* pPointerShapeInfo)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFramePointerShape>::Dispatch(
            manager,
            this,
            PointerShapeBufferSize,
            pPointerShapeBuffer,
            pPointerShapeBufferSizeRequired,
            pPointerShapeInfo);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFramePointerShape(
            PointerShapeBufferSize,
            pPointerShapeBuffer,
            pPointerShapeBufferSizeRequired,
            pPointerShapeInfo);

        Encode_IDXGIOutputDuplication_GetFramePointerShape(
            GetCaptureId(),
            result,
            PointerShapeBufferSize,
            pPointerShapeBuffer,
            pPointerShapeBufferSizeRequired,
            pPointerShapeInfo);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_GetFramePointerShape>::Dispatch(
            manager,
            this,
            result,
            PointerShapeBufferSize,
            pPointerShapeBuffer,
            pPointerShapeBufferSizeRequired,
            pPointerShapeInfo);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->GetFramePointerShape(
            PointerShapeBufferSize,
            pPointerShapeBuffer,
            pPointerShapeBufferSizeRequired,
            pPointerShapeInfo);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::MapDesktopSurface(
    DXGI_MAPPED_RECT* pLockedRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_MapDesktopSurface>::Dispatch(
            manager,
            this,
            pLockedRect);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->MapDesktopSurface(
            pLockedRect);

        Encode_IDXGIOutputDuplication_MapDesktopSurface(
            GetCaptureId(),
            result,
            pLockedRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_MapDesktopSurface>::Dispatch(
            manager,
            this,
            result,
            pLockedRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->MapDesktopSurface(
            pLockedRect);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::UnMapDesktopSurface()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_UnMapDesktopSurface>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->UnMapDesktopSurface();

        Encode_IDXGIOutputDuplication_UnMapDesktopSurface(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_UnMapDesktopSurface>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->UnMapDesktopSurface();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutputDuplication_Wrapper::ReleaseFrame()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_ReleaseFrame>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->ReleaseFrame();

        Encode_IDXGIOutputDuplication_ReleaseFrame(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutputDuplication_ReleaseFrame>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutputDuplication>()->ReleaseFrame();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISurface2_Wrapper::IDXGISurface2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISurface1_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGISurface2_Wrapper::GetResource(
    REFIID riid,
    void** ppParentResource,
    UINT* pSubresourceIndex)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISurface2_GetResource>::Dispatch(
            manager,
            this,
            riid,
            ppParentResource,
            pSubresourceIndex);

        result = GetWrappedObjectAs<IDXGISurface2>()->GetResource(
            riid,
            ppParentResource,
            pSubresourceIndex);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppParentResource, nullptr);
        }

        Encode_IDXGISurface2_GetResource(
            GetCaptureId(),
            result,
            riid,
            ppParentResource,
            pSubresourceIndex);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISurface2_GetResource>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppParentResource,
            pSubresourceIndex);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISurface2>()->GetResource(
            riid,
            ppParentResource,
            pSubresourceIndex);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIResource1_Wrapper::IDXGIResource1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIResource_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIResource1_Wrapper::CreateSubresourceSurface(
    UINT index,
    IDXGISurface2** ppSurface)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource1_CreateSubresourceSurface>::Dispatch(
            manager,
            this,
            index,
            ppSurface);

        result = GetWrappedObjectAs<IDXGIResource1>()->CreateSubresourceSurface(
            index,
            ppSurface);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISurface2, reinterpret_cast<void**>(ppSurface), nullptr);
        }

        Encode_IDXGIResource1_CreateSubresourceSurface(
            GetCaptureId(),
            result,
            index,
            ppSurface);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource1_CreateSubresourceSurface>::Dispatch(
            manager,
            this,
            result,
            index,
            ppSurface);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource1>()->CreateSubresourceSurface(
            index,
            ppSurface);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIResource1_Wrapper::CreateSharedHandle(
    const SECURITY_ATTRIBUTES* pAttributes,
    DWORD dwAccess,
    LPCWSTR lpName,
    HANDLE* pHandle)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIResource1_CreateSharedHandle>::Dispatch(
            manager,
            this,
            pAttributes,
            dwAccess,
            lpName,
            pHandle);

        result = GetWrappedObjectAs<IDXGIResource1>()->CreateSharedHandle(
            pAttributes,
            dwAccess,
            lpName,
            pHandle);

        Encode_IDXGIResource1_CreateSharedHandle(
            GetCaptureId(),
            result,
            pAttributes,
            dwAccess,
            lpName,
            pHandle);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIResource1_CreateSharedHandle>::Dispatch(
            manager,
            this,
            result,
            pAttributes,
            dwAccess,
            lpName,
            pHandle);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIResource1>()->CreateSharedHandle(
            pAttributes,
            dwAccess,
            lpName,
            pHandle);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDevice2_Wrapper::IDXGIDevice2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDevice1_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIDevice2_Wrapper::OfferResources(
    UINT NumResources,
    IDXGIResource* const* ppResources,
    DXGI_OFFER_RESOURCE_PRIORITY Priority)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice2_OfferResources>::Dispatch(
            manager,
            this,
            NumResources,
            ppResources,
            Priority);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGIDevice2>()->OfferResources(
            NumResources,
            UnwrapObjects<IDXGIResource>(ppResources, NumResources, unwrap_memory),
            Priority);

        Encode_IDXGIDevice2_OfferResources(
            GetCaptureId(),
            result,
            NumResources,
            ppResources,
            Priority);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice2_OfferResources>::Dispatch(
            manager,
            this,
            result,
            NumResources,
            ppResources,
            Priority);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice2>()->OfferResources(
            NumResources,
            ppResources,
            Priority);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice2_Wrapper::ReclaimResources(
    UINT NumResources,
    IDXGIResource* const* ppResources,
    BOOL* pDiscarded)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice2_ReclaimResources>::Dispatch(
            manager,
            this,
            NumResources,
            ppResources,
            pDiscarded);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGIDevice2>()->ReclaimResources(
            NumResources,
            UnwrapObjects<IDXGIResource>(ppResources, NumResources, unwrap_memory),
            pDiscarded);

        Encode_IDXGIDevice2_ReclaimResources(
            GetCaptureId(),
            result,
            NumResources,
            ppResources,
            pDiscarded);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice2_ReclaimResources>::Dispatch(
            manager,
            this,
            result,
            NumResources,
            ppResources,
            pDiscarded);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice2>()->ReclaimResources(
            NumResources,
            ppResources,
            pDiscarded);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice2_Wrapper::EnqueueSetEvent(
    HANDLE hEvent)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice2_EnqueueSetEvent>::Dispatch(
            manager,
            this,
            hEvent);

        result = GetWrappedObjectAs<IDXGIDevice2>()->EnqueueSetEvent(
            hEvent);

        Encode_IDXGIDevice2_EnqueueSetEvent(
            GetCaptureId(),
            result,
            hEvent);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice2_EnqueueSetEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice2>()->EnqueueSetEvent(
            hEvent);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISwapChain1_Wrapper::IDXGISwapChain1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISwapChain_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetDesc1(
    DXGI_SWAP_CHAIN_DESC1* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetDesc1>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetDesc1(
            pDesc);

        Encode_IDXGISwapChain1_GetDesc1(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetDesc1>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetDesc1(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetFullscreenDesc(
    DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetFullscreenDesc>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetFullscreenDesc(
            pDesc);

        Encode_IDXGISwapChain1_GetFullscreenDesc(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetFullscreenDesc>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetFullscreenDesc(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetHwnd(
    HWND* pHwnd)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetHwnd>::Dispatch(
            manager,
            this,
            pHwnd);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetHwnd(
            pHwnd);

        Encode_IDXGISwapChain1_GetHwnd(
            GetCaptureId(),
            result,
            pHwnd);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetHwnd>::Dispatch(
            manager,
            this,
            result,
            pHwnd);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetHwnd(
            pHwnd);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetCoreWindow(
    REFIID refiid,
    void** ppUnk)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetCoreWindow>::Dispatch(
            manager,
            this,
            refiid,
            ppUnk);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetCoreWindow(
            refiid,
            ppUnk);

        if (SUCCEEDED(result))
        {
            WrapObject(refiid, ppUnk, nullptr);
        }

        Encode_IDXGISwapChain1_GetCoreWindow(
            GetCaptureId(),
            result,
            refiid,
            ppUnk);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetCoreWindow>::Dispatch(
            manager,
            this,
            result,
            refiid,
            ppUnk);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetCoreWindow(
            refiid,
            ppUnk);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::Present1(
    UINT SyncInterval,
    UINT PresentFlags,
    const DXGI_PRESENT_PARAMETERS* pPresentParameters)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_Present1>::Dispatch(
            manager,
            this,
            SyncInterval,
            PresentFlags,
            pPresentParameters);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->Present1(
            SyncInterval,
            PresentFlags,
            pPresentParameters);

        Encode_IDXGISwapChain1_Present1(
            GetCaptureId(),
            result,
            SyncInterval,
            PresentFlags,
            pPresentParameters);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_Present1>::Dispatch(
            manager,
            this,
            result,
            SyncInterval,
            PresentFlags,
            pPresentParameters);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->Present1(
            SyncInterval,
            PresentFlags,
            pPresentParameters);
    }

    manager->DecrementCallScope();

    return result;
}

BOOL STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::IsTemporaryMonoSupported()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_IsTemporaryMonoSupported>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->IsTemporaryMonoSupported();

        Encode_IDXGISwapChain1_IsTemporaryMonoSupported(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_IsTemporaryMonoSupported>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->IsTemporaryMonoSupported();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetRestrictToOutput(
    IDXGIOutput** ppRestrictToOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetRestrictToOutput>::Dispatch(
            manager,
            this,
            ppRestrictToOutput);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetRestrictToOutput(
            ppRestrictToOutput);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutput, reinterpret_cast<void**>(ppRestrictToOutput), nullptr);
        }

        Encode_IDXGISwapChain1_GetRestrictToOutput(
            GetCaptureId(),
            result,
            ppRestrictToOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetRestrictToOutput>::Dispatch(
            manager,
            this,
            result,
            ppRestrictToOutput);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetRestrictToOutput(
            ppRestrictToOutput);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::SetBackgroundColor(
    const DXGI_RGBA* pColor)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_SetBackgroundColor>::Dispatch(
            manager,
            this,
            pColor);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->SetBackgroundColor(
            pColor);

        Encode_IDXGISwapChain1_SetBackgroundColor(
            GetCaptureId(),
            result,
            pColor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_SetBackgroundColor>::Dispatch(
            manager,
            this,
            result,
            pColor);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->SetBackgroundColor(
            pColor);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetBackgroundColor(
    DXGI_RGBA* pColor)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetBackgroundColor>::Dispatch(
            manager,
            this,
            pColor);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetBackgroundColor(
            pColor);

        Encode_IDXGISwapChain1_GetBackgroundColor(
            GetCaptureId(),
            result,
            pColor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetBackgroundColor>::Dispatch(
            manager,
            this,
            result,
            pColor);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetBackgroundColor(
            pColor);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::SetRotation(
    DXGI_MODE_ROTATION Rotation)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_SetRotation>::Dispatch(
            manager,
            this,
            Rotation);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->SetRotation(
            Rotation);

        Encode_IDXGISwapChain1_SetRotation(
            GetCaptureId(),
            result,
            Rotation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_SetRotation>::Dispatch(
            manager,
            this,
            result,
            Rotation);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->SetRotation(
            Rotation);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Wrapper::GetRotation(
    DXGI_MODE_ROTATION* pRotation)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetRotation>::Dispatch(
            manager,
            this,
            pRotation);

        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetRotation(
            pRotation);

        Encode_IDXGISwapChain1_GetRotation(
            GetCaptureId(),
            result,
            pRotation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain1_GetRotation>::Dispatch(
            manager,
            this,
            result,
            pRotation);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain1>()->GetRotation(
            pRotation);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory2_Wrapper::IDXGIFactory2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory1_Wrapper(riid, object, resources, destructor)
{
}

BOOL STDMETHODCALLTYPE IDXGIFactory2_Wrapper::IsWindowedStereoEnabled()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_IsWindowedStereoEnabled>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIFactory2>()->IsWindowedStereoEnabled();

        Encode_IDXGIFactory2_IsWindowedStereoEnabled(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_IsWindowedStereoEnabled>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->IsWindowedStereoEnabled();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::CreateSwapChainForHwnd(
    IUnknown* pDevice,
    HWND hWnd,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
    const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
    IDXGIOutput* pRestrictToOutput,
    IDXGISwapChain1** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForHwnd>::Dispatch(
            manager,
            this,
            pDevice,
            hWnd,
            pDesc,
            pFullscreenDesc,
            pRestrictToOutput,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForHwnd(
            encode::GetWrappedObject<IUnknown>(pDevice),
            hWnd,
            pDesc,
            pFullscreenDesc,
            encode::GetWrappedObject<IDXGIOutput>(pRestrictToOutput),
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISwapChain1, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactory2_CreateSwapChainForHwnd(
            GetCaptureId(),
            result,
            pDevice,
            hWnd,
            pDesc,
            pFullscreenDesc,
            pRestrictToOutput,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForHwnd>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            hWnd,
            pDesc,
            pFullscreenDesc,
            pRestrictToOutput,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForHwnd(
            pDevice,
            hWnd,
            pDesc,
            pFullscreenDesc,
            pRestrictToOutput,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::CreateSwapChainForCoreWindow(
    IUnknown* pDevice,
    IUnknown* pWindow,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
    IDXGIOutput* pRestrictToOutput,
    IDXGISwapChain1** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForCoreWindow>::Dispatch(
            manager,
            this,
            pDevice,
            pWindow,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForCoreWindow(
            encode::GetWrappedObject<IUnknown>(pDevice),
            encode::GetWrappedObject<IUnknown>(pWindow),
            pDesc,
            encode::GetWrappedObject<IDXGIOutput>(pRestrictToOutput),
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISwapChain1, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactory2_CreateSwapChainForCoreWindow(
            GetCaptureId(),
            result,
            pDevice,
            pWindow,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForCoreWindow>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            pWindow,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForCoreWindow(
            pDevice,
            pWindow,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::GetSharedResourceAdapterLuid(
    HANDLE hResource,
    LUID* pLuid)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_GetSharedResourceAdapterLuid>::Dispatch(
            manager,
            this,
            hResource,
            pLuid);

        result = GetWrappedObjectAs<IDXGIFactory2>()->GetSharedResourceAdapterLuid(
            hResource,
            pLuid);

        Encode_IDXGIFactory2_GetSharedResourceAdapterLuid(
            GetCaptureId(),
            result,
            hResource,
            pLuid);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_GetSharedResourceAdapterLuid>::Dispatch(
            manager,
            this,
            result,
            hResource,
            pLuid);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->GetSharedResourceAdapterLuid(
            hResource,
            pLuid);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::RegisterStereoStatusWindow(
    HWND WindowHandle,
    UINT wMsg,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterStereoStatusWindow>::Dispatch(
            manager,
            this,
            WindowHandle,
            wMsg,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterStereoStatusWindow(
            WindowHandle,
            wMsg,
            pdwCookie);

        Encode_IDXGIFactory2_RegisterStereoStatusWindow(
            GetCaptureId(),
            result,
            WindowHandle,
            wMsg,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterStereoStatusWindow>::Dispatch(
            manager,
            this,
            result,
            WindowHandle,
            wMsg,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterStereoStatusWindow(
            WindowHandle,
            wMsg,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::RegisterStereoStatusEvent(
    HANDLE hEvent,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterStereoStatusEvent>::Dispatch(
            manager,
            this,
            hEvent,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterStereoStatusEvent(
            hEvent,
            pdwCookie);

        Encode_IDXGIFactory2_RegisterStereoStatusEvent(
            GetCaptureId(),
            result,
            hEvent,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterStereoStatusEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterStereoStatusEvent(
            hEvent,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIFactory2_Wrapper::UnregisterStereoStatus(
    DWORD dwCookie)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_UnregisterStereoStatus>::Dispatch(
            manager,
            this,
            dwCookie);

        GetWrappedObjectAs<IDXGIFactory2>()->UnregisterStereoStatus(
            dwCookie);

        Encode_IDXGIFactory2_UnregisterStereoStatus(
            GetCaptureId(),
            dwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_UnregisterStereoStatus>::Dispatch(
            manager,
            this,
            dwCookie);
    }
    else
    {
        GetWrappedObjectAs<IDXGIFactory2>()->UnregisterStereoStatus(
            dwCookie);
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::RegisterOcclusionStatusWindow(
    HWND WindowHandle,
    UINT wMsg,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterOcclusionStatusWindow>::Dispatch(
            manager,
            this,
            WindowHandle,
            wMsg,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterOcclusionStatusWindow(
            WindowHandle,
            wMsg,
            pdwCookie);

        Encode_IDXGIFactory2_RegisterOcclusionStatusWindow(
            GetCaptureId(),
            result,
            WindowHandle,
            wMsg,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterOcclusionStatusWindow>::Dispatch(
            manager,
            this,
            result,
            WindowHandle,
            wMsg,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterOcclusionStatusWindow(
            WindowHandle,
            wMsg,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::RegisterOcclusionStatusEvent(
    HANDLE hEvent,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterOcclusionStatusEvent>::Dispatch(
            manager,
            this,
            hEvent,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterOcclusionStatusEvent(
            hEvent,
            pdwCookie);

        Encode_IDXGIFactory2_RegisterOcclusionStatusEvent(
            GetCaptureId(),
            result,
            hEvent,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_RegisterOcclusionStatusEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->RegisterOcclusionStatusEvent(
            hEvent,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIFactory2_Wrapper::UnregisterOcclusionStatus(
    DWORD dwCookie)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_UnregisterOcclusionStatus>::Dispatch(
            manager,
            this,
            dwCookie);

        GetWrappedObjectAs<IDXGIFactory2>()->UnregisterOcclusionStatus(
            dwCookie);

        Encode_IDXGIFactory2_UnregisterOcclusionStatus(
            GetCaptureId(),
            dwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_UnregisterOcclusionStatus>::Dispatch(
            manager,
            this,
            dwCookie);
    }
    else
    {
        GetWrappedObjectAs<IDXGIFactory2>()->UnregisterOcclusionStatus(
            dwCookie);
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE IDXGIFactory2_Wrapper::CreateSwapChainForComposition(
    IUnknown* pDevice,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
    IDXGIOutput* pRestrictToOutput,
    IDXGISwapChain1** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForComposition>::Dispatch(
            manager,
            this,
            pDevice,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForComposition(
            encode::GetWrappedObject<IUnknown>(pDevice),
            pDesc,
            encode::GetWrappedObject<IDXGIOutput>(pRestrictToOutput),
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISwapChain1, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactory2_CreateSwapChainForComposition(
            GetCaptureId(),
            result,
            pDevice,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory2_CreateSwapChainForComposition>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory2>()->CreateSwapChainForComposition(
            pDevice,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIAdapter2_Wrapper::IDXGIAdapter2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIAdapter1_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter2_Wrapper::GetDesc2(
    DXGI_ADAPTER_DESC2* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter2_GetDesc2>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIAdapter2>()->GetDesc2(
            pDesc);

        Encode_IDXGIAdapter2_GetDesc2(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter2_GetDesc2>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter2>()->GetDesc2(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput1_Wrapper::IDXGIOutput1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIOutput1_Wrapper::GetDisplayModeList1(
    DXGI_FORMAT EnumFormat,
    UINT Flags,
    UINT* pNumModes,
    DXGI_MODE_DESC1* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput1_GetDisplayModeList1>::Dispatch(
            manager,
            this,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        result = GetWrappedObjectAs<IDXGIOutput1>()->GetDisplayModeList1(
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        Encode_IDXGIOutput1_GetDisplayModeList1(
            GetCaptureId(),
            result,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput1_GetDisplayModeList1>::Dispatch(
            manager,
            this,
            result,
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput1>()->GetDisplayModeList1(
            EnumFormat,
            Flags,
            pNumModes,
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput1_Wrapper::FindClosestMatchingMode1(
    const DXGI_MODE_DESC1* pModeToMatch,
    DXGI_MODE_DESC1* pClosestMatch,
    IUnknown* pConcernedDevice)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput1_FindClosestMatchingMode1>::Dispatch(
            manager,
            this,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);

        result = GetWrappedObjectAs<IDXGIOutput1>()->FindClosestMatchingMode1(
            pModeToMatch,
            pClosestMatch,
            encode::GetWrappedObject<IUnknown>(pConcernedDevice));

        Encode_IDXGIOutput1_FindClosestMatchingMode1(
            GetCaptureId(),
            result,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput1_FindClosestMatchingMode1>::Dispatch(
            manager,
            this,
            result,
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput1>()->FindClosestMatchingMode1(
            pModeToMatch,
            pClosestMatch,
            pConcernedDevice);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput1_Wrapper::GetDisplaySurfaceData1(
    IDXGIResource* pDestination)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput1_GetDisplaySurfaceData1>::Dispatch(
            manager,
            this,
            pDestination);

        result = GetWrappedObjectAs<IDXGIOutput1>()->GetDisplaySurfaceData1(
            encode::GetWrappedObject<IDXGIResource>(pDestination));

        Encode_IDXGIOutput1_GetDisplaySurfaceData1(
            GetCaptureId(),
            result,
            pDestination);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput1_GetDisplaySurfaceData1>::Dispatch(
            manager,
            this,
            result,
            pDestination);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput1>()->GetDisplaySurfaceData1(
            pDestination);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput1_Wrapper::DuplicateOutput(
    IUnknown* pDevice,
    IDXGIOutputDuplication** ppOutputDuplication)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput1_DuplicateOutput>::Dispatch(
            manager,
            this,
            pDevice,
            ppOutputDuplication);

        result = GetWrappedObjectAs<IDXGIOutput1>()->DuplicateOutput(
            encode::GetWrappedObject<IUnknown>(pDevice),
            ppOutputDuplication);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutputDuplication, reinterpret_cast<void**>(ppOutputDuplication), nullptr);
        }

        Encode_IDXGIOutput1_DuplicateOutput(
            GetCaptureId(),
            result,
            pDevice,
            ppOutputDuplication);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput1_DuplicateOutput>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            ppOutputDuplication);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput1>()->DuplicateOutput(
            pDevice,
            ppOutputDuplication);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from dxgi1_3.h in Windows SDK: 10.0.19041.0
**
*/

HRESULT WINAPI CreateDXGIFactory2(
    UINT Flags,
    REFIID riid,
    void** ppFactory)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_CreateDXGIFactory2>::Dispatch(
            manager,
            Flags,
            riid,
            ppFactory);

        result = D3D12CaptureManager::Get()->OverrideCreateDXGIFactory2(
            Flags,
            riid,
            ppFactory);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppFactory, nullptr);
        }

        Encode_CreateDXGIFactory2(
            result,
            Flags,
            riid,
            ppFactory);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_CreateDXGIFactory2>::Dispatch(
            manager,
            result,
            Flags,
            riid,
            ppFactory);
    }
    else
    {
        result = manager->GetDxgiDispatchTable().CreateDXGIFactory2(
            Flags,
            riid,
            ppFactory);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI DXGIGetDebugInterface1(
    UINT Flags,
    REFIID riid,
    void** pDebug)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_DXGIGetDebugInterface1>::Dispatch(
            manager,
            Flags,
            riid,
            pDebug);

        result = manager->GetDxgiDispatchTable().DXGIGetDebugInterface1(
            Flags,
            riid,
            pDebug);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, pDebug, nullptr);
        }

        Encode_DXGIGetDebugInterface1(
            result,
            Flags,
            riid,
            pDebug);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_DXGIGetDebugInterface1>::Dispatch(
            manager,
            result,
            Flags,
            riid,
            pDebug);
    }
    else
    {
        result = manager->GetDxgiDispatchTable().DXGIGetDebugInterface1(
            Flags,
            riid,
            pDebug);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDevice3_Wrapper::IDXGIDevice3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDevice2_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE IDXGIDevice3_Wrapper::Trim()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice3_Trim>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<IDXGIDevice3>()->Trim();

        Encode_IDXGIDevice3_Trim(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice3_Trim>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<IDXGIDevice3>()->Trim();
    }

    manager->DecrementCallScope();
}

IDXGISwapChain2_Wrapper::IDXGISwapChain2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISwapChain1_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::SetSourceSize(
    UINT Width,
    UINT Height)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetSourceSize>::Dispatch(
            manager,
            this,
            Width,
            Height);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetSourceSize(
            Width,
            Height);

        Encode_IDXGISwapChain2_SetSourceSize(
            GetCaptureId(),
            result,
            Width,
            Height);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetSourceSize>::Dispatch(
            manager,
            this,
            result,
            Width,
            Height);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetSourceSize(
            Width,
            Height);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::GetSourceSize(
    UINT* pWidth,
    UINT* pHeight)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetSourceSize>::Dispatch(
            manager,
            this,
            pWidth,
            pHeight);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetSourceSize(
            pWidth,
            pHeight);

        Encode_IDXGISwapChain2_GetSourceSize(
            GetCaptureId(),
            result,
            pWidth,
            pHeight);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetSourceSize>::Dispatch(
            manager,
            this,
            result,
            pWidth,
            pHeight);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetSourceSize(
            pWidth,
            pHeight);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::SetMaximumFrameLatency(
    UINT MaxLatency)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            MaxLatency);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetMaximumFrameLatency(
            MaxLatency);

        Encode_IDXGISwapChain2_SetMaximumFrameLatency(
            GetCaptureId(),
            result,
            MaxLatency);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            result,
            MaxLatency);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetMaximumFrameLatency(
            MaxLatency);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::GetMaximumFrameLatency(
    UINT* pMaxLatency)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            pMaxLatency);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetMaximumFrameLatency(
            pMaxLatency);

        Encode_IDXGISwapChain2_GetMaximumFrameLatency(
            GetCaptureId(),
            result,
            pMaxLatency);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetMaximumFrameLatency>::Dispatch(
            manager,
            this,
            result,
            pMaxLatency);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetMaximumFrameLatency(
            pMaxLatency);
    }

    manager->DecrementCallScope();

    return result;
}

HANDLE STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::GetFrameLatencyWaitableObject()
{
    HANDLE result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetFrameLatencyWaitableObject>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetFrameLatencyWaitableObject();

        Encode_IDXGISwapChain2_GetFrameLatencyWaitableObject(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetFrameLatencyWaitableObject>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetFrameLatencyWaitableObject();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::SetMatrixTransform(
    const DXGI_MATRIX_3X2_F* pMatrix)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetMatrixTransform>::Dispatch(
            manager,
            this,
            pMatrix);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetMatrixTransform(
            pMatrix);

        Encode_IDXGISwapChain2_SetMatrixTransform(
            GetCaptureId(),
            result,
            pMatrix);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_SetMatrixTransform>::Dispatch(
            manager,
            this,
            result,
            pMatrix);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->SetMatrixTransform(
            pMatrix);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain2_Wrapper::GetMatrixTransform(
    DXGI_MATRIX_3X2_F* pMatrix)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetMatrixTransform>::Dispatch(
            manager,
            this,
            pMatrix);

        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetMatrixTransform(
            pMatrix);

        Encode_IDXGISwapChain2_GetMatrixTransform(
            GetCaptureId(),
            result,
            pMatrix);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain2_GetMatrixTransform>::Dispatch(
            manager,
            this,
            result,
            pMatrix);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain2>()->GetMatrixTransform(
            pMatrix);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput2_Wrapper::IDXGIOutput2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput1_Wrapper(riid, object, resources, destructor)
{
}

BOOL STDMETHODCALLTYPE IDXGIOutput2_Wrapper::SupportsOverlays()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput2_SupportsOverlays>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIOutput2>()->SupportsOverlays();

        Encode_IDXGIOutput2_SupportsOverlays(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput2_SupportsOverlays>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput2>()->SupportsOverlays();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory3_Wrapper::IDXGIFactory3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory2_Wrapper(riid, object, resources, destructor)
{
}

UINT STDMETHODCALLTYPE IDXGIFactory3_Wrapper::GetCreationFlags()
{
    UINT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory3_GetCreationFlags>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIFactory3>()->GetCreationFlags();

        Encode_IDXGIFactory3_GetCreationFlags(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory3_GetCreationFlags>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory3>()->GetCreationFlags();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDecodeSwapChain_Wrapper::IDXGIDecodeSwapChain_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIDecodeSwapChain_Wrapper::~IDXGIDecodeSwapChain_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIDecodeSwapChain>(), object_map_, object_map_lock_);
}

IDXGIDecodeSwapChain_Wrapper* IDXGIDecodeSwapChain_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIDecodeSwapChain_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::PresentBuffer(
    UINT BufferToPresent,
    UINT SyncInterval,
    UINT Flags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_PresentBuffer>::Dispatch(
            manager,
            this,
            BufferToPresent,
            SyncInterval,
            Flags);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->PresentBuffer(
            BufferToPresent,
            SyncInterval,
            Flags);

        Encode_IDXGIDecodeSwapChain_PresentBuffer(
            GetCaptureId(),
            result,
            BufferToPresent,
            SyncInterval,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_PresentBuffer>::Dispatch(
            manager,
            this,
            result,
            BufferToPresent,
            SyncInterval,
            Flags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->PresentBuffer(
            BufferToPresent,
            SyncInterval,
            Flags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::SetSourceRect(
    const RECT* pRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetSourceRect>::Dispatch(
            manager,
            this,
            pRect);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetSourceRect(
            pRect);

        Encode_IDXGIDecodeSwapChain_SetSourceRect(
            GetCaptureId(),
            result,
            pRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetSourceRect>::Dispatch(
            manager,
            this,
            result,
            pRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetSourceRect(
            pRect);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::SetTargetRect(
    const RECT* pRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetTargetRect>::Dispatch(
            manager,
            this,
            pRect);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetTargetRect(
            pRect);

        Encode_IDXGIDecodeSwapChain_SetTargetRect(
            GetCaptureId(),
            result,
            pRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetTargetRect>::Dispatch(
            manager,
            this,
            result,
            pRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetTargetRect(
            pRect);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::SetDestSize(
    UINT Width,
    UINT Height)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetDestSize>::Dispatch(
            manager,
            this,
            Width,
            Height);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetDestSize(
            Width,
            Height);

        Encode_IDXGIDecodeSwapChain_SetDestSize(
            GetCaptureId(),
            result,
            Width,
            Height);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetDestSize>::Dispatch(
            manager,
            this,
            result,
            Width,
            Height);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetDestSize(
            Width,
            Height);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::GetSourceRect(
    RECT* pRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetSourceRect>::Dispatch(
            manager,
            this,
            pRect);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetSourceRect(
            pRect);

        Encode_IDXGIDecodeSwapChain_GetSourceRect(
            GetCaptureId(),
            result,
            pRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetSourceRect>::Dispatch(
            manager,
            this,
            result,
            pRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetSourceRect(
            pRect);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::GetTargetRect(
    RECT* pRect)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetTargetRect>::Dispatch(
            manager,
            this,
            pRect);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetTargetRect(
            pRect);

        Encode_IDXGIDecodeSwapChain_GetTargetRect(
            GetCaptureId(),
            result,
            pRect);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetTargetRect>::Dispatch(
            manager,
            this,
            result,
            pRect);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetTargetRect(
            pRect);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::GetDestSize(
    UINT* pWidth,
    UINT* pHeight)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetDestSize>::Dispatch(
            manager,
            this,
            pWidth,
            pHeight);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetDestSize(
            pWidth,
            pHeight);

        Encode_IDXGIDecodeSwapChain_GetDestSize(
            GetCaptureId(),
            result,
            pWidth,
            pHeight);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetDestSize>::Dispatch(
            manager,
            this,
            result,
            pWidth,
            pHeight);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetDestSize(
            pWidth,
            pHeight);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::SetColorSpace(
    DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetColorSpace>::Dispatch(
            manager,
            this,
            ColorSpace);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetColorSpace(
            ColorSpace);

        Encode_IDXGIDecodeSwapChain_SetColorSpace(
            GetCaptureId(),
            result,
            ColorSpace);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_SetColorSpace>::Dispatch(
            manager,
            this,
            result,
            ColorSpace);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->SetColorSpace(
            ColorSpace);
    }

    manager->DecrementCallScope();

    return result;
}

DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS STDMETHODCALLTYPE IDXGIDecodeSwapChain_Wrapper::GetColorSpace()
{
    DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetColorSpace>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetColorSpace();

        Encode_IDXGIDecodeSwapChain_GetColorSpace(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDecodeSwapChain_GetColorSpace>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDecodeSwapChain>()->GetColorSpace();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactoryMedia_Wrapper::IDXGIFactoryMedia_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGIFactoryMedia_Wrapper::~IDXGIFactoryMedia_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGIFactoryMedia>(), object_map_, object_map_lock_);
}

IDXGIFactoryMedia_Wrapper* IDXGIFactoryMedia_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGIFactoryMedia_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGIFactoryMedia_Wrapper::CreateSwapChainForCompositionSurfaceHandle(
    IUnknown* pDevice,
    HANDLE hSurface,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
    IDXGIOutput* pRestrictToOutput,
    IDXGISwapChain1** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle>::Dispatch(
            manager,
            this,
            pDevice,
            hSurface,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactoryMedia>()->CreateSwapChainForCompositionSurfaceHandle(
            encode::GetWrappedObject<IUnknown>(pDevice),
            hSurface,
            pDesc,
            encode::GetWrappedObject<IDXGIOutput>(pRestrictToOutput),
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGISwapChain1, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle(
            GetCaptureId(),
            result,
            pDevice,
            hSurface,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactoryMedia_CreateSwapChainForCompositionSurfaceHandle>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            hSurface,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactoryMedia>()->CreateSwapChainForCompositionSurfaceHandle(
            pDevice,
            hSurface,
            pDesc,
            pRestrictToOutput,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactoryMedia_Wrapper::CreateDecodeSwapChainForCompositionSurfaceHandle(
    IUnknown* pDevice,
    HANDLE hSurface,
    DXGI_DECODE_SWAP_CHAIN_DESC* pDesc,
    IDXGIResource* pYuvDecodeBuffers,
    IDXGIOutput* pRestrictToOutput,
    IDXGIDecodeSwapChain** ppSwapChain)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle>::Dispatch(
            manager,
            this,
            pDevice,
            hSurface,
            pDesc,
            pYuvDecodeBuffers,
            pRestrictToOutput,
            ppSwapChain);

        result = GetWrappedObjectAs<IDXGIFactoryMedia>()->CreateDecodeSwapChainForCompositionSurfaceHandle(
            encode::GetWrappedObject<IUnknown>(pDevice),
            hSurface,
            pDesc,
            encode::GetWrappedObject<IDXGIResource>(pYuvDecodeBuffers),
            encode::GetWrappedObject<IDXGIOutput>(pRestrictToOutput),
            ppSwapChain);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIDecodeSwapChain, reinterpret_cast<void**>(ppSwapChain), nullptr);
        }

        Encode_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle(
            GetCaptureId(),
            result,
            pDevice,
            hSurface,
            pDesc,
            pYuvDecodeBuffers,
            pRestrictToOutput,
            ppSwapChain);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactoryMedia_CreateDecodeSwapChainForCompositionSurfaceHandle>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            hSurface,
            pDesc,
            pYuvDecodeBuffers,
            pRestrictToOutput,
            ppSwapChain);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactoryMedia>()->CreateDecodeSwapChainForCompositionSurfaceHandle(
            pDevice,
            hSurface,
            pDesc,
            pYuvDecodeBuffers,
            pRestrictToOutput,
            ppSwapChain);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISwapChainMedia_Wrapper::IDXGISwapChainMedia_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

IDXGISwapChainMedia_Wrapper::~IDXGISwapChainMedia_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<IDXGISwapChainMedia>(), object_map_, object_map_lock_);
}

IDXGISwapChainMedia_Wrapper* IDXGISwapChainMedia_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<IDXGISwapChainMedia_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE IDXGISwapChainMedia_Wrapper::GetFrameStatisticsMedia(
    DXGI_FRAME_STATISTICS_MEDIA* pStats)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_GetFrameStatisticsMedia>::Dispatch(
            manager,
            this,
            pStats);

        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->GetFrameStatisticsMedia(
            pStats);

        Encode_IDXGISwapChainMedia_GetFrameStatisticsMedia(
            GetCaptureId(),
            result,
            pStats);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_GetFrameStatisticsMedia>::Dispatch(
            manager,
            this,
            result,
            pStats);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->GetFrameStatisticsMedia(
            pStats);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChainMedia_Wrapper::SetPresentDuration(
    UINT Duration)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_SetPresentDuration>::Dispatch(
            manager,
            this,
            Duration);

        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->SetPresentDuration(
            Duration);

        Encode_IDXGISwapChainMedia_SetPresentDuration(
            GetCaptureId(),
            result,
            Duration);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_SetPresentDuration>::Dispatch(
            manager,
            this,
            result,
            Duration);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->SetPresentDuration(
            Duration);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChainMedia_Wrapper::CheckPresentDurationSupport(
    UINT DesiredPresentDuration,
    UINT* pClosestSmallerPresentDuration,
    UINT* pClosestLargerPresentDuration)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_CheckPresentDurationSupport>::Dispatch(
            manager,
            this,
            DesiredPresentDuration,
            pClosestSmallerPresentDuration,
            pClosestLargerPresentDuration);

        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->CheckPresentDurationSupport(
            DesiredPresentDuration,
            pClosestSmallerPresentDuration,
            pClosestLargerPresentDuration);

        Encode_IDXGISwapChainMedia_CheckPresentDurationSupport(
            GetCaptureId(),
            result,
            DesiredPresentDuration,
            pClosestSmallerPresentDuration,
            pClosestLargerPresentDuration);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChainMedia_CheckPresentDurationSupport>::Dispatch(
            manager,
            this,
            result,
            DesiredPresentDuration,
            pClosestSmallerPresentDuration,
            pClosestLargerPresentDuration);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChainMedia>()->CheckPresentDurationSupport(
            DesiredPresentDuration,
            pClosestSmallerPresentDuration,
            pClosestLargerPresentDuration);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput3_Wrapper::IDXGIOutput3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput2_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIOutput3_Wrapper::CheckOverlaySupport(
    DXGI_FORMAT EnumFormat,
    IUnknown* pConcernedDevice,
    UINT* pFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput3_CheckOverlaySupport>::Dispatch(
            manager,
            this,
            EnumFormat,
            pConcernedDevice,
            pFlags);

        result = GetWrappedObjectAs<IDXGIOutput3>()->CheckOverlaySupport(
            EnumFormat,
            encode::GetWrappedObject<IUnknown>(pConcernedDevice),
            pFlags);

        Encode_IDXGIOutput3_CheckOverlaySupport(
            GetCaptureId(),
            result,
            EnumFormat,
            pConcernedDevice,
            pFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput3_CheckOverlaySupport>::Dispatch(
            manager,
            this,
            result,
            EnumFormat,
            pConcernedDevice,
            pFlags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput3>()->CheckOverlaySupport(
            EnumFormat,
            pConcernedDevice,
            pFlags);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from dxgi1_4.h in Windows SDK: 10.0.19041.0
**
*/

IDXGISwapChain3_Wrapper::IDXGISwapChain3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISwapChain2_Wrapper(riid, object, resources, destructor)
{
}

UINT STDMETHODCALLTYPE IDXGISwapChain3_Wrapper::GetCurrentBackBufferIndex()
{
    UINT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain3_GetCurrentBackBufferIndex>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<IDXGISwapChain3>()->GetCurrentBackBufferIndex();

        Encode_IDXGISwapChain3_GetCurrentBackBufferIndex(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain3_GetCurrentBackBufferIndex>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain3>()->GetCurrentBackBufferIndex();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain3_Wrapper::CheckColorSpaceSupport(
    DXGI_COLOR_SPACE_TYPE ColorSpace,
    UINT* pColorSpaceSupport)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain3_CheckColorSpaceSupport>::Dispatch(
            manager,
            this,
            ColorSpace,
            pColorSpaceSupport);

        result = GetWrappedObjectAs<IDXGISwapChain3>()->CheckColorSpaceSupport(
            ColorSpace,
            pColorSpaceSupport);

        Encode_IDXGISwapChain3_CheckColorSpaceSupport(
            GetCaptureId(),
            result,
            ColorSpace,
            pColorSpaceSupport);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain3_CheckColorSpaceSupport>::Dispatch(
            manager,
            this,
            result,
            ColorSpace,
            pColorSpaceSupport);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain3>()->CheckColorSpaceSupport(
            ColorSpace,
            pColorSpaceSupport);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain3_Wrapper::SetColorSpace1(
    DXGI_COLOR_SPACE_TYPE ColorSpace)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain3_SetColorSpace1>::Dispatch(
            manager,
            this,
            ColorSpace);

        result = GetWrappedObjectAs<IDXGISwapChain3>()->SetColorSpace1(
            ColorSpace);

        Encode_IDXGISwapChain3_SetColorSpace1(
            GetCaptureId(),
            result,
            ColorSpace);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain3_SetColorSpace1>::Dispatch(
            manager,
            this,
            result,
            ColorSpace);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain3>()->SetColorSpace1(
            ColorSpace);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain3_Wrapper::ResizeBuffers1(
    UINT BufferCount,
    UINT Width,
    UINT Height,
    DXGI_FORMAT Format,
    UINT SwapChainFlags,
    const UINT* pCreationNodeMask,
    IUnknown* const* ppPresentQueue)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain3_ResizeBuffers1>::Dispatch(
            manager,
            this,
            BufferCount,
            Width,
            Height,
            Format,
            SwapChainFlags,
            pCreationNodeMask,
            ppPresentQueue);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGISwapChain3>()->ResizeBuffers1(
            BufferCount,
            Width,
            Height,
            Format,
            SwapChainFlags,
            pCreationNodeMask,
            UnwrapObjects<IUnknown>(ppPresentQueue, BufferCount, unwrap_memory));

        Encode_IDXGISwapChain3_ResizeBuffers1(
            GetCaptureId(),
            result,
            BufferCount,
            Width,
            Height,
            Format,
            SwapChainFlags,
            pCreationNodeMask,
            ppPresentQueue);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain3_ResizeBuffers1>::Dispatch(
            manager,
            this,
            result,
            BufferCount,
            Width,
            Height,
            Format,
            SwapChainFlags,
            pCreationNodeMask,
            ppPresentQueue);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain3>()->ResizeBuffers1(
            BufferCount,
            Width,
            Height,
            Format,
            SwapChainFlags,
            pCreationNodeMask,
            ppPresentQueue);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput4_Wrapper::IDXGIOutput4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIOutput4_Wrapper::CheckOverlayColorSpaceSupport(
    DXGI_FORMAT Format,
    DXGI_COLOR_SPACE_TYPE ColorSpace,
    IUnknown* pConcernedDevice,
    UINT* pFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput4_CheckOverlayColorSpaceSupport>::Dispatch(
            manager,
            this,
            Format,
            ColorSpace,
            pConcernedDevice,
            pFlags);

        result = GetWrappedObjectAs<IDXGIOutput4>()->CheckOverlayColorSpaceSupport(
            Format,
            ColorSpace,
            encode::GetWrappedObject<IUnknown>(pConcernedDevice),
            pFlags);

        Encode_IDXGIOutput4_CheckOverlayColorSpaceSupport(
            GetCaptureId(),
            result,
            Format,
            ColorSpace,
            pConcernedDevice,
            pFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput4_CheckOverlayColorSpaceSupport>::Dispatch(
            manager,
            this,
            result,
            Format,
            ColorSpace,
            pConcernedDevice,
            pFlags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput4>()->CheckOverlayColorSpaceSupport(
            Format,
            ColorSpace,
            pConcernedDevice,
            pFlags);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory4_Wrapper::IDXGIFactory4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIFactory4_Wrapper::EnumAdapterByLuid(
    LUID AdapterLuid,
    REFIID riid,
    void** ppvAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory4_EnumAdapterByLuid>::Dispatch(
            manager,
            this,
            AdapterLuid,
            riid,
            ppvAdapter);

        result = GetWrappedObjectAs<IDXGIFactory4>()->EnumAdapterByLuid(
            AdapterLuid,
            riid,
            ppvAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvAdapter, nullptr);
        }

        Encode_IDXGIFactory4_EnumAdapterByLuid(
            GetCaptureId(),
            result,
            AdapterLuid,
            riid,
            ppvAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory4_EnumAdapterByLuid>::Dispatch(
            manager,
            this,
            result,
            AdapterLuid,
            riid,
            ppvAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory4>()->EnumAdapterByLuid(
            AdapterLuid,
            riid,
            ppvAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory4_Wrapper::EnumWarpAdapter(
    REFIID riid,
    void** ppvAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory4_EnumWarpAdapter>::Dispatch(
            manager,
            this,
            riid,
            ppvAdapter);

        result = GetWrappedObjectAs<IDXGIFactory4>()->EnumWarpAdapter(
            riid,
            ppvAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvAdapter, nullptr);
        }

        Encode_IDXGIFactory4_EnumWarpAdapter(
            GetCaptureId(),
            result,
            riid,
            ppvAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory4_EnumWarpAdapter>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppvAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory4>()->EnumWarpAdapter(
            riid,
            ppvAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIAdapter3_Wrapper::IDXGIAdapter3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIAdapter2_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::RegisterHardwareContentProtectionTeardownStatusEvent(
    HANDLE hEvent,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent>::Dispatch(
            manager,
            this,
            hEvent,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIAdapter3>()->RegisterHardwareContentProtectionTeardownStatusEvent(
            hEvent,
            pdwCookie);

        Encode_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent(
            GetCaptureId(),
            result,
            hEvent,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_RegisterHardwareContentProtectionTeardownStatusEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter3>()->RegisterHardwareContentProtectionTeardownStatusEvent(
            hEvent,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::UnregisterHardwareContentProtectionTeardownStatus(
    DWORD dwCookie)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus>::Dispatch(
            manager,
            this,
            dwCookie);

        GetWrappedObjectAs<IDXGIAdapter3>()->UnregisterHardwareContentProtectionTeardownStatus(
            dwCookie);

        Encode_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus(
            GetCaptureId(),
            dwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_UnregisterHardwareContentProtectionTeardownStatus>::Dispatch(
            manager,
            this,
            dwCookie);
    }
    else
    {
        GetWrappedObjectAs<IDXGIAdapter3>()->UnregisterHardwareContentProtectionTeardownStatus(
            dwCookie);
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::QueryVideoMemoryInfo(
    UINT NodeIndex,
    DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
    DXGI_QUERY_VIDEO_MEMORY_INFO* pVideoMemoryInfo)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_QueryVideoMemoryInfo>::Dispatch(
            manager,
            this,
            NodeIndex,
            MemorySegmentGroup,
            pVideoMemoryInfo);

        result = GetWrappedObjectAs<IDXGIAdapter3>()->QueryVideoMemoryInfo(
            NodeIndex,
            MemorySegmentGroup,
            pVideoMemoryInfo);

        Encode_IDXGIAdapter3_QueryVideoMemoryInfo(
            GetCaptureId(),
            result,
            NodeIndex,
            MemorySegmentGroup,
            pVideoMemoryInfo);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_QueryVideoMemoryInfo>::Dispatch(
            manager,
            this,
            result,
            NodeIndex,
            MemorySegmentGroup,
            pVideoMemoryInfo);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter3>()->QueryVideoMemoryInfo(
            NodeIndex,
            MemorySegmentGroup,
            pVideoMemoryInfo);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::SetVideoMemoryReservation(
    UINT NodeIndex,
    DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
    UINT64 Reservation)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_SetVideoMemoryReservation>::Dispatch(
            manager,
            this,
            NodeIndex,
            MemorySegmentGroup,
            Reservation);

        result = GetWrappedObjectAs<IDXGIAdapter3>()->SetVideoMemoryReservation(
            NodeIndex,
            MemorySegmentGroup,
            Reservation);

        Encode_IDXGIAdapter3_SetVideoMemoryReservation(
            GetCaptureId(),
            result,
            NodeIndex,
            MemorySegmentGroup,
            Reservation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_SetVideoMemoryReservation>::Dispatch(
            manager,
            this,
            result,
            NodeIndex,
            MemorySegmentGroup,
            Reservation);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter3>()->SetVideoMemoryReservation(
            NodeIndex,
            MemorySegmentGroup,
            Reservation);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::RegisterVideoMemoryBudgetChangeNotificationEvent(
    HANDLE hEvent,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent>::Dispatch(
            manager,
            this,
            hEvent,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIAdapter3>()->RegisterVideoMemoryBudgetChangeNotificationEvent(
            hEvent,
            pdwCookie);

        Encode_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent(
            GetCaptureId(),
            result,
            hEvent,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_RegisterVideoMemoryBudgetChangeNotificationEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter3>()->RegisterVideoMemoryBudgetChangeNotificationEvent(
            hEvent,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE IDXGIAdapter3_Wrapper::UnregisterVideoMemoryBudgetChangeNotification(
    DWORD dwCookie)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification>::Dispatch(
            manager,
            this,
            dwCookie);

        GetWrappedObjectAs<IDXGIAdapter3>()->UnregisterVideoMemoryBudgetChangeNotification(
            dwCookie);

        Encode_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification(
            GetCaptureId(),
            dwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter3_UnregisterVideoMemoryBudgetChangeNotification>::Dispatch(
            manager,
            this,
            dwCookie);
    }
    else
    {
        GetWrappedObjectAs<IDXGIAdapter3>()->UnregisterVideoMemoryBudgetChangeNotification(
            dwCookie);
    }

    manager->DecrementCallScope();
}


/*
** This part is generated from dxgi1_5.h in Windows SDK: 10.0.19041.0
**
*/

IDXGIOutput5_Wrapper::IDXGIOutput5_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput4_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIOutput5_Wrapper::DuplicateOutput1(
    IUnknown* pDevice,
    UINT Flags,
    UINT SupportedFormatsCount,
    const DXGI_FORMAT* pSupportedFormats,
    IDXGIOutputDuplication** ppOutputDuplication)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput5_DuplicateOutput1>::Dispatch(
            manager,
            this,
            pDevice,
            Flags,
            SupportedFormatsCount,
            pSupportedFormats,
            ppOutputDuplication);

        result = GetWrappedObjectAs<IDXGIOutput5>()->DuplicateOutput1(
            encode::GetWrappedObject<IUnknown>(pDevice),
            Flags,
            SupportedFormatsCount,
            pSupportedFormats,
            ppOutputDuplication);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_IDXGIOutputDuplication, reinterpret_cast<void**>(ppOutputDuplication), nullptr);
        }

        Encode_IDXGIOutput5_DuplicateOutput1(
            GetCaptureId(),
            result,
            pDevice,
            Flags,
            SupportedFormatsCount,
            pSupportedFormats,
            ppOutputDuplication);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput5_DuplicateOutput1>::Dispatch(
            manager,
            this,
            result,
            pDevice,
            Flags,
            SupportedFormatsCount,
            pSupportedFormats,
            ppOutputDuplication);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput5>()->DuplicateOutput1(
            pDevice,
            Flags,
            SupportedFormatsCount,
            pSupportedFormats,
            ppOutputDuplication);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGISwapChain4_Wrapper::IDXGISwapChain4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGISwapChain3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGISwapChain4_Wrapper::SetHDRMetaData(
    DXGI_HDR_METADATA_TYPE Type,
    UINT Size,
    void* pMetaData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGISwapChain4_SetHDRMetaData>::Dispatch(
            manager,
            this,
            Type,
            Size,
            pMetaData);

        result = GetWrappedObjectAs<IDXGISwapChain4>()->SetHDRMetaData(
            Type,
            Size,
            pMetaData);

        Encode_IDXGISwapChain4_SetHDRMetaData(
            GetCaptureId(),
            result,
            Type,
            Size,
            pMetaData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGISwapChain4_SetHDRMetaData>::Dispatch(
            manager,
            this,
            result,
            Type,
            Size,
            pMetaData);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGISwapChain4>()->SetHDRMetaData(
            Type,
            Size,
            pMetaData);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIDevice4_Wrapper::IDXGIDevice4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIDevice3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIDevice4_Wrapper::OfferResources1(
    UINT NumResources,
    IDXGIResource* const* ppResources,
    DXGI_OFFER_RESOURCE_PRIORITY Priority,
    UINT Flags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice4_OfferResources1>::Dispatch(
            manager,
            this,
            NumResources,
            ppResources,
            Priority,
            Flags);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGIDevice4>()->OfferResources1(
            NumResources,
            UnwrapObjects<IDXGIResource>(ppResources, NumResources, unwrap_memory),
            Priority,
            Flags);

        Encode_IDXGIDevice4_OfferResources1(
            GetCaptureId(),
            result,
            NumResources,
            ppResources,
            Priority,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice4_OfferResources1>::Dispatch(
            manager,
            this,
            result,
            NumResources,
            ppResources,
            Priority,
            Flags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice4>()->OfferResources1(
            NumResources,
            ppResources,
            Priority,
            Flags);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIDevice4_Wrapper::ReclaimResources1(
    UINT NumResources,
    IDXGIResource* const* ppResources,
    DXGI_RECLAIM_RESOURCE_RESULTS* pResults)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIDevice4_ReclaimResources1>::Dispatch(
            manager,
            this,
            NumResources,
            ppResources,
            pResults);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<IDXGIDevice4>()->ReclaimResources1(
            NumResources,
            UnwrapObjects<IDXGIResource>(ppResources, NumResources, unwrap_memory),
            pResults);

        Encode_IDXGIDevice4_ReclaimResources1(
            GetCaptureId(),
            result,
            NumResources,
            ppResources,
            pResults);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIDevice4_ReclaimResources1>::Dispatch(
            manager,
            this,
            result,
            NumResources,
            ppResources,
            pResults);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIDevice4>()->ReclaimResources1(
            NumResources,
            ppResources,
            pResults);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory5_Wrapper::IDXGIFactory5_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory4_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIFactory5_Wrapper::CheckFeatureSupport(
    DXGI_FEATURE Feature,
    void* pFeatureSupportData,
    UINT FeatureSupportDataSize)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory5_CheckFeatureSupport>::Dispatch(
            manager,
            this,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        result = GetWrappedObjectAs<IDXGIFactory5>()->CheckFeatureSupport(
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        Encode_IDXGIFactory5_CheckFeatureSupport(
            GetCaptureId(),
            result,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory5_CheckFeatureSupport>::Dispatch(
            manager,
            this,
            result,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory5>()->CheckFeatureSupport(
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from dxgi1_6.h in Windows SDK: 10.0.19041.0
**
*/

HRESULT WINAPI DXGIDeclareAdapterRemovalSupport()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_DXGIDeclareAdapterRemovalSupport>::Dispatch(
            manager);

        result = manager->GetDxgiDispatchTable().DXGIDeclareAdapterRemovalSupport();

        Encode_DXGIDeclareAdapterRemovalSupport(
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_DXGIDeclareAdapterRemovalSupport>::Dispatch(
            manager,
            result);
    }
    else
    {
        result = manager->GetDxgiDispatchTable().DXGIDeclareAdapterRemovalSupport();
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIAdapter4_Wrapper::IDXGIAdapter4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIAdapter3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIAdapter4_Wrapper::GetDesc3(
    DXGI_ADAPTER_DESC3* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIAdapter4_GetDesc3>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIAdapter4>()->GetDesc3(
            pDesc);

        Encode_IDXGIAdapter4_GetDesc3(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIAdapter4_GetDesc3>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIAdapter4>()->GetDesc3(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIOutput6_Wrapper::IDXGIOutput6_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIOutput5_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIOutput6_Wrapper::GetDesc1(
    DXGI_OUTPUT_DESC1* pDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput6_GetDesc1>::Dispatch(
            manager,
            this,
            pDesc);

        result = GetWrappedObjectAs<IDXGIOutput6>()->GetDesc1(
            pDesc);

        Encode_IDXGIOutput6_GetDesc1(
            GetCaptureId(),
            result,
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput6_GetDesc1>::Dispatch(
            manager,
            this,
            result,
            pDesc);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput6>()->GetDesc1(
            pDesc);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIOutput6_Wrapper::CheckHardwareCompositionSupport(
    UINT* pFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIOutput6_CheckHardwareCompositionSupport>::Dispatch(
            manager,
            this,
            pFlags);

        result = GetWrappedObjectAs<IDXGIOutput6>()->CheckHardwareCompositionSupport(
            pFlags);

        Encode_IDXGIOutput6_CheckHardwareCompositionSupport(
            GetCaptureId(),
            result,
            pFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIOutput6_CheckHardwareCompositionSupport>::Dispatch(
            manager,
            this,
            result,
            pFlags);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIOutput6>()->CheckHardwareCompositionSupport(
            pFlags);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory6_Wrapper::IDXGIFactory6_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory5_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIFactory6_Wrapper::EnumAdapterByGpuPreference(
    UINT Adapter,
    DXGI_GPU_PREFERENCE GpuPreference,
    REFIID riid,
    void** ppvAdapter)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory6_EnumAdapterByGpuPreference>::Dispatch(
            manager,
            this,
            Adapter,
            GpuPreference,
            riid,
            ppvAdapter);

        result = GetWrappedObjectAs<IDXGIFactory6>()->EnumAdapterByGpuPreference(
            Adapter,
            GpuPreference,
            riid,
            ppvAdapter);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvAdapter, nullptr);
        }

        Encode_IDXGIFactory6_EnumAdapterByGpuPreference(
            GetCaptureId(),
            result,
            Adapter,
            GpuPreference,
            riid,
            ppvAdapter);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory6_EnumAdapterByGpuPreference>::Dispatch(
            manager,
            this,
            result,
            Adapter,
            GpuPreference,
            riid,
            ppvAdapter);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory6>()->EnumAdapterByGpuPreference(
            Adapter,
            GpuPreference,
            riid,
            ppvAdapter);
    }

    manager->DecrementCallScope();

    return result;
}

IDXGIFactory7_Wrapper::IDXGIFactory7_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IDXGIFactory6_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE IDXGIFactory7_Wrapper::RegisterAdaptersChangedEvent(
    HANDLE hEvent,
    DWORD* pdwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory7_RegisterAdaptersChangedEvent>::Dispatch(
            manager,
            this,
            hEvent,
            pdwCookie);

        result = GetWrappedObjectAs<IDXGIFactory7>()->RegisterAdaptersChangedEvent(
            hEvent,
            pdwCookie);

        Encode_IDXGIFactory7_RegisterAdaptersChangedEvent(
            GetCaptureId(),
            result,
            hEvent,
            pdwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory7_RegisterAdaptersChangedEvent>::Dispatch(
            manager,
            this,
            result,
            hEvent,
            pdwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory7>()->RegisterAdaptersChangedEvent(
            hEvent,
            pdwCookie);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE IDXGIFactory7_Wrapper::UnregisterAdaptersChangedEvent(
    DWORD dwCookie)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_IDXGIFactory7_UnregisterAdaptersChangedEvent>::Dispatch(
            manager,
            this,
            dwCookie);

        result = GetWrappedObjectAs<IDXGIFactory7>()->UnregisterAdaptersChangedEvent(
            dwCookie);

        Encode_IDXGIFactory7_UnregisterAdaptersChangedEvent(
            GetCaptureId(),
            result,
            dwCookie);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_IDXGIFactory7_UnregisterAdaptersChangedEvent>::Dispatch(
            manager,
            this,
            result,
            dwCookie);
    }
    else
    {
        result = GetWrappedObjectAs<IDXGIFactory7>()->UnregisterAdaptersChangedEvent(
            dwCookie);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from dxgicommon.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from dxgiformat.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from dxgitype.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from d3d12.h in Windows SDK: 10.0.19041.0
**
*/

HRESULT WINAPI D3D12SerializeRootSignature(
    const D3D12_ROOT_SIGNATURE_DESC* pRootSignature,
    D3D_ROOT_SIGNATURE_VERSION Version,
    ID3DBlob** ppBlob,
    ID3DBlob** ppErrorBlob)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12SerializeRootSignature>::Dispatch(
            manager,
            pRootSignature,
            Version,
            ppBlob,
            ppErrorBlob);

        result = manager->GetD3D12DispatchTable().D3D12SerializeRootSignature(
            pRootSignature,
            Version,
            ppBlob,
            ppErrorBlob);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_ID3D10Blob, reinterpret_cast<void**>(ppBlob), nullptr);
            WrapObject(IID_ID3D10Blob, reinterpret_cast<void**>(ppErrorBlob), nullptr);
        }

        Encode_D3D12SerializeRootSignature(
            result,
            pRootSignature,
            Version,
            ppBlob,
            ppErrorBlob);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12SerializeRootSignature>::Dispatch(
            manager,
            result,
            pRootSignature,
            Version,
            ppBlob,
            ppErrorBlob);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12SerializeRootSignature(
            pRootSignature,
            Version,
            ppBlob,
            ppErrorBlob);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12CreateRootSignatureDeserializer(
    LPCVOID pSrcData,
    SIZE_T SrcDataSizeInBytes,
    REFIID pRootSignatureDeserializerInterface,
    void** ppRootSignatureDeserializer)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12CreateRootSignatureDeserializer>::Dispatch(
            manager,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        result = manager->GetD3D12DispatchTable().D3D12CreateRootSignatureDeserializer(
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        if (SUCCEEDED(result))
        {
            WrapObject(pRootSignatureDeserializerInterface, ppRootSignatureDeserializer, nullptr);
        }

        Encode_D3D12CreateRootSignatureDeserializer(
            result,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12CreateRootSignatureDeserializer>::Dispatch(
            manager,
            result,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12CreateRootSignatureDeserializer(
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12SerializeVersionedRootSignature(
    const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignature,
    ID3DBlob** ppBlob,
    ID3DBlob** ppErrorBlob)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12SerializeVersionedRootSignature>::Dispatch(
            manager,
            pRootSignature,
            ppBlob,
            ppErrorBlob);

        result = manager->GetD3D12DispatchTable().D3D12SerializeVersionedRootSignature(
            pRootSignature,
            ppBlob,
            ppErrorBlob);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_ID3D10Blob, reinterpret_cast<void**>(ppBlob), nullptr);
            WrapObject(IID_ID3D10Blob, reinterpret_cast<void**>(ppErrorBlob), nullptr);
        }

        Encode_D3D12SerializeVersionedRootSignature(
            result,
            pRootSignature,
            ppBlob,
            ppErrorBlob);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12SerializeVersionedRootSignature>::Dispatch(
            manager,
            result,
            pRootSignature,
            ppBlob,
            ppErrorBlob);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12SerializeVersionedRootSignature(
            pRootSignature,
            ppBlob,
            ppErrorBlob);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12CreateVersionedRootSignatureDeserializer(
    LPCVOID pSrcData,
    SIZE_T SrcDataSizeInBytes,
    REFIID pRootSignatureDeserializerInterface,
    void** ppRootSignatureDeserializer)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12CreateVersionedRootSignatureDeserializer>::Dispatch(
            manager,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        result = manager->GetD3D12DispatchTable().D3D12CreateVersionedRootSignatureDeserializer(
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        if (SUCCEEDED(result))
        {
            WrapObject(pRootSignatureDeserializerInterface, ppRootSignatureDeserializer, nullptr);
        }

        Encode_D3D12CreateVersionedRootSignatureDeserializer(
            result,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12CreateVersionedRootSignatureDeserializer>::Dispatch(
            manager,
            result,
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12CreateVersionedRootSignatureDeserializer(
            pSrcData,
            SrcDataSizeInBytes,
            pRootSignatureDeserializerInterface,
            ppRootSignatureDeserializer);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12CreateDevice(
    IUnknown* pAdapter,
    D3D_FEATURE_LEVEL MinimumFeatureLevel,
    REFIID riid,
    void** ppDevice)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12CreateDevice>::Dispatch(
            manager,
            pAdapter,
            MinimumFeatureLevel,
            riid,
            ppDevice);

        result = manager->GetD3D12DispatchTable().D3D12CreateDevice(
            encode::GetWrappedObject<IUnknown>(pAdapter),
            MinimumFeatureLevel,
            riid,
            ppDevice);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppDevice, nullptr);
        }

        Encode_D3D12CreateDevice(
            result,
            pAdapter,
            MinimumFeatureLevel,
            riid,
            ppDevice);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12CreateDevice>::Dispatch(
            manager,
            result,
            pAdapter,
            MinimumFeatureLevel,
            riid,
            ppDevice);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12CreateDevice(
            pAdapter,
            MinimumFeatureLevel,
            riid,
            ppDevice);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12GetDebugInterface(
    REFIID riid,
    void** ppvDebug)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12GetDebugInterface>::Dispatch(
            manager,
            riid,
            ppvDebug);

        result = manager->GetD3D12DispatchTable().D3D12GetDebugInterface(
            riid,
            ppvDebug);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvDebug, nullptr);
        }

        Encode_D3D12GetDebugInterface(
            result,
            riid,
            ppvDebug);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12GetDebugInterface>::Dispatch(
            manager,
            result,
            riid,
            ppvDebug);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12GetDebugInterface(
            riid,
            ppvDebug);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT WINAPI D3D12EnableExperimentalFeatures(
    UINT NumFeatures,
    const IID* pIIDs,
    void* pConfigurationStructs,
    UINT* pConfigurationStructSizes)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_D3D12EnableExperimentalFeatures>::Dispatch(
            manager,
            NumFeatures,
            pIIDs,
            pConfigurationStructs,
            pConfigurationStructSizes);

        result = manager->GetD3D12DispatchTable().D3D12EnableExperimentalFeatures(
            NumFeatures,
            pIIDs,
            pConfigurationStructs,
            pConfigurationStructSizes);

        Encode_D3D12EnableExperimentalFeatures(
            result,
            NumFeatures,
            pIIDs,
            pConfigurationStructs,
            pConfigurationStructSizes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_D3D12EnableExperimentalFeatures>::Dispatch(
            manager,
            result,
            NumFeatures,
            pIIDs,
            pConfigurationStructs,
            pConfigurationStructSizes);
    }
    else
    {
        result = manager->GetD3D12DispatchTable().D3D12EnableExperimentalFeatures(
            NumFeatures,
            pIIDs,
            pConfigurationStructs,
            pConfigurationStructSizes);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Object_Wrapper::ID3D12Object_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Object_Wrapper::GetPrivateData(
    REFGUID guid,
    UINT* pDataSize,
    void* pData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Object_GetPrivateData>::Dispatch(
            manager,
            this,
            guid,
            pDataSize,
            pData);

        result = GetWrappedObjectAs<ID3D12Object>()->GetPrivateData(
            guid,
            pDataSize,
            pData);

        Encode_ID3D12Object_GetPrivateData(
            GetCaptureId(),
            result,
            guid,
            pDataSize,
            pData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Object_GetPrivateData>::Dispatch(
            manager,
            this,
            result,
            guid,
            pDataSize,
            pData);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Object>()->GetPrivateData(
            guid,
            pDataSize,
            pData);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Object_Wrapper::SetPrivateData(
    REFGUID guid,
    UINT DataSize,
    const void* pData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Object_SetPrivateData>::Dispatch(
            manager,
            this,
            guid,
            DataSize,
            pData);

        result = GetWrappedObjectAs<ID3D12Object>()->SetPrivateData(
            guid,
            DataSize,
            pData);

        Encode_ID3D12Object_SetPrivateData(
            GetCaptureId(),
            result,
            guid,
            DataSize,
            pData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Object_SetPrivateData>::Dispatch(
            manager,
            this,
            result,
            guid,
            DataSize,
            pData);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Object>()->SetPrivateData(
            guid,
            DataSize,
            pData);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Object_Wrapper::SetPrivateDataInterface(
    REFGUID guid,
    const IUnknown* pData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Object_SetPrivateDataInterface>::Dispatch(
            manager,
            this,
            guid,
            pData);

        result = GetWrappedObjectAs<ID3D12Object>()->SetPrivateDataInterface(
            guid,
            encode::GetWrappedObject<IUnknown>(pData));

        Encode_ID3D12Object_SetPrivateDataInterface(
            GetCaptureId(),
            result,
            guid,
            pData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Object_SetPrivateDataInterface>::Dispatch(
            manager,
            this,
            result,
            guid,
            pData);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Object>()->SetPrivateDataInterface(
            guid,
            pData);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Object_Wrapper::SetName(
    LPCWSTR Name)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Object_SetName>::Dispatch(
            manager,
            this,
            Name);

        result = GetWrappedObjectAs<ID3D12Object>()->SetName(
            Name);

        Encode_ID3D12Object_SetName(
            GetCaptureId(),
            result,
            Name);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Object_SetName>::Dispatch(
            manager,
            this,
            result,
            Name);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Object>()->SetName(
            Name);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12DeviceChild_Wrapper::ID3D12DeviceChild_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Object_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12DeviceChild_Wrapper::GetDevice(
    REFIID riid,
    void** ppvDevice)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceChild_GetDevice>::Dispatch(
            manager,
            this,
            riid,
            ppvDevice);

        result = GetWrappedObjectAs<ID3D12DeviceChild>()->GetDevice(
            riid,
            ppvDevice);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvDevice, nullptr);
        }

        Encode_ID3D12DeviceChild_GetDevice(
            GetCaptureId(),
            result,
            riid,
            ppvDevice);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceChild_GetDevice>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppvDevice);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DeviceChild>()->GetDevice(
            riid,
            ppvDevice);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12RootSignature_Wrapper::ID3D12RootSignature_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12RootSignature_Wrapper::~ID3D12RootSignature_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12RootSignature>(), object_map_, object_map_lock_);
}

ID3D12RootSignature_Wrapper* ID3D12RootSignature_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12RootSignature_Wrapper>(object, object_map_, object_map_lock_);
}

ID3D12RootSignatureDeserializer_Wrapper::ID3D12RootSignatureDeserializer_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12RootSignatureDeserializer_Wrapper::~ID3D12RootSignatureDeserializer_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12RootSignatureDeserializer>(), object_map_, object_map_lock_);
}

ID3D12RootSignatureDeserializer_Wrapper* ID3D12RootSignatureDeserializer_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12RootSignatureDeserializer_Wrapper>(object, object_map_, object_map_lock_);
}

const D3D12_ROOT_SIGNATURE_DESC* STDMETHODCALLTYPE ID3D12RootSignatureDeserializer_Wrapper::GetRootSignatureDesc()
{
    const D3D12_ROOT_SIGNATURE_DESC* result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12RootSignatureDeserializer_GetRootSignatureDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12RootSignatureDeserializer>()->GetRootSignatureDesc();

        Encode_ID3D12RootSignatureDeserializer_GetRootSignatureDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12RootSignatureDeserializer_GetRootSignatureDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12RootSignatureDeserializer>()->GetRootSignatureDesc();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12VersionedRootSignatureDeserializer_Wrapper::ID3D12VersionedRootSignatureDeserializer_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12VersionedRootSignatureDeserializer_Wrapper::~ID3D12VersionedRootSignatureDeserializer_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12VersionedRootSignatureDeserializer>(), object_map_, object_map_lock_);
}

ID3D12VersionedRootSignatureDeserializer_Wrapper* ID3D12VersionedRootSignatureDeserializer_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12VersionedRootSignatureDeserializer_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12VersionedRootSignatureDeserializer_Wrapper::GetRootSignatureDescAtVersion(
    D3D_ROOT_SIGNATURE_VERSION convertToVersion,
    const D3D12_VERSIONED_ROOT_SIGNATURE_DESC** ppDesc)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion>::Dispatch(
            manager,
            this,
            convertToVersion,
            ppDesc);

        result = GetWrappedObjectAs<ID3D12VersionedRootSignatureDeserializer>()->GetRootSignatureDescAtVersion(
            convertToVersion,
            ppDesc);

        Encode_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion(
            GetCaptureId(),
            result,
            convertToVersion,
            ppDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12VersionedRootSignatureDeserializer_GetRootSignatureDescAtVersion>::Dispatch(
            manager,
            this,
            result,
            convertToVersion,
            ppDesc);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12VersionedRootSignatureDeserializer>()->GetRootSignatureDescAtVersion(
            convertToVersion,
            ppDesc);
    }

    manager->DecrementCallScope();

    return result;
}

const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* STDMETHODCALLTYPE ID3D12VersionedRootSignatureDeserializer_Wrapper::GetUnconvertedRootSignatureDesc()
{
    const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12VersionedRootSignatureDeserializer>()->GetUnconvertedRootSignatureDesc();

        Encode_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12VersionedRootSignatureDeserializer_GetUnconvertedRootSignatureDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12VersionedRootSignatureDeserializer>()->GetUnconvertedRootSignatureDesc();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Pageable_Wrapper::ID3D12Pageable_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
}

ID3D12Heap_Wrapper::ID3D12Heap_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12Heap_Wrapper::~ID3D12Heap_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12Heap>(), object_map_, object_map_lock_);
}

ID3D12Heap_Wrapper* ID3D12Heap_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12Heap_Wrapper>(object, object_map_, object_map_lock_);
}

D3D12_HEAP_DESC STDMETHODCALLTYPE ID3D12Heap_Wrapper::GetDesc()
{
    D3D12_HEAP_DESC result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Heap_GetDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Heap>()->GetDesc();

        Encode_ID3D12Heap_GetDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Heap_GetDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Heap>()->GetDesc();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Resource_Wrapper::ID3D12Resource_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12Resource_Wrapper::~ID3D12Resource_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12Resource>(), object_map_, object_map_lock_);
}

ID3D12Resource_Wrapper* ID3D12Resource_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12Resource_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12Resource_Wrapper::Map(
    UINT Subresource,
    const D3D12_RANGE* pReadRange,
    void** ppData)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_Map>::Dispatch(
            manager,
            this,
            Subresource,
            pReadRange,
            ppData);

        result = GetWrappedObjectAs<ID3D12Resource>()->Map(
            Subresource,
            pReadRange,
            ppData);

        Encode_ID3D12Resource_Map(
            GetCaptureId(),
            result,
            Subresource,
            pReadRange,
            ppData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_Map>::Dispatch(
            manager,
            this,
            result,
            Subresource,
            pReadRange,
            ppData);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->Map(
            Subresource,
            pReadRange,
            ppData);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Resource_Wrapper::Unmap(
    UINT Subresource,
    const D3D12_RANGE* pWrittenRange)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_Unmap>::Dispatch(
            manager,
            this,
            Subresource,
            pWrittenRange);

        GetWrappedObjectAs<ID3D12Resource>()->Unmap(
            Subresource,
            pWrittenRange);

        Encode_ID3D12Resource_Unmap(
            GetCaptureId(),
            Subresource,
            pWrittenRange);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_Unmap>::Dispatch(
            manager,
            this,
            Subresource,
            pWrittenRange);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Resource>()->Unmap(
            Subresource,
            pWrittenRange);
    }

    manager->DecrementCallScope();
}

D3D12_RESOURCE_DESC STDMETHODCALLTYPE ID3D12Resource_Wrapper::GetDesc()
{
    D3D12_RESOURCE_DESC result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_GetDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Resource>()->GetDesc();

        Encode_ID3D12Resource_GetDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_GetDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->GetDesc();
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_GPU_VIRTUAL_ADDRESS STDMETHODCALLTYPE ID3D12Resource_Wrapper::GetGPUVirtualAddress()
{
    D3D12_GPU_VIRTUAL_ADDRESS result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_GetGPUVirtualAddress>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Resource>()->GetGPUVirtualAddress();

        Encode_ID3D12Resource_GetGPUVirtualAddress(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_GetGPUVirtualAddress>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->GetGPUVirtualAddress();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Resource_Wrapper::WriteToSubresource(
    UINT DstSubresource,
    const D3D12_BOX* pDstBox,
    const void* pSrcData,
    UINT SrcRowPitch,
    UINT SrcDepthPitch)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_WriteToSubresource>::Dispatch(
            manager,
            this,
            DstSubresource,
            pDstBox,
            pSrcData,
            SrcRowPitch,
            SrcDepthPitch);

        result = GetWrappedObjectAs<ID3D12Resource>()->WriteToSubresource(
            DstSubresource,
            pDstBox,
            pSrcData,
            SrcRowPitch,
            SrcDepthPitch);

        Encode_ID3D12Resource_WriteToSubresource(
            GetCaptureId(),
            result,
            DstSubresource,
            pDstBox,
            pSrcData,
            SrcRowPitch,
            SrcDepthPitch);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_WriteToSubresource>::Dispatch(
            manager,
            this,
            result,
            DstSubresource,
            pDstBox,
            pSrcData,
            SrcRowPitch,
            SrcDepthPitch);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->WriteToSubresource(
            DstSubresource,
            pDstBox,
            pSrcData,
            SrcRowPitch,
            SrcDepthPitch);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Resource_Wrapper::ReadFromSubresource(
    void* pDstData,
    UINT DstRowPitch,
    UINT DstDepthPitch,
    UINT SrcSubresource,
    const D3D12_BOX* pSrcBox)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_ReadFromSubresource>::Dispatch(
            manager,
            this,
            pDstData,
            DstRowPitch,
            DstDepthPitch,
            SrcSubresource,
            pSrcBox);

        result = GetWrappedObjectAs<ID3D12Resource>()->ReadFromSubresource(
            pDstData,
            DstRowPitch,
            DstDepthPitch,
            SrcSubresource,
            pSrcBox);

        Encode_ID3D12Resource_ReadFromSubresource(
            GetCaptureId(),
            result,
            pDstData,
            DstRowPitch,
            DstDepthPitch,
            SrcSubresource,
            pSrcBox);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_ReadFromSubresource>::Dispatch(
            manager,
            this,
            result,
            pDstData,
            DstRowPitch,
            DstDepthPitch,
            SrcSubresource,
            pSrcBox);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->ReadFromSubresource(
            pDstData,
            DstRowPitch,
            DstDepthPitch,
            SrcSubresource,
            pSrcBox);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Resource_Wrapper::GetHeapProperties(
    D3D12_HEAP_PROPERTIES* pHeapProperties,
    D3D12_HEAP_FLAGS* pHeapFlags)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource_GetHeapProperties>::Dispatch(
            manager,
            this,
            pHeapProperties,
            pHeapFlags);

        result = GetWrappedObjectAs<ID3D12Resource>()->GetHeapProperties(
            pHeapProperties,
            pHeapFlags);

        Encode_ID3D12Resource_GetHeapProperties(
            GetCaptureId(),
            result,
            pHeapProperties,
            pHeapFlags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource_GetHeapProperties>::Dispatch(
            manager,
            this,
            result,
            pHeapProperties,
            pHeapFlags);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource>()->GetHeapProperties(
            pHeapProperties,
            pHeapFlags);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12CommandAllocator_Wrapper::ID3D12CommandAllocator_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12CommandAllocator_Wrapper::~ID3D12CommandAllocator_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12CommandAllocator>(), object_map_, object_map_lock_);
}

ID3D12CommandAllocator_Wrapper* ID3D12CommandAllocator_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12CommandAllocator_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12CommandAllocator_Wrapper::Reset()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandAllocator_Reset>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12CommandAllocator>()->Reset();

        Encode_ID3D12CommandAllocator_Reset(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandAllocator_Reset>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandAllocator>()->Reset();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Fence_Wrapper::ID3D12Fence_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12Fence_Wrapper::~ID3D12Fence_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12Fence>(), object_map_, object_map_lock_);
}

ID3D12Fence_Wrapper* ID3D12Fence_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12Fence_Wrapper>(object, object_map_, object_map_lock_);
}

UINT64 STDMETHODCALLTYPE ID3D12Fence_Wrapper::GetCompletedValue()
{
    UINT64 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Fence_GetCompletedValue>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Fence>()->GetCompletedValue();

        Encode_ID3D12Fence_GetCompletedValue(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Fence_GetCompletedValue>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Fence>()->GetCompletedValue();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Fence_Wrapper::SetEventOnCompletion(
    UINT64 Value,
    HANDLE hEvent)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Fence_SetEventOnCompletion>::Dispatch(
            manager,
            this,
            Value,
            hEvent);

        result = GetWrappedObjectAs<ID3D12Fence>()->SetEventOnCompletion(
            Value,
            hEvent);

        Encode_ID3D12Fence_SetEventOnCompletion(
            GetCaptureId(),
            result,
            Value,
            hEvent);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Fence_SetEventOnCompletion>::Dispatch(
            manager,
            this,
            result,
            Value,
            hEvent);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Fence>()->SetEventOnCompletion(
            Value,
            hEvent);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Fence_Wrapper::Signal(
    UINT64 Value)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Fence_Signal>::Dispatch(
            manager,
            this,
            Value);

        result = GetWrappedObjectAs<ID3D12Fence>()->Signal(
            Value);

        Encode_ID3D12Fence_Signal(
            GetCaptureId(),
            result,
            Value);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Fence_Signal>::Dispatch(
            manager,
            this,
            result,
            Value);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Fence>()->Signal(
            Value);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Fence1_Wrapper::ID3D12Fence1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Fence_Wrapper(riid, object, resources, destructor)
{
}

D3D12_FENCE_FLAGS STDMETHODCALLTYPE ID3D12Fence1_Wrapper::GetCreationFlags()
{
    D3D12_FENCE_FLAGS result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Fence1_GetCreationFlags>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Fence1>()->GetCreationFlags();

        Encode_ID3D12Fence1_GetCreationFlags(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Fence1_GetCreationFlags>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Fence1>()->GetCreationFlags();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12PipelineState_Wrapper::ID3D12PipelineState_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12PipelineState_Wrapper::~ID3D12PipelineState_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12PipelineState>(), object_map_, object_map_lock_);
}

ID3D12PipelineState_Wrapper* ID3D12PipelineState_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12PipelineState_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineState_Wrapper::GetCachedBlob(
    ID3DBlob** ppBlob)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineState_GetCachedBlob>::Dispatch(
            manager,
            this,
            ppBlob);

        result = GetWrappedObjectAs<ID3D12PipelineState>()->GetCachedBlob(
            ppBlob);

        if (SUCCEEDED(result))
        {
            WrapObject(IID_ID3D10Blob, reinterpret_cast<void**>(ppBlob), nullptr);
        }

        Encode_ID3D12PipelineState_GetCachedBlob(
            GetCaptureId(),
            result,
            ppBlob);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineState_GetCachedBlob>::Dispatch(
            manager,
            this,
            result,
            ppBlob);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineState>()->GetCachedBlob(
            ppBlob);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12DescriptorHeap_Wrapper::ID3D12DescriptorHeap_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12DescriptorHeap_Wrapper::~ID3D12DescriptorHeap_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12DescriptorHeap>(), object_map_, object_map_lock_);
}

ID3D12DescriptorHeap_Wrapper* ID3D12DescriptorHeap_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12DescriptorHeap_Wrapper>(object, object_map_, object_map_lock_);
}

D3D12_DESCRIPTOR_HEAP_DESC STDMETHODCALLTYPE ID3D12DescriptorHeap_Wrapper::GetDesc()
{
    D3D12_DESCRIPTOR_HEAP_DESC result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12DescriptorHeap>()->GetDesc();

        Encode_ID3D12DescriptorHeap_GetDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DescriptorHeap>()->GetDesc();
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_CPU_DESCRIPTOR_HANDLE STDMETHODCALLTYPE ID3D12DescriptorHeap_Wrapper::GetCPUDescriptorHandleForHeapStart()
{
    D3D12_CPU_DESCRIPTOR_HANDLE result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart>::Dispatch(
            manager,
            this);

        result = D3D12CaptureManager::Get()->OverrideID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(
            this
);

        Encode_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DescriptorHeap>()->GetCPUDescriptorHandleForHeapStart();
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_GPU_DESCRIPTOR_HANDLE STDMETHODCALLTYPE ID3D12DescriptorHeap_Wrapper::GetGPUDescriptorHandleForHeapStart()
{
    D3D12_GPU_DESCRIPTOR_HANDLE result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart>::Dispatch(
            manager,
            this);

        result = D3D12CaptureManager::Get()->OverrideID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(
            this
);

        Encode_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DescriptorHeap>()->GetGPUDescriptorHandleForHeapStart();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12QueryHeap_Wrapper::ID3D12QueryHeap_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12QueryHeap_Wrapper::~ID3D12QueryHeap_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12QueryHeap>(), object_map_, object_map_lock_);
}

ID3D12QueryHeap_Wrapper* ID3D12QueryHeap_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12QueryHeap_Wrapper>(object, object_map_, object_map_lock_);
}

ID3D12CommandSignature_Wrapper::ID3D12CommandSignature_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12CommandSignature_Wrapper::~ID3D12CommandSignature_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12CommandSignature>(), object_map_, object_map_lock_);
}

ID3D12CommandSignature_Wrapper* ID3D12CommandSignature_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12CommandSignature_Wrapper>(object, object_map_, object_map_lock_);
}

ID3D12CommandList_Wrapper::ID3D12CommandList_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
}

D3D12_COMMAND_LIST_TYPE STDMETHODCALLTYPE ID3D12CommandList_Wrapper::GetType()
{
    D3D12_COMMAND_LIST_TYPE result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandList_GetType>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12CommandList>()->GetType();

        Encode_ID3D12CommandList_GetType(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandList_GetType>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandList>()->GetType();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12GraphicsCommandList_Wrapper::ID3D12GraphicsCommandList_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12CommandList_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12GraphicsCommandList_Wrapper::~ID3D12GraphicsCommandList_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12GraphicsCommandList>(), object_map_, object_map_lock_);
}

ID3D12GraphicsCommandList_Wrapper* ID3D12GraphicsCommandList_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12GraphicsCommandList_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::Close()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Close>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Close();

        Encode_ID3D12GraphicsCommandList_Close(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Close>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Close();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::Reset(
    ID3D12CommandAllocator* pAllocator,
    ID3D12PipelineState* pInitialState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Reset>::Dispatch(
            manager,
            this,
            pAllocator,
            pInitialState);

        result = GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Reset(
            encode::GetWrappedObject<ID3D12CommandAllocator>(pAllocator),
            encode::GetWrappedObject<ID3D12PipelineState>(pInitialState));

        Encode_ID3D12GraphicsCommandList_Reset(
            GetCaptureId(),
            result,
            pAllocator,
            pInitialState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Reset>::Dispatch(
            manager,
            this,
            result,
            pAllocator,
            pInitialState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Reset(
            pAllocator,
            pInitialState);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ClearState(
    ID3D12PipelineState* pPipelineState)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearState>::Dispatch(
            manager,
            this,
            pPipelineState);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearState(
            encode::GetWrappedObject<ID3D12PipelineState>(pPipelineState));

        Encode_ID3D12GraphicsCommandList_ClearState(
            GetCaptureId(),
            pPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearState>::Dispatch(
            manager,
            this,
            pPipelineState);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearState(
            pPipelineState);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::DrawInstanced(
    UINT VertexCountPerInstance,
    UINT InstanceCount,
    UINT StartVertexLocation,
    UINT StartInstanceLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DrawInstanced>::Dispatch(
            manager,
            this,
            VertexCountPerInstance,
            InstanceCount,
            StartVertexLocation,
            StartInstanceLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DrawInstanced(
            VertexCountPerInstance,
            InstanceCount,
            StartVertexLocation,
            StartInstanceLocation);

        Encode_ID3D12GraphicsCommandList_DrawInstanced(
            GetCaptureId(),
            VertexCountPerInstance,
            InstanceCount,
            StartVertexLocation,
            StartInstanceLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DrawInstanced>::Dispatch(
            manager,
            this,
            VertexCountPerInstance,
            InstanceCount,
            StartVertexLocation,
            StartInstanceLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DrawInstanced(
            VertexCountPerInstance,
            InstanceCount,
            StartVertexLocation,
            StartInstanceLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::DrawIndexedInstanced(
    UINT IndexCountPerInstance,
    UINT InstanceCount,
    UINT StartIndexLocation,
    INT BaseVertexLocation,
    UINT StartInstanceLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DrawIndexedInstanced>::Dispatch(
            manager,
            this,
            IndexCountPerInstance,
            InstanceCount,
            StartIndexLocation,
            BaseVertexLocation,
            StartInstanceLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DrawIndexedInstanced(
            IndexCountPerInstance,
            InstanceCount,
            StartIndexLocation,
            BaseVertexLocation,
            StartInstanceLocation);

        Encode_ID3D12GraphicsCommandList_DrawIndexedInstanced(
            GetCaptureId(),
            IndexCountPerInstance,
            InstanceCount,
            StartIndexLocation,
            BaseVertexLocation,
            StartInstanceLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DrawIndexedInstanced>::Dispatch(
            manager,
            this,
            IndexCountPerInstance,
            InstanceCount,
            StartIndexLocation,
            BaseVertexLocation,
            StartInstanceLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DrawIndexedInstanced(
            IndexCountPerInstance,
            InstanceCount,
            StartIndexLocation,
            BaseVertexLocation,
            StartInstanceLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::Dispatch(
    UINT ThreadGroupCountX,
    UINT ThreadGroupCountY,
    UINT ThreadGroupCountZ)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Dispatch>::Dispatch(
            manager,
            this,
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Dispatch(
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        Encode_ID3D12GraphicsCommandList_Dispatch(
            GetCaptureId(),
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_Dispatch>::Dispatch(
            manager,
            this,
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->Dispatch(
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::CopyBufferRegion(
    ID3D12Resource* pDstBuffer,
    UINT64 DstOffset,
    ID3D12Resource* pSrcBuffer,
    UINT64 SrcOffset,
    UINT64 NumBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyBufferRegion>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            NumBytes);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyBufferRegion(
            encode::GetWrappedObject<ID3D12Resource>(pDstBuffer),
            DstOffset,
            encode::GetWrappedObject<ID3D12Resource>(pSrcBuffer),
            SrcOffset,
            NumBytes);

        Encode_ID3D12GraphicsCommandList_CopyBufferRegion(
            GetCaptureId(),
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            NumBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyBufferRegion>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            NumBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyBufferRegion(
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            NumBytes);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::CopyTextureRegion(
    const D3D12_TEXTURE_COPY_LOCATION* pDst,
    UINT DstX,
    UINT DstY,
    UINT DstZ,
    const D3D12_TEXTURE_COPY_LOCATION* pSrc,
    const D3D12_BOX* pSrcBox)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyTextureRegion>::Dispatch(
            manager,
            this,
            pDst,
            DstX,
            DstY,
            DstZ,
            pSrc,
            pSrcBox);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyTextureRegion(
            UnwrapStructPtrObjects(pDst, unwrap_memory),
            DstX,
            DstY,
            DstZ,
            UnwrapStructPtrObjects(pSrc, unwrap_memory),
            pSrcBox);

        Encode_ID3D12GraphicsCommandList_CopyTextureRegion(
            GetCaptureId(),
            pDst,
            DstX,
            DstY,
            DstZ,
            pSrc,
            pSrcBox);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyTextureRegion>::Dispatch(
            manager,
            this,
            pDst,
            DstX,
            DstY,
            DstZ,
            pSrc,
            pSrcBox);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyTextureRegion(
            pDst,
            DstX,
            DstY,
            DstZ,
            pSrc,
            pSrcBox);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::CopyResource(
    ID3D12Resource* pDstResource,
    ID3D12Resource* pSrcResource)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyResource>::Dispatch(
            manager,
            this,
            pDstResource,
            pSrcResource);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyResource(
            encode::GetWrappedObject<ID3D12Resource>(pDstResource),
            encode::GetWrappedObject<ID3D12Resource>(pSrcResource));

        Encode_ID3D12GraphicsCommandList_CopyResource(
            GetCaptureId(),
            pDstResource,
            pSrcResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyResource>::Dispatch(
            manager,
            this,
            pDstResource,
            pSrcResource);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyResource(
            pDstResource,
            pSrcResource);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::CopyTiles(
    ID3D12Resource* pTiledResource,
    const D3D12_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
    const D3D12_TILE_REGION_SIZE* pTileRegionSize,
    ID3D12Resource* pBuffer,
    UINT64 BufferStartOffsetInBytes,
    D3D12_TILE_COPY_FLAGS Flags)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyTiles>::Dispatch(
            manager,
            this,
            pTiledResource,
            pTileRegionStartCoordinate,
            pTileRegionSize,
            pBuffer,
            BufferStartOffsetInBytes,
            Flags);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyTiles(
            encode::GetWrappedObject<ID3D12Resource>(pTiledResource),
            pTileRegionStartCoordinate,
            pTileRegionSize,
            encode::GetWrappedObject<ID3D12Resource>(pBuffer),
            BufferStartOffsetInBytes,
            Flags);

        Encode_ID3D12GraphicsCommandList_CopyTiles(
            GetCaptureId(),
            pTiledResource,
            pTileRegionStartCoordinate,
            pTileRegionSize,
            pBuffer,
            BufferStartOffsetInBytes,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_CopyTiles>::Dispatch(
            manager,
            this,
            pTiledResource,
            pTileRegionStartCoordinate,
            pTileRegionSize,
            pBuffer,
            BufferStartOffsetInBytes,
            Flags);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->CopyTiles(
            pTiledResource,
            pTileRegionStartCoordinate,
            pTileRegionSize,
            pBuffer,
            BufferStartOffsetInBytes,
            Flags);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ResolveSubresource(
    ID3D12Resource* pDstResource,
    UINT DstSubresource,
    ID3D12Resource* pSrcResource,
    UINT SrcSubresource,
    DXGI_FORMAT Format)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResolveSubresource>::Dispatch(
            manager,
            this,
            pDstResource,
            DstSubresource,
            pSrcResource,
            SrcSubresource,
            Format);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResolveSubresource(
            encode::GetWrappedObject<ID3D12Resource>(pDstResource),
            DstSubresource,
            encode::GetWrappedObject<ID3D12Resource>(pSrcResource),
            SrcSubresource,
            Format);

        Encode_ID3D12GraphicsCommandList_ResolveSubresource(
            GetCaptureId(),
            pDstResource,
            DstSubresource,
            pSrcResource,
            SrcSubresource,
            Format);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResolveSubresource>::Dispatch(
            manager,
            this,
            pDstResource,
            DstSubresource,
            pSrcResource,
            SrcSubresource,
            Format);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResolveSubresource(
            pDstResource,
            DstSubresource,
            pSrcResource,
            SrcSubresource,
            Format);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::IASetPrimitiveTopology(
    D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetPrimitiveTopology>::Dispatch(
            manager,
            this,
            PrimitiveTopology);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetPrimitiveTopology(
            PrimitiveTopology);

        Encode_ID3D12GraphicsCommandList_IASetPrimitiveTopology(
            GetCaptureId(),
            PrimitiveTopology);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetPrimitiveTopology>::Dispatch(
            manager,
            this,
            PrimitiveTopology);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetPrimitiveTopology(
            PrimitiveTopology);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::RSSetViewports(
    UINT NumViewports,
    const D3D12_VIEWPORT* pViewports)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_RSSetViewports>::Dispatch(
            manager,
            this,
            NumViewports,
            pViewports);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->RSSetViewports(
            NumViewports,
            pViewports);

        Encode_ID3D12GraphicsCommandList_RSSetViewports(
            GetCaptureId(),
            NumViewports,
            pViewports);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_RSSetViewports>::Dispatch(
            manager,
            this,
            NumViewports,
            pViewports);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->RSSetViewports(
            NumViewports,
            pViewports);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::RSSetScissorRects(
    UINT NumRects,
    const D3D12_RECT* pRects)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_RSSetScissorRects>::Dispatch(
            manager,
            this,
            NumRects,
            pRects);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->RSSetScissorRects(
            NumRects,
            pRects);

        Encode_ID3D12GraphicsCommandList_RSSetScissorRects(
            GetCaptureId(),
            NumRects,
            pRects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_RSSetScissorRects>::Dispatch(
            manager,
            this,
            NumRects,
            pRects);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->RSSetScissorRects(
            NumRects,
            pRects);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::OMSetBlendFactor(
    const FLOAT BlendFactor [4])
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetBlendFactor>::Dispatch(
            manager,
            this,
            BlendFactor);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetBlendFactor(
            BlendFactor);

        Encode_ID3D12GraphicsCommandList_OMSetBlendFactor(
            GetCaptureId(),
            BlendFactor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetBlendFactor>::Dispatch(
            manager,
            this,
            BlendFactor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetBlendFactor(
            BlendFactor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::OMSetStencilRef(
    UINT StencilRef)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetStencilRef>::Dispatch(
            manager,
            this,
            StencilRef);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetStencilRef(
            StencilRef);

        Encode_ID3D12GraphicsCommandList_OMSetStencilRef(
            GetCaptureId(),
            StencilRef);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetStencilRef>::Dispatch(
            manager,
            this,
            StencilRef);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetStencilRef(
            StencilRef);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetPipelineState(
    ID3D12PipelineState* pPipelineState)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetPipelineState>::Dispatch(
            manager,
            this,
            pPipelineState);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetPipelineState(
            encode::GetWrappedObject<ID3D12PipelineState>(pPipelineState));

        Encode_ID3D12GraphicsCommandList_SetPipelineState(
            GetCaptureId(),
            pPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetPipelineState>::Dispatch(
            manager,
            this,
            pPipelineState);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetPipelineState(
            pPipelineState);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ResourceBarrier(
    UINT NumBarriers,
    const D3D12_RESOURCE_BARRIER* pBarriers)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResourceBarrier>::Dispatch(
            manager,
            this,
            NumBarriers,
            pBarriers);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResourceBarrier(
            NumBarriers,
            UnwrapStructArrayObjects(pBarriers, NumBarriers, unwrap_memory));

        Encode_ID3D12GraphicsCommandList_ResourceBarrier(
            GetCaptureId(),
            NumBarriers,
            pBarriers);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResourceBarrier>::Dispatch(
            manager,
            this,
            NumBarriers,
            pBarriers);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResourceBarrier(
            NumBarriers,
            pBarriers);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ExecuteBundle(
    ID3D12GraphicsCommandList* pCommandList)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ExecuteBundle>::Dispatch(
            manager,
            this,
            pCommandList);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ExecuteBundle(
            encode::GetWrappedObject<ID3D12GraphicsCommandList>(pCommandList));

        Encode_ID3D12GraphicsCommandList_ExecuteBundle(
            GetCaptureId(),
            pCommandList);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ExecuteBundle>::Dispatch(
            manager,
            this,
            pCommandList);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ExecuteBundle(
            pCommandList);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetDescriptorHeaps(
    UINT NumDescriptorHeaps,
    ID3D12DescriptorHeap* const* ppDescriptorHeaps)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetDescriptorHeaps>::Dispatch(
            manager,
            this,
            NumDescriptorHeaps,
            ppDescriptorHeaps);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetDescriptorHeaps(
            NumDescriptorHeaps,
            UnwrapObjects<ID3D12DescriptorHeap>(ppDescriptorHeaps, NumDescriptorHeaps, unwrap_memory));

        Encode_ID3D12GraphicsCommandList_SetDescriptorHeaps(
            GetCaptureId(),
            NumDescriptorHeaps,
            ppDescriptorHeaps);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetDescriptorHeaps>::Dispatch(
            manager,
            this,
            NumDescriptorHeaps,
            ppDescriptorHeaps);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetDescriptorHeaps(
            NumDescriptorHeaps,
            ppDescriptorHeaps);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRootSignature(
    ID3D12RootSignature* pRootSignature)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootSignature>::Dispatch(
            manager,
            this,
            pRootSignature);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootSignature(
            encode::GetWrappedObject<ID3D12RootSignature>(pRootSignature));

        Encode_ID3D12GraphicsCommandList_SetComputeRootSignature(
            GetCaptureId(),
            pRootSignature);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootSignature>::Dispatch(
            manager,
            this,
            pRootSignature);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootSignature(
            pRootSignature);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRootSignature(
    ID3D12RootSignature* pRootSignature)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootSignature>::Dispatch(
            manager,
            this,
            pRootSignature);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootSignature(
            encode::GetWrappedObject<ID3D12RootSignature>(pRootSignature));

        Encode_ID3D12GraphicsCommandList_SetGraphicsRootSignature(
            GetCaptureId(),
            pRootSignature);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootSignature>::Dispatch(
            manager,
            this,
            pRootSignature);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootSignature(
            pRootSignature);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRootDescriptorTable(
    UINT RootParameterIndex,
    D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BaseDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootDescriptorTable(
            RootParameterIndex,
            *UnwrapStructPtrObjects(&BaseDescriptor, unwrap_memory));

        Encode_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable(
            GetCaptureId(),
            RootParameterIndex,
            BaseDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootDescriptorTable>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BaseDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootDescriptorTable(
            RootParameterIndex,
            BaseDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRootDescriptorTable(
    UINT RootParameterIndex,
    D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BaseDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootDescriptorTable(
            RootParameterIndex,
            *UnwrapStructPtrObjects(&BaseDescriptor, unwrap_memory));

        Encode_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable(
            GetCaptureId(),
            RootParameterIndex,
            BaseDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootDescriptorTable>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BaseDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootDescriptorTable(
            RootParameterIndex,
            BaseDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRoot32BitConstant(
    UINT RootParameterIndex,
    UINT SrcData,
    UINT DestOffsetIn32BitValues)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRoot32BitConstant(
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        Encode_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant(
            GetCaptureId(),
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRoot32BitConstant>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRoot32BitConstant(
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRoot32BitConstant(
    UINT RootParameterIndex,
    UINT SrcData,
    UINT DestOffsetIn32BitValues)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRoot32BitConstant(
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        Encode_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant(
            GetCaptureId(),
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstant>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRoot32BitConstant(
            RootParameterIndex,
            SrcData,
            DestOffsetIn32BitValues);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRoot32BitConstants(
    UINT RootParameterIndex,
    UINT Num32BitValuesToSet,
    const void* pSrcData,
    UINT DestOffsetIn32BitValues)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRoot32BitConstants(
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        Encode_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants(
            GetCaptureId(),
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRoot32BitConstants>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRoot32BitConstants(
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRoot32BitConstants(
    UINT RootParameterIndex,
    UINT Num32BitValuesToSet,
    const void* pSrcData,
    UINT DestOffsetIn32BitValues)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRoot32BitConstants(
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        Encode_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants(
            GetCaptureId(),
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRoot32BitConstants>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRoot32BitConstants(
            RootParameterIndex,
            Num32BitValuesToSet,
            pSrcData,
            DestOffsetIn32BitValues);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRootConstantBufferView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootConstantBufferView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootConstantBufferView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootConstantBufferView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRootConstantBufferView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootConstantBufferView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootConstantBufferView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRootShaderResourceView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootShaderResourceView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootShaderResourceView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootShaderResourceView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRootShaderResourceView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootShaderResourceView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootShaderResourceView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootShaderResourceView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetComputeRootUnorderedAccessView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootUnorderedAccessView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetComputeRootUnorderedAccessView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetComputeRootUnorderedAccessView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetGraphicsRootUnorderedAccessView(
    UINT RootParameterIndex,
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootUnorderedAccessView(
            RootParameterIndex,
            BufferLocation);

        Encode_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView(
            GetCaptureId(),
            RootParameterIndex,
            BufferLocation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetGraphicsRootUnorderedAccessView>::Dispatch(
            manager,
            this,
            RootParameterIndex,
            BufferLocation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetGraphicsRootUnorderedAccessView(
            RootParameterIndex,
            BufferLocation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::IASetIndexBuffer(
    const D3D12_INDEX_BUFFER_VIEW* pView)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetIndexBuffer>::Dispatch(
            manager,
            this,
            pView);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetIndexBuffer(
            pView);

        Encode_ID3D12GraphicsCommandList_IASetIndexBuffer(
            GetCaptureId(),
            pView);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetIndexBuffer>::Dispatch(
            manager,
            this,
            pView);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetIndexBuffer(
            pView);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::IASetVertexBuffers(
    UINT StartSlot,
    UINT NumViews,
    const D3D12_VERTEX_BUFFER_VIEW* pViews)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetVertexBuffers>::Dispatch(
            manager,
            this,
            StartSlot,
            NumViews,
            pViews);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetVertexBuffers(
            StartSlot,
            NumViews,
            pViews);

        Encode_ID3D12GraphicsCommandList_IASetVertexBuffers(
            GetCaptureId(),
            StartSlot,
            NumViews,
            pViews);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_IASetVertexBuffers>::Dispatch(
            manager,
            this,
            StartSlot,
            NumViews,
            pViews);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->IASetVertexBuffers(
            StartSlot,
            NumViews,
            pViews);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SOSetTargets(
    UINT StartSlot,
    UINT NumViews,
    const D3D12_STREAM_OUTPUT_BUFFER_VIEW* pViews)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SOSetTargets>::Dispatch(
            manager,
            this,
            StartSlot,
            NumViews,
            pViews);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SOSetTargets(
            StartSlot,
            NumViews,
            pViews);

        Encode_ID3D12GraphicsCommandList_SOSetTargets(
            GetCaptureId(),
            StartSlot,
            NumViews,
            pViews);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SOSetTargets>::Dispatch(
            manager,
            this,
            StartSlot,
            NumViews,
            pViews);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SOSetTargets(
            StartSlot,
            NumViews,
            pViews);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::OMSetRenderTargets(
    UINT NumRenderTargetDescriptors,
    const D3D12_CPU_DESCRIPTOR_HANDLE* pRenderTargetDescriptors,
    BOOL RTsSingleHandleToDescriptorRange,
    const D3D12_CPU_DESCRIPTOR_HANDLE* pDepthStencilDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetRenderTargets>::Dispatch(
            manager,
            this,
            NumRenderTargetDescriptors,
            pRenderTargetDescriptors,
            RTsSingleHandleToDescriptorRange,
            pDepthStencilDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetRenderTargets(
            NumRenderTargetDescriptors,
            UnwrapStructArrayObjects(pRenderTargetDescriptors, RTsSingleHandleToDescriptorRange ? 1 : NumRenderTargetDescriptors, unwrap_memory),
            RTsSingleHandleToDescriptorRange,
            UnwrapStructPtrObjects(pDepthStencilDescriptor, unwrap_memory));

        Encode_ID3D12GraphicsCommandList_OMSetRenderTargets(
            GetCaptureId(),
            NumRenderTargetDescriptors,
            pRenderTargetDescriptors,
            RTsSingleHandleToDescriptorRange,
            pDepthStencilDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_OMSetRenderTargets>::Dispatch(
            manager,
            this,
            NumRenderTargetDescriptors,
            pRenderTargetDescriptors,
            RTsSingleHandleToDescriptorRange,
            pDepthStencilDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->OMSetRenderTargets(
            NumRenderTargetDescriptors,
            pRenderTargetDescriptors,
            RTsSingleHandleToDescriptorRange,
            pDepthStencilDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ClearDepthStencilView(
    D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
    D3D12_CLEAR_FLAGS ClearFlags,
    FLOAT Depth,
    UINT8 Stencil,
    UINT NumRects,
    const D3D12_RECT* pRects)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearDepthStencilView>::Dispatch(
            manager,
            this,
            DepthStencilView,
            ClearFlags,
            Depth,
            Stencil,
            NumRects,
            pRects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearDepthStencilView(
            *UnwrapStructPtrObjects(&DepthStencilView, unwrap_memory),
            ClearFlags,
            Depth,
            Stencil,
            NumRects,
            pRects);

        Encode_ID3D12GraphicsCommandList_ClearDepthStencilView(
            GetCaptureId(),
            DepthStencilView,
            ClearFlags,
            Depth,
            Stencil,
            NumRects,
            pRects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearDepthStencilView>::Dispatch(
            manager,
            this,
            DepthStencilView,
            ClearFlags,
            Depth,
            Stencil,
            NumRects,
            pRects);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearDepthStencilView(
            DepthStencilView,
            ClearFlags,
            Depth,
            Stencil,
            NumRects,
            pRects);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ClearRenderTargetView(
    D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
    const FLOAT ColorRGBA [4],
    UINT NumRects,
    const D3D12_RECT* pRects)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearRenderTargetView>::Dispatch(
            manager,
            this,
            RenderTargetView,
            ColorRGBA,
            NumRects,
            pRects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearRenderTargetView(
            *UnwrapStructPtrObjects(&RenderTargetView, unwrap_memory),
            ColorRGBA,
            NumRects,
            pRects);

        Encode_ID3D12GraphicsCommandList_ClearRenderTargetView(
            GetCaptureId(),
            RenderTargetView,
            ColorRGBA,
            NumRects,
            pRects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearRenderTargetView>::Dispatch(
            manager,
            this,
            RenderTargetView,
            ColorRGBA,
            NumRects,
            pRects);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearRenderTargetView(
            RenderTargetView,
            ColorRGBA,
            NumRects,
            pRects);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ClearUnorderedAccessViewUint(
    D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    ID3D12Resource* pResource,
    const UINT Values [4],
    UINT NumRects,
    const D3D12_RECT* pRects)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint>::Dispatch(
            manager,
            this,
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearUnorderedAccessViewUint(
            *UnwrapStructPtrObjects(&ViewGPUHandleInCurrentHeap, unwrap_memory),
            *UnwrapStructPtrObjects(&ViewCPUHandle, unwrap_memory),
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            Values,
            NumRects,
            pRects);

        Encode_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint(
            GetCaptureId(),
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearUnorderedAccessViewUint>::Dispatch(
            manager,
            this,
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearUnorderedAccessViewUint(
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ClearUnorderedAccessViewFloat(
    D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    ID3D12Resource* pResource,
    const FLOAT Values [4],
    UINT NumRects,
    const D3D12_RECT* pRects)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat>::Dispatch(
            manager,
            this,
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearUnorderedAccessViewFloat(
            *UnwrapStructPtrObjects(&ViewGPUHandleInCurrentHeap, unwrap_memory),
            *UnwrapStructPtrObjects(&ViewCPUHandle, unwrap_memory),
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            Values,
            NumRects,
            pRects);

        Encode_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat(
            GetCaptureId(),
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ClearUnorderedAccessViewFloat>::Dispatch(
            manager,
            this,
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ClearUnorderedAccessViewFloat(
            ViewGPUHandleInCurrentHeap,
            ViewCPUHandle,
            pResource,
            Values,
            NumRects,
            pRects);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::DiscardResource(
    ID3D12Resource* pResource,
    const D3D12_DISCARD_REGION* pRegion)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DiscardResource>::Dispatch(
            manager,
            this,
            pResource,
            pRegion);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DiscardResource(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            pRegion);

        Encode_ID3D12GraphicsCommandList_DiscardResource(
            GetCaptureId(),
            pResource,
            pRegion);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_DiscardResource>::Dispatch(
            manager,
            this,
            pResource,
            pRegion);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->DiscardResource(
            pResource,
            pRegion);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::BeginQuery(
    ID3D12QueryHeap* pQueryHeap,
    D3D12_QUERY_TYPE Type,
    UINT Index)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_BeginQuery>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            Index);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->BeginQuery(
            encode::GetWrappedObject<ID3D12QueryHeap>(pQueryHeap),
            Type,
            Index);

        Encode_ID3D12GraphicsCommandList_BeginQuery(
            GetCaptureId(),
            pQueryHeap,
            Type,
            Index);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_BeginQuery>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            Index);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->BeginQuery(
            pQueryHeap,
            Type,
            Index);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::EndQuery(
    ID3D12QueryHeap* pQueryHeap,
    D3D12_QUERY_TYPE Type,
    UINT Index)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_EndQuery>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            Index);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->EndQuery(
            encode::GetWrappedObject<ID3D12QueryHeap>(pQueryHeap),
            Type,
            Index);

        Encode_ID3D12GraphicsCommandList_EndQuery(
            GetCaptureId(),
            pQueryHeap,
            Type,
            Index);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_EndQuery>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            Index);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->EndQuery(
            pQueryHeap,
            Type,
            Index);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ResolveQueryData(
    ID3D12QueryHeap* pQueryHeap,
    D3D12_QUERY_TYPE Type,
    UINT StartIndex,
    UINT NumQueries,
    ID3D12Resource* pDestinationBuffer,
    UINT64 AlignedDestinationBufferOffset)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResolveQueryData>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            StartIndex,
            NumQueries,
            pDestinationBuffer,
            AlignedDestinationBufferOffset);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResolveQueryData(
            encode::GetWrappedObject<ID3D12QueryHeap>(pQueryHeap),
            Type,
            StartIndex,
            NumQueries,
            encode::GetWrappedObject<ID3D12Resource>(pDestinationBuffer),
            AlignedDestinationBufferOffset);

        Encode_ID3D12GraphicsCommandList_ResolveQueryData(
            GetCaptureId(),
            pQueryHeap,
            Type,
            StartIndex,
            NumQueries,
            pDestinationBuffer,
            AlignedDestinationBufferOffset);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ResolveQueryData>::Dispatch(
            manager,
            this,
            pQueryHeap,
            Type,
            StartIndex,
            NumQueries,
            pDestinationBuffer,
            AlignedDestinationBufferOffset);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ResolveQueryData(
            pQueryHeap,
            Type,
            StartIndex,
            NumQueries,
            pDestinationBuffer,
            AlignedDestinationBufferOffset);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetPredication(
    ID3D12Resource* pBuffer,
    UINT64 AlignedBufferOffset,
    D3D12_PREDICATION_OP Operation)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetPredication>::Dispatch(
            manager,
            this,
            pBuffer,
            AlignedBufferOffset,
            Operation);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetPredication(
            encode::GetWrappedObject<ID3D12Resource>(pBuffer),
            AlignedBufferOffset,
            Operation);

        Encode_ID3D12GraphicsCommandList_SetPredication(
            GetCaptureId(),
            pBuffer,
            AlignedBufferOffset,
            Operation);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetPredication>::Dispatch(
            manager,
            this,
            pBuffer,
            AlignedBufferOffset,
            Operation);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetPredication(
            pBuffer,
            AlignedBufferOffset,
            Operation);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::SetMarker(
    UINT Metadata,
    const void* pData,
    UINT Size)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetMarker>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetMarker(
            Metadata,
            pData,
            Size);

        Encode_ID3D12GraphicsCommandList_SetMarker(
            GetCaptureId(),
            Metadata,
            pData,
            Size);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_SetMarker>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->SetMarker(
            Metadata,
            pData,
            Size);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::BeginEvent(
    UINT Metadata,
    const void* pData,
    UINT Size)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_BeginEvent>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->BeginEvent(
            Metadata,
            pData,
            Size);

        Encode_ID3D12GraphicsCommandList_BeginEvent(
            GetCaptureId(),
            Metadata,
            pData,
            Size);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_BeginEvent>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->BeginEvent(
            Metadata,
            pData,
            Size);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::EndEvent()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_EndEvent>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->EndEvent();

        Encode_ID3D12GraphicsCommandList_EndEvent(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_EndEvent>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->EndEvent();
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList_Wrapper::ExecuteIndirect(
    ID3D12CommandSignature* pCommandSignature,
    UINT MaxCommandCount,
    ID3D12Resource* pArgumentBuffer,
    UINT64 ArgumentBufferOffset,
    ID3D12Resource* pCountBuffer,
    UINT64 CountBufferOffset)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ExecuteIndirect>::Dispatch(
            manager,
            this,
            pCommandSignature,
            MaxCommandCount,
            pArgumentBuffer,
            ArgumentBufferOffset,
            pCountBuffer,
            CountBufferOffset);

        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ExecuteIndirect(
            encode::GetWrappedObject<ID3D12CommandSignature>(pCommandSignature),
            MaxCommandCount,
            encode::GetWrappedObject<ID3D12Resource>(pArgumentBuffer),
            ArgumentBufferOffset,
            encode::GetWrappedObject<ID3D12Resource>(pCountBuffer),
            CountBufferOffset);

        Encode_ID3D12GraphicsCommandList_ExecuteIndirect(
            GetCaptureId(),
            pCommandSignature,
            MaxCommandCount,
            pArgumentBuffer,
            ArgumentBufferOffset,
            pCountBuffer,
            CountBufferOffset);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList_ExecuteIndirect>::Dispatch(
            manager,
            this,
            pCommandSignature,
            MaxCommandCount,
            pArgumentBuffer,
            ArgumentBufferOffset,
            pCountBuffer,
            CountBufferOffset);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList>()->ExecuteIndirect(
            pCommandSignature,
            MaxCommandCount,
            pArgumentBuffer,
            ArgumentBufferOffset,
            pCountBuffer,
            CountBufferOffset);
    }

    manager->DecrementCallScope();
}

ID3D12GraphicsCommandList1_Wrapper::ID3D12GraphicsCommandList1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::AtomicCopyBufferUINT(
    ID3D12Resource* pDstBuffer,
    UINT64 DstOffset,
    ID3D12Resource* pSrcBuffer,
    UINT64 SrcOffset,
    UINT Dependencies,
    ID3D12Resource* const* ppDependentResources,
    const D3D12_SUBRESOURCE_RANGE_UINT64* pDependentSubresourceRanges)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->AtomicCopyBufferUINT(
            encode::GetWrappedObject<ID3D12Resource>(pDstBuffer),
            DstOffset,
            encode::GetWrappedObject<ID3D12Resource>(pSrcBuffer),
            SrcOffset,
            Dependencies,
            UnwrapObjects<ID3D12Resource>(ppDependentResources, Dependencies, unwrap_memory),
            pDependentSubresourceRanges);

        Encode_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT(
            GetCaptureId(),
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->AtomicCopyBufferUINT(
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::AtomicCopyBufferUINT64(
    ID3D12Resource* pDstBuffer,
    UINT64 DstOffset,
    ID3D12Resource* pSrcBuffer,
    UINT64 SrcOffset,
    UINT Dependencies,
    ID3D12Resource* const* ppDependentResources,
    const D3D12_SUBRESOURCE_RANGE_UINT64* pDependentSubresourceRanges)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->AtomicCopyBufferUINT64(
            encode::GetWrappedObject<ID3D12Resource>(pDstBuffer),
            DstOffset,
            encode::GetWrappedObject<ID3D12Resource>(pSrcBuffer),
            SrcOffset,
            Dependencies,
            UnwrapObjects<ID3D12Resource>(ppDependentResources, Dependencies, unwrap_memory),
            pDependentSubresourceRanges);

        Encode_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64(
            GetCaptureId(),
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_AtomicCopyBufferUINT64>::Dispatch(
            manager,
            this,
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->AtomicCopyBufferUINT64(
            pDstBuffer,
            DstOffset,
            pSrcBuffer,
            SrcOffset,
            Dependencies,
            ppDependentResources,
            pDependentSubresourceRanges);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::OMSetDepthBounds(
    FLOAT Min,
    FLOAT Max)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_OMSetDepthBounds>::Dispatch(
            manager,
            this,
            Min,
            Max);

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->OMSetDepthBounds(
            Min,
            Max);

        Encode_ID3D12GraphicsCommandList1_OMSetDepthBounds(
            GetCaptureId(),
            Min,
            Max);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_OMSetDepthBounds>::Dispatch(
            manager,
            this,
            Min,
            Max);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->OMSetDepthBounds(
            Min,
            Max);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::SetSamplePositions(
    UINT NumSamplesPerPixel,
    UINT NumPixels,
    D3D12_SAMPLE_POSITION* pSamplePositions)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_SetSamplePositions>::Dispatch(
            manager,
            this,
            NumSamplesPerPixel,
            NumPixels,
            pSamplePositions);

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->SetSamplePositions(
            NumSamplesPerPixel,
            NumPixels,
            pSamplePositions);

        Encode_ID3D12GraphicsCommandList1_SetSamplePositions(
            GetCaptureId(),
            NumSamplesPerPixel,
            NumPixels,
            pSamplePositions);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_SetSamplePositions>::Dispatch(
            manager,
            this,
            NumSamplesPerPixel,
            NumPixels,
            pSamplePositions);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->SetSamplePositions(
            NumSamplesPerPixel,
            NumPixels,
            pSamplePositions);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::ResolveSubresourceRegion(
    ID3D12Resource* pDstResource,
    UINT DstSubresource,
    UINT DstX,
    UINT DstY,
    ID3D12Resource* pSrcResource,
    UINT SrcSubresource,
    D3D12_RECT* pSrcRect,
    DXGI_FORMAT Format,
    D3D12_RESOLVE_MODE ResolveMode)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_ResolveSubresourceRegion>::Dispatch(
            manager,
            this,
            pDstResource,
            DstSubresource,
            DstX,
            DstY,
            pSrcResource,
            SrcSubresource,
            pSrcRect,
            Format,
            ResolveMode);

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->ResolveSubresourceRegion(
            encode::GetWrappedObject<ID3D12Resource>(pDstResource),
            DstSubresource,
            DstX,
            DstY,
            encode::GetWrappedObject<ID3D12Resource>(pSrcResource),
            SrcSubresource,
            pSrcRect,
            Format,
            ResolveMode);

        Encode_ID3D12GraphicsCommandList1_ResolveSubresourceRegion(
            GetCaptureId(),
            pDstResource,
            DstSubresource,
            DstX,
            DstY,
            pSrcResource,
            SrcSubresource,
            pSrcRect,
            Format,
            ResolveMode);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_ResolveSubresourceRegion>::Dispatch(
            manager,
            this,
            pDstResource,
            DstSubresource,
            DstX,
            DstY,
            pSrcResource,
            SrcSubresource,
            pSrcRect,
            Format,
            ResolveMode);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->ResolveSubresourceRegion(
            pDstResource,
            DstSubresource,
            DstX,
            DstY,
            pSrcResource,
            SrcSubresource,
            pSrcRect,
            Format,
            ResolveMode);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList1_Wrapper::SetViewInstanceMask(
    UINT Mask)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_SetViewInstanceMask>::Dispatch(
            manager,
            this,
            Mask);

        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->SetViewInstanceMask(
            Mask);

        Encode_ID3D12GraphicsCommandList1_SetViewInstanceMask(
            GetCaptureId(),
            Mask);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList1_SetViewInstanceMask>::Dispatch(
            manager,
            this,
            Mask);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList1>()->SetViewInstanceMask(
            Mask);
    }

    manager->DecrementCallScope();
}

ID3D12GraphicsCommandList2_Wrapper::ID3D12GraphicsCommandList2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList1_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList2_Wrapper::WriteBufferImmediate(
    UINT Count,
    const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER* pParams,
    const D3D12_WRITEBUFFERIMMEDIATE_MODE* pModes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList2_WriteBufferImmediate>::Dispatch(
            manager,
            this,
            Count,
            pParams,
            pModes);

        GetWrappedObjectAs<ID3D12GraphicsCommandList2>()->WriteBufferImmediate(
            Count,
            pParams,
            pModes);

        Encode_ID3D12GraphicsCommandList2_WriteBufferImmediate(
            GetCaptureId(),
            Count,
            pParams,
            pModes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList2_WriteBufferImmediate>::Dispatch(
            manager,
            this,
            Count,
            pParams,
            pModes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList2>()->WriteBufferImmediate(
            Count,
            pParams,
            pModes);
    }

    manager->DecrementCallScope();
}

ID3D12CommandQueue_Wrapper::ID3D12CommandQueue_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12CommandQueue_Wrapper::~ID3D12CommandQueue_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12CommandQueue>(), object_map_, object_map_lock_);
}

ID3D12CommandQueue_Wrapper* ID3D12CommandQueue_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12CommandQueue_Wrapper>(object, object_map_, object_map_lock_);
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::UpdateTileMappings(
    ID3D12Resource* pResource,
    UINT NumResourceRegions,
    const D3D12_TILED_RESOURCE_COORDINATE* pResourceRegionStartCoordinates,
    const D3D12_TILE_REGION_SIZE* pResourceRegionSizes,
    ID3D12Heap* pHeap,
    UINT NumRanges,
    const D3D12_TILE_RANGE_FLAGS* pRangeFlags,
    const UINT* pHeapRangeStartOffsets,
    const UINT* pRangeTileCounts,
    D3D12_TILE_MAPPING_FLAGS Flags)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_UpdateTileMappings>::Dispatch(
            manager,
            this,
            pResource,
            NumResourceRegions,
            pResourceRegionStartCoordinates,
            pResourceRegionSizes,
            pHeap,
            NumRanges,
            pRangeFlags,
            pHeapRangeStartOffsets,
            pRangeTileCounts,
            Flags);

        GetWrappedObjectAs<ID3D12CommandQueue>()->UpdateTileMappings(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            NumResourceRegions,
            pResourceRegionStartCoordinates,
            pResourceRegionSizes,
            encode::GetWrappedObject<ID3D12Heap>(pHeap),
            NumRanges,
            pRangeFlags,
            pHeapRangeStartOffsets,
            pRangeTileCounts,
            Flags);

        Encode_ID3D12CommandQueue_UpdateTileMappings(
            GetCaptureId(),
            pResource,
            NumResourceRegions,
            pResourceRegionStartCoordinates,
            pResourceRegionSizes,
            pHeap,
            NumRanges,
            pRangeFlags,
            pHeapRangeStartOffsets,
            pRangeTileCounts,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_UpdateTileMappings>::Dispatch(
            manager,
            this,
            pResource,
            NumResourceRegions,
            pResourceRegionStartCoordinates,
            pResourceRegionSizes,
            pHeap,
            NumRanges,
            pRangeFlags,
            pHeapRangeStartOffsets,
            pRangeTileCounts,
            Flags);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->UpdateTileMappings(
            pResource,
            NumResourceRegions,
            pResourceRegionStartCoordinates,
            pResourceRegionSizes,
            pHeap,
            NumRanges,
            pRangeFlags,
            pHeapRangeStartOffsets,
            pRangeTileCounts,
            Flags);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::CopyTileMappings(
    ID3D12Resource* pDstResource,
    const D3D12_TILED_RESOURCE_COORDINATE* pDstRegionStartCoordinate,
    ID3D12Resource* pSrcResource,
    const D3D12_TILED_RESOURCE_COORDINATE* pSrcRegionStartCoordinate,
    const D3D12_TILE_REGION_SIZE* pRegionSize,
    D3D12_TILE_MAPPING_FLAGS Flags)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_CopyTileMappings>::Dispatch(
            manager,
            this,
            pDstResource,
            pDstRegionStartCoordinate,
            pSrcResource,
            pSrcRegionStartCoordinate,
            pRegionSize,
            Flags);

        GetWrappedObjectAs<ID3D12CommandQueue>()->CopyTileMappings(
            encode::GetWrappedObject<ID3D12Resource>(pDstResource),
            pDstRegionStartCoordinate,
            encode::GetWrappedObject<ID3D12Resource>(pSrcResource),
            pSrcRegionStartCoordinate,
            pRegionSize,
            Flags);

        Encode_ID3D12CommandQueue_CopyTileMappings(
            GetCaptureId(),
            pDstResource,
            pDstRegionStartCoordinate,
            pSrcResource,
            pSrcRegionStartCoordinate,
            pRegionSize,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_CopyTileMappings>::Dispatch(
            manager,
            this,
            pDstResource,
            pDstRegionStartCoordinate,
            pSrcResource,
            pSrcRegionStartCoordinate,
            pRegionSize,
            Flags);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->CopyTileMappings(
            pDstResource,
            pDstRegionStartCoordinate,
            pSrcResource,
            pSrcRegionStartCoordinate,
            pRegionSize,
            Flags);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::ExecuteCommandLists(
    UINT NumCommandLists,
    ID3D12CommandList* const* ppCommandLists)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_ExecuteCommandLists>::Dispatch(
            manager,
            this,
            NumCommandLists,
            ppCommandLists);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12CommandQueue>()->ExecuteCommandLists(
            NumCommandLists,
            UnwrapObjects<ID3D12CommandList>(ppCommandLists, NumCommandLists, unwrap_memory));

        Encode_ID3D12CommandQueue_ExecuteCommandLists(
            GetCaptureId(),
            NumCommandLists,
            ppCommandLists);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_ExecuteCommandLists>::Dispatch(
            manager,
            this,
            NumCommandLists,
            ppCommandLists);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->ExecuteCommandLists(
            NumCommandLists,
            ppCommandLists);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::SetMarker(
    UINT Metadata,
    const void* pData,
    UINT Size)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_SetMarker>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);

        GetWrappedObjectAs<ID3D12CommandQueue>()->SetMarker(
            Metadata,
            pData,
            Size);

        Encode_ID3D12CommandQueue_SetMarker(
            GetCaptureId(),
            Metadata,
            pData,
            Size);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_SetMarker>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->SetMarker(
            Metadata,
            pData,
            Size);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::BeginEvent(
    UINT Metadata,
    const void* pData,
    UINT Size)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_BeginEvent>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);

        GetWrappedObjectAs<ID3D12CommandQueue>()->BeginEvent(
            Metadata,
            pData,
            Size);

        Encode_ID3D12CommandQueue_BeginEvent(
            GetCaptureId(),
            Metadata,
            pData,
            Size);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_BeginEvent>::Dispatch(
            manager,
            this,
            Metadata,
            pData,
            Size);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->BeginEvent(
            Metadata,
            pData,
            Size);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::EndEvent()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_EndEvent>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<ID3D12CommandQueue>()->EndEvent();

        Encode_ID3D12CommandQueue_EndEvent(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_EndEvent>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<ID3D12CommandQueue>()->EndEvent();
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::Signal(
    ID3D12Fence* pFence,
    UINT64 Value)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_Signal>::Dispatch(
            manager,
            this,
            pFence,
            Value);

        result = GetWrappedObjectAs<ID3D12CommandQueue>()->Signal(
            encode::GetWrappedObject<ID3D12Fence>(pFence),
            Value);

        Encode_ID3D12CommandQueue_Signal(
            GetCaptureId(),
            result,
            pFence,
            Value);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_Signal>::Dispatch(
            manager,
            this,
            result,
            pFence,
            Value);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandQueue>()->Signal(
            pFence,
            Value);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::Wait(
    ID3D12Fence* pFence,
    UINT64 Value)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_Wait>::Dispatch(
            manager,
            this,
            pFence,
            Value);

        result = GetWrappedObjectAs<ID3D12CommandQueue>()->Wait(
            encode::GetWrappedObject<ID3D12Fence>(pFence),
            Value);

        Encode_ID3D12CommandQueue_Wait(
            GetCaptureId(),
            result,
            pFence,
            Value);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_Wait>::Dispatch(
            manager,
            this,
            result,
            pFence,
            Value);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandQueue>()->Wait(
            pFence,
            Value);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::GetTimestampFrequency(
    UINT64* pFrequency)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetTimestampFrequency>::Dispatch(
            manager,
            this,
            pFrequency);

        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetTimestampFrequency(
            pFrequency);

        Encode_ID3D12CommandQueue_GetTimestampFrequency(
            GetCaptureId(),
            result,
            pFrequency);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetTimestampFrequency>::Dispatch(
            manager,
            this,
            result,
            pFrequency);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetTimestampFrequency(
            pFrequency);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::GetClockCalibration(
    UINT64* pGpuTimestamp,
    UINT64* pCpuTimestamp)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetClockCalibration>::Dispatch(
            manager,
            this,
            pGpuTimestamp,
            pCpuTimestamp);

        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetClockCalibration(
            pGpuTimestamp,
            pCpuTimestamp);

        Encode_ID3D12CommandQueue_GetClockCalibration(
            GetCaptureId(),
            result,
            pGpuTimestamp,
            pCpuTimestamp);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetClockCalibration>::Dispatch(
            manager,
            this,
            result,
            pGpuTimestamp,
            pCpuTimestamp);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetClockCalibration(
            pGpuTimestamp,
            pCpuTimestamp);
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_COMMAND_QUEUE_DESC STDMETHODCALLTYPE ID3D12CommandQueue_Wrapper::GetDesc()
{
    D3D12_COMMAND_QUEUE_DESC result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetDesc();

        Encode_ID3D12CommandQueue_GetDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12CommandQueue_GetDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12CommandQueue>()->GetDesc();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device_Wrapper::ID3D12Device_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Object_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12Device_Wrapper::~ID3D12Device_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12Device>(), object_map_, object_map_lock_);
}

ID3D12Device_Wrapper* ID3D12Device_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12Device_Wrapper>(object, object_map_, object_map_lock_);
}

UINT STDMETHODCALLTYPE ID3D12Device_Wrapper::GetNodeCount()
{
    UINT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetNodeCount>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Device>()->GetNodeCount();

        Encode_ID3D12Device_GetNodeCount(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetNodeCount>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetNodeCount();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateCommandQueue(
    const D3D12_COMMAND_QUEUE_DESC* pDesc,
    REFIID riid,
    void** ppCommandQueue)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandQueue>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppCommandQueue);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandQueue(
            pDesc,
            riid,
            ppCommandQueue);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppCommandQueue, nullptr);
        }

        Encode_ID3D12Device_CreateCommandQueue(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppCommandQueue);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandQueue>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppCommandQueue);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandQueue(
            pDesc,
            riid,
            ppCommandQueue);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateCommandAllocator(
    D3D12_COMMAND_LIST_TYPE type,
    REFIID riid,
    void** ppCommandAllocator)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandAllocator>::Dispatch(
            manager,
            this,
            type,
            riid,
            ppCommandAllocator);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandAllocator(
            type,
            riid,
            ppCommandAllocator);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppCommandAllocator, nullptr);
        }

        Encode_ID3D12Device_CreateCommandAllocator(
            GetCaptureId(),
            result,
            type,
            riid,
            ppCommandAllocator);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandAllocator>::Dispatch(
            manager,
            this,
            result,
            type,
            riid,
            ppCommandAllocator);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandAllocator(
            type,
            riid,
            ppCommandAllocator);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateGraphicsPipelineState(
    const D3D12_GRAPHICS_PIPELINE_STATE_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateGraphicsPipelineState>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device>()->CreateGraphicsPipelineState(
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12Device_CreateGraphicsPipelineState(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateGraphicsPipelineState>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateGraphicsPipelineState(
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateComputePipelineState(
    const D3D12_COMPUTE_PIPELINE_STATE_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateComputePipelineState>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device>()->CreateComputePipelineState(
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12Device_CreateComputePipelineState(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateComputePipelineState>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateComputePipelineState(
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateCommandList(
    UINT nodeMask,
    D3D12_COMMAND_LIST_TYPE type,
    ID3D12CommandAllocator* pCommandAllocator,
    ID3D12PipelineState* pInitialState,
    REFIID riid,
    void** ppCommandList)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandList>::Dispatch(
            manager,
            this,
            nodeMask,
            type,
            pCommandAllocator,
            pInitialState,
            riid,
            ppCommandList);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandList(
            nodeMask,
            type,
            encode::GetWrappedObject<ID3D12CommandAllocator>(pCommandAllocator),
            encode::GetWrappedObject<ID3D12PipelineState>(pInitialState),
            riid,
            ppCommandList);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppCommandList, nullptr);
        }

        Encode_ID3D12Device_CreateCommandList(
            GetCaptureId(),
            result,
            nodeMask,
            type,
            pCommandAllocator,
            pInitialState,
            riid,
            ppCommandList);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandList>::Dispatch(
            manager,
            this,
            result,
            nodeMask,
            type,
            pCommandAllocator,
            pInitialState,
            riid,
            ppCommandList);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandList(
            nodeMask,
            type,
            pCommandAllocator,
            pInitialState,
            riid,
            ppCommandList);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CheckFeatureSupport(
    D3D12_FEATURE Feature,
    void* pFeatureSupportData,
    UINT FeatureSupportDataSize)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CheckFeatureSupport>::Dispatch(
            manager,
            this,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        result = GetWrappedObjectAs<ID3D12Device>()->CheckFeatureSupport(
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        Encode_ID3D12Device_CheckFeatureSupport(
            GetCaptureId(),
            result,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CheckFeatureSupport>::Dispatch(
            manager,
            this,
            result,
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CheckFeatureSupport(
            Feature,
            pFeatureSupportData,
            FeatureSupportDataSize);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateDescriptorHeap(
    const D3D12_DESCRIPTOR_HEAP_DESC* pDescriptorHeapDesc,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateDescriptorHeap>::Dispatch(
            manager,
            this,
            pDescriptorHeapDesc,
            riid,
            ppvHeap);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateDescriptorHeap(
            pDescriptorHeapDesc,
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device_CreateDescriptorHeap(
            GetCaptureId(),
            result,
            pDescriptorHeapDesc,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateDescriptorHeap>::Dispatch(
            manager,
            this,
            result,
            pDescriptorHeapDesc,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateDescriptorHeap(
            pDescriptorHeapDesc,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

UINT STDMETHODCALLTYPE ID3D12Device_Wrapper::GetDescriptorHandleIncrementSize(
    D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType)
{
    UINT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetDescriptorHandleIncrementSize>::Dispatch(
            manager,
            this,
            DescriptorHeapType);

        result = GetWrappedObjectAs<ID3D12Device>()->GetDescriptorHandleIncrementSize(
            DescriptorHeapType);

        Encode_ID3D12Device_GetDescriptorHandleIncrementSize(
            GetCaptureId(),
            result,
            DescriptorHeapType);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetDescriptorHandleIncrementSize>::Dispatch(
            manager,
            this,
            result,
            DescriptorHeapType);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetDescriptorHandleIncrementSize(
            DescriptorHeapType);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateRootSignature(
    UINT nodeMask,
    const void* pBlobWithRootSignature,
    SIZE_T blobLengthInBytes,
    REFIID riid,
    void** ppvRootSignature)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateRootSignature>::Dispatch(
            manager,
            this,
            nodeMask,
            pBlobWithRootSignature,
            blobLengthInBytes,
            riid,
            ppvRootSignature);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateRootSignature(
            nodeMask,
            pBlobWithRootSignature,
            blobLengthInBytes,
            riid,
            ppvRootSignature);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvRootSignature, nullptr);
        }

        Encode_ID3D12Device_CreateRootSignature(
            GetCaptureId(),
            result,
            nodeMask,
            pBlobWithRootSignature,
            blobLengthInBytes,
            riid,
            ppvRootSignature);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateRootSignature>::Dispatch(
            manager,
            this,
            result,
            nodeMask,
            pBlobWithRootSignature,
            blobLengthInBytes,
            riid,
            ppvRootSignature);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateRootSignature(
            nodeMask,
            pBlobWithRootSignature,
            blobLengthInBytes,
            riid,
            ppvRootSignature);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateConstantBufferView(
    const D3D12_CONSTANT_BUFFER_VIEW_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateConstantBufferView>::Dispatch(
            manager,
            this,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateConstantBufferView(
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateConstantBufferView(
            GetCaptureId(),
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateConstantBufferView>::Dispatch(
            manager,
            this,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateConstantBufferView(
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateShaderResourceView(
    ID3D12Resource* pResource,
    const D3D12_SHADER_RESOURCE_VIEW_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateShaderResourceView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateShaderResourceView(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateShaderResourceView(
            GetCaptureId(),
            pResource,
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateShaderResourceView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateShaderResourceView(
            pResource,
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateUnorderedAccessView(
    ID3D12Resource* pResource,
    ID3D12Resource* pCounterResource,
    const D3D12_UNORDERED_ACCESS_VIEW_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateUnorderedAccessView>::Dispatch(
            manager,
            this,
            pResource,
            pCounterResource,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateUnorderedAccessView(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            encode::GetWrappedObject<ID3D12Resource>(pCounterResource),
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateUnorderedAccessView(
            GetCaptureId(),
            pResource,
            pCounterResource,
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateUnorderedAccessView>::Dispatch(
            manager,
            this,
            pResource,
            pCounterResource,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateUnorderedAccessView(
            pResource,
            pCounterResource,
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateRenderTargetView(
    ID3D12Resource* pResource,
    const D3D12_RENDER_TARGET_VIEW_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateRenderTargetView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateRenderTargetView(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateRenderTargetView(
            GetCaptureId(),
            pResource,
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateRenderTargetView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateRenderTargetView(
            pResource,
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateDepthStencilView(
    ID3D12Resource* pResource,
    const D3D12_DEPTH_STENCIL_VIEW_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateDepthStencilView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateDepthStencilView(
            encode::GetWrappedObject<ID3D12Resource>(pResource),
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateDepthStencilView(
            GetCaptureId(),
            pResource,
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateDepthStencilView>::Dispatch(
            manager,
            this,
            pResource,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateDepthStencilView(
            pResource,
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateSampler(
    const D3D12_SAMPLER_DESC* pDesc,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateSampler>::Dispatch(
            manager,
            this,
            pDesc,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CreateSampler(
            pDesc,
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device_CreateSampler(
            GetCaptureId(),
            pDesc,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateSampler>::Dispatch(
            manager,
            this,
            pDesc,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CreateSampler(
            pDesc,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CopyDescriptors(
    UINT NumDestDescriptorRanges,
    const D3D12_CPU_DESCRIPTOR_HANDLE* pDestDescriptorRangeStarts,
    const UINT* pDestDescriptorRangeSizes,
    UINT NumSrcDescriptorRanges,
    const D3D12_CPU_DESCRIPTOR_HANDLE* pSrcDescriptorRangeStarts,
    const UINT* pSrcDescriptorRangeSizes,
    D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CopyDescriptors>::Dispatch(
            manager,
            this,
            NumDestDescriptorRanges,
            pDestDescriptorRangeStarts,
            pDestDescriptorRangeSizes,
            NumSrcDescriptorRanges,
            pSrcDescriptorRangeStarts,
            pSrcDescriptorRangeSizes,
            DescriptorHeapsType);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CopyDescriptors(
            NumDestDescriptorRanges,
            UnwrapStructArrayObjects(pDestDescriptorRangeStarts, NumDestDescriptorRanges, unwrap_memory),
            pDestDescriptorRangeSizes,
            NumSrcDescriptorRanges,
            UnwrapStructArrayObjects(pSrcDescriptorRangeStarts, NumSrcDescriptorRanges, unwrap_memory),
            pSrcDescriptorRangeSizes,
            DescriptorHeapsType);

        Encode_ID3D12Device_CopyDescriptors(
            GetCaptureId(),
            NumDestDescriptorRanges,
            pDestDescriptorRangeStarts,
            pDestDescriptorRangeSizes,
            NumSrcDescriptorRanges,
            pSrcDescriptorRangeStarts,
            pSrcDescriptorRangeSizes,
            DescriptorHeapsType);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CopyDescriptors>::Dispatch(
            manager,
            this,
            NumDestDescriptorRanges,
            pDestDescriptorRangeStarts,
            pDestDescriptorRangeSizes,
            NumSrcDescriptorRanges,
            pSrcDescriptorRangeStarts,
            pSrcDescriptorRangeSizes,
            DescriptorHeapsType);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CopyDescriptors(
            NumDestDescriptorRanges,
            pDestDescriptorRangeStarts,
            pDestDescriptorRangeSizes,
            NumSrcDescriptorRanges,
            pSrcDescriptorRangeStarts,
            pSrcDescriptorRangeSizes,
            DescriptorHeapsType);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::CopyDescriptorsSimple(
    UINT NumDescriptors,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
    D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
    D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CopyDescriptorsSimple>::Dispatch(
            manager,
            this,
            NumDescriptors,
            DestDescriptorRangeStart,
            SrcDescriptorRangeStart,
            DescriptorHeapsType);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device>()->CopyDescriptorsSimple(
            NumDescriptors,
            *UnwrapStructPtrObjects(&DestDescriptorRangeStart, unwrap_memory),
            *UnwrapStructPtrObjects(&SrcDescriptorRangeStart, unwrap_memory),
            DescriptorHeapsType);

        Encode_ID3D12Device_CopyDescriptorsSimple(
            GetCaptureId(),
            NumDescriptors,
            DestDescriptorRangeStart,
            SrcDescriptorRangeStart,
            DescriptorHeapsType);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CopyDescriptorsSimple>::Dispatch(
            manager,
            this,
            NumDescriptors,
            DestDescriptorRangeStart,
            SrcDescriptorRangeStart,
            DescriptorHeapsType);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->CopyDescriptorsSimple(
            NumDescriptors,
            DestDescriptorRangeStart,
            SrcDescriptorRangeStart,
            DescriptorHeapsType);
    }

    manager->DecrementCallScope();
}

D3D12_RESOURCE_ALLOCATION_INFO STDMETHODCALLTYPE ID3D12Device_Wrapper::GetResourceAllocationInfo(
    UINT visibleMask,
    UINT numResourceDescs,
    const D3D12_RESOURCE_DESC* pResourceDescs)
{
    D3D12_RESOURCE_ALLOCATION_INFO result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetResourceAllocationInfo>::Dispatch(
            manager,
            this,
            visibleMask,
            numResourceDescs,
            pResourceDescs);

        result = GetWrappedObjectAs<ID3D12Device>()->GetResourceAllocationInfo(
            visibleMask,
            numResourceDescs,
            pResourceDescs);

        Encode_ID3D12Device_GetResourceAllocationInfo(
            GetCaptureId(),
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetResourceAllocationInfo>::Dispatch(
            manager,
            this,
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetResourceAllocationInfo(
            visibleMask,
            numResourceDescs,
            pResourceDescs);
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_HEAP_PROPERTIES STDMETHODCALLTYPE ID3D12Device_Wrapper::GetCustomHeapProperties(
    UINT nodeMask,
    D3D12_HEAP_TYPE heapType)
{
    D3D12_HEAP_PROPERTIES result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetCustomHeapProperties>::Dispatch(
            manager,
            this,
            nodeMask,
            heapType);

        result = GetWrappedObjectAs<ID3D12Device>()->GetCustomHeapProperties(
            nodeMask,
            heapType);

        Encode_ID3D12Device_GetCustomHeapProperties(
            GetCaptureId(),
            result,
            nodeMask,
            heapType);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetCustomHeapProperties>::Dispatch(
            manager,
            this,
            result,
            nodeMask,
            heapType);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetCustomHeapProperties(
            nodeMask,
            heapType);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateCommittedResource(
    const D3D12_HEAP_PROPERTIES* pHeapProperties,
    D3D12_HEAP_FLAGS HeapFlags,
    const D3D12_RESOURCE_DESC* pDesc,
    D3D12_RESOURCE_STATES InitialResourceState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    REFIID riidResource,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommittedResource>::Dispatch(
            manager,
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            riidResource,
            ppvResource);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device_CreateCommittedResource(
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            riidResource,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riidResource, ppvResource, nullptr);
        }

        Encode_ID3D12Device_CreateCommittedResource(
            GetCaptureId(),
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            riidResource,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommittedResource>::Dispatch(
            manager,
            this,
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            riidResource,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommittedResource(
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            riidResource,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateHeap(
    const D3D12_HEAP_DESC* pDesc,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateHeap>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppvHeap);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device_CreateHeap(
            this,
            pDesc,
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device_CreateHeap(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateHeap>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateHeap(
            pDesc,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreatePlacedResource(
    ID3D12Heap* pHeap,
    UINT64 HeapOffset,
    const D3D12_RESOURCE_DESC* pDesc,
    D3D12_RESOURCE_STATES InitialState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    REFIID riid,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreatePlacedResource>::Dispatch(
            manager,
            this,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        result = GetWrappedObjectAs<ID3D12Device>()->CreatePlacedResource(
            encode::GetWrappedObject<ID3D12Heap>(pHeap),
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvResource, nullptr);
        }

        Encode_ID3D12Device_CreatePlacedResource(
            GetCaptureId(),
            result,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreatePlacedResource>::Dispatch(
            manager,
            this,
            result,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreatePlacedResource(
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateReservedResource(
    const D3D12_RESOURCE_DESC* pDesc,
    D3D12_RESOURCE_STATES InitialState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    REFIID riid,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateReservedResource>::Dispatch(
            manager,
            this,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateReservedResource(
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvResource, nullptr);
        }

        Encode_ID3D12Device_CreateReservedResource(
            GetCaptureId(),
            result,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateReservedResource>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateReservedResource(
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateSharedHandle(
    ID3D12DeviceChild* pObject,
    const SECURITY_ATTRIBUTES* pAttributes,
    DWORD Access,
    LPCWSTR Name,
    HANDLE* pHandle)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateSharedHandle>::Dispatch(
            manager,
            this,
            pObject,
            pAttributes,
            Access,
            Name,
            pHandle);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateSharedHandle(
            encode::GetWrappedObject<ID3D12DeviceChild>(pObject),
            pAttributes,
            Access,
            Name,
            pHandle);

        Encode_ID3D12Device_CreateSharedHandle(
            GetCaptureId(),
            result,
            pObject,
            pAttributes,
            Access,
            Name,
            pHandle);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateSharedHandle>::Dispatch(
            manager,
            this,
            result,
            pObject,
            pAttributes,
            Access,
            Name,
            pHandle);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateSharedHandle(
            pObject,
            pAttributes,
            Access,
            Name,
            pHandle);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::OpenSharedHandle(
    HANDLE NTHandle,
    REFIID riid,
    void** ppvObj)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_OpenSharedHandle>::Dispatch(
            manager,
            this,
            NTHandle,
            riid,
            ppvObj);

        result = GetWrappedObjectAs<ID3D12Device>()->OpenSharedHandle(
            NTHandle,
            riid,
            ppvObj);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvObj, nullptr);
        }

        Encode_ID3D12Device_OpenSharedHandle(
            GetCaptureId(),
            result,
            NTHandle,
            riid,
            ppvObj);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_OpenSharedHandle>::Dispatch(
            manager,
            this,
            result,
            NTHandle,
            riid,
            ppvObj);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->OpenSharedHandle(
            NTHandle,
            riid,
            ppvObj);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::OpenSharedHandleByName(
    LPCWSTR Name,
    DWORD Access,
    HANDLE* pNTHandle)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_OpenSharedHandleByName>::Dispatch(
            manager,
            this,
            Name,
            Access,
            pNTHandle);

        result = GetWrappedObjectAs<ID3D12Device>()->OpenSharedHandleByName(
            Name,
            Access,
            pNTHandle);

        Encode_ID3D12Device_OpenSharedHandleByName(
            GetCaptureId(),
            result,
            Name,
            Access,
            pNTHandle);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_OpenSharedHandleByName>::Dispatch(
            manager,
            this,
            result,
            Name,
            Access,
            pNTHandle);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->OpenSharedHandleByName(
            Name,
            Access,
            pNTHandle);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::MakeResident(
    UINT NumObjects,
    ID3D12Pageable* const* ppObjects)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_MakeResident>::Dispatch(
            manager,
            this,
            NumObjects,
            ppObjects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device>()->MakeResident(
            NumObjects,
            UnwrapObjects<ID3D12Pageable>(ppObjects, NumObjects, unwrap_memory));

        Encode_ID3D12Device_MakeResident(
            GetCaptureId(),
            result,
            NumObjects,
            ppObjects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_MakeResident>::Dispatch(
            manager,
            this,
            result,
            NumObjects,
            ppObjects);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->MakeResident(
            NumObjects,
            ppObjects);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::Evict(
    UINT NumObjects,
    ID3D12Pageable* const* ppObjects)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_Evict>::Dispatch(
            manager,
            this,
            NumObjects,
            ppObjects);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device>()->Evict(
            NumObjects,
            UnwrapObjects<ID3D12Pageable>(ppObjects, NumObjects, unwrap_memory));

        Encode_ID3D12Device_Evict(
            GetCaptureId(),
            result,
            NumObjects,
            ppObjects);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_Evict>::Dispatch(
            manager,
            this,
            result,
            NumObjects,
            ppObjects);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->Evict(
            NumObjects,
            ppObjects);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateFence(
    UINT64 InitialValue,
    D3D12_FENCE_FLAGS Flags,
    REFIID riid,
    void** ppFence)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateFence>::Dispatch(
            manager,
            this,
            InitialValue,
            Flags,
            riid,
            ppFence);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateFence(
            InitialValue,
            Flags,
            riid,
            ppFence);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppFence, nullptr);
        }

        Encode_ID3D12Device_CreateFence(
            GetCaptureId(),
            result,
            InitialValue,
            Flags,
            riid,
            ppFence);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateFence>::Dispatch(
            manager,
            this,
            result,
            InitialValue,
            Flags,
            riid,
            ppFence);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateFence(
            InitialValue,
            Flags,
            riid,
            ppFence);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::GetDeviceRemovedReason()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetDeviceRemovedReason>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Device>()->GetDeviceRemovedReason();

        Encode_ID3D12Device_GetDeviceRemovedReason(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetDeviceRemovedReason>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetDeviceRemovedReason();
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::GetCopyableFootprints(
    const D3D12_RESOURCE_DESC* pResourceDesc,
    UINT FirstSubresource,
    UINT NumSubresources,
    UINT64 BaseOffset,
    D3D12_PLACED_SUBRESOURCE_FOOTPRINT* pLayouts,
    UINT* pNumRows,
    UINT64* pRowSizeInBytes,
    UINT64* pTotalBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetCopyableFootprints>::Dispatch(
            manager,
            this,
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        GetWrappedObjectAs<ID3D12Device>()->GetCopyableFootprints(
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        Encode_ID3D12Device_GetCopyableFootprints(
            GetCaptureId(),
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetCopyableFootprints>::Dispatch(
            manager,
            this,
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->GetCopyableFootprints(
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateQueryHeap(
    const D3D12_QUERY_HEAP_DESC* pDesc,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateQueryHeap>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppvHeap);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateQueryHeap(
            pDesc,
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device_CreateQueryHeap(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateQueryHeap>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateQueryHeap(
            pDesc,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::SetStablePowerState(
    BOOL Enable)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_SetStablePowerState>::Dispatch(
            manager,
            this,
            Enable);

        result = GetWrappedObjectAs<ID3D12Device>()->SetStablePowerState(
            Enable);

        Encode_ID3D12Device_SetStablePowerState(
            GetCaptureId(),
            result,
            Enable);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_SetStablePowerState>::Dispatch(
            manager,
            this,
            result,
            Enable);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->SetStablePowerState(
            Enable);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device_Wrapper::CreateCommandSignature(
    const D3D12_COMMAND_SIGNATURE_DESC* pDesc,
    ID3D12RootSignature* pRootSignature,
    REFIID riid,
    void** ppvCommandSignature)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandSignature>::Dispatch(
            manager,
            this,
            pDesc,
            pRootSignature,
            riid,
            ppvCommandSignature);

        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandSignature(
            pDesc,
            encode::GetWrappedObject<ID3D12RootSignature>(pRootSignature),
            riid,
            ppvCommandSignature);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvCommandSignature, nullptr);
        }

        Encode_ID3D12Device_CreateCommandSignature(
            GetCaptureId(),
            result,
            pDesc,
            pRootSignature,
            riid,
            ppvCommandSignature);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_CreateCommandSignature>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            pRootSignature,
            riid,
            ppvCommandSignature);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->CreateCommandSignature(
            pDesc,
            pRootSignature,
            riid,
            ppvCommandSignature);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device_Wrapper::GetResourceTiling(
    ID3D12Resource* pTiledResource,
    UINT* pNumTilesForEntireResource,
    D3D12_PACKED_MIP_INFO* pPackedMipDesc,
    D3D12_TILE_SHAPE* pStandardTileShapeForNonPackedMips,
    UINT* pNumSubresourceTilings,
    UINT FirstSubresourceTilingToGet,
    D3D12_SUBRESOURCE_TILING* pSubresourceTilingsForNonPackedMips)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetResourceTiling>::Dispatch(
            manager,
            this,
            pTiledResource,
            pNumTilesForEntireResource,
            pPackedMipDesc,
            pStandardTileShapeForNonPackedMips,
            pNumSubresourceTilings,
            FirstSubresourceTilingToGet,
            pSubresourceTilingsForNonPackedMips);

        GetWrappedObjectAs<ID3D12Device>()->GetResourceTiling(
            encode::GetWrappedObject<ID3D12Resource>(pTiledResource),
            pNumTilesForEntireResource,
            pPackedMipDesc,
            pStandardTileShapeForNonPackedMips,
            pNumSubresourceTilings,
            FirstSubresourceTilingToGet,
            pSubresourceTilingsForNonPackedMips);

        Encode_ID3D12Device_GetResourceTiling(
            GetCaptureId(),
            pTiledResource,
            pNumTilesForEntireResource,
            pPackedMipDesc,
            pStandardTileShapeForNonPackedMips,
            pNumSubresourceTilings,
            FirstSubresourceTilingToGet,
            pSubresourceTilingsForNonPackedMips);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetResourceTiling>::Dispatch(
            manager,
            this,
            pTiledResource,
            pNumTilesForEntireResource,
            pPackedMipDesc,
            pStandardTileShapeForNonPackedMips,
            pNumSubresourceTilings,
            FirstSubresourceTilingToGet,
            pSubresourceTilingsForNonPackedMips);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device>()->GetResourceTiling(
            pTiledResource,
            pNumTilesForEntireResource,
            pPackedMipDesc,
            pStandardTileShapeForNonPackedMips,
            pNumSubresourceTilings,
            FirstSubresourceTilingToGet,
            pSubresourceTilingsForNonPackedMips);
    }

    manager->DecrementCallScope();
}

LUID STDMETHODCALLTYPE ID3D12Device_Wrapper::GetAdapterLuid()
{
    LUID result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device_GetAdapterLuid>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Device>()->GetAdapterLuid();

        Encode_ID3D12Device_GetAdapterLuid(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device_GetAdapterLuid>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device>()->GetAdapterLuid();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12PipelineLibrary_Wrapper::ID3D12PipelineLibrary_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12PipelineLibrary_Wrapper::~ID3D12PipelineLibrary_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12PipelineLibrary>(), object_map_, object_map_lock_);
}

ID3D12PipelineLibrary_Wrapper* ID3D12PipelineLibrary_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12PipelineLibrary_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineLibrary_Wrapper::StorePipeline(
    LPCWSTR pName,
    ID3D12PipelineState* pPipeline)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_StorePipeline>::Dispatch(
            manager,
            this,
            pName,
            pPipeline);

        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->StorePipeline(
            pName,
            encode::GetWrappedObject<ID3D12PipelineState>(pPipeline));

        Encode_ID3D12PipelineLibrary_StorePipeline(
            GetCaptureId(),
            result,
            pName,
            pPipeline);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_StorePipeline>::Dispatch(
            manager,
            this,
            result,
            pName,
            pPipeline);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->StorePipeline(
            pName,
            pPipeline);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineLibrary_Wrapper::LoadGraphicsPipeline(
    LPCWSTR pName,
    const D3D12_GRAPHICS_PIPELINE_STATE_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_LoadGraphicsPipeline>::Dispatch(
            manager,
            this,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = D3D12CaptureManager::Get()->OverrideID3D12PipelineLibrary_LoadGraphicsPipeline(
            this,
            pName,
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12PipelineLibrary_LoadGraphicsPipeline(
            GetCaptureId(),
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_LoadGraphicsPipeline>::Dispatch(
            manager,
            this,
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->LoadGraphicsPipeline(
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineLibrary_Wrapper::LoadComputePipeline(
    LPCWSTR pName,
    const D3D12_COMPUTE_PIPELINE_STATE_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_LoadComputePipeline>::Dispatch(
            manager,
            this,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = D3D12CaptureManager::Get()->OverrideID3D12PipelineLibrary_LoadComputePipeline(
            this,
            pName,
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12PipelineLibrary_LoadComputePipeline(
            GetCaptureId(),
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_LoadComputePipeline>::Dispatch(
            manager,
            this,
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->LoadComputePipeline(
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

SIZE_T STDMETHODCALLTYPE ID3D12PipelineLibrary_Wrapper::GetSerializedSize()
{
    SIZE_T result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_GetSerializedSize>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->GetSerializedSize();

        Encode_ID3D12PipelineLibrary_GetSerializedSize(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_GetSerializedSize>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->GetSerializedSize();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineLibrary_Wrapper::Serialize(
    void* pData,
    SIZE_T DataSizeInBytes)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_Serialize>::Dispatch(
            manager,
            this,
            pData,
            DataSizeInBytes);

        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->Serialize(
            pData,
            DataSizeInBytes);

        Encode_ID3D12PipelineLibrary_Serialize(
            GetCaptureId(),
            result,
            pData,
            DataSizeInBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary_Serialize>::Dispatch(
            manager,
            this,
            result,
            pData,
            DataSizeInBytes);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary>()->Serialize(
            pData,
            DataSizeInBytes);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12PipelineLibrary1_Wrapper::ID3D12PipelineLibrary1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12PipelineLibrary_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12PipelineLibrary1_Wrapper::LoadPipeline(
    LPCWSTR pName,
    const D3D12_PIPELINE_STATE_STREAM_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary1_LoadPipeline>::Dispatch(
            manager,
            this,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = D3D12CaptureManager::Get()->OverrideID3D12PipelineLibrary1_LoadPipeline(
            this,
            pName,
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12PipelineLibrary1_LoadPipeline(
            GetCaptureId(),
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12PipelineLibrary1_LoadPipeline>::Dispatch(
            manager,
            this,
            result,
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12PipelineLibrary1>()->LoadPipeline(
            pName,
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device1_Wrapper::ID3D12Device1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device1_Wrapper::CreatePipelineLibrary(
    const void* pLibraryBlob,
    SIZE_T BlobLength,
    REFIID riid,
    void** ppPipelineLibrary)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device1_CreatePipelineLibrary>::Dispatch(
            manager,
            this,
            pLibraryBlob,
            BlobLength,
            riid,
            ppPipelineLibrary);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device1_CreatePipelineLibrary(
            this,
            pLibraryBlob,
            BlobLength,
            riid,
            ppPipelineLibrary);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineLibrary, nullptr);
        }

        Encode_ID3D12Device1_CreatePipelineLibrary(
            GetCaptureId(),
            result,
            pLibraryBlob,
            BlobLength,
            riid,
            ppPipelineLibrary);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device1_CreatePipelineLibrary>::Dispatch(
            manager,
            this,
            result,
            pLibraryBlob,
            BlobLength,
            riid,
            ppPipelineLibrary);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device1>()->CreatePipelineLibrary(
            pLibraryBlob,
            BlobLength,
            riid,
            ppPipelineLibrary);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device1_Wrapper::SetEventOnMultipleFenceCompletion(
    ID3D12Fence* const* ppFences,
    const UINT64* pFenceValues,
    UINT NumFences,
    D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
    HANDLE hEvent)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device1_SetEventOnMultipleFenceCompletion>::Dispatch(
            manager,
            this,
            ppFences,
            pFenceValues,
            NumFences,
            Flags,
            hEvent);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device1>()->SetEventOnMultipleFenceCompletion(
            UnwrapObjects<ID3D12Fence>(ppFences, NumFences, unwrap_memory),
            pFenceValues,
            NumFences,
            Flags,
            hEvent);

        Encode_ID3D12Device1_SetEventOnMultipleFenceCompletion(
            GetCaptureId(),
            result,
            ppFences,
            pFenceValues,
            NumFences,
            Flags,
            hEvent);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device1_SetEventOnMultipleFenceCompletion>::Dispatch(
            manager,
            this,
            result,
            ppFences,
            pFenceValues,
            NumFences,
            Flags,
            hEvent);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device1>()->SetEventOnMultipleFenceCompletion(
            ppFences,
            pFenceValues,
            NumFences,
            Flags,
            hEvent);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device1_Wrapper::SetResidencyPriority(
    UINT NumObjects,
    ID3D12Pageable* const* ppObjects,
    const D3D12_RESIDENCY_PRIORITY* pPriorities)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device1_SetResidencyPriority>::Dispatch(
            manager,
            this,
            NumObjects,
            ppObjects,
            pPriorities);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device1>()->SetResidencyPriority(
            NumObjects,
            UnwrapObjects<ID3D12Pageable>(ppObjects, NumObjects, unwrap_memory),
            pPriorities);

        Encode_ID3D12Device1_SetResidencyPriority(
            GetCaptureId(),
            result,
            NumObjects,
            ppObjects,
            pPriorities);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device1_SetResidencyPriority>::Dispatch(
            manager,
            this,
            result,
            NumObjects,
            ppObjects,
            pPriorities);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device1>()->SetResidencyPriority(
            NumObjects,
            ppObjects,
            pPriorities);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device2_Wrapper::ID3D12Device2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device1_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device2_Wrapper::CreatePipelineState(
    const D3D12_PIPELINE_STATE_STREAM_DESC* pDesc,
    REFIID riid,
    void** ppPipelineState)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device2_CreatePipelineState>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppPipelineState);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device2>()->CreatePipelineState(
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppPipelineState);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppPipelineState, nullptr);
        }

        Encode_ID3D12Device2_CreatePipelineState(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppPipelineState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device2_CreatePipelineState>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppPipelineState);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device2>()->CreatePipelineState(
            pDesc,
            riid,
            ppPipelineState);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device3_Wrapper::ID3D12Device3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device2_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device3_Wrapper::OpenExistingHeapFromAddress(
    const void* pAddress,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device3_OpenExistingHeapFromAddress>::Dispatch(
            manager,
            this,
            pAddress,
            riid,
            ppvHeap);

        result = GetWrappedObjectAs<ID3D12Device3>()->OpenExistingHeapFromAddress(
            pAddress,
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device3_OpenExistingHeapFromAddress(
            GetCaptureId(),
            result,
            pAddress,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device3_OpenExistingHeapFromAddress>::Dispatch(
            manager,
            this,
            result,
            pAddress,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device3>()->OpenExistingHeapFromAddress(
            pAddress,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device3_Wrapper::OpenExistingHeapFromFileMapping(
    HANDLE hFileMapping,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device3_OpenExistingHeapFromFileMapping>::Dispatch(
            manager,
            this,
            hFileMapping,
            riid,
            ppvHeap);

        result = GetWrappedObjectAs<ID3D12Device3>()->OpenExistingHeapFromFileMapping(
            hFileMapping,
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device3_OpenExistingHeapFromFileMapping(
            GetCaptureId(),
            result,
            hFileMapping,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device3_OpenExistingHeapFromFileMapping>::Dispatch(
            manager,
            this,
            result,
            hFileMapping,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device3>()->OpenExistingHeapFromFileMapping(
            hFileMapping,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device3_Wrapper::EnqueueMakeResident(
    D3D12_RESIDENCY_FLAGS Flags,
    UINT NumObjects,
    ID3D12Pageable* const* ppObjects,
    ID3D12Fence* pFenceToSignal,
    UINT64 FenceValueToSignal)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device3_EnqueueMakeResident>::Dispatch(
            manager,
            this,
            Flags,
            NumObjects,
            ppObjects,
            pFenceToSignal,
            FenceValueToSignal);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device3>()->EnqueueMakeResident(
            Flags,
            NumObjects,
            UnwrapObjects<ID3D12Pageable>(ppObjects, NumObjects, unwrap_memory),
            encode::GetWrappedObject<ID3D12Fence>(pFenceToSignal),
            FenceValueToSignal);

        Encode_ID3D12Device3_EnqueueMakeResident(
            GetCaptureId(),
            result,
            Flags,
            NumObjects,
            ppObjects,
            pFenceToSignal,
            FenceValueToSignal);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device3_EnqueueMakeResident>::Dispatch(
            manager,
            this,
            result,
            Flags,
            NumObjects,
            ppObjects,
            pFenceToSignal,
            FenceValueToSignal);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device3>()->EnqueueMakeResident(
            Flags,
            NumObjects,
            ppObjects,
            pFenceToSignal,
            FenceValueToSignal);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12ProtectedSession_Wrapper::ID3D12ProtectedSession_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12ProtectedSession_Wrapper::GetStatusFence(
    REFIID riid,
    void** ppFence)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12ProtectedSession_GetStatusFence>::Dispatch(
            manager,
            this,
            riid,
            ppFence);

        result = GetWrappedObjectAs<ID3D12ProtectedSession>()->GetStatusFence(
            riid,
            ppFence);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppFence, nullptr);
        }

        Encode_ID3D12ProtectedSession_GetStatusFence(
            GetCaptureId(),
            result,
            riid,
            ppFence);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12ProtectedSession_GetStatusFence>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppFence);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12ProtectedSession>()->GetStatusFence(
            riid,
            ppFence);
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_PROTECTED_SESSION_STATUS STDMETHODCALLTYPE ID3D12ProtectedSession_Wrapper::GetSessionStatus()
{
    D3D12_PROTECTED_SESSION_STATUS result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12ProtectedSession_GetSessionStatus>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12ProtectedSession>()->GetSessionStatus();

        Encode_ID3D12ProtectedSession_GetSessionStatus(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12ProtectedSession_GetSessionStatus>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12ProtectedSession>()->GetSessionStatus();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12ProtectedResourceSession_Wrapper::ID3D12ProtectedResourceSession_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12ProtectedSession_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12ProtectedResourceSession_Wrapper::~ID3D12ProtectedResourceSession_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12ProtectedResourceSession>(), object_map_, object_map_lock_);
}

ID3D12ProtectedResourceSession_Wrapper* ID3D12ProtectedResourceSession_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12ProtectedResourceSession_Wrapper>(object, object_map_, object_map_lock_);
}

D3D12_PROTECTED_RESOURCE_SESSION_DESC STDMETHODCALLTYPE ID3D12ProtectedResourceSession_Wrapper::GetDesc()
{
    D3D12_PROTECTED_RESOURCE_SESSION_DESC result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12ProtectedResourceSession_GetDesc>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12ProtectedResourceSession>()->GetDesc();

        Encode_ID3D12ProtectedResourceSession_GetDesc(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12ProtectedResourceSession_GetDesc>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12ProtectedResourceSession>()->GetDesc();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device4_Wrapper::ID3D12Device4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device3_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device4_Wrapper::CreateCommandList1(
    UINT nodeMask,
    D3D12_COMMAND_LIST_TYPE type,
    D3D12_COMMAND_LIST_FLAGS flags,
    REFIID riid,
    void** ppCommandList)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateCommandList1>::Dispatch(
            manager,
            this,
            nodeMask,
            type,
            flags,
            riid,
            ppCommandList);

        result = GetWrappedObjectAs<ID3D12Device4>()->CreateCommandList1(
            nodeMask,
            type,
            flags,
            riid,
            ppCommandList);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppCommandList, nullptr);
        }

        Encode_ID3D12Device4_CreateCommandList1(
            GetCaptureId(),
            result,
            nodeMask,
            type,
            flags,
            riid,
            ppCommandList);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateCommandList1>::Dispatch(
            manager,
            this,
            result,
            nodeMask,
            type,
            flags,
            riid,
            ppCommandList);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->CreateCommandList1(
            nodeMask,
            type,
            flags,
            riid,
            ppCommandList);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device4_Wrapper::CreateProtectedResourceSession(
    const D3D12_PROTECTED_RESOURCE_SESSION_DESC* pDesc,
    REFIID riid,
    void** ppSession)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateProtectedResourceSession>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppSession);

        result = GetWrappedObjectAs<ID3D12Device4>()->CreateProtectedResourceSession(
            pDesc,
            riid,
            ppSession);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppSession, nullptr);
        }

        Encode_ID3D12Device4_CreateProtectedResourceSession(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppSession);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateProtectedResourceSession>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppSession);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->CreateProtectedResourceSession(
            pDesc,
            riid,
            ppSession);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device4_Wrapper::CreateCommittedResource1(
    const D3D12_HEAP_PROPERTIES* pHeapProperties,
    D3D12_HEAP_FLAGS HeapFlags,
    const D3D12_RESOURCE_DESC* pDesc,
    D3D12_RESOURCE_STATES InitialResourceState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    ID3D12ProtectedResourceSession* pProtectedSession,
    REFIID riidResource,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateCommittedResource1>::Dispatch(
            manager,
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device_CreateCommittedResource1(
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            encode::GetWrappedObject<ID3D12ProtectedResourceSession>(pProtectedSession),
            riidResource,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riidResource, ppvResource, nullptr);
        }

        Encode_ID3D12Device4_CreateCommittedResource1(
            GetCaptureId(),
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateCommittedResource1>::Dispatch(
            manager,
            this,
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->CreateCommittedResource1(
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device4_Wrapper::CreateHeap1(
    const D3D12_HEAP_DESC* pDesc,
    ID3D12ProtectedResourceSession* pProtectedSession,
    REFIID riid,
    void** ppvHeap)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateHeap1>::Dispatch(
            manager,
            this,
            pDesc,
            pProtectedSession,
            riid,
            ppvHeap);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device_CreateHeap1(
            this,
            pDesc,
            encode::GetWrappedObject<ID3D12ProtectedResourceSession>(pProtectedSession),
            riid,
            ppvHeap);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvHeap, nullptr);
        }

        Encode_ID3D12Device4_CreateHeap1(
            GetCaptureId(),
            result,
            pDesc,
            pProtectedSession,
            riid,
            ppvHeap);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateHeap1>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            pProtectedSession,
            riid,
            ppvHeap);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->CreateHeap1(
            pDesc,
            pProtectedSession,
            riid,
            ppvHeap);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device4_Wrapper::CreateReservedResource1(
    const D3D12_RESOURCE_DESC* pDesc,
    D3D12_RESOURCE_STATES InitialState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    ID3D12ProtectedResourceSession* pProtectedSession,
    REFIID riid,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateReservedResource1>::Dispatch(
            manager,
            this,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            pProtectedSession,
            riid,
            ppvResource);

        result = GetWrappedObjectAs<ID3D12Device4>()->CreateReservedResource1(
            pDesc,
            InitialState,
            pOptimizedClearValue,
            encode::GetWrappedObject<ID3D12ProtectedResourceSession>(pProtectedSession),
            riid,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvResource, nullptr);
        }

        Encode_ID3D12Device4_CreateReservedResource1(
            GetCaptureId(),
            result,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            pProtectedSession,
            riid,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_CreateReservedResource1>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            pProtectedSession,
            riid,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->CreateReservedResource1(
            pDesc,
            InitialState,
            pOptimizedClearValue,
            pProtectedSession,
            riid,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

D3D12_RESOURCE_ALLOCATION_INFO STDMETHODCALLTYPE ID3D12Device4_Wrapper::GetResourceAllocationInfo1(
    UINT visibleMask,
    UINT numResourceDescs,
    const D3D12_RESOURCE_DESC* pResourceDescs,
    D3D12_RESOURCE_ALLOCATION_INFO1* pResourceAllocationInfo1)
{
    D3D12_RESOURCE_ALLOCATION_INFO result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device4_GetResourceAllocationInfo1>::Dispatch(
            manager,
            this,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        result = GetWrappedObjectAs<ID3D12Device4>()->GetResourceAllocationInfo1(
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        Encode_ID3D12Device4_GetResourceAllocationInfo1(
            GetCaptureId(),
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device4_GetResourceAllocationInfo1>::Dispatch(
            manager,
            this,
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device4>()->GetResourceAllocationInfo1(
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12LifetimeOwner_Wrapper::ID3D12LifetimeOwner_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12LifetimeOwner_Wrapper::~ID3D12LifetimeOwner_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12LifetimeOwner>(), object_map_, object_map_lock_);
}

ID3D12LifetimeOwner_Wrapper* ID3D12LifetimeOwner_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12LifetimeOwner_Wrapper>(object, object_map_, object_map_lock_);
}

void STDMETHODCALLTYPE ID3D12LifetimeOwner_Wrapper::LifetimeStateUpdated(
    D3D12_LIFETIME_STATE NewState)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12LifetimeOwner_LifetimeStateUpdated>::Dispatch(
            manager,
            this,
            NewState);

        GetWrappedObjectAs<ID3D12LifetimeOwner>()->LifetimeStateUpdated(
            NewState);

        Encode_ID3D12LifetimeOwner_LifetimeStateUpdated(
            GetCaptureId(),
            NewState);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12LifetimeOwner_LifetimeStateUpdated>::Dispatch(
            manager,
            this,
            NewState);
    }
    else
    {
        GetWrappedObjectAs<ID3D12LifetimeOwner>()->LifetimeStateUpdated(
            NewState);
    }

    manager->DecrementCallScope();
}

ID3D12SwapChainAssistant_Wrapper::ID3D12SwapChainAssistant_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12SwapChainAssistant_Wrapper::~ID3D12SwapChainAssistant_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12SwapChainAssistant>(), object_map_, object_map_lock_);
}

ID3D12SwapChainAssistant_Wrapper* ID3D12SwapChainAssistant_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12SwapChainAssistant_Wrapper>(object, object_map_, object_map_lock_);
}

LUID STDMETHODCALLTYPE ID3D12SwapChainAssistant_Wrapper::GetLUID()
{
    LUID result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetLUID>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetLUID();

        Encode_ID3D12SwapChainAssistant_GetLUID(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetLUID>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetLUID();
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12SwapChainAssistant_Wrapper::GetSwapChainObject(
    REFIID riid,
    void** ppv)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetSwapChainObject>::Dispatch(
            manager,
            this,
            riid,
            ppv);

        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetSwapChainObject(
            riid,
            ppv);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppv, nullptr);
        }

        Encode_ID3D12SwapChainAssistant_GetSwapChainObject(
            GetCaptureId(),
            result,
            riid,
            ppv);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetSwapChainObject>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppv);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetSwapChainObject(
            riid,
            ppv);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12SwapChainAssistant_Wrapper::GetCurrentResourceAndCommandQueue(
    REFIID riidResource,
    void** ppvResource,
    REFIID riidQueue,
    void** ppvQueue)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue>::Dispatch(
            manager,
            this,
            riidResource,
            ppvResource,
            riidQueue,
            ppvQueue);

        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetCurrentResourceAndCommandQueue(
            riidResource,
            ppvResource,
            riidQueue,
            ppvQueue);

        if (SUCCEEDED(result))
        {
            WrapObject(riidResource, ppvResource, nullptr);
            WrapObject(riidQueue, ppvQueue, nullptr);
        }

        Encode_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue(
            GetCaptureId(),
            result,
            riidResource,
            ppvResource,
            riidQueue,
            ppvQueue);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_GetCurrentResourceAndCommandQueue>::Dispatch(
            manager,
            this,
            result,
            riidResource,
            ppvResource,
            riidQueue,
            ppvQueue);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->GetCurrentResourceAndCommandQueue(
            riidResource,
            ppvResource,
            riidQueue,
            ppvQueue);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12SwapChainAssistant_Wrapper::InsertImplicitSync()
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_InsertImplicitSync>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->InsertImplicitSync();

        Encode_ID3D12SwapChainAssistant_InsertImplicitSync(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12SwapChainAssistant_InsertImplicitSync>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12SwapChainAssistant>()->InsertImplicitSync();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12LifetimeTracker_Wrapper::ID3D12LifetimeTracker_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceChild_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12LifetimeTracker_Wrapper::~ID3D12LifetimeTracker_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12LifetimeTracker>(), object_map_, object_map_lock_);
}

ID3D12LifetimeTracker_Wrapper* ID3D12LifetimeTracker_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12LifetimeTracker_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12LifetimeTracker_Wrapper::DestroyOwnedObject(
    ID3D12DeviceChild* pObject)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12LifetimeTracker_DestroyOwnedObject>::Dispatch(
            manager,
            this,
            pObject);

        result = GetWrappedObjectAs<ID3D12LifetimeTracker>()->DestroyOwnedObject(
            encode::GetWrappedObject<ID3D12DeviceChild>(pObject));

        Encode_ID3D12LifetimeTracker_DestroyOwnedObject(
            GetCaptureId(),
            result,
            pObject);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12LifetimeTracker_DestroyOwnedObject>::Dispatch(
            manager,
            this,
            result,
            pObject);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12LifetimeTracker>()->DestroyOwnedObject(
            pObject);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12StateObject_Wrapper::ID3D12StateObject_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12StateObject_Wrapper::~ID3D12StateObject_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12StateObject>(), object_map_, object_map_lock_);
}

ID3D12StateObject_Wrapper* ID3D12StateObject_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12StateObject_Wrapper>(object, object_map_, object_map_lock_);
}

ID3D12StateObjectProperties_Wrapper::ID3D12StateObjectProperties_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12StateObjectProperties_Wrapper::~ID3D12StateObjectProperties_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12StateObjectProperties>(), object_map_, object_map_lock_);
}

ID3D12StateObjectProperties_Wrapper* ID3D12StateObjectProperties_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12StateObjectProperties_Wrapper>(object, object_map_, object_map_lock_);
}

void* STDMETHODCALLTYPE ID3D12StateObjectProperties_Wrapper::GetShaderIdentifier(
    LPCWSTR pExportName)
{
    void* result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetShaderIdentifier>::Dispatch(
            manager,
            this,
            pExportName);

        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetShaderIdentifier(
            pExportName);

        Encode_ID3D12StateObjectProperties_GetShaderIdentifier(
            GetCaptureId(),
            result,
            pExportName);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetShaderIdentifier>::Dispatch(
            manager,
            this,
            result,
            pExportName);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetShaderIdentifier(
            pExportName);
    }

    manager->DecrementCallScope();

    return result;
}

UINT64 STDMETHODCALLTYPE ID3D12StateObjectProperties_Wrapper::GetShaderStackSize(
    LPCWSTR pExportName)
{
    UINT64 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetShaderStackSize>::Dispatch(
            manager,
            this,
            pExportName);

        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetShaderStackSize(
            pExportName);

        Encode_ID3D12StateObjectProperties_GetShaderStackSize(
            GetCaptureId(),
            result,
            pExportName);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetShaderStackSize>::Dispatch(
            manager,
            this,
            result,
            pExportName);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetShaderStackSize(
            pExportName);
    }

    manager->DecrementCallScope();

    return result;
}

UINT64 STDMETHODCALLTYPE ID3D12StateObjectProperties_Wrapper::GetPipelineStackSize()
{
    UINT64 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetPipelineStackSize>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetPipelineStackSize();

        Encode_ID3D12StateObjectProperties_GetPipelineStackSize(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_GetPipelineStackSize>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12StateObjectProperties>()->GetPipelineStackSize();
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12StateObjectProperties_Wrapper::SetPipelineStackSize(
    UINT64 PipelineStackSizeInBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_SetPipelineStackSize>::Dispatch(
            manager,
            this,
            PipelineStackSizeInBytes);

        GetWrappedObjectAs<ID3D12StateObjectProperties>()->SetPipelineStackSize(
            PipelineStackSizeInBytes);

        Encode_ID3D12StateObjectProperties_SetPipelineStackSize(
            GetCaptureId(),
            PipelineStackSizeInBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12StateObjectProperties_SetPipelineStackSize>::Dispatch(
            manager,
            this,
            PipelineStackSizeInBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12StateObjectProperties>()->SetPipelineStackSize(
            PipelineStackSizeInBytes);
    }

    manager->DecrementCallScope();
}

ID3D12Device5_Wrapper::ID3D12Device5_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device4_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device5_Wrapper::CreateLifetimeTracker(
    ID3D12LifetimeOwner* pOwner,
    REFIID riid,
    void** ppvTracker)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateLifetimeTracker>::Dispatch(
            manager,
            this,
            pOwner,
            riid,
            ppvTracker);

        result = GetWrappedObjectAs<ID3D12Device5>()->CreateLifetimeTracker(
            encode::GetWrappedObject<ID3D12LifetimeOwner>(pOwner),
            riid,
            ppvTracker);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvTracker, nullptr);
        }

        Encode_ID3D12Device5_CreateLifetimeTracker(
            GetCaptureId(),
            result,
            pOwner,
            riid,
            ppvTracker);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateLifetimeTracker>::Dispatch(
            manager,
            this,
            result,
            pOwner,
            riid,
            ppvTracker);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->CreateLifetimeTracker(
            pOwner,
            riid,
            ppvTracker);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device5_Wrapper::RemoveDevice()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_RemoveDevice>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<ID3D12Device5>()->RemoveDevice();

        Encode_ID3D12Device5_RemoveDevice(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_RemoveDevice>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device5>()->RemoveDevice();
    }

    manager->DecrementCallScope();
}

HRESULT STDMETHODCALLTYPE ID3D12Device5_Wrapper::EnumerateMetaCommands(
    UINT* pNumMetaCommands,
    D3D12_META_COMMAND_DESC* pDescs)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_EnumerateMetaCommands>::Dispatch(
            manager,
            this,
            pNumMetaCommands,
            pDescs);

        result = GetWrappedObjectAs<ID3D12Device5>()->EnumerateMetaCommands(
            pNumMetaCommands,
            pDescs);

        Encode_ID3D12Device5_EnumerateMetaCommands(
            GetCaptureId(),
            result,
            pNumMetaCommands,
            pDescs);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_EnumerateMetaCommands>::Dispatch(
            manager,
            this,
            result,
            pNumMetaCommands,
            pDescs);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->EnumerateMetaCommands(
            pNumMetaCommands,
            pDescs);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device5_Wrapper::EnumerateMetaCommandParameters(
    REFGUID CommandId,
    D3D12_META_COMMAND_PARAMETER_STAGE Stage,
    UINT* pTotalStructureSizeInBytes,
    UINT* pParameterCount,
    D3D12_META_COMMAND_PARAMETER_DESC* pParameterDescs)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_EnumerateMetaCommandParameters>::Dispatch(
            manager,
            this,
            CommandId,
            Stage,
            pTotalStructureSizeInBytes,
            pParameterCount,
            pParameterDescs);

        result = GetWrappedObjectAs<ID3D12Device5>()->EnumerateMetaCommandParameters(
            CommandId,
            Stage,
            pTotalStructureSizeInBytes,
            pParameterCount,
            pParameterDescs);

        Encode_ID3D12Device5_EnumerateMetaCommandParameters(
            GetCaptureId(),
            result,
            CommandId,
            Stage,
            pTotalStructureSizeInBytes,
            pParameterCount,
            pParameterDescs);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_EnumerateMetaCommandParameters>::Dispatch(
            manager,
            this,
            result,
            CommandId,
            Stage,
            pTotalStructureSizeInBytes,
            pParameterCount,
            pParameterDescs);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->EnumerateMetaCommandParameters(
            CommandId,
            Stage,
            pTotalStructureSizeInBytes,
            pParameterCount,
            pParameterDescs);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device5_Wrapper::CreateMetaCommand(
    REFGUID CommandId,
    UINT NodeMask,
    const void* pCreationParametersData,
    SIZE_T CreationParametersDataSizeInBytes,
    REFIID riid,
    void** ppMetaCommand)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateMetaCommand>::Dispatch(
            manager,
            this,
            CommandId,
            NodeMask,
            pCreationParametersData,
            CreationParametersDataSizeInBytes,
            riid,
            ppMetaCommand);

        result = GetWrappedObjectAs<ID3D12Device5>()->CreateMetaCommand(
            CommandId,
            NodeMask,
            pCreationParametersData,
            CreationParametersDataSizeInBytes,
            riid,
            ppMetaCommand);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppMetaCommand, nullptr);
        }

        Encode_ID3D12Device5_CreateMetaCommand(
            GetCaptureId(),
            result,
            CommandId,
            NodeMask,
            pCreationParametersData,
            CreationParametersDataSizeInBytes,
            riid,
            ppMetaCommand);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateMetaCommand>::Dispatch(
            manager,
            this,
            result,
            CommandId,
            NodeMask,
            pCreationParametersData,
            CreationParametersDataSizeInBytes,
            riid,
            ppMetaCommand);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->CreateMetaCommand(
            CommandId,
            NodeMask,
            pCreationParametersData,
            CreationParametersDataSizeInBytes,
            riid,
            ppMetaCommand);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device5_Wrapper::CreateStateObject(
    const D3D12_STATE_OBJECT_DESC* pDesc,
    REFIID riid,
    void** ppStateObject)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateStateObject>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppStateObject);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device5>()->CreateStateObject(
            UnwrapStructPtrObjects(pDesc, unwrap_memory),
            riid,
            ppStateObject);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppStateObject, nullptr);
        }

        Encode_ID3D12Device5_CreateStateObject(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppStateObject);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_CreateStateObject>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppStateObject);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->CreateStateObject(
            pDesc,
            riid,
            ppStateObject);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device5_Wrapper::GetRaytracingAccelerationStructurePrebuildInfo(
    const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS* pDesc,
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO* pInfo)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo>::Dispatch(
            manager,
            this,
            pDesc,
            pInfo);

        GetWrappedObjectAs<ID3D12Device5>()->GetRaytracingAccelerationStructurePrebuildInfo(
            pDesc,
            pInfo);

        Encode_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(
            GetCaptureId(),
            pDesc,
            pInfo);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo>::Dispatch(
            manager,
            this,
            pDesc,
            pInfo);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device5>()->GetRaytracingAccelerationStructurePrebuildInfo(
            pDesc,
            pInfo);
    }

    manager->DecrementCallScope();
}

D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS STDMETHODCALLTYPE ID3D12Device5_Wrapper::CheckDriverMatchingIdentifier(
    D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
    const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER* pIdentifierToCheck)
{
    D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device5_CheckDriverMatchingIdentifier>::Dispatch(
            manager,
            this,
            SerializedDataType,
            pIdentifierToCheck);

        result = GetWrappedObjectAs<ID3D12Device5>()->CheckDriverMatchingIdentifier(
            SerializedDataType,
            pIdentifierToCheck);

        Encode_ID3D12Device5_CheckDriverMatchingIdentifier(
            GetCaptureId(),
            result,
            SerializedDataType,
            pIdentifierToCheck);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device5_CheckDriverMatchingIdentifier>::Dispatch(
            manager,
            this,
            result,
            SerializedDataType,
            pIdentifierToCheck);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device5>()->CheckDriverMatchingIdentifier(
            SerializedDataType,
            pIdentifierToCheck);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12DeviceRemovedExtendedDataSettings_Wrapper::ID3D12DeviceRemovedExtendedDataSettings_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12DeviceRemovedExtendedDataSettings_Wrapper::~ID3D12DeviceRemovedExtendedDataSettings_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>(), object_map_, object_map_lock_);
}

ID3D12DeviceRemovedExtendedDataSettings_Wrapper* ID3D12DeviceRemovedExtendedDataSettings_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12DeviceRemovedExtendedDataSettings_Wrapper>(object, object_map_, object_map_lock_);
}

void STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedDataSettings_Wrapper::SetAutoBreadcrumbsEnablement(
    D3D12_DRED_ENABLEMENT Enablement)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement>::Dispatch(
            manager,
            this,
            Enablement);

        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetAutoBreadcrumbsEnablement(
            Enablement);

        Encode_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement(
            GetCaptureId(),
            Enablement);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetAutoBreadcrumbsEnablement>::Dispatch(
            manager,
            this,
            Enablement);
    }
    else
    {
        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetAutoBreadcrumbsEnablement(
            Enablement);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedDataSettings_Wrapper::SetPageFaultEnablement(
    D3D12_DRED_ENABLEMENT Enablement)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement>::Dispatch(
            manager,
            this,
            Enablement);

        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetPageFaultEnablement(
            Enablement);

        Encode_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement(
            GetCaptureId(),
            Enablement);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetPageFaultEnablement>::Dispatch(
            manager,
            this,
            Enablement);
    }
    else
    {
        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetPageFaultEnablement(
            Enablement);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedDataSettings_Wrapper::SetWatsonDumpEnablement(
    D3D12_DRED_ENABLEMENT Enablement)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement>::Dispatch(
            manager,
            this,
            Enablement);

        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetWatsonDumpEnablement(
            Enablement);

        Encode_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement(
            GetCaptureId(),
            Enablement);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings_SetWatsonDumpEnablement>::Dispatch(
            manager,
            this,
            Enablement);
    }
    else
    {
        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings>()->SetWatsonDumpEnablement(
            Enablement);
    }

    manager->DecrementCallScope();
}

ID3D12DeviceRemovedExtendedDataSettings1_Wrapper::ID3D12DeviceRemovedExtendedDataSettings1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceRemovedExtendedDataSettings_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedDataSettings1_Wrapper::SetBreadcrumbContextEnablement(
    D3D12_DRED_ENABLEMENT Enablement)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement>::Dispatch(
            manager,
            this,
            Enablement);

        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings1>()->SetBreadcrumbContextEnablement(
            Enablement);

        Encode_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement(
            GetCaptureId(),
            Enablement);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedDataSettings1_SetBreadcrumbContextEnablement>::Dispatch(
            manager,
            this,
            Enablement);
    }
    else
    {
        GetWrappedObjectAs<ID3D12DeviceRemovedExtendedDataSettings1>()->SetBreadcrumbContextEnablement(
            Enablement);
    }

    manager->DecrementCallScope();
}

ID3D12DeviceRemovedExtendedData_Wrapper::ID3D12DeviceRemovedExtendedData_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12DeviceRemovedExtendedData_Wrapper::~ID3D12DeviceRemovedExtendedData_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData>(), object_map_, object_map_lock_);
}

ID3D12DeviceRemovedExtendedData_Wrapper* ID3D12DeviceRemovedExtendedData_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12DeviceRemovedExtendedData_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedData_Wrapper::GetAutoBreadcrumbsOutput(
    D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT* pOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput>::Dispatch(
            manager,
            this,
            pOutput);

        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData>()->GetAutoBreadcrumbsOutput(
            pOutput);

        if (SUCCEEDED(result))
        {
            WrapStruct(pOutput);
        }

        Encode_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput(
            GetCaptureId(),
            result,
            pOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData_GetAutoBreadcrumbsOutput>::Dispatch(
            manager,
            this,
            result,
            pOutput);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData>()->GetAutoBreadcrumbsOutput(
            pOutput);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedData_Wrapper::GetPageFaultAllocationOutput(
    D3D12_DRED_PAGE_FAULT_OUTPUT* pOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput>::Dispatch(
            manager,
            this,
            pOutput);

        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData>()->GetPageFaultAllocationOutput(
            pOutput);

        Encode_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput(
            GetCaptureId(),
            result,
            pOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData_GetPageFaultAllocationOutput>::Dispatch(
            manager,
            this,
            result,
            pOutput);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData>()->GetPageFaultAllocationOutput(
            pOutput);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12DeviceRemovedExtendedData1_Wrapper::ID3D12DeviceRemovedExtendedData1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12DeviceRemovedExtendedData_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedData1_Wrapper::GetAutoBreadcrumbsOutput1(
    D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT1* pOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1>::Dispatch(
            manager,
            this,
            pOutput);

        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData1>()->GetAutoBreadcrumbsOutput1(
            pOutput);

        if (SUCCEEDED(result))
        {
            WrapStruct(pOutput);
        }

        Encode_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1(
            GetCaptureId(),
            result,
            pOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData1_GetAutoBreadcrumbsOutput1>::Dispatch(
            manager,
            this,
            result,
            pOutput);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData1>()->GetAutoBreadcrumbsOutput1(
            pOutput);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12DeviceRemovedExtendedData1_Wrapper::GetPageFaultAllocationOutput1(
    D3D12_DRED_PAGE_FAULT_OUTPUT1* pOutput)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1>::Dispatch(
            manager,
            this,
            pOutput);

        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData1>()->GetPageFaultAllocationOutput1(
            pOutput);

        if (SUCCEEDED(result))
        {
            WrapStruct(pOutput);
        }

        Encode_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1(
            GetCaptureId(),
            result,
            pOutput);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12DeviceRemovedExtendedData1_GetPageFaultAllocationOutput1>::Dispatch(
            manager,
            this,
            result,
            pOutput);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12DeviceRemovedExtendedData1>()->GetPageFaultAllocationOutput1(
            pOutput);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device6_Wrapper::ID3D12Device6_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device5_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device6_Wrapper::SetBackgroundProcessingMode(
    D3D12_BACKGROUND_PROCESSING_MODE Mode,
    D3D12_MEASUREMENTS_ACTION MeasurementsAction,
    HANDLE hEventToSignalUponCompletion,
    BOOL* pbFurtherMeasurementsDesired)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device6_SetBackgroundProcessingMode>::Dispatch(
            manager,
            this,
            Mode,
            MeasurementsAction,
            hEventToSignalUponCompletion,
            pbFurtherMeasurementsDesired);

        result = GetWrappedObjectAs<ID3D12Device6>()->SetBackgroundProcessingMode(
            Mode,
            MeasurementsAction,
            hEventToSignalUponCompletion,
            pbFurtherMeasurementsDesired);

        Encode_ID3D12Device6_SetBackgroundProcessingMode(
            GetCaptureId(),
            result,
            Mode,
            MeasurementsAction,
            hEventToSignalUponCompletion,
            pbFurtherMeasurementsDesired);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device6_SetBackgroundProcessingMode>::Dispatch(
            manager,
            this,
            result,
            Mode,
            MeasurementsAction,
            hEventToSignalUponCompletion,
            pbFurtherMeasurementsDesired);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device6>()->SetBackgroundProcessingMode(
            Mode,
            MeasurementsAction,
            hEventToSignalUponCompletion,
            pbFurtherMeasurementsDesired);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12ProtectedResourceSession1_Wrapper::ID3D12ProtectedResourceSession1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12ProtectedResourceSession_Wrapper(riid, object, resources, destructor)
{
}

D3D12_PROTECTED_RESOURCE_SESSION_DESC1 STDMETHODCALLTYPE ID3D12ProtectedResourceSession1_Wrapper::GetDesc1()
{
    D3D12_PROTECTED_RESOURCE_SESSION_DESC1 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12ProtectedResourceSession1_GetDesc1>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12ProtectedResourceSession1>()->GetDesc1();

        Encode_ID3D12ProtectedResourceSession1_GetDesc1(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12ProtectedResourceSession1_GetDesc1>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12ProtectedResourceSession1>()->GetDesc1();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device7_Wrapper::ID3D12Device7_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device6_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Device7_Wrapper::AddToStateObject(
    const D3D12_STATE_OBJECT_DESC* pAddition,
    ID3D12StateObject* pStateObjectToGrowFrom,
    REFIID riid,
    void** ppNewStateObject)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device7_AddToStateObject>::Dispatch(
            manager,
            this,
            pAddition,
            pStateObjectToGrowFrom,
            riid,
            ppNewStateObject);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        result = GetWrappedObjectAs<ID3D12Device7>()->AddToStateObject(
            UnwrapStructPtrObjects(pAddition, unwrap_memory),
            encode::GetWrappedObject<ID3D12StateObject>(pStateObjectToGrowFrom),
            riid,
            ppNewStateObject);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppNewStateObject, nullptr);
        }

        Encode_ID3D12Device7_AddToStateObject(
            GetCaptureId(),
            result,
            pAddition,
            pStateObjectToGrowFrom,
            riid,
            ppNewStateObject);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device7_AddToStateObject>::Dispatch(
            manager,
            this,
            result,
            pAddition,
            pStateObjectToGrowFrom,
            riid,
            ppNewStateObject);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device7>()->AddToStateObject(
            pAddition,
            pStateObjectToGrowFrom,
            riid,
            ppNewStateObject);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device7_Wrapper::CreateProtectedResourceSession1(
    const D3D12_PROTECTED_RESOURCE_SESSION_DESC1* pDesc,
    REFIID riid,
    void** ppSession)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device7_CreateProtectedResourceSession1>::Dispatch(
            manager,
            this,
            pDesc,
            riid,
            ppSession);

        result = GetWrappedObjectAs<ID3D12Device7>()->CreateProtectedResourceSession1(
            pDesc,
            riid,
            ppSession);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppSession, nullptr);
        }

        Encode_ID3D12Device7_CreateProtectedResourceSession1(
            GetCaptureId(),
            result,
            pDesc,
            riid,
            ppSession);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device7_CreateProtectedResourceSession1>::Dispatch(
            manager,
            this,
            result,
            pDesc,
            riid,
            ppSession);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device7>()->CreateProtectedResourceSession1(
            pDesc,
            riid,
            ppSession);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Device8_Wrapper::ID3D12Device8_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Device7_Wrapper(riid, object, resources, destructor)
{
}

D3D12_RESOURCE_ALLOCATION_INFO STDMETHODCALLTYPE ID3D12Device8_Wrapper::GetResourceAllocationInfo2(
    UINT visibleMask,
    UINT numResourceDescs,
    const D3D12_RESOURCE_DESC1* pResourceDescs,
    D3D12_RESOURCE_ALLOCATION_INFO1* pResourceAllocationInfo1)
{
    D3D12_RESOURCE_ALLOCATION_INFO result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device8_GetResourceAllocationInfo2>::Dispatch(
            manager,
            this,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        result = GetWrappedObjectAs<ID3D12Device8>()->GetResourceAllocationInfo2(
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        Encode_ID3D12Device8_GetResourceAllocationInfo2(
            GetCaptureId(),
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device8_GetResourceAllocationInfo2>::Dispatch(
            manager,
            this,
            result,
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device8>()->GetResourceAllocationInfo2(
            visibleMask,
            numResourceDescs,
            pResourceDescs,
            pResourceAllocationInfo1);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device8_Wrapper::CreateCommittedResource2(
    const D3D12_HEAP_PROPERTIES* pHeapProperties,
    D3D12_HEAP_FLAGS HeapFlags,
    const D3D12_RESOURCE_DESC1* pDesc,
    D3D12_RESOURCE_STATES InitialResourceState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    ID3D12ProtectedResourceSession* pProtectedSession,
    REFIID riidResource,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device8_CreateCommittedResource2>::Dispatch(
            manager,
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);

        result = D3D12CaptureManager::Get()->OverrideID3D12Device_CreateCommittedResource2(
            this,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            encode::GetWrappedObject<ID3D12ProtectedResourceSession>(pProtectedSession),
            riidResource,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riidResource, ppvResource, nullptr);
        }

        Encode_ID3D12Device8_CreateCommittedResource2(
            GetCaptureId(),
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device8_CreateCommittedResource2>::Dispatch(
            manager,
            this,
            result,
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device8>()->CreateCommittedResource2(
            pHeapProperties,
            HeapFlags,
            pDesc,
            InitialResourceState,
            pOptimizedClearValue,
            pProtectedSession,
            riidResource,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3D12Device8_Wrapper::CreatePlacedResource1(
    ID3D12Heap* pHeap,
    UINT64 HeapOffset,
    const D3D12_RESOURCE_DESC1* pDesc,
    D3D12_RESOURCE_STATES InitialState,
    const D3D12_CLEAR_VALUE* pOptimizedClearValue,
    REFIID riid,
    void** ppvResource)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device8_CreatePlacedResource1>::Dispatch(
            manager,
            this,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        result = GetWrappedObjectAs<ID3D12Device8>()->CreatePlacedResource1(
            encode::GetWrappedObject<ID3D12Heap>(pHeap),
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppvResource, nullptr);
        }

        Encode_ID3D12Device8_CreatePlacedResource1(
            GetCaptureId(),
            result,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device8_CreatePlacedResource1>::Dispatch(
            manager,
            this,
            result,
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Device8>()->CreatePlacedResource1(
            pHeap,
            HeapOffset,
            pDesc,
            InitialState,
            pOptimizedClearValue,
            riid,
            ppvResource);
    }

    manager->DecrementCallScope();

    return result;
}

void STDMETHODCALLTYPE ID3D12Device8_Wrapper::CreateSamplerFeedbackUnorderedAccessView(
    ID3D12Resource* pTargetedResource,
    ID3D12Resource* pFeedbackResource,
    D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView>::Dispatch(
            manager,
            this,
            pTargetedResource,
            pFeedbackResource,
            DestDescriptor);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12Device8>()->CreateSamplerFeedbackUnorderedAccessView(
            encode::GetWrappedObject<ID3D12Resource>(pTargetedResource),
            encode::GetWrappedObject<ID3D12Resource>(pFeedbackResource),
            *UnwrapStructPtrObjects(&DestDescriptor, unwrap_memory));

        Encode_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(
            GetCaptureId(),
            pTargetedResource,
            pFeedbackResource,
            DestDescriptor);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView>::Dispatch(
            manager,
            this,
            pTargetedResource,
            pFeedbackResource,
            DestDescriptor);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device8>()->CreateSamplerFeedbackUnorderedAccessView(
            pTargetedResource,
            pFeedbackResource,
            DestDescriptor);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12Device8_Wrapper::GetCopyableFootprints1(
    const D3D12_RESOURCE_DESC1* pResourceDesc,
    UINT FirstSubresource,
    UINT NumSubresources,
    UINT64 BaseOffset,
    D3D12_PLACED_SUBRESOURCE_FOOTPRINT* pLayouts,
    UINT* pNumRows,
    UINT64* pRowSizeInBytes,
    UINT64* pTotalBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Device8_GetCopyableFootprints1>::Dispatch(
            manager,
            this,
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        GetWrappedObjectAs<ID3D12Device8>()->GetCopyableFootprints1(
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        Encode_ID3D12Device8_GetCopyableFootprints1(
            GetCaptureId(),
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Device8_GetCopyableFootprints1>::Dispatch(
            manager,
            this,
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Device8>()->GetCopyableFootprints1(
            pResourceDesc,
            FirstSubresource,
            NumSubresources,
            BaseOffset,
            pLayouts,
            pNumRows,
            pRowSizeInBytes,
            pTotalBytes);
    }

    manager->DecrementCallScope();
}

ID3D12Resource1_Wrapper::ID3D12Resource1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Resource_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Resource1_Wrapper::GetProtectedResourceSession(
    REFIID riid,
    void** ppProtectedSession)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource1_GetProtectedResourceSession>::Dispatch(
            manager,
            this,
            riid,
            ppProtectedSession);

        result = GetWrappedObjectAs<ID3D12Resource1>()->GetProtectedResourceSession(
            riid,
            ppProtectedSession);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppProtectedSession, nullptr);
        }

        Encode_ID3D12Resource1_GetProtectedResourceSession(
            GetCaptureId(),
            result,
            riid,
            ppProtectedSession);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource1_GetProtectedResourceSession>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppProtectedSession);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource1>()->GetProtectedResourceSession(
            riid,
            ppProtectedSession);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Resource2_Wrapper::ID3D12Resource2_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Resource1_Wrapper(riid, object, resources, destructor)
{
}

D3D12_RESOURCE_DESC1 STDMETHODCALLTYPE ID3D12Resource2_Wrapper::GetDesc1()
{
    D3D12_RESOURCE_DESC1 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Resource2_GetDesc1>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Resource2>()->GetDesc1();

        Encode_ID3D12Resource2_GetDesc1(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Resource2_GetDesc1>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Resource2>()->GetDesc1();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12Heap1_Wrapper::ID3D12Heap1_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Heap_Wrapper(riid, object, resources, destructor)
{
}

HRESULT STDMETHODCALLTYPE ID3D12Heap1_Wrapper::GetProtectedResourceSession(
    REFIID riid,
    void** ppProtectedSession)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Heap1_GetProtectedResourceSession>::Dispatch(
            manager,
            this,
            riid,
            ppProtectedSession);

        result = GetWrappedObjectAs<ID3D12Heap1>()->GetProtectedResourceSession(
            riid,
            ppProtectedSession);

        if (SUCCEEDED(result))
        {
            WrapObject(riid, ppProtectedSession, nullptr);
        }

        Encode_ID3D12Heap1_GetProtectedResourceSession(
            GetCaptureId(),
            result,
            riid,
            ppProtectedSession);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Heap1_GetProtectedResourceSession>::Dispatch(
            manager,
            this,
            result,
            riid,
            ppProtectedSession);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Heap1>()->GetProtectedResourceSession(
            riid,
            ppProtectedSession);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12GraphicsCommandList3_Wrapper::ID3D12GraphicsCommandList3_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList2_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList3_Wrapper::SetProtectedResourceSession(
    ID3D12ProtectedResourceSession* pProtectedResourceSession)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList3_SetProtectedResourceSession>::Dispatch(
            manager,
            this,
            pProtectedResourceSession);

        GetWrappedObjectAs<ID3D12GraphicsCommandList3>()->SetProtectedResourceSession(
            encode::GetWrappedObject<ID3D12ProtectedResourceSession>(pProtectedResourceSession));

        Encode_ID3D12GraphicsCommandList3_SetProtectedResourceSession(
            GetCaptureId(),
            pProtectedResourceSession);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList3_SetProtectedResourceSession>::Dispatch(
            manager,
            this,
            pProtectedResourceSession);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList3>()->SetProtectedResourceSession(
            pProtectedResourceSession);
    }

    manager->DecrementCallScope();
}

ID3D12MetaCommand_Wrapper::ID3D12MetaCommand_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12Pageable_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12MetaCommand_Wrapper::~ID3D12MetaCommand_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12MetaCommand>(), object_map_, object_map_lock_);
}

ID3D12MetaCommand_Wrapper* ID3D12MetaCommand_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12MetaCommand_Wrapper>(object, object_map_, object_map_lock_);
}

UINT64 STDMETHODCALLTYPE ID3D12MetaCommand_Wrapper::GetRequiredParameterResourceSize(
    D3D12_META_COMMAND_PARAMETER_STAGE Stage,
    UINT ParameterIndex)
{
    UINT64 result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12MetaCommand_GetRequiredParameterResourceSize>::Dispatch(
            manager,
            this,
            Stage,
            ParameterIndex);

        result = GetWrappedObjectAs<ID3D12MetaCommand>()->GetRequiredParameterResourceSize(
            Stage,
            ParameterIndex);

        Encode_ID3D12MetaCommand_GetRequiredParameterResourceSize(
            GetCaptureId(),
            result,
            Stage,
            ParameterIndex);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12MetaCommand_GetRequiredParameterResourceSize>::Dispatch(
            manager,
            this,
            result,
            Stage,
            ParameterIndex);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12MetaCommand>()->GetRequiredParameterResourceSize(
            Stage,
            ParameterIndex);
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12GraphicsCommandList4_Wrapper::ID3D12GraphicsCommandList4_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList3_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::BeginRenderPass(
    UINT NumRenderTargets,
    const D3D12_RENDER_PASS_RENDER_TARGET_DESC* pRenderTargets,
    const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC* pDepthStencil,
    D3D12_RENDER_PASS_FLAGS Flags)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_BeginRenderPass>::Dispatch(
            manager,
            this,
            NumRenderTargets,
            pRenderTargets,
            pDepthStencil,
            Flags);

        auto unwrap_memory = manager->GetHandleUnwrapMemory();

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->BeginRenderPass(
            NumRenderTargets,
            UnwrapStructArrayObjects(pRenderTargets, NumRenderTargets, unwrap_memory),
            UnwrapStructPtrObjects(pDepthStencil, unwrap_memory),
            Flags);

        Encode_ID3D12GraphicsCommandList4_BeginRenderPass(
            GetCaptureId(),
            NumRenderTargets,
            pRenderTargets,
            pDepthStencil,
            Flags);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_BeginRenderPass>::Dispatch(
            manager,
            this,
            NumRenderTargets,
            pRenderTargets,
            pDepthStencil,
            Flags);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->BeginRenderPass(
            NumRenderTargets,
            pRenderTargets,
            pDepthStencil,
            Flags);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::EndRenderPass()
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_EndRenderPass>::Dispatch(
            manager,
            this);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->EndRenderPass();

        Encode_ID3D12GraphicsCommandList4_EndRenderPass(
            GetCaptureId());

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_EndRenderPass>::Dispatch(
            manager,
            this);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->EndRenderPass();
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::InitializeMetaCommand(
    ID3D12MetaCommand* pMetaCommand,
    const void* pInitializationParametersData,
    SIZE_T InitializationParametersDataSizeInBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_InitializeMetaCommand>::Dispatch(
            manager,
            this,
            pMetaCommand,
            pInitializationParametersData,
            InitializationParametersDataSizeInBytes);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->InitializeMetaCommand(
            encode::GetWrappedObject<ID3D12MetaCommand>(pMetaCommand),
            pInitializationParametersData,
            InitializationParametersDataSizeInBytes);

        Encode_ID3D12GraphicsCommandList4_InitializeMetaCommand(
            GetCaptureId(),
            pMetaCommand,
            pInitializationParametersData,
            InitializationParametersDataSizeInBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_InitializeMetaCommand>::Dispatch(
            manager,
            this,
            pMetaCommand,
            pInitializationParametersData,
            InitializationParametersDataSizeInBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->InitializeMetaCommand(
            pMetaCommand,
            pInitializationParametersData,
            InitializationParametersDataSizeInBytes);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::ExecuteMetaCommand(
    ID3D12MetaCommand* pMetaCommand,
    const void* pExecutionParametersData,
    SIZE_T ExecutionParametersDataSizeInBytes)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_ExecuteMetaCommand>::Dispatch(
            manager,
            this,
            pMetaCommand,
            pExecutionParametersData,
            ExecutionParametersDataSizeInBytes);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->ExecuteMetaCommand(
            encode::GetWrappedObject<ID3D12MetaCommand>(pMetaCommand),
            pExecutionParametersData,
            ExecutionParametersDataSizeInBytes);

        Encode_ID3D12GraphicsCommandList4_ExecuteMetaCommand(
            GetCaptureId(),
            pMetaCommand,
            pExecutionParametersData,
            ExecutionParametersDataSizeInBytes);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_ExecuteMetaCommand>::Dispatch(
            manager,
            this,
            pMetaCommand,
            pExecutionParametersData,
            ExecutionParametersDataSizeInBytes);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->ExecuteMetaCommand(
            pMetaCommand,
            pExecutionParametersData,
            ExecutionParametersDataSizeInBytes);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::BuildRaytracingAccelerationStructure(
    const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC* pDesc,
    UINT NumPostbuildInfoDescs,
    const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC* pPostbuildInfoDescs)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure>::Dispatch(
            manager,
            this,
            pDesc,
            NumPostbuildInfoDescs,
            pPostbuildInfoDescs);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->BuildRaytracingAccelerationStructure(
            pDesc,
            NumPostbuildInfoDescs,
            pPostbuildInfoDescs);

        Encode_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure(
            GetCaptureId(),
            pDesc,
            NumPostbuildInfoDescs,
            pPostbuildInfoDescs);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_BuildRaytracingAccelerationStructure>::Dispatch(
            manager,
            this,
            pDesc,
            NumPostbuildInfoDescs,
            pPostbuildInfoDescs);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->BuildRaytracingAccelerationStructure(
            pDesc,
            NumPostbuildInfoDescs,
            pPostbuildInfoDescs);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::EmitRaytracingAccelerationStructurePostbuildInfo(
    const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC* pDesc,
    UINT NumSourceAccelerationStructures,
    const D3D12_GPU_VIRTUAL_ADDRESS* pSourceAccelerationStructureData)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo>::Dispatch(
            manager,
            this,
            pDesc,
            NumSourceAccelerationStructures,
            pSourceAccelerationStructureData);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->EmitRaytracingAccelerationStructurePostbuildInfo(
            pDesc,
            NumSourceAccelerationStructures,
            pSourceAccelerationStructureData);

        Encode_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo(
            GetCaptureId(),
            pDesc,
            NumSourceAccelerationStructures,
            pSourceAccelerationStructureData);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_EmitRaytracingAccelerationStructurePostbuildInfo>::Dispatch(
            manager,
            this,
            pDesc,
            NumSourceAccelerationStructures,
            pSourceAccelerationStructureData);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->EmitRaytracingAccelerationStructurePostbuildInfo(
            pDesc,
            NumSourceAccelerationStructures,
            pSourceAccelerationStructureData);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::CopyRaytracingAccelerationStructure(
    D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData,
    D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData,
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure>::Dispatch(
            manager,
            this,
            DestAccelerationStructureData,
            SourceAccelerationStructureData,
            Mode);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->CopyRaytracingAccelerationStructure(
            DestAccelerationStructureData,
            SourceAccelerationStructureData,
            Mode);

        Encode_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure(
            GetCaptureId(),
            DestAccelerationStructureData,
            SourceAccelerationStructureData,
            Mode);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_CopyRaytracingAccelerationStructure>::Dispatch(
            manager,
            this,
            DestAccelerationStructureData,
            SourceAccelerationStructureData,
            Mode);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->CopyRaytracingAccelerationStructure(
            DestAccelerationStructureData,
            SourceAccelerationStructureData,
            Mode);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::SetPipelineState1(
    ID3D12StateObject* pStateObject)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_SetPipelineState1>::Dispatch(
            manager,
            this,
            pStateObject);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->SetPipelineState1(
            encode::GetWrappedObject<ID3D12StateObject>(pStateObject));

        Encode_ID3D12GraphicsCommandList4_SetPipelineState1(
            GetCaptureId(),
            pStateObject);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_SetPipelineState1>::Dispatch(
            manager,
            this,
            pStateObject);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->SetPipelineState1(
            pStateObject);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList4_Wrapper::DispatchRays(
    const D3D12_DISPATCH_RAYS_DESC* pDesc)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_DispatchRays>::Dispatch(
            manager,
            this,
            pDesc);

        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->DispatchRays(
            pDesc);

        Encode_ID3D12GraphicsCommandList4_DispatchRays(
            GetCaptureId(),
            pDesc);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList4_DispatchRays>::Dispatch(
            manager,
            this,
            pDesc);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList4>()->DispatchRays(
            pDesc);
    }

    manager->DecrementCallScope();
}

ID3D12Tools_Wrapper::ID3D12Tools_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D12Tools_Wrapper::~ID3D12Tools_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D12Tools>(), object_map_, object_map_lock_);
}

ID3D12Tools_Wrapper* ID3D12Tools_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D12Tools_Wrapper>(object, object_map_, object_map_lock_);
}

void STDMETHODCALLTYPE ID3D12Tools_Wrapper::EnableShaderInstrumentation(
    BOOL bEnable)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Tools_EnableShaderInstrumentation>::Dispatch(
            manager,
            this,
            bEnable);

        GetWrappedObjectAs<ID3D12Tools>()->EnableShaderInstrumentation(
            bEnable);

        Encode_ID3D12Tools_EnableShaderInstrumentation(
            GetCaptureId(),
            bEnable);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Tools_EnableShaderInstrumentation>::Dispatch(
            manager,
            this,
            bEnable);
    }
    else
    {
        GetWrappedObjectAs<ID3D12Tools>()->EnableShaderInstrumentation(
            bEnable);
    }

    manager->DecrementCallScope();
}

BOOL STDMETHODCALLTYPE ID3D12Tools_Wrapper::ShaderInstrumentationEnabled()
{
    BOOL result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12Tools_ShaderInstrumentationEnabled>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D12Tools>()->ShaderInstrumentationEnabled();

        Encode_ID3D12Tools_ShaderInstrumentationEnabled(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12Tools_ShaderInstrumentationEnabled>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D12Tools>()->ShaderInstrumentationEnabled();
    }

    manager->DecrementCallScope();

    return result;
}

ID3D12GraphicsCommandList5_Wrapper::ID3D12GraphicsCommandList5_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList4_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList5_Wrapper::RSSetShadingRate(
    D3D12_SHADING_RATE baseShadingRate,
    const D3D12_SHADING_RATE_COMBINER* combiners)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList5_RSSetShadingRate>::Dispatch(
            manager,
            this,
            baseShadingRate,
            combiners);

        GetWrappedObjectAs<ID3D12GraphicsCommandList5>()->RSSetShadingRate(
            baseShadingRate,
            combiners);

        Encode_ID3D12GraphicsCommandList5_RSSetShadingRate(
            GetCaptureId(),
            baseShadingRate,
            combiners);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList5_RSSetShadingRate>::Dispatch(
            manager,
            this,
            baseShadingRate,
            combiners);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList5>()->RSSetShadingRate(
            baseShadingRate,
            combiners);
    }

    manager->DecrementCallScope();
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList5_Wrapper::RSSetShadingRateImage(
    ID3D12Resource* shadingRateImage)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList5_RSSetShadingRateImage>::Dispatch(
            manager,
            this,
            shadingRateImage);

        GetWrappedObjectAs<ID3D12GraphicsCommandList5>()->RSSetShadingRateImage(
            encode::GetWrappedObject<ID3D12Resource>(shadingRateImage));

        Encode_ID3D12GraphicsCommandList5_RSSetShadingRateImage(
            GetCaptureId(),
            shadingRateImage);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList5_RSSetShadingRateImage>::Dispatch(
            manager,
            this,
            shadingRateImage);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList5>()->RSSetShadingRateImage(
            shadingRateImage);
    }

    manager->DecrementCallScope();
}

ID3D12GraphicsCommandList6_Wrapper::ID3D12GraphicsCommandList6_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : ID3D12GraphicsCommandList5_Wrapper(riid, object, resources, destructor)
{
}

void STDMETHODCALLTYPE ID3D12GraphicsCommandList6_Wrapper::DispatchMesh(
    UINT ThreadGroupCountX,
    UINT ThreadGroupCountY,
    UINT ThreadGroupCountZ)
{
    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList6_DispatchMesh>::Dispatch(
            manager,
            this,
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        GetWrappedObjectAs<ID3D12GraphicsCommandList6>()->DispatchMesh(
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        Encode_ID3D12GraphicsCommandList6_DispatchMesh(
            GetCaptureId(),
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D12GraphicsCommandList6_DispatchMesh>::Dispatch(
            manager,
            this,
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);
    }
    else
    {
        GetWrappedObjectAs<ID3D12GraphicsCommandList6>()->DispatchMesh(
            ThreadGroupCountX,
            ThreadGroupCountY,
            ThreadGroupCountZ);
    }

    manager->DecrementCallScope();
}


/*
** This part is generated from d3dcommon.h in Windows SDK: 10.0.19041.0
**
*/

ID3D10Blob_Wrapper::ID3D10Blob_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3D10Blob_Wrapper::~ID3D10Blob_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3D10Blob>(), object_map_, object_map_lock_);
}

ID3D10Blob_Wrapper* ID3D10Blob_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3D10Blob_Wrapper>(object, object_map_, object_map_lock_);
}

LPVOID STDMETHODCALLTYPE ID3D10Blob_Wrapper::GetBufferPointer()
{
    LPVOID result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D10Blob_GetBufferPointer>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D10Blob>()->GetBufferPointer();

        Encode_ID3D10Blob_GetBufferPointer(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D10Blob_GetBufferPointer>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D10Blob>()->GetBufferPointer();
    }

    manager->DecrementCallScope();

    return result;
}

SIZE_T STDMETHODCALLTYPE ID3D10Blob_Wrapper::GetBufferSize()
{
    SIZE_T result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3D10Blob_GetBufferSize>::Dispatch(
            manager,
            this);

        result = GetWrappedObjectAs<ID3D10Blob>()->GetBufferSize();

        Encode_ID3D10Blob_GetBufferSize(
            GetCaptureId(),
            result);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3D10Blob_GetBufferSize>::Dispatch(
            manager,
            this,
            result);
    }
    else
    {
        result = GetWrappedObjectAs<ID3D10Blob>()->GetBufferSize();
    }

    manager->DecrementCallScope();

    return result;
}

ID3DDestructionNotifier_Wrapper::ID3DDestructionNotifier_Wrapper(REFIID riid, IUnknown* object, DxWrapperResources* resources, const std::function<void(IUnknown_Wrapper*)>& destructor) : IUnknown_Wrapper(riid, object, resources, destructor)
{
    AddWrapperMapEntry(object, this, object_map_, object_map_lock_);
}

ID3DDestructionNotifier_Wrapper::~ID3DDestructionNotifier_Wrapper()
{
    CustomWrapperDestroyCall(this);
    RemoveWrapperMapEntry(GetWrappedObjectAs<ID3DDestructionNotifier>(), object_map_, object_map_lock_);
}

ID3DDestructionNotifier_Wrapper* ID3DDestructionNotifier_Wrapper::GetExistingWrapper(IUnknown* object)
{
    return FindMapEntry<ID3DDestructionNotifier_Wrapper>(object, object_map_, object_map_lock_);
}

HRESULT STDMETHODCALLTYPE ID3DDestructionNotifier_Wrapper::RegisterDestructionCallback(
    PFN_DESTRUCTION_CALLBACK callbackFn,
    void* pData,
    UINT* pCallbackID)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3DDestructionNotifier_RegisterDestructionCallback>::Dispatch(
            manager,
            this,
            callbackFn,
            pData,
            pCallbackID);

        result = GetWrappedObjectAs<ID3DDestructionNotifier>()->RegisterDestructionCallback(
            callbackFn,
            pData,
            pCallbackID);

        Encode_ID3DDestructionNotifier_RegisterDestructionCallback(
            GetCaptureId(),
            result,
            callbackFn,
            pData,
            pCallbackID);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3DDestructionNotifier_RegisterDestructionCallback>::Dispatch(
            manager,
            this,
            result,
            callbackFn,
            pData,
            pCallbackID);
    }
    else
    {
        result = GetWrappedObjectAs<ID3DDestructionNotifier>()->RegisterDestructionCallback(
            callbackFn,
            pData,
            pCallbackID);
    }

    manager->DecrementCallScope();

    return result;
}

HRESULT STDMETHODCALLTYPE ID3DDestructionNotifier_Wrapper::UnregisterDestructionCallback(
    UINT callbackID)
{
    HRESULT result{};

    auto manager = D3D12CaptureManager::Get();
    auto call_scope = manager->IncrementCallScope();

    if (call_scope == 1)
    {
        CustomWrapperPreCall<format::ApiCallId::ApiCall_ID3DDestructionNotifier_UnregisterDestructionCallback>::Dispatch(
            manager,
            this,
            callbackID);

        result = GetWrappedObjectAs<ID3DDestructionNotifier>()->UnregisterDestructionCallback(
            callbackID);

        Encode_ID3DDestructionNotifier_UnregisterDestructionCallback(
            GetCaptureId(),
            result,
            callbackID);

        CustomWrapperPostCall<format::ApiCallId::ApiCall_ID3DDestructionNotifier_UnregisterDestructionCallback>::Dispatch(
            manager,
            this,
            result,
            callbackID);
    }
    else
    {
        result = GetWrappedObjectAs<ID3DDestructionNotifier>()->UnregisterDestructionCallback(
            callbackID);
    }

    manager->DecrementCallScope();

    return result;
}


/*
** This part is generated from Unknwnbase.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from guiddef.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from windef.h in Windows SDK: 10.0.19041.0
**
*/


/*
** This part is generated from minwinbase.h in Windows SDK: 10.0.19041.0
**
*/

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
