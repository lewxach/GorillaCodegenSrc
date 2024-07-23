// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: CryptoConvert
  class CryptoConvert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.CryptoConvert
  // [TokenAttribute] Offset: FFFFFFFF
  class CryptoConvert : public ::Il2CppObject {
    public:
    // static private System.Int32 ToInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x4490E38
    static int ToInt32LE(::ArrayW<uint8_t> bytes, int offset);
    // static private System.UInt32 ToUInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x4490EAC
    static uint ToUInt32LE(::ArrayW<uint8_t> bytes, int offset);
    // static private System.Byte[] Trim(System.Byte[] array)
    // Offset: 0x4490F20
    static ::ArrayW<uint8_t> Trim(::ArrayW<uint8_t> array);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob)
    // Offset: 0x4490FD4
    static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob, System.Int32 offset)
    // Offset: 0x4490FDC
    static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob, int offset);
    // static private System.Security.Cryptography.RSAParameters GetParametersFromCapiPrivateKeyBlob(System.Byte[] blob, System.Int32 offset)
    // Offset: 0x449120C
    static ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob, int offset);
    // static public System.String ToHex(System.Byte[] input)
    // Offset: 0x44917C8
    static ::StringW ToHex(::ArrayW<uint8_t> input);
    // static private System.Byte FromHexChar(System.Char c)
    // Offset: 0x4491904
    static uint8_t FromHexChar(::Il2CppChar c);
    // static public System.Byte[] FromHex(System.String hex)
    // Offset: 0x449199C
    static ::ArrayW<uint8_t> FromHex(::StringW hex);
  }; // Mono.Security.Cryptography.CryptoConvert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToInt32LE
// Il2CppName: ToInt32LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::ToInt32LE)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToInt32LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToUInt32LE
// Il2CppName: ToUInt32LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::ToUInt32LE)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToUInt32LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::Trim
// Il2CppName: Trim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::Trim)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "Trim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  static const MethodInfo* get() {
    static auto* blob = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromCapiPrivateKeyBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blob});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  static const MethodInfo* get() {
    static auto* blob = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromCapiPrivateKeyBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blob, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::GetParametersFromCapiPrivateKeyBlob
// Il2CppName: GetParametersFromCapiPrivateKeyBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::GetParametersFromCapiPrivateKeyBlob)> {
  static const MethodInfo* get() {
    static auto* blob = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "GetParametersFromCapiPrivateKeyBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blob, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToHex
// Il2CppName: ToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::ToHex)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromHexChar
// Il2CppName: FromHexChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Il2CppChar)>(&Mono::Security::Cryptography::CryptoConvert::FromHexChar)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromHexChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&Mono::Security::Cryptography::CryptoConvert::FromHex)> {
  static const MethodInfo* get() {
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hex});
  }
};