// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeyedHashAlgorithm
  class KeyedHashAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::KeyedHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::KeyedHashAlgorithm*, "System.Security.Cryptography", "KeyedHashAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.KeyedHashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class KeyedHashAlgorithm : public ::System::Security::Cryptography::HashAlgorithm {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // protected System.Byte[] KeyValue
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> KeyValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return KeyValue;
    }
    // Get instance field reference: protected System.Byte[] KeyValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_KeyValue();
    // public System.Byte[] get_Key()
    // Offset: 0x44F99D8
    ::ArrayW<uint8_t> get_Key();
    // public System.Void set_Key(System.Byte[] value)
    // Offset: 0x44F9A50
    void set_Key(::ArrayW<uint8_t> value);
    // static public System.Security.Cryptography.KeyedHashAlgorithm Create()
    // Offset: 0x44F9B54
    static ::System::Security::Cryptography::KeyedHashAlgorithm* Create();
    // static public System.Security.Cryptography.KeyedHashAlgorithm Create(System.String algName)
    // Offset: 0x44F9BA4
    static ::System::Security::Cryptography::KeyedHashAlgorithm* Create(::StringW algName);
    // protected System.Void .ctor()
    // Offset: 0x44F9064
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedHashAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::KeyedHashAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedHashAlgorithm*, creationType>()));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x44F8E94
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.KeyedHashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(KeyedHashAlgorithm), 40 + sizeof(::ArrayW<uint8_t>)> __System_Security_Cryptography_KeyedHashAlgorithmSizeCheck;
  static_assert(sizeof(KeyedHashAlgorithm) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::KeyedHashAlgorithm::*)()>(&System::Security::Cryptography::KeyedHashAlgorithm::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeyedHashAlgorithm*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::KeyedHashAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::KeyedHashAlgorithm::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeyedHashAlgorithm*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::KeyedHashAlgorithm* (*)()>(&System::Security::Cryptography::KeyedHashAlgorithm::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeyedHashAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::KeyedHashAlgorithm* (*)(::StringW)>(&System::Security::Cryptography::KeyedHashAlgorithm::Create)> {
  static const MethodInfo* get() {
    static auto* algName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeyedHashAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::KeyedHashAlgorithm::*)(bool)>(&System::Security::Cryptography::KeyedHashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeyedHashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
