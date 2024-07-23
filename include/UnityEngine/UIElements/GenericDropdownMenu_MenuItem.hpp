// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.GenericDropdownMenu
#include "UnityEngine/UIElements/GenericDropdownMenu.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::GenericDropdownMenu::MenuItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu::MenuItem*, "UnityEngine.UIElements", "GenericDropdownMenu/MenuItem");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.GenericDropdownMenu/MenuItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericDropdownMenu::MenuItem : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.UIElements.VisualElement element
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::VisualElement* element;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // public System.Action action
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* action;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<System.Object> actionUserData
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::Il2CppObject*>* actionUserData;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public UnityEngine.UIElements.VisualElement element
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_element();
    // Get instance field reference: public System.Action action
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_action();
    // Get instance field reference: public System.Action`1<System.Object> actionUserData
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Il2CppObject*>*& dyn_actionUserData();
    // public System.Void .ctor()
    // Offset: 0x55B9F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericDropdownMenu::MenuItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::GenericDropdownMenu::MenuItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericDropdownMenu::MenuItem*, creationType>()));
    }
  }; // UnityEngine.UIElements.GenericDropdownMenu/MenuItem
  #pragma pack(pop)
  static check_size<sizeof(GenericDropdownMenu::MenuItem), 40 + sizeof(::System::Action_1<::Il2CppObject*>*)> __UnityEngine_UIElements_GenericDropdownMenu_MenuItemSizeCheck;
  static_assert(sizeof(GenericDropdownMenu::MenuItem) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::GenericDropdownMenu::MenuItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!