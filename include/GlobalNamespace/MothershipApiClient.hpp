// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipSendHTTPRequestDelegateWrapper
  class MothershipSendHTTPRequestDelegateWrapper;
  // Forward declaring type: MothershipHTTPResponse
  class MothershipHTTPResponse;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipApiClient
  class MothershipApiClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipApiClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipApiClient*, "", "MothershipApiClient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: MothershipApiClient
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipApiClient : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x2677C40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipApiClient* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipApiClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipApiClient*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void Dispose()
    // Offset: 0x2677D40
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x2677DAC
    void Dispose(bool disposing);
    // public System.Void SetHttpRequestDelegate(MothershipSendHTTPRequestDelegateWrapper inSendRequestDelegate)
    // Offset: 0x2677F78
    void SetHttpRequestDelegate(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper* inSendRequestDelegate);
    // public System.Void ReceiveHttpResponse(MothershipHTTPResponse response)
    // Offset: 0x2678140
    void ReceiveHttpResponse(::GlobalNamespace::MothershipHTTPResponse* response);
    // public System.Void TickRetryQueue(System.Single deltaTimeInSeconds)
    // Offset: 0x26782E4
    void TickRetryQueue(float deltaTimeInSeconds);
    // protected override System.Void Finalize()
    // Offset: 0x2677CA0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // MothershipApiClient
  #pragma pack(pop)
  static check_size<sizeof(MothershipApiClient), 32 + sizeof(bool)> __GlobalNamespace_MothershipApiClientSizeCheck;
  static_assert(sizeof(MothershipApiClient) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)()>(&GlobalNamespace::MothershipApiClient::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)(bool)>(&GlobalNamespace::MothershipApiClient::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::SetHttpRequestDelegate
// Il2CppName: SetHttpRequestDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*)>(&GlobalNamespace::MothershipApiClient::SetHttpRequestDelegate)> {
  static const MethodInfo* get() {
    static auto* inSendRequestDelegate = &::il2cpp_utils::GetClassFromName("", "MothershipSendHTTPRequestDelegateWrapper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "SetHttpRequestDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inSendRequestDelegate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::ReceiveHttpResponse
// Il2CppName: ReceiveHttpResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipHTTPResponse*)>(&GlobalNamespace::MothershipApiClient::ReceiveHttpResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("", "MothershipHTTPResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "ReceiveHttpResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::TickRetryQueue
// Il2CppName: TickRetryQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)(float)>(&GlobalNamespace::MothershipApiClient::TickRetryQueue)> {
  static const MethodInfo* get() {
    static auto* deltaTimeInSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "TickRetryQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTimeInSeconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiClient::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiClient::*)()>(&GlobalNamespace::MothershipApiClient::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiClient*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
