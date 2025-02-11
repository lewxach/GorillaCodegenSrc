// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseField`1
#include "UnityEngine/UIElements/BaseField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Label
  class Label;
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: NavigationSubmitEvent
  class NavigationSubmitEvent;
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseBoolField
  class BaseBoolField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BaseBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseBoolField*, "UnityEngine.UIElements", "BaseBoolField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.BaseBoolField
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseBoolField : public ::UnityEngine::UIElements::BaseField_1<bool> {
    public:
    public:
    // protected UnityEngine.UIElements.Label m_Label
    // Size: 0x8
    // Offset: 0x428
    ::UnityEngine::UIElements::Label* m_Label;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Label*) == 0x8);
    // protected readonly UnityEngine.UIElements.VisualElement m_CheckMark
    // Size: 0x8
    // Offset: 0x430
    ::UnityEngine::UIElements::VisualElement* m_CheckMark;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // UnityEngine.UIElements.Clickable m_Clickable
    // Size: 0x8
    // Offset: 0x438
    ::UnityEngine::UIElements::Clickable* m_Clickable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Clickable*) == 0x8);
    // private System.String m_OriginalText
    // Size: 0x8
    // Offset: 0x440
    ::StringW m_OriginalText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: protected UnityEngine.UIElements.Label m_Label
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Label*& dyn_m_Label();
    // Get instance field reference: protected readonly UnityEngine.UIElements.VisualElement m_CheckMark
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_CheckMark();
    // Get instance field reference: UnityEngine.UIElements.Clickable m_Clickable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Clickable*& dyn_m_Clickable();
    // Get instance field reference: private System.String m_OriginalText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_OriginalText();
    // private System.Void OnNavigationSubmit(UnityEngine.UIElements.NavigationSubmitEvent evt)
    // Offset: 0x55A2FA8
    void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);
    // public System.String get_text()
    // Offset: 0x55A2FDC
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x55A2F08
    void set_text(::StringW value);
    // protected System.Void InitLabel()
    // Offset: 0x55A2FF8
    void InitLabel();
    // public System.Void SetValueWithoutNotify(System.Boolean newValue)
    // Offset: 0x55A3098
    void SetValueWithoutNotify(bool newValue);
    // private System.Void OnClickEvent(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x55A3178
    void OnClickEvent(::UnityEngine::UIElements::EventBase* evt);
    // protected System.Void ToggleValue()
    // Offset: 0x55A3400
    void ToggleValue();
    // public System.Void .ctor(System.String label)
    // Offset: 0x55A2CCC
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: System.Void BaseField_1::.ctor(System.String label)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseBoolField* New_ctor(::StringW label) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseBoolField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseBoolField*, creationType>(label)));
    }
    // protected override System.Void UpdateMixedValueContent()
    // Offset: 0x55A3438
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: System.Void BaseField_1::UpdateMixedValueContent()
    void UpdateMixedValueContent();
  }; // UnityEngine.UIElements.BaseBoolField
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::OnNavigationSubmit
// Il2CppName: OnNavigationSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)(::UnityEngine::UIElements::NavigationSubmitEvent*)>(&UnityEngine::UIElements::BaseBoolField::OnNavigationSubmit)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "NavigationSubmitEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "OnNavigationSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::BaseBoolField::*)()>(&UnityEngine::UIElements::BaseBoolField::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)(::StringW)>(&UnityEngine::UIElements::BaseBoolField::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::InitLabel
// Il2CppName: InitLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)()>(&UnityEngine::UIElements::BaseBoolField::InitLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "InitLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::SetValueWithoutNotify
// Il2CppName: SetValueWithoutNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)(bool)>(&UnityEngine::UIElements::BaseBoolField::SetValueWithoutNotify)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "SetValueWithoutNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::OnClickEvent
// Il2CppName: OnClickEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::BaseBoolField::OnClickEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "OnClickEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::ToggleValue
// Il2CppName: ToggleValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)()>(&UnityEngine::UIElements::BaseBoolField::ToggleValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "ToggleValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseBoolField::UpdateMixedValueContent
// Il2CppName: UpdateMixedValueContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseBoolField::*)()>(&UnityEngine::UIElements::BaseBoolField::UpdateMixedValueContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseBoolField*), "UpdateMixedValueContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
