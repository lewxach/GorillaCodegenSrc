// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputControl`1
#include "UnityEngine/InputSystem/InputControl_1.hpp"
// Including type: UnityEngine.InputSystem.XR.Bone
#include "UnityEngine/InputSystem/XR/Bone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: IntegerControl
  class IntegerControl;
  // Forward declaring type: Vector3Control
  class Vector3Control;
  // Forward declaring type: QuaternionControl
  class QuaternionControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: BoneControl
  class BoneControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::BoneControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::BoneControl*, "UnityEngine.InputSystem.XR", "BoneControl");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.XR.BoneControl
  // [TokenAttribute] Offset: FFFFFFFF
  class BoneControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Bone> {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.IntegerControl <parentBoneIndex>k__BackingField
    // Size: 0x8
    // Offset: 0x140
    ::UnityEngine::InputSystem::Controls::IntegerControl* parentBoneIndex;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::IntegerControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector3Control <position>k__BackingField
    // Size: 0x8
    // Offset: 0x148
    ::UnityEngine::InputSystem::Controls::Vector3Control* position;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.QuaternionControl <rotation>k__BackingField
    // Size: 0x8
    // Offset: 0x150
    ::UnityEngine::InputSystem::Controls::QuaternionControl* rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::QuaternionControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.IntegerControl <parentBoneIndex>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::IntegerControl*& dyn_$parentBoneIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.QuaternionControl <rotation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::QuaternionControl*& dyn_$rotation$k__BackingField();
    // public UnityEngine.InputSystem.Controls.IntegerControl get_parentBoneIndex()
    // Offset: 0x5129AA4
    ::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex();
    // private System.Void set_parentBoneIndex(UnityEngine.InputSystem.Controls.IntegerControl value)
    // Offset: 0x5129AAC
    void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_position()
    // Offset: 0x5129ABC
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_position();
    // private System.Void set_position(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x5129AC4
    void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.QuaternionControl get_rotation()
    // Offset: 0x5129AD4
    ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation();
    // private System.Void set_rotation(UnityEngine.InputSystem.Controls.QuaternionControl value)
    // Offset: 0x5129ADC
    void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);
    // public UnityEngine.InputSystem.XR.Bone ReadUnprocessedValueFromState(System.Void* statePtr)
    // Offset: 0x5129C24
    ::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(void* statePtr);
    // public System.Void WriteValueIntoState(UnityEngine.InputSystem.XR.Bone value, System.Void* statePtr)
    // Offset: 0x5129D14
    void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone value, void* statePtr);
    // protected override System.Void FinishSetup()
    // Offset: 0x5129AEC
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x5129D98
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoneControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::XR::BoneControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoneControl*, creationType>()));
    }
  }; // UnityEngine.InputSystem.XR.BoneControl
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::get_parentBoneIndex
// Il2CppName: get_parentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (UnityEngine::InputSystem::XR::BoneControl::*)()>(&UnityEngine::InputSystem::XR::BoneControl::get_parentBoneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "get_parentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::set_parentBoneIndex
// Il2CppName: set_parentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&UnityEngine::InputSystem::XR::BoneControl::set_parentBoneIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "IntegerControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "set_parentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::XR::BoneControl::*)()>(&UnityEngine::InputSystem::XR::BoneControl::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::XR::BoneControl::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (UnityEngine::InputSystem::XR::BoneControl::*)()>(&UnityEngine::InputSystem::XR::BoneControl::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&UnityEngine::InputSystem::XR::BoneControl::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "QuaternionControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::ReadUnprocessedValueFromState
// Il2CppName: ReadUnprocessedValueFromState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Bone (UnityEngine::InputSystem::XR::BoneControl::*)(void*)>(&UnityEngine::InputSystem::XR::BoneControl::ReadUnprocessedValueFromState)> {
  static const MethodInfo* get() {
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "ReadUnprocessedValueFromState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::WriteValueIntoState
// Il2CppName: WriteValueIntoState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::XR::Bone, void*)>(&UnityEngine::InputSystem::XR::BoneControl::WriteValueIntoState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.XR", "Bone")->byval_arg;
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "WriteValueIntoState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::BoneControl::*)()>(&UnityEngine::InputSystem::XR::BoneControl::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::BoneControl*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::BoneControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
