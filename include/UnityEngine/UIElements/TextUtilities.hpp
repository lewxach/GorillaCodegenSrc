// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextElement
  class TextElement;
  // Forward declaring type: PanelTextSettings
  class PanelTextSettings;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: FontAsset
  class FontAsset;
}
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: TextCoreSettings
  struct TextCoreSettings;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextUtilities
  class TextUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextUtilities*, "UnityEngine.UIElements", "TextUtilities");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.TextUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TextUtilities : public ::Il2CppObject {
    public:
    // static UnityEngine.Vector2 MeasureVisualElementTextSize(UnityEngine.UIElements.TextElement te, System.String textToMeasure, System.Single width, UnityEngine.UIElements.VisualElement/MeasureMode widthMode, System.Single height, UnityEngine.UIElements.VisualElement/MeasureMode heightMode)
    // Offset: 0x56B9100
    static ::UnityEngine::Vector2 MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te, ::StringW textToMeasure, float width, ::UnityEngine::UIElements::VisualElement::MeasureMode widthMode, float height, ::UnityEngine::UIElements::VisualElement::MeasureMode heightMode);
    // static UnityEngine.TextCore.Text.FontAsset GetFontAsset(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x56B8BC0
    static ::UnityEngine::TextCore::Text::FontAsset* GetFontAsset(::UnityEngine::UIElements::VisualElement* ve);
    // static System.Boolean IsFontAssigned(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x56B927C
    static bool IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve);
    // static UnityEngine.UIElements.PanelTextSettings GetTextSettingsFrom(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x56B8AFC
    static ::UnityEngine::UIElements::PanelTextSettings* GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve);
    // static System.Single ConvertPixelUnitsToTextCoreRelativeUnits(UnityEngine.UIElements.VisualElement ve, UnityEngine.TextCore.Text.FontAsset fontAsset)
    // Offset: 0x56B8FFC
    static float ConvertPixelUnitsToTextCoreRelativeUnits(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);
    // static UnityEngine.UIElements.UIR.TextCoreSettings GetTextCoreSettingsForElement(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x56B9340
    static ::UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve);
  }; // UnityEngine.UIElements.TextUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize
// Il2CppName: MeasureVisualElementTextSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::StringW, float, ::UnityEngine::UIElements::VisualElement::MeasureMode, float, ::UnityEngine::UIElements::VisualElement::MeasureMode)>(&UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  static const MethodInfo* get() {
    static auto* te = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextElement")->byval_arg;
    static auto* textToMeasure = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* widthMode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement/MeasureMode")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement/MeasureMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "MeasureVisualElementTextSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{te, textToMeasure, width, widthMode, height, heightMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::GetFontAsset
// Il2CppName: GetFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "GetFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::IsFontAssigned
// Il2CppName: IsFontAssigned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::TextUtilities::IsFontAssigned)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "IsFontAssigned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom
// Il2CppName: GetTextSettingsFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PanelTextSettings* (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "GetTextSettingsFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::ConvertPixelUnitsToTextCoreRelativeUnits
// Il2CppName: ConvertPixelUnitsToTextCoreRelativeUnits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::TextCore::Text::FontAsset*)>(&UnityEngine::UIElements::TextUtilities::ConvertPixelUnitsToTextCoreRelativeUnits)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "ConvertPixelUnitsToTextCoreRelativeUnits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, fontAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement
// Il2CppName: GetTextCoreSettingsForElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::TextCoreSettings (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextUtilities*), "GetTextCoreSettingsForElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};