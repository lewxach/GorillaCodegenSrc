// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: INavigationEvent
  class INavigationEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::INavigationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::INavigationEvent*, "UnityEngine.UIElements", "INavigationEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.INavigationEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class INavigationEvent {
    public:
    // public System.Boolean get_shiftKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_shiftKey();
    // public System.Boolean get_altKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_altKey();
  }; // UnityEngine.UIElements.INavigationEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::INavigationEvent::get_shiftKey
// Il2CppName: get_shiftKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::INavigationEvent::*)()>(&UnityEngine::UIElements::INavigationEvent::get_shiftKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::INavigationEvent*), "get_shiftKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::INavigationEvent::get_altKey
// Il2CppName: get_altKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::INavigationEvent::*)()>(&UnityEngine::UIElements::INavigationEvent::get_altKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::INavigationEvent*), "get_altKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
