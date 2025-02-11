// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.IXRInteractor
#include "UnityEngine/XR/Interaction/Toolkit/IXRInteractor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: HoverEnterEvent
  class HoverEnterEvent;
  // Forward declaring type: HoverExitEvent
  class HoverExitEvent;
  // Forward declaring type: IXRHoverInteractable
  class IXRHoverInteractable;
  // Forward declaring type: HoverEnterEventArgs
  class HoverEnterEventArgs;
  // Forward declaring type: HoverExitEventArgs
  class HoverExitEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRHoverInteractor
  class IXRHoverInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, "UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRHoverInteractor/*, public ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor
    operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(this);
    }
    // public UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent get_hoverEntered()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();
    // public UnityEngine.XR.Interaction.Toolkit.HoverExitEvent get_hoverExited()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();
    // public System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> get_interactablesHovered()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* get_interactablesHovered();
    // public System.Boolean get_hasHover()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_hasHover();
    // public System.Boolean get_isHoverActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isHoverActive();
    // public System.Boolean CanHover(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);
    // public System.Boolean IsHovering(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable interactable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);
    // public System.Void OnHoverEntering(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);
    // public System.Void OnHoverEntered(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);
    // public System.Void OnHoverExiting(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);
    // public System.Void OnHoverExited(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);
  }; // UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hoverEntered
// Il2CppName: get_hoverEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hoverEntered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "get_hoverEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hoverExited
// Il2CppName: get_hoverExited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hoverExited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "get_hoverExited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_interactablesHovered
// Il2CppName: get_interactablesHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_interactablesHovered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "get_interactablesHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hasHover
// Il2CppName: get_hasHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_hasHover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "get_hasHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_isHoverActive
// Il2CppName: get_isHoverActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::get_isHoverActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "get_isHoverActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::CanHover
// Il2CppName: CanHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::CanHover)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "CanHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::IsHovering
// Il2CppName: IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::IsHovering)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverEntering
// Il2CppName: OnHoverEntering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverEntering)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "OnHoverEntering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverEntered
// Il2CppName: OnHoverEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverEntered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "OnHoverEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverExiting
// Il2CppName: OnHoverExiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverExiting)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "OnHoverExiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverExited
// Il2CppName: OnHoverExited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor::OnHoverExited)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*), "OnHoverExited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
