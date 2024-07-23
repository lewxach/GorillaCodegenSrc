// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.FtpWebRequest
#include "System/Net/FtpWebRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FtpWebRequest::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest::$$c*, "System.Net", "FtpWebRequest/<>c");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpWebRequest/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FtpWebRequest::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.FtpWebRequest/<>c <>9
    static ::System::Net::FtpWebRequest::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.FtpWebRequest/<>c <>9
    static void _set_$$9(::System::Net::FtpWebRequest::$$c* value);
    // Get static field: static public System.Func`1<System.Security.Cryptography.X509Certificates.X509CertificateCollection> <>9__114_0
    static ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* _get_$$9__114_0();
    // Set static field: static public System.Func`1<System.Security.Cryptography.X509Certificates.X509CertificateCollection> <>9__114_0
    static void _set_$$9__114_0(::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4FBEF68
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4FBEFD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebRequest::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpWebRequest::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebRequest::$$c*, creationType>()));
    }
    // System.Security.Cryptography.X509Certificates.X509CertificateCollection <get_ClientCertificates>b__114_0()
    // Offset: 0x4FBEFD8
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* $get_ClientCertificates$b__114_0();
  }; // System.Net.FtpWebRequest/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpWebRequest::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::FtpWebRequest::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebRequest::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebRequest::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpWebRequest::$$c::$get_ClientCertificates$b__114_0
// Il2CppName: <get_ClientCertificates>b__114_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (System::Net::FtpWebRequest::$$c::*)()>(&System::Net::FtpWebRequest::$$c::$get_ClientCertificates$b__114_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebRequest::$$c*), "<get_ClientCertificates>b__114_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};