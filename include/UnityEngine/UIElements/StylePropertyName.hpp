// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StylePropertyId
#include "UnityEngine/UIElements/StyleSheets/StylePropertyId.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StylePropertyName
  struct StylePropertyName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyName, "UnityEngine.UIElements", "StylePropertyName");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StylePropertyName
  // [TokenAttribute] Offset: FFFFFFFF
  struct StylePropertyName/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*/ {
    public:
    public:
    // private readonly UnityEngine.UIElements.StyleSheets.StylePropertyId <id>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId id;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::StylePropertyId) == 0x4);
    // Padding between fields: id and: name
    char __padding0[0x4] = {};
    // private readonly System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: StylePropertyName
    constexpr StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId id_ = {}, ::StringW name_ = {}) noexcept : id{id_}, name{name_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.UIElements.StyleSheets.StylePropertyId <id>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheets::StylePropertyId& dyn_$id$k__BackingField();
    // Get instance field reference: private readonly System.String <name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$name$k__BackingField();
    // UnityEngine.UIElements.StyleSheets.StylePropertyId get_id()
    // Offset: 0x56AFBD8
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_id();
    // private System.String get_name()
    // Offset: 0x56AFBE0
    ::StringW get_name();
    // static UnityEngine.UIElements.StyleSheets.StylePropertyId StylePropertyIdFromString(System.String name)
    // Offset: 0x56AFBE8
    static ::UnityEngine::UIElements::StyleSheets::StylePropertyId StylePropertyIdFromString(::StringW name);
    // System.Void .ctor(UnityEngine.UIElements.StyleSheets.StylePropertyId stylePropertyId)
    // Offset: 0x56AFC88
    StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId stylePropertyId);
    // public System.Void .ctor(System.String name)
    // Offset: 0x56AFD48
    StylePropertyName(::StringW name);
    // public System.Boolean Equals(UnityEngine.UIElements.StylePropertyName other)
    // Offset: 0x56AFE64
    bool Equals(::UnityEngine::UIElements::StylePropertyName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56AFDE4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x56AFDEC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x56AFE74
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StylePropertyName
  #pragma pack(pop)
  static check_size<sizeof(StylePropertyName), 8 + sizeof(::StringW)> __UnityEngine_UIElements_StylePropertyNameSizeCheck;
  static_assert(sizeof(StylePropertyName) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StylePropertyName lhs, UnityEngine.UIElements.StylePropertyName rhs)
  // Offset: 0x56AFDA4
  bool operator ==(const ::UnityEngine::UIElements::StylePropertyName& lhs, const ::UnityEngine::UIElements::StylePropertyName& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.UIElements.StylePropertyName lhs, UnityEngine.UIElements.StylePropertyName rhs)
  // Offset: 0x56AFDB0
  bool operator !=(const ::UnityEngine::UIElements::StylePropertyName& lhs, const ::UnityEngine::UIElements::StylePropertyName& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (UnityEngine::UIElements::StylePropertyName::*)()>(&UnityEngine::UIElements::StylePropertyName::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StylePropertyName::*)()>(&UnityEngine::UIElements::StylePropertyName::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::StylePropertyIdFromString
// Il2CppName: StylePropertyIdFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (*)(::StringW)>(&UnityEngine::UIElements::StylePropertyName::StylePropertyIdFromString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "StylePropertyIdFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::StylePropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::StylePropertyName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StylePropertyName::*)(::UnityEngine::UIElements::StylePropertyName)>(&UnityEngine::UIElements::StylePropertyName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StylePropertyName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StylePropertyName::*)()>(&UnityEngine::UIElements::StylePropertyName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StylePropertyName::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StylePropertyName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StylePropertyName::*)()>(&UnityEngine::UIElements::StylePropertyName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyName), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyName::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!