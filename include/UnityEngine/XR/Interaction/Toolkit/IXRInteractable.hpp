// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder
#include "UnityEngine/XR/Interaction/Toolkit/XRInteractionUpdateOrder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: InteractableRegisteredEventArgs
  class InteractableRegisteredEventArgs;
  // Forward declaring type: InteractableUnregisteredEventArgs
  class InteractableUnregisteredEventArgs;
  // Forward declaring type: InteractionLayerMask
  struct InteractionLayerMask;
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractable
  class IXRInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRInteractable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRInteractable {
    public:
    // public System.Void add_registered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);
    // public System.Void remove_registered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);
    // public System.Void add_unregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);
    // public System.Void remove_unregistered(System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);
    // public UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask get_interactionLayers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers();
    // public System.Collections.Generic.List`1<UnityEngine.Collider> get_colliders()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* get_colliders();
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_transform();
    // public UnityEngine.Transform GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // public System.Void OnRegistered(UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);
    // public System.Void OnUnregistered(UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);
    // public System.Void ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase updatePhase)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase updatePhase);
    // public System.Single GetDistanceSqrToInteractor(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
  }; // UnityEngine.XR.Interaction.Toolkit.IXRInteractable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::add_registered
// Il2CppName: add_registered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::add_registered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableRegisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "add_registered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::remove_registered
// Il2CppName: remove_registered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::remove_registered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableRegisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "remove_registered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::add_unregistered
// Il2CppName: add_unregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::add_unregistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableUnregisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "add_unregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::remove_unregistered
// Il2CppName: remove_unregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::remove_unregistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableUnregisteredEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "remove_unregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_interactionLayers
// Il2CppName: get_interactionLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_interactionLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "get_interactionLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_colliders
// Il2CppName: get_colliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Collider*>* (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_colliders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "get_colliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)()>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::GetAttachTransform
// Il2CppName: GetAttachTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::GetAttachTransform)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "GetAttachTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::OnRegistered
// Il2CppName: OnRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::OnRegistered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableRegisteredEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "OnRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::OnUnregistered
// Il2CppName: OnUnregistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::OnUnregistered)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractableUnregisteredEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "OnUnregistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::ProcessInteractable
// Il2CppName: ProcessInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder::UpdatePhase)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::ProcessInteractable)> {
  static const MethodInfo* get() {
    static auto* updatePhase = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "ProcessInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updatePhase});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRInteractable::GetDistanceSqrToInteractor
// Il2CppName: GetDistanceSqrToInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::IXRInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::IXRInteractable::GetDistanceSqrToInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRInteractable*), "GetDistanceSqrToInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};