// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderHashId
  struct ShaderHashId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderHashId, "", "ShaderHashId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ShaderHashId
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShaderHashId/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String _text
    // Size: 0x8
    // Offset: 0x0
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _hash
    // Size: 0x4
    // Offset: 0x8
    int hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShaderHashId
    constexpr ShaderHashId(::StringW text_ = {}, int hash_ = {}) noexcept : text{text_}, hash{hash_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String _text
    [[deprecated("Use field access instead!")]] ::StringW& dyn__text();
    // Get instance field reference: private System.Int32 _hash
    [[deprecated("Use field access instead!")]] int& dyn__hash();
    // public System.String get_text()
    // Offset: 0x277A230
    ::StringW get_text();
    // public System.Int32 get_hash()
    // Offset: 0x277A238
    int get_hash();
    // public System.Void .ctor(System.String text)
    // Offset: 0x277A240
    ShaderHashId(::StringW text);
    // public override System.String ToString()
    // Offset: 0x277A274
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x277A27C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // ShaderHashId
  #pragma pack(pop)
  static check_size<sizeof(ShaderHashId), 8 + sizeof(int)> __GlobalNamespace_ShaderHashIdSizeCheck;
  static_assert(sizeof(ShaderHashId) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderHashId::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ShaderHashId::*)()>(&GlobalNamespace::ShaderHashId::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderHashId), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderHashId::get_hash
// Il2CppName: get_hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ShaderHashId::*)()>(&GlobalNamespace::ShaderHashId::get_hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderHashId), "get_hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderHashId::ShaderHashId
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShaderHashId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ShaderHashId::*)()>(&GlobalNamespace::ShaderHashId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderHashId), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderHashId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ShaderHashId::*)()>(&GlobalNamespace::ShaderHashId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderHashId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
