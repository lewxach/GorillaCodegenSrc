// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoLocalCertificateSelectionCallback
  class MonoLocalCertificateSelectionCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*, "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoLocalCertificateSelectionCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoLocalCertificateSelectionCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x448FD24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoLocalCertificateSelectionCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoLocalCertificateSelectionCallback*, creationType>(object, method)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate Invoke(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers)
    // Offset: 0x448FDD8
    ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW> acceptableIssuers);
  }; // Mono.Security.Interface.MonoLocalCertificateSelectionCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoLocalCertificateSelectionCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Security::Interface::MonoLocalCertificateSelectionCallback::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(&Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* remoteCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, localCertificates, remoteCertificate, acceptableIssuers});
  }
};