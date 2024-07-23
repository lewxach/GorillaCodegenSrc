// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TextElement
#include "UnityEngine/UIElements/TextElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: NavigationSubmitEvent
  class NavigationSubmitEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Button
  class Button;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Button*, "UnityEngine.UIElements", "Button");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Button
  // [TokenAttribute] Offset: FFFFFFFF
  class Button : public ::UnityEngine::UIElements::TextElement {
    public:
    // Nested type: ::UnityEngine::UIElements::Button::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::Button::UxmlTraits
    class UxmlTraits;
    public:
    // private UnityEngine.UIElements.Clickable m_Clickable
    // Size: 0x8
    // Offset: 0x498
    ::UnityEngine::UIElements::Clickable* m_Clickable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Clickable*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::Clickable*
    constexpr operator ::UnityEngine::UIElements::Clickable*() const noexcept {
      return m_Clickable;
    }
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static private readonly System.String NonEmptyString
    static ::StringW _get_NonEmptyString();
    // Set static field: static private readonly System.String NonEmptyString
    static void _set_NonEmptyString(::StringW value);
    // Get instance field reference: private UnityEngine.UIElements.Clickable m_Clickable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Clickable*& dyn_m_Clickable();
    // public UnityEngine.UIElements.Clickable get_clickable()
    // Offset: 0x55AEF20
    ::UnityEngine::UIElements::Clickable* get_clickable();
    // public System.Void set_clickable(UnityEngine.UIElements.Clickable value)
    // Offset: 0x55AEF28
    void set_clickable(::UnityEngine::UIElements::Clickable* value);
    // public System.Void .ctor(System.Action clickEvent)
    // Offset: 0x55AEFA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button* New_ctor(::System::Action* clickEvent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Button::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button*, creationType>(clickEvent)));
    }
    // private System.Void OnNavigationSubmit(UnityEngine.UIElements.NavigationSubmitEvent evt)
    // Offset: 0x55AF0FC
    void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);
    // public System.Void .ctor()
    // Offset: 0x55AEF9C
    // Implemented from: UnityEngine.UIElements.TextElement
    // Base method: System.Void TextElement::.ctor()
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Button::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button*, creationType>()));
    }
    // protected internal override UnityEngine.Vector2 DoMeasure(System.Single desiredWidth, UnityEngine.UIElements.VisualElement/MeasureMode widthMode, System.Single desiredHeight, UnityEngine.UIElements.VisualElement/MeasureMode heightMode)
    // Offset: 0x55AF134
    // Implemented from: UnityEngine.UIElements.TextElement
    // Base method: UnityEngine.Vector2 TextElement::DoMeasure(System.Single desiredWidth, UnityEngine.UIElements.VisualElement/MeasureMode widthMode, System.Single desiredHeight, UnityEngine.UIElements.VisualElement/MeasureMode heightMode)
    ::UnityEngine::Vector2 DoMeasure(float desiredWidth, ::UnityEngine::UIElements::VisualElement::MeasureMode widthMode, float desiredHeight, ::UnityEngine::UIElements::VisualElement::MeasureMode heightMode);
    // static private System.Void .cctor()
    // Offset: 0x55AF1F0
    // Implemented from: UnityEngine.UIElements.TextElement
    // Base method: System.Void TextElement::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.Button
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::get_clickable
// Il2CppName: get_clickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Clickable* (UnityEngine::UIElements::Button::*)()>(&UnityEngine::UIElements::Button::get_clickable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Button*), "get_clickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::set_clickable
// Il2CppName: set_clickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::Clickable*)>(&UnityEngine::UIElements::Button::set_clickable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Clickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Button*), "set_clickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::OnNavigationSubmit
// Il2CppName: OnNavigationSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Button::*)(::UnityEngine::UIElements::NavigationSubmitEvent*)>(&UnityEngine::UIElements::Button::OnNavigationSubmit)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "NavigationSubmitEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Button*), "OnNavigationSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::DoMeasure
// Il2CppName: DoMeasure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::Button::*)(float, ::UnityEngine::UIElements::VisualElement::MeasureMode, float, ::UnityEngine::UIElements::VisualElement::MeasureMode)>(&UnityEngine::UIElements::Button::DoMeasure)> {
  static const MethodInfo* get() {
    static auto* desiredWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* widthMode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement/MeasureMode")->byval_arg;
    static auto* desiredHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMode = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement/MeasureMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Button*), "DoMeasure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desiredWidth, widthMode, desiredHeight, heightMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Button::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Button::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Button*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};