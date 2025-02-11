// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IGroupBox
  class IGroupBox;
  // Forward declaring type: IGroupManager
  class IGroupManager;
  // Forward declaring type: IGroupBoxOption
  class IGroupBoxOption;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: DetachFromPanelEvent
  class DetachFromPanelEvent;
  // Forward declaring type: BaseVisualElementPanel
  class BaseVisualElementPanel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: GroupBoxUtility
  class GroupBoxUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::GroupBoxUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBoxUtility*, "UnityEngine.UIElements", "GroupBoxUtility");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.GroupBoxUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class GroupBoxUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.IGroupBox,UnityEngine.UIElements.IGroupManager> s_GroupManagers
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* _get_s_GroupManagers();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.IGroupBox,UnityEngine.UIElements.IGroupManager> s_GroupManagers
    static void _set_s_GroupManagers(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.IGroupBoxOption,UnityEngine.UIElements.IGroupManager> s_GroupOptionManagerCache
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* _get_s_GroupOptionManagerCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.IGroupBoxOption,UnityEngine.UIElements.IGroupManager> s_GroupOptionManagerCache
    static void _set_s_GroupOptionManagerCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* value);
    // Get static field: static private readonly System.Type k_GenericGroupBoxType
    static ::System::Type* _get_k_GenericGroupBoxType();
    // Set static field: static private readonly System.Type k_GenericGroupBoxType
    static void _set_k_GenericGroupBoxType(::System::Type* value);
    // static public System.Void RegisterGroupBoxOption(T option)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void RegisterGroupBoxOption(T option) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::UIElements::VisualElement*> && std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::UIElements::IGroupBoxOption>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::GroupBoxUtility::RegisterGroupBoxOption");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UIElements", "GroupBoxUtility", "RegisterGroupBoxOption", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(option)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, option);
    }
    // static public System.Void UnregisterGroupBoxOption(T option)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void UnregisterGroupBoxOption(T option) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::UIElements::VisualElement*> && std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::UIElements::IGroupBoxOption>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::GroupBoxUtility::UnregisterGroupBoxOption");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UIElements", "GroupBoxUtility", "UnregisterGroupBoxOption", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(option)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, option);
    }
    // static public System.Void OnOptionSelected(T selectedOption)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void OnOptionSelected(T selectedOption) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::UIElements::VisualElement*> && std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::UIElements::IGroupBoxOption>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::GroupBoxUtility::OnOptionSelected");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UIElements", "GroupBoxUtility", "OnOptionSelected", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(selectedOption)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, selectedOption);
    }
    // static private UnityEngine.UIElements.IGroupManager FindOrCreateGroupManager(UnityEngine.UIElements.IGroupBox groupBox)
    // Offset: 0x565F6B8
    static ::UnityEngine::UIElements::IGroupManager* FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox* groupBox);
    // static private System.Void OnGroupBoxDetachedFromPanel(UnityEngine.UIElements.DetachFromPanelEvent evt)
    // Offset: 0x565FC5C
    static void OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);
    // static private System.Void OnPanelDestroyed(UnityEngine.UIElements.BaseVisualElementPanel panel)
    // Offset: 0x565FD10
    static void OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel* panel);
    // static private System.Void .cctor()
    // Offset: 0x565FE94
    static void _cctor();
  }; // UnityEngine.UIElements.GroupBoxUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::RegisterGroupBoxOption
// Il2CppName: RegisterGroupBoxOption
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::UnregisterGroupBoxOption
// Il2CppName: UnregisterGroupBoxOption
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::OnOptionSelected
// Il2CppName: OnOptionSelected
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager
// Il2CppName: FindOrCreateGroupManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IGroupManager* (*)(::UnityEngine::UIElements::IGroupBox*)>(&UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager)> {
  static const MethodInfo* get() {
    static auto* groupBox = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBox")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GroupBoxUtility*), "FindOrCreateGroupManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupBox});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel
// Il2CppName: OnGroupBoxDetachedFromPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(&UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DetachFromPanelEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GroupBoxUtility*), "OnGroupBoxDetachedFromPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed
// Il2CppName: OnPanelDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BaseVisualElementPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GroupBoxUtility*), "OnPanelDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::GroupBoxUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::GroupBoxUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::GroupBoxUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
