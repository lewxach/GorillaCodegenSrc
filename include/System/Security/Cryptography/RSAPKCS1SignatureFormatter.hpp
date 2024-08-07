// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricSignatureFormatter
#include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAPKCS1SignatureFormatter
  class RSAPKCS1SignatureFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
    public:
    public:
    // private System.Security.Cryptography.RSA rsa
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.String hash
    // Size: 0x8
    // Offset: 0x18
    ::StringW hash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.RSA rsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn_rsa();
    // Get instance field reference: private System.String hash
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hash();
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x4517EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureFormatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x4517EA0
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureFormatter*, creationType>()));
    }
    // public override System.Byte[] CreateSignature(System.Byte[] rgbHash)
    // Offset: 0x4517EDC
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Byte[] AsymmetricSignatureFormatter::CreateSignature(System.Byte[] rgbHash)
    ::ArrayW<uint8_t> CreateSignature(::ArrayW<uint8_t> rgbHash);
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x4517FF8
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::StringW strName);
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x4518054
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);
  }; // System.Security.Cryptography.RSAPKCS1SignatureFormatter
  #pragma pack(pop)
  static check_size<sizeof(RSAPKCS1SignatureFormatter), 24 + sizeof(::StringW)> __System_Security_Cryptography_RSAPKCS1SignatureFormatterSizeCheck;
  static_assert(sizeof(RSAPKCS1SignatureFormatter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureFormatter::CreateSignature
// Il2CppName: CreateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSAPKCS1SignatureFormatter::CreateSignature)> {
  static const MethodInfo* get() {
    static auto* rgbHash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureFormatter*), "CreateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbHash});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetHashAlgorithm
// Il2CppName: SetHashAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::StringW)>(&System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetHashAlgorithm)> {
  static const MethodInfo* get() {
    static auto* strName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureFormatter*), "SetHashAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSAPKCS1SignatureFormatter*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
