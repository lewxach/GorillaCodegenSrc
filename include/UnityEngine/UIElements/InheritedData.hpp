// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.IStyleDataGroup`1
#include "UnityEngine/UIElements/IStyleDataGroup_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.UIElements.Length
#include "UnityEngine/UIElements/Length.hpp"
// Including type: UnityEngine.UIElements.TextShadow
#include "UnityEngine/UIElements/TextShadow.hpp"
// Including type: UnityEngine.UIElements.FontDefinition
#include "UnityEngine/UIElements/FontDefinition.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.UIElements.Visibility
#include "UnityEngine/UIElements/Visibility.hpp"
// Including type: UnityEngine.UIElements.WhiteSpace
#include "UnityEngine/UIElements/WhiteSpace.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: InheritedData
  struct InheritedData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InheritedData, "UnityEngine.UIElements", "InheritedData");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x8C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.InheritedData
  // [TokenAttribute] Offset: FFFFFFFF
  struct InheritedData/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>, public ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*/ {
    public:
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.UIElements.Length fontSize
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::Length fontSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    // public UnityEngine.UIElements.Length letterSpacing
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::Length letterSpacing;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    // public UnityEngine.UIElements.TextShadow textShadow
    // Size: 0x1C
    // Offset: 0x20
    ::UnityEngine::UIElements::TextShadow textShadow;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextShadow) == 0x1C);
    // Padding between fields: textShadow and: unityFont
    char __padding3[0x4] = {};
    // public UnityEngine.Font unityFont
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Font* unityFont;
    // Field size check
    static_assert(sizeof(::UnityEngine::Font*) == 0x8);
    // public UnityEngine.UIElements.FontDefinition unityFontDefinition
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::UIElements::FontDefinition unityFontDefinition;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::FontDefinition) == 0x10);
    // public UnityEngine.FontStyle unityFontStyleAndWeight
    // Size: 0x4
    // Offset: 0x58
    ::UnityEngine::FontStyle unityFontStyleAndWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::FontStyle) == 0x4);
    // public UnityEngine.UIElements.Length unityParagraphSpacing
    // Size: 0x8
    // Offset: 0x5C
    ::UnityEngine::UIElements::Length unityParagraphSpacing;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    // public UnityEngine.TextAnchor unityTextAlign
    // Size: 0x4
    // Offset: 0x64
    ::UnityEngine::TextAnchor unityTextAlign;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAnchor) == 0x4);
    // public UnityEngine.Color unityTextOutlineColor
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color unityTextOutlineColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single unityTextOutlineWidth
    // Size: 0x4
    // Offset: 0x78
    float unityTextOutlineWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.UIElements.Visibility visibility
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::UIElements::Visibility visibility;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Visibility) == 0x4);
    // public UnityEngine.UIElements.WhiteSpace whiteSpace
    // Size: 0x4
    // Offset: 0x80
    ::UnityEngine::UIElements::WhiteSpace whiteSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::WhiteSpace) == 0x4);
    // public UnityEngine.UIElements.Length wordSpacing
    // Size: 0x8
    // Offset: 0x84
    ::UnityEngine::UIElements::Length wordSpacing;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    public:
    // Creating value type constructor for type: InheritedData
    constexpr InheritedData(::UnityEngine::Color color_ = {}, ::UnityEngine::UIElements::Length fontSize_ = {}, ::UnityEngine::UIElements::Length letterSpacing_ = {}, ::UnityEngine::UIElements::TextShadow textShadow_ = {}, ::UnityEngine::Font* unityFont_ = {}, ::UnityEngine::UIElements::FontDefinition unityFontDefinition_ = {}, ::UnityEngine::FontStyle unityFontStyleAndWeight_ = {}, ::UnityEngine::UIElements::Length unityParagraphSpacing_ = {}, ::UnityEngine::TextAnchor unityTextAlign_ = {}, ::UnityEngine::Color unityTextOutlineColor_ = {}, float unityTextOutlineWidth_ = {}, ::UnityEngine::UIElements::Visibility visibility_ = {}, ::UnityEngine::UIElements::WhiteSpace whiteSpace_ = {}, ::UnityEngine::UIElements::Length wordSpacing_ = {}) noexcept : color{color_}, fontSize{fontSize_}, letterSpacing{letterSpacing_}, textShadow{textShadow_}, unityFont{unityFont_}, unityFontDefinition{unityFontDefinition_}, unityFontStyleAndWeight{unityFontStyleAndWeight_}, unityParagraphSpacing{unityParagraphSpacing_}, unityTextAlign{unityTextAlign_}, unityTextOutlineColor{unityTextOutlineColor_}, unityTextOutlineWidth{unityTextOutlineWidth_}, visibility{visibility_}, whiteSpace{whiteSpace_}, wordSpacing{wordSpacing_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>
    operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*>(this);
    }
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public UnityEngine.UIElements.Length fontSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_fontSize();
    // Get instance field reference: public UnityEngine.UIElements.Length letterSpacing
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_letterSpacing();
    // Get instance field reference: public UnityEngine.UIElements.TextShadow textShadow
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextShadow& dyn_textShadow();
    // Get instance field reference: public UnityEngine.Font unityFont
    [[deprecated("Use field access instead!")]] ::UnityEngine::Font*& dyn_unityFont();
    // Get instance field reference: public UnityEngine.UIElements.FontDefinition unityFontDefinition
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::FontDefinition& dyn_unityFontDefinition();
    // Get instance field reference: public UnityEngine.FontStyle unityFontStyleAndWeight
    [[deprecated("Use field access instead!")]] ::UnityEngine::FontStyle& dyn_unityFontStyleAndWeight();
    // Get instance field reference: public UnityEngine.UIElements.Length unityParagraphSpacing
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_unityParagraphSpacing();
    // Get instance field reference: public UnityEngine.TextAnchor unityTextAlign
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAnchor& dyn_unityTextAlign();
    // Get instance field reference: public UnityEngine.Color unityTextOutlineColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_unityTextOutlineColor();
    // Get instance field reference: public System.Single unityTextOutlineWidth
    [[deprecated("Use field access instead!")]] float& dyn_unityTextOutlineWidth();
    // Get instance field reference: public UnityEngine.UIElements.Visibility visibility
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Visibility& dyn_visibility();
    // Get instance field reference: public UnityEngine.UIElements.WhiteSpace whiteSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::WhiteSpace& dyn_whiteSpace();
    // Get instance field reference: public UnityEngine.UIElements.Length wordSpacing
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_wordSpacing();
    // public UnityEngine.UIElements.InheritedData Copy()
    // Offset: 0x56A50D0
    ::UnityEngine::UIElements::InheritedData Copy();
    // public System.Void CopyFrom(ref UnityEngine.UIElements.InheritedData other)
    // Offset: 0x56A50EC
    void CopyFrom(ByRef<::UnityEngine::UIElements::InheritedData> other);
    // public System.Boolean Equals(UnityEngine.UIElements.InheritedData other)
    // Offset: 0x56A537C
    bool Equals(::UnityEngine::UIElements::InheritedData other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x56A53C8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x56A5470
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.InheritedData
  #pragma pack(pop)
  static check_size<sizeof(InheritedData), 132 + sizeof(::UnityEngine::UIElements::Length)> __UnityEngine_UIElements_InheritedDataSizeCheck;
  static_assert(sizeof(InheritedData) == 0x8C);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.InheritedData lhs, UnityEngine.UIElements.InheritedData rhs)
  // Offset: 0x56A510C
  bool operator ==(const ::UnityEngine::UIElements::InheritedData& lhs, const ::UnityEngine::UIElements::InheritedData& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::InheritedData (UnityEngine::UIElements::InheritedData::*)()>(&UnityEngine::UIElements::InheritedData::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::InheritedData), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::InheritedData::*)(ByRef<::UnityEngine::UIElements::InheritedData>)>(&UnityEngine::UIElements::InheritedData::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "InheritedData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::InheritedData), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::InheritedData::*)(::UnityEngine::UIElements::InheritedData)>(&UnityEngine::UIElements::InheritedData::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "InheritedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::InheritedData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::InheritedData::*)(::Il2CppObject*)>(&UnityEngine::UIElements::InheritedData::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::InheritedData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::InheritedData::*)()>(&UnityEngine::UIElements::InheritedData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::InheritedData), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::InheritedData::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
