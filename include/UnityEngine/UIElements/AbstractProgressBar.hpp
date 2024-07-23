// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BindableElement
#include "UnityEngine/UIElements/BindableElement.hpp"
// Including type: UnityEngine.UIElements.INotifyValueChanged`1
#include "UnityEngine/UIElements/INotifyValueChanged_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: Label
  class Label;
  // Forward declaring type: GeometryChangedEvent
  class GeometryChangedEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: AbstractProgressBar
  class AbstractProgressBar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::AbstractProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AbstractProgressBar*, "UnityEngine.UIElements", "AbstractProgressBar");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.AbstractProgressBar
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractProgressBar : public ::UnityEngine::UIElements::BindableElement/*, public ::UnityEngine::UIElements::INotifyValueChanged_1<float>*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::AbstractProgressBar::UxmlTraits
    class UxmlTraits;
    public:
    // private readonly UnityEngine.UIElements.VisualElement m_Background
    // Size: 0x8
    // Offset: 0x3D0
    ::UnityEngine::UIElements::VisualElement* m_Background;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private readonly UnityEngine.UIElements.VisualElement m_Progress
    // Size: 0x8
    // Offset: 0x3D8
    ::UnityEngine::UIElements::VisualElement* m_Progress;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private readonly UnityEngine.UIElements.Label m_Title
    // Size: 0x8
    // Offset: 0x3E0
    ::UnityEngine::UIElements::Label* m_Title;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Label*) == 0x8);
    // private System.Single m_LowValue
    // Size: 0x4
    // Offset: 0x3E8
    float m_LowValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_HighValue
    // Size: 0x4
    // Offset: 0x3EC
    float m_HighValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Value
    // Size: 0x4
    // Offset: 0x3F0
    float m_Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::INotifyValueChanged_1<float>
    operator ::UnityEngine::UIElements::INotifyValueChanged_1<float>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::INotifyValueChanged_1<float>*>(this);
    }
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String containerUssClassName
    static ::StringW _get_containerUssClassName();
    // Set static field: static public readonly System.String containerUssClassName
    static void _set_containerUssClassName(::StringW value);
    // Get static field: static public readonly System.String titleUssClassName
    static ::StringW _get_titleUssClassName();
    // Set static field: static public readonly System.String titleUssClassName
    static void _set_titleUssClassName(::StringW value);
    // Get static field: static public readonly System.String titleContainerUssClassName
    static ::StringW _get_titleContainerUssClassName();
    // Set static field: static public readonly System.String titleContainerUssClassName
    static void _set_titleContainerUssClassName(::StringW value);
    // Get static field: static public readonly System.String progressUssClassName
    static ::StringW _get_progressUssClassName();
    // Set static field: static public readonly System.String progressUssClassName
    static void _set_progressUssClassName(::StringW value);
    // Get static field: static public readonly System.String backgroundUssClassName
    static ::StringW _get_backgroundUssClassName();
    // Set static field: static public readonly System.String backgroundUssClassName
    static void _set_backgroundUssClassName(::StringW value);
    // Get instance field reference: private readonly UnityEngine.UIElements.VisualElement m_Background
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Background();
    // Get instance field reference: private readonly UnityEngine.UIElements.VisualElement m_Progress
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Progress();
    // Get instance field reference: private readonly UnityEngine.UIElements.Label m_Title
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Label*& dyn_m_Title();
    // Get instance field reference: private System.Single m_LowValue
    [[deprecated("Use field access instead!")]] float& dyn_m_LowValue();
    // Get instance field reference: private System.Single m_HighValue
    [[deprecated("Use field access instead!")]] float& dyn_m_HighValue();
    // Get instance field reference: private System.Single m_Value
    [[deprecated("Use field access instead!")]] float& dyn_m_Value();
    // public System.Void set_title(System.String value)
    // Offset: 0x5623F84
    void set_title(::StringW value);
    // public System.Single get_lowValue()
    // Offset: 0x5623FA8
    float get_lowValue();
    // public System.Void set_lowValue(System.Single value)
    // Offset: 0x5623FB0
    void set_lowValue(float value);
    // public System.Single get_highValue()
    // Offset: 0x56240E4
    float get_highValue();
    // public System.Void set_highValue(System.Single value)
    // Offset: 0x56240EC
    void set_highValue(float value);
    // private System.Void OnGeometryChanged(UnityEngine.UIElements.GeometryChangedEvent e)
    // Offset: 0x56243C8
    void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);
    // public System.Single get_value()
    // Offset: 0x56243EC
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x56243F4
    void set_value(float value);
    // public System.Void SetValueWithoutNotify(System.Single newValue)
    // Offset: 0x5624670
    void SetValueWithoutNotify(float newValue);
    // private System.Void SetProgress(System.Single p)
    // Offset: 0x5623FC0
    void SetProgress(float p);
    // private System.Single CalculateProgressWidth(System.Single width)
    // Offset: 0x5624698
    float CalculateProgressWidth(float width);
    // public System.Void .ctor()
    // Offset: 0x56240FC
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractProgressBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::AbstractProgressBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractProgressBar*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x562471C
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.AbstractProgressBar
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::set_title
// Il2CppName: set_title
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(::StringW)>(&UnityEngine::UIElements::AbstractProgressBar::set_title)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "set_title", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::get_lowValue
// Il2CppName: get_lowValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::AbstractProgressBar::*)()>(&UnityEngine::UIElements::AbstractProgressBar::get_lowValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "get_lowValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::set_lowValue
// Il2CppName: set_lowValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::set_lowValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "set_lowValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::get_highValue
// Il2CppName: get_highValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::AbstractProgressBar::*)()>(&UnityEngine::UIElements::AbstractProgressBar::get_highValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "get_highValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::set_highValue
// Il2CppName: set_highValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::set_highValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "set_highValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged
// Il2CppName: OnGeometryChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "GeometryChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "OnGeometryChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::AbstractProgressBar::*)()>(&UnityEngine::UIElements::AbstractProgressBar::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify
// Il2CppName: SetValueWithoutNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "SetValueWithoutNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::SetProgress
// Il2CppName: SetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::SetProgress)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "SetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth
// Il2CppName: CalculateProgressWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::AbstractProgressBar::*)(float)>(&UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), "CalculateProgressWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::AbstractProgressBar::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::AbstractProgressBar::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AbstractProgressBar*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};