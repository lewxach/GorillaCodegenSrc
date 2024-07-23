// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: EventDispatcher
  class EventDispatcher;
  // Forward declaring type: ContextType
  struct ContextType;
  // Forward declaring type: FocusController
  class FocusController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPanel
  class IPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPanel*, "UnityEngine.UIElements", "IPanel");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class IPanel/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public UnityEngine.UIElements.VisualElement get_visualTree()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::VisualElement* get_visualTree();
    // public UnityEngine.UIElements.EventDispatcher get_dispatcher()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::EventDispatcher* get_dispatcher();
    // public UnityEngine.UIElements.ContextType get_contextType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::ContextType get_contextType();
    // public UnityEngine.UIElements.FocusController get_focusController()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::FocusController* get_focusController();
    // public UnityEngine.UIElements.VisualElement Pick(UnityEngine.Vector2 point)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2 point);
  }; // UnityEngine.UIElements.IPanel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IPanel::get_visualTree
// Il2CppName: get_visualTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::IPanel::*)()>(&UnityEngine::UIElements::IPanel::get_visualTree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPanel*), "get_visualTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IPanel::get_dispatcher
// Il2CppName: get_dispatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (UnityEngine::UIElements::IPanel::*)()>(&UnityEngine::UIElements::IPanel::get_dispatcher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPanel*), "get_dispatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IPanel::get_contextType
// Il2CppName: get_contextType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (UnityEngine::UIElements::IPanel::*)()>(&UnityEngine::UIElements::IPanel::get_contextType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPanel*), "get_contextType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IPanel::get_focusController
// Il2CppName: get_focusController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (UnityEngine::UIElements::IPanel::*)()>(&UnityEngine::UIElements::IPanel::get_focusController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPanel*), "get_focusController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IPanel::Pick
// Il2CppName: Pick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::IPanel::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::IPanel::Pick)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPanel*), "Pick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};