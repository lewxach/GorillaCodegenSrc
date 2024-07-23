// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: FontAsset
  class FontAsset;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FontDefinition
  struct FontDefinition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FontDefinition, "UnityEngine.UIElements", "FontDefinition");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.FontDefinition
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontDefinition/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*/ {
    public:
    public:
    // private UnityEngine.Font m_Font
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Font* m_Font;
    // Field size check
    static_assert(sizeof(::UnityEngine::Font*) == 0x8);
    // private UnityEngine.TextCore.Text.FontAsset m_FontAsset
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::TextCore::Text::FontAsset* m_FontAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontAsset*) == 0x8);
    public:
    // Creating value type constructor for type: FontDefinition
    constexpr FontDefinition(::UnityEngine::Font* m_Font_ = {}, ::UnityEngine::TextCore::Text::FontAsset* m_FontAsset_ = {}) noexcept : m_Font{m_Font_}, m_FontAsset{m_FontAsset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*>(this);
    }
    // Get instance field reference: private UnityEngine.Font m_Font
    [[deprecated("Use field access instead!")]] ::UnityEngine::Font*& dyn_m_Font();
    // Get instance field reference: private UnityEngine.TextCore.Text.FontAsset m_FontAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontAsset*& dyn_m_FontAsset();
    // public UnityEngine.Font get_font()
    // Offset: 0x568EB84
    ::UnityEngine::Font* get_font();
    // public UnityEngine.TextCore.Text.FontAsset get_fontAsset()
    // Offset: 0x568EB8C
    ::UnityEngine::TextCore::Text::FontAsset* get_fontAsset();
    // static public UnityEngine.UIElements.FontDefinition FromFont(UnityEngine.Font f)
    // Offset: 0x568EB94
    static ::UnityEngine::UIElements::FontDefinition FromFont(::UnityEngine::Font* f);
    // static public UnityEngine.UIElements.FontDefinition FromSDFFont(UnityEngine.TextCore.Text.FontAsset f)
    // Offset: 0x568EBBC
    static ::UnityEngine::UIElements::FontDefinition FromSDFFont(::UnityEngine::TextCore::Text::FontAsset* f);
    // static UnityEngine.UIElements.FontDefinition FromObject(System.Object obj)
    // Offset: 0x568EBE8
    static ::UnityEngine::UIElements::FontDefinition FromObject(::Il2CppObject* obj);
    // System.Boolean IsEmpty()
    // Offset: 0x568ED28
    bool IsEmpty();
    // public System.Boolean Equals(UnityEngine.UIElements.FontDefinition other)
    // Offset: 0x568EE50
    bool Equals(::UnityEngine::UIElements::FontDefinition other);
    // public override System.String ToString()
    // Offset: 0x568EDC0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x568EE98
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x568EF10
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.FontDefinition
  #pragma pack(pop)
  static check_size<sizeof(FontDefinition), 8 + sizeof(::UnityEngine::TextCore::Text::FontAsset*)> __UnityEngine_UIElements_FontDefinitionSizeCheck;
  static_assert(sizeof(FontDefinition) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.FontDefinition left, UnityEngine.UIElements.FontDefinition right)
  // Offset: 0x568EFF0
  bool operator ==(const ::UnityEngine::UIElements::FontDefinition& left, const ::UnityEngine::UIElements::FontDefinition& right);
  // static public System.Boolean op_Inequality(UnityEngine.UIElements.FontDefinition left, UnityEngine.UIElements.FontDefinition right)
  // Offset: 0x568F01C
  bool operator !=(const ::UnityEngine::UIElements::FontDefinition& left, const ::UnityEngine::UIElements::FontDefinition& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::get_font
// Il2CppName: get_font
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Font* (UnityEngine::UIElements::FontDefinition::*)()>(&UnityEngine::UIElements::FontDefinition::get_font)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "get_font", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::get_fontAsset
// Il2CppName: get_fontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (UnityEngine::UIElements::FontDefinition::*)()>(&UnityEngine::UIElements::FontDefinition::get_fontAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "get_fontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::FromFont
// Il2CppName: FromFont
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::UnityEngine::Font*)>(&UnityEngine::UIElements::FontDefinition::FromFont)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("UnityEngine", "Font")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "FromFont", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::FromSDFFont
// Il2CppName: FromSDFFont
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&UnityEngine::UIElements::FontDefinition::FromSDFFont)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "FromSDFFont", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::FromObject
// Il2CppName: FromObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::Il2CppObject*)>(&UnityEngine::UIElements::FontDefinition::FromObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "FromObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::FontDefinition::*)()>(&UnityEngine::UIElements::FontDefinition::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::FontDefinition::*)(::UnityEngine::UIElements::FontDefinition)>(&UnityEngine::UIElements::FontDefinition::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FontDefinition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::FontDefinition::*)()>(&UnityEngine::UIElements::FontDefinition::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::FontDefinition::*)(::Il2CppObject*)>(&UnityEngine::UIElements::FontDefinition::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::FontDefinition::*)()>(&UnityEngine::UIElements::FontDefinition::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FontDefinition), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UIElements::FontDefinition::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!