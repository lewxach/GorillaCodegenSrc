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
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
  // Forward declaring type: IXRInteractable
  class IXRInteractable;
  // Forward declaring type: XRBaseInteractor
  class XRBaseInteractor;
  // Forward declaring type: XRBaseInteractable
  class XRBaseInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: BaseInteractionEventArgs
  class BaseInteractionEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "BaseInteractionEventArgs");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseInteractionEventArgs : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.IXRInteractor <interactorObject>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactorObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.IXRInteractable <interactableObject>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactableObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.IXRInteractor <interactorObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& dyn_$interactorObject$k__BackingField();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.IXRInteractable <interactableObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& dyn_$interactableObject$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.IXRInteractor get_interactorObject()
    // Offset: 0x53FDE18
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* get_interactorObject();
    // public System.Void set_interactorObject(UnityEngine.XR.Interaction.Toolkit.IXRInteractor value)
    // Offset: 0x53FDE20
    void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);
    // public UnityEngine.XR.Interaction.Toolkit.IXRInteractable get_interactableObject()
    // Offset: 0x53FDE28
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* get_interactableObject();
    // public System.Void set_interactableObject(UnityEngine.XR.Interaction.Toolkit.IXRInteractable value)
    // Offset: 0x53FDE30
    void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);
    // public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor get_interactor()
    // Offset: 0x53FDE38
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* get_interactor();
    // public System.Void set_interactor(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor value)
    // Offset: 0x53FDEB4
    void set_interactor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* value);
    // public UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable get_interactable()
    // Offset: 0x53EBC0C
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* get_interactable();
    // public System.Void set_interactable(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable value)
    // Offset: 0x53FDEBC
    void set_interactable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* value);
    // protected System.Void .ctor()
    // Offset: 0x53FDEC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInteractionEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInteractionEventArgs*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
  #pragma pack(pop)
  static check_size<sizeof(BaseInteractionEventArgs), 24 + sizeof(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)> __UnityEngine_XR_Interaction_Toolkit_BaseInteractionEventArgsSizeCheck;
  static_assert(sizeof(BaseInteractionEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactorObject
// Il2CppName: get_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactorObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "get_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactorObject
// Il2CppName: set_interactorObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactorObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "set_interactorObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactableObject
// Il2CppName: get_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactableObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "get_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactableObject
// Il2CppName: set_interactableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactableObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "set_interactableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactor
// Il2CppName: get_interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "get_interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactor
// Il2CppName: set_interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "set_interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
