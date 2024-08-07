// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpListenerRequest
#include "System/Net/HttpListenerRequest.hpp"
// Including type: System.Net.TransportContext
#include "System/Net/TransportContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ChannelBinding
  class ChannelBinding;
  // Forward declaring type: ChannelBindingKind
  struct ChannelBindingKind;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListenerRequest::Context);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequest::Context*, "System.Net", "HttpListenerRequest/Context");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequest/Context
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerRequest::Context : public ::System::Net::TransportContext {
    public:
    // public override System.Security.Authentication.ExtendedProtection.ChannelBinding GetChannelBinding(System.Security.Authentication.ExtendedProtection.ChannelBindingKind kind)
    // Offset: 0x501A270
    // Implemented from: System.Net.TransportContext
    // Base method: System.Security.Authentication.ExtendedProtection.ChannelBinding TransportContext::GetChannelBinding(System.Security.Authentication.ExtendedProtection.ChannelBindingKind kind)
    ::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind kind);
    // public System.Void .ctor()
    // Offset: 0x501A038
    // Implemented from: System.Net.TransportContext
    // Base method: System.Void TransportContext::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerRequest::Context* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListenerRequest::Context::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerRequest::Context*, creationType>()));
    }
  }; // System.Net.HttpListenerRequest/Context
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::Context::GetChannelBinding
// Il2CppName: GetChannelBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::ExtendedProtection::ChannelBinding* (System::Net::HttpListenerRequest::Context::*)(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind)>(&System::Net::HttpListenerRequest::Context::GetChannelBinding)> {
  static const MethodInfo* get() {
    static auto* kind = &::il2cpp_utils::GetClassFromName("System.Security.Authentication.ExtendedProtection", "ChannelBindingKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest::Context*), "GetChannelBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kind});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::Context::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
