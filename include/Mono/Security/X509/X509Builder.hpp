// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Builder
  class X509Builder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Builder);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Builder*, "Mono.Security.X509", "X509Builder");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Builder
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Builder : public ::Il2CppObject {
    public:
    public:
    // private System.String hashName
    // Size: 0x8
    // Offset: 0x10
    ::StringW hashName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return hashName;
    }
    // static field const value: static private System.String defaultHash
    static constexpr const char* defaultHash = "SHA1";
    // Get static field: static private System.String defaultHash
    static ::StringW _get_defaultHash();
    // Set static field: static private System.String defaultHash
    static void _set_defaultHash(::StringW value);
    // Get instance field reference: private System.String hashName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hashName();
    // protected System.Void .ctor()
    // Offset: 0x447EBC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Builder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Builder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Builder*, creationType>()));
    }
    // protected Mono.Security.ASN1 ToBeSigned(System.String hashName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Mono::Security::ASN1* ToBeSigned(::StringW hashName);
    // protected System.String GetOid(System.String hashName)
    // Offset: 0x447EC20
    ::StringW GetOid(::StringW hashName);
    // public System.String get_Hash()
    // Offset: 0x447EF40
    ::StringW get_Hash();
    // public System.Void set_Hash(System.String value)
    // Offset: 0x447EF48
    void set_Hash(::StringW value);
    // public System.Byte[] Sign(System.Security.Cryptography.AsymmetricAlgorithm aa)
    // Offset: 0x447EFAC
    ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::AsymmetricAlgorithm* aa);
    // private System.Byte[] Build(Mono.Security.ASN1 tbs, System.String hashoid, System.Byte[] signature)
    // Offset: 0x447F0E4
    ::ArrayW<uint8_t> Build(::Mono::Security::ASN1* tbs, ::StringW hashoid, ::ArrayW<uint8_t> signature);
    // public System.Byte[] Sign(System.Security.Cryptography.RSA key)
    // Offset: 0x447F210
    ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::RSA* key);
    // public System.Byte[] Sign(System.Security.Cryptography.DSA key)
    // Offset: 0x447F320
    ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::DSA* key);
  }; // Mono.Security.X509.X509Builder
  #pragma pack(pop)
  static check_size<sizeof(X509Builder), 16 + sizeof(::StringW)> __Mono_Security_X509_X509BuilderSizeCheck;
  static_assert(sizeof(X509Builder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::ToBeSigned
// Il2CppName: ToBeSigned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X509Builder::*)(::StringW)>(&Mono::Security::X509::X509Builder::ToBeSigned)> {
  static const MethodInfo* get() {
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "ToBeSigned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashName});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::GetOid
// Il2CppName: GetOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Builder::*)(::StringW)>(&Mono::Security::X509::X509Builder::GetOid)> {
  static const MethodInfo* get() {
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "GetOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashName});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Builder::*)()>(&Mono::Security::X509::X509Builder::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::set_Hash
// Il2CppName: set_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Builder::*)(::StringW)>(&Mono::Security::X509::X509Builder::set_Hash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "set_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&Mono::Security::X509::X509Builder::Sign)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Builder::*)(::Mono::Security::ASN1*, ::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Builder::Build)> {
  static const MethodInfo* get() {
    static auto* tbs = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    static auto* hashoid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tbs, hashoid, signature});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::RSA*)>(&Mono::Security::X509::X509Builder::Sign)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Builder::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::DSA*)>(&Mono::Security::X509::X509Builder::Sign)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Builder*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
