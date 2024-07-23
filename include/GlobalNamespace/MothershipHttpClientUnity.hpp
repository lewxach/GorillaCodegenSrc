// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MothershipSendHTTPRequestDelegateWrapper
#include "GlobalNamespace/MothershipSendHTTPRequestDelegateWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipClientApiClient
  class MothershipClientApiClient;
  // Forward declaring type: MothershipHTTPResponse
  class MothershipHTTPResponse;
  // Forward declaring type: MothershipHTTPRequest
  class MothershipHTTPRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipHttpClientUnity
  class MothershipHttpClientUnity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipHttpClientUnity);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipHttpClientUnity*, "", "MothershipHttpClientUnity");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MothershipHttpClientUnity
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipHttpClientUnity : public ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper {
    public:
    public:
    // private MothershipClientApiClient client
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MothershipClientApiClient* client;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MothershipClientApiClient*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::MothershipClientApiClient*
    constexpr operator ::GlobalNamespace::MothershipClientApiClient*() const noexcept {
      return client;
    }
    // Get instance field reference: private MothershipClientApiClient client
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MothershipClientApiClient*& dyn_client();
    // public System.Void .ctor(MothershipClientApiClient client)
    // Offset: 0x267D9F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipHttpClientUnity* New_ctor(::GlobalNamespace::MothershipClientApiClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipHttpClientUnity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipHttpClientUnity*, creationType>(client)));
    }
    // private System.Void <SendRequest>b__2_0(MothershipHTTPResponse Response)
    // Offset: 0x267E3D4
    void $SendRequest$b__2_0(::GlobalNamespace::MothershipHTTPResponse* Response);
    // public override System.Boolean SendRequest(MothershipHTTPRequest request)
    // Offset: 0x267DF98
    // Implemented from: MothershipSendHTTPRequestDelegateWrapper
    // Base method: System.Boolean MothershipSendHTTPRequestDelegateWrapper::SendRequest(MothershipHTTPRequest request)
    bool SendRequest(::GlobalNamespace::MothershipHTTPRequest* request);
  }; // MothershipHttpClientUnity
  #pragma pack(pop)
  static check_size<sizeof(MothershipHttpClientUnity), 48 + sizeof(::GlobalNamespace::MothershipClientApiClient*)> __GlobalNamespace_MothershipHttpClientUnitySizeCheck;
  static_assert(sizeof(MothershipHttpClientUnity) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpClientUnity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpClientUnity::$SendRequest$b__2_0
// Il2CppName: <SendRequest>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipHttpClientUnity::*)(::GlobalNamespace::MothershipHTTPResponse*)>(&GlobalNamespace::MothershipHttpClientUnity::$SendRequest$b__2_0)> {
  static const MethodInfo* get() {
    static auto* Response = &::il2cpp_utils::GetClassFromName("", "MothershipHTTPResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpClientUnity*), "<SendRequest>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpClientUnity::SendRequest
// Il2CppName: SendRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MothershipHttpClientUnity::*)(::GlobalNamespace::MothershipHTTPRequest*)>(&GlobalNamespace::MothershipHttpClientUnity::SendRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("", "MothershipHTTPRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpClientUnity*), "SendRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};