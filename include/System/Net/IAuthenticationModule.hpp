// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IAuthenticationModule
  class IAuthenticationModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IAuthenticationModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IAuthenticationModule*, "System.Net", "IAuthenticationModule");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IAuthenticationModule
  // [TokenAttribute] Offset: FFFFFFFF
  class IAuthenticationModule {
    public:
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);
    // public System.Boolean get_CanPreAuthenticate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanPreAuthenticate();
    // public System.String get_AuthenticationType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_AuthenticationType();
  }; // System.Net.IAuthenticationModule
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IAuthenticationModule::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (System::Net::IAuthenticationModule::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::IAuthenticationModule::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IAuthenticationModule*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, request, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::IAuthenticationModule::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (System::Net::IAuthenticationModule::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::IAuthenticationModule::PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IAuthenticationModule*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::IAuthenticationModule::get_CanPreAuthenticate
// Il2CppName: get_CanPreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IAuthenticationModule::*)()>(&System::Net::IAuthenticationModule::get_CanPreAuthenticate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IAuthenticationModule*), "get_CanPreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IAuthenticationModule::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::IAuthenticationModule::*)()>(&System::Net::IAuthenticationModule::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IAuthenticationModule*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
