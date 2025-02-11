// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
#include "UnityEngine/XR/Interaction/Toolkit/BaseInteractionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRInteractionManager
  class XRInteractionManager;
  // Forward declaring type: IXRSelectInteractor
  class IXRSelectInteractor;
  // Forward declaring type: IXRSelectInteractable
  class IXRSelectInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: SelectExitEventArgs
  class SelectExitEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "SelectExitEventArgs");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectExitEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager <manager>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* manager;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*) == 0x8);
    // private System.Boolean <isCanceled>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool isCanceled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager <manager>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*& dyn_$manager$k__BackingField();
    // Get instance field reference: private System.Boolean <isCanceled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isCanceled$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor get_interactorObject()
    // Offset: 0x53FE114
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* get_interactorObject();
    // public System.Void set_interactorObject(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor value)
    // Offset: 0x53FE180
    void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value);
    // public UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable get_interactableObject()
    // Offset: 0x53EC270
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* get_interactableObject();
    // public System.Void set_interactableObject(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable value)
    // Offset: 0x53FE188
    void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);
    // public UnityEngine.XR.Interaction.Toolkit.XRInteractionManager get_manager()
    // Offset: 0x53FE190
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* get_manager();
    // public System.Void set_manager(UnityEngine.XR.Interaction.Toolkit.XRInteractionManager value)
    // Offset: 0x53FE198
    void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);
    // public System.Boolean get_isCanceled()
    // Offset: 0x53FE1A0
    bool get_isCanceled();
    // public System.Void set_isCanceled(System.Boolean value)
    // Offset: 0x53FE1A8
    void set_isCanceled(bool value);
    // public System.Void .ctor()
    // Offset: 0x53FE1B4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
    // Base method: System.Void BaseInteractionEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectExitEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectExitEventArgs*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
  #pragma pack(pop)
  static check_size<sizeof(SelectExitEventArgs), 40 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgsSizeCheck;
  static_assert(sizeof(SelectExitEventArgs) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_interactorObject
// Il2CppName: get_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_interactorObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "get_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_interactorObject
// Il2CppName: set_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_interactorObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "set_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_interactableObject
// Il2CppName: get_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_interactableObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "get_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_interactableObject
// Il2CppName: set_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_interactableObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRSelectInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "set_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_manager
// Il2CppName: get_manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_manager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "get_manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_manager
// Il2CppName: set_manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_manager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "set_manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_isCanceled
// Il2CppName: get_isCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::get_isCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "get_isCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_isCanceled
// Il2CppName: set_isCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::set_isCanceled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*), "set_isCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
