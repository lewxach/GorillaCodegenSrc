// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.IXRInteractable
#include "UnityEngine/XR/Interaction/Toolkit/IXRInteractable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: HoverEnterEvent
  class HoverEnterEvent;
  // Forward declaring type: HoverExitEvent
  class HoverExitEvent;
  // Forward declaring type: IXRHoverInteractor
  class IXRHoverInteractor;
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
  // Forward declaring type: IXRHoverInteractable
  class IXRHoverInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRHoverInteractable/*, public ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable
    operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>(this);
    }
    // public UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent get_firstHoverEntered()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_firstHoverEntered();
    // public UnityEngine.XR.Interaction.Toolkit.HoverExitEvent get_lastHoverExited()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_lastHoverExited();
    // public UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent get_hoverEntered()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();
    // public UnityEngine.XR.Interaction.Toolkit.HoverExitEvent get_hoverExited()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();
    // public System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> get_interactorsHovering()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* get_interactorsHovering();
    // public System.Boolean get_isHovered()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isHovered();
    // public System.Boolean IsHoverableBy(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);
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
  }; // UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_firstHoverEntered
// Il2CppName: get_firstHoverEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_firstHoverEntered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_firstHoverEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_lastHoverExited
// Il2CppName: get_lastHoverExited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_lastHoverExited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_lastHoverExited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_hoverEntered
// Il2CppName: get_hoverEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_hoverEntered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_hoverEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_hoverExited
// Il2CppName: get_hoverExited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_hoverExited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_hoverExited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_interactorsHovering
// Il2CppName: get_interactorsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_interactorsHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_interactorsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_isHovered
// Il2CppName: get_isHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::get_isHovered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "get_isHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::IsHoverableBy
// Il2CppName: IsHoverableBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::IsHoverableBy)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "IsHoverableBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverEntering
// Il2CppName: OnHoverEntering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverEntering)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "OnHoverEntering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverEntered
// Il2CppName: OnHoverEntered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverEntered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "OnHoverEntered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverExiting
// Il2CppName: OnHoverExiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverExiting)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "OnHoverExiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverExited
// Il2CppName: OnHoverExited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable::OnHoverExited)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "HoverExitEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*), "OnHoverExited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
