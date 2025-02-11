// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.IStyleValue`1
#include "UnityEngine/UIElements/IStyleValue_1.hpp"
// Including type: UnityEngine.UIElements.BackgroundSize
#include "UnityEngine/UIElements/BackgroundSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleBackgroundSize
  struct StyleBackgroundSize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleBackgroundSize, "UnityEngine.UIElements", "StyleBackgroundSize");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleBackgroundSize
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleBackgroundSize/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>, public ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*/ {
    public:
    public:
    // private UnityEngine.UIElements.BackgroundSize m_Value
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::UIElements::BackgroundSize m_Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::BackgroundSize) == 0x14);
    // private UnityEngine.UIElements.StyleKeyword m_Keyword
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::UIElements::StyleKeyword m_Keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleKeyword) == 0x4);
    public:
    // Creating value type constructor for type: StyleBackgroundSize
    constexpr StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize m_Value_ = {}, ::UnityEngine::UIElements::StyleKeyword m_Keyword_ = {}) noexcept : m_Value{m_Value_}, m_Keyword{m_Keyword_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>
    operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.BackgroundSize m_Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::BackgroundSize& dyn_m_Value();
    // Get instance field reference: private UnityEngine.UIElements.StyleKeyword m_Keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleKeyword& dyn_m_Keyword();
    // public UnityEngine.UIElements.BackgroundSize get_value()
    // Offset: 0x56A846C
    ::UnityEngine::UIElements::BackgroundSize get_value();
    // public UnityEngine.UIElements.StyleKeyword get_keyword()
    // Offset: 0x56A84AC
    ::UnityEngine::UIElements::StyleKeyword get_keyword();
    // public System.Void .ctor(UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A84B4
    StyleBackgroundSize(::UnityEngine::UIElements::StyleKeyword keyword);
    // System.Void .ctor(UnityEngine.UIElements.BackgroundSize v, UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x56A84C0
    // ABORTED: conflicts with another method.  StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize v, ::UnityEngine::UIElements::StyleKeyword keyword);
    // public System.Boolean Equals(UnityEngine.UIElements.StyleBackgroundSize other)
    // Offset: 0x56A8544
    bool Equals(::UnityEngine::UIElements::StyleBackgroundSize other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56A85C0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56A8650
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x56A8678
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleBackgroundSize
  #pragma pack(pop)
  static check_size<sizeof(StyleBackgroundSize), 20 + sizeof(::UnityEngine::UIElements::StyleKeyword)> __UnityEngine_UIElements_StyleBackgroundSizeSizeCheck;
  static_assert(sizeof(StyleBackgroundSize) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StyleBackgroundSize lhs, UnityEngine.UIElements.StyleBackgroundSize rhs)
  // Offset: 0x56A84D8
  bool operator ==(const ::UnityEngine::UIElements::StyleBackgroundSize& lhs, const ::UnityEngine::UIElements::StyleBackgroundSize& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundSize (UnityEngine::UIElements::StyleBackgroundSize::*)()>(&UnityEngine::UIElements::StyleBackgroundSize::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleKeyword (UnityEngine::UIElements::StyleBackgroundSize::*)()>(&UnityEngine::UIElements::StyleBackgroundSize::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::StyleBackgroundSize
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::StyleBackgroundSize
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(&UnityEngine::UIElements::StyleBackgroundSize::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleBackgroundSize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleBackgroundSize::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StyleBackgroundSize::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleBackgroundSize::*)()>(&UnityEngine::UIElements::StyleBackgroundSize::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleBackgroundSize::*)()>(&UnityEngine::UIElements::StyleBackgroundSize::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleBackgroundSize), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleBackgroundSize::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
