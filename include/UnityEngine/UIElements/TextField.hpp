// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TextInputBaseField`1
#include "UnityEngine/UIElements/TextInputBaseField_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextField
  class TextField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TextField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField*, "UnityEngine.UIElements", "TextField");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.TextField
  // [TokenAttribute] Offset: FFFFFFFF
  class TextField : public ::UnityEngine::UIElements::TextInputBaseField_1<::StringW> {
    public:
    // Nested type: ::UnityEngine::UIElements::TextField::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::TextField::UxmlTraits
    class UxmlTraits;
    // Nested type: ::UnityEngine::UIElements::TextField::TextInput
    class TextInput;
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String labelUssClassName
    static ::StringW _get_labelUssClassName();
    // Set static field: static public readonly System.String labelUssClassName
    static void _set_labelUssClassName(::StringW value);
    // Get static field: static public readonly System.String inputUssClassName
    static ::StringW _get_inputUssClassName();
    // Set static field: static public readonly System.String inputUssClassName
    static void _set_inputUssClassName(::StringW value);
    // private UnityEngine.UIElements.TextField/TextInput get_textInput()
    // Offset: 0x5612340
    ::UnityEngine::UIElements::TextField::TextInput* get_textInput();
    // public System.Void set_multiline(System.Boolean value)
    // Offset: 0x56123C4
    void set_multiline(bool value);
    // public System.Void .ctor(System.String label, System.Int32 maxLength, System.Boolean multiline, System.Boolean isPasswordField, System.Char maskChar)
    // Offset: 0x5612640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextField* New_ctor(::StringW label, int maxLength, bool multiline, bool isPasswordField, ::Il2CppChar maskChar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextField*, creationType>(label, maxLength, multiline, isPasswordField, maskChar)));
    }
    // public System.String get_value()
    // Offset: 0x5612884
    ::StringW get_value();
    // public System.Void set_value(System.String value)
    // Offset: 0x56128CC
    void set_value(::StringW value);
    // public System.Void SetValueWithoutNotify(System.String newValue)
    // Offset: 0x56129F0
    void SetValueWithoutNotify(::StringW newValue);
    // protected System.String ValueToString(System.String value)
    // Offset: 0x5612D14
    ::StringW ValueToString(::StringW value);
    // protected System.String StringToValue(System.String str)
    // Offset: 0x5612D1C
    ::StringW StringToValue(::StringW str);
    // public System.Void .ctor()
    // Offset: 0x5612614
    // Implemented from: UnityEngine.UIElements.BindableElement
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextField*, creationType>()));
    }
    // public System.Void .ctor(System.String label)
    // Offset: 0x561262C
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: System.Void BaseField_1::.ctor(System.String label)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextField* New_ctor(::StringW label) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextField*, creationType>(label)));
    }
    // protected override System.Void ExecuteDefaultAction(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x5612B04
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::ExecuteDefaultAction(UnityEngine.UIElements.EventBase evt)
    void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);
    // override System.Void OnViewDataReady()
    // Offset: 0x5612C60
    // Implemented from: UnityEngine.UIElements.BaseField`1
    // Base method: System.Void BaseField_1::OnViewDataReady()
    void OnViewDataReady();
    // static private System.Void .cctor()
    // Offset: 0x5612D24
    // Implemented from: UnityEngine.UIElements.TextInputBaseField`1
    // Base method: System.Void TextInputBaseField_1::.cctor()
    // Base method: System.Void BaseField_1::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.TextField
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::get_textInput
// Il2CppName: get_textInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextField::TextInput* (UnityEngine::UIElements::TextField::*)()>(&UnityEngine::UIElements::TextField::get_textInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "get_textInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::set_multiline
// Il2CppName: set_multiline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextField::*)(bool)>(&UnityEngine::UIElements::TextField::set_multiline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "set_multiline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::TextField::*)()>(&UnityEngine::UIElements::TextField::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextField::*)(::StringW)>(&UnityEngine::UIElements::TextField::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::SetValueWithoutNotify
// Il2CppName: SetValueWithoutNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextField::*)(::StringW)>(&UnityEngine::UIElements::TextField::SetValueWithoutNotify)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "SetValueWithoutNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::ValueToString
// Il2CppName: ValueToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::TextField::*)(::StringW)>(&UnityEngine::UIElements::TextField::ValueToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "ValueToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::StringToValue
// Il2CppName: StringToValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::TextField::*)(::StringW)>(&UnityEngine::UIElements::TextField::StringToValue)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "StringToValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::ExecuteDefaultAction
// Il2CppName: ExecuteDefaultAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextField::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::TextField::ExecuteDefaultAction)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "ExecuteDefaultAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::OnViewDataReady
// Il2CppName: OnViewDataReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextField::*)()>(&UnityEngine::UIElements::TextField::OnViewDataReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), "OnViewDataReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextField::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::TextField::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextField*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};