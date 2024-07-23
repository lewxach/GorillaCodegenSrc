// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaThrowable
  class GorillaThrowable;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaThrowableController
  class GorillaThrowableController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaThrowableController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaThrowableController*, "", "GorillaThrowableController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaThrowableController
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaThrowableController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform leftHandController
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* leftHandController;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightHandController
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* rightHandController;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Boolean leftHandIsGrabbing
    // Size: 0x1
    // Offset: 0x30
    bool leftHandIsGrabbing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean rightHandIsGrabbing
    // Size: 0x1
    // Offset: 0x31
    bool rightHandIsGrabbing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rightHandIsGrabbing and: leftHandGrabbedObject
    char __padding3[0x6] = {};
    // public GorillaThrowable leftHandGrabbedObject
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GorillaThrowable* leftHandGrabbedObject;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaThrowable*) == 0x8);
    // public GorillaThrowable rightHandGrabbedObject
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::GorillaThrowable* rightHandGrabbedObject;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaThrowable*) == 0x8);
    // public System.Single hoverVibrationStrength
    // Size: 0x4
    // Offset: 0x48
    float hoverVibrationStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hoverVibrationDuration
    // Size: 0x4
    // Offset: 0x4C
    float hoverVibrationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single handRadius
    // Size: 0x4
    // Offset: 0x50
    float handRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: handRadius and: rightDevice
    char __padding8[0x4] = {};
    // private UnityEngine.XR.InputDevice rightDevice
    // Size: 0x9
    // Offset: 0x58
    ::UnityEngine::XR::InputDevice rightDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: rightDevice and: leftDevice
    char __padding9[0x7] = {};
    // private UnityEngine.XR.InputDevice leftDevice
    // Size: 0x9
    // Offset: 0x68
    ::UnityEngine::XR::InputDevice leftDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: leftDevice and: inputDevice
    char __padding10[0x7] = {};
    // private UnityEngine.XR.InputDevice inputDevice
    // Size: 0x9
    // Offset: 0x78
    ::UnityEngine::XR::InputDevice inputDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: inputDevice and: triggerValue
    char __padding11[0x7] = {};
    // private System.Single triggerValue
    // Size: 0x4
    // Offset: 0x88
    float triggerValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean boolVar
    // Size: 0x1
    // Offset: 0x8C
    bool boolVar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: boolVar and: colliders
    char __padding13[0x3] = {};
    // private UnityEngine.Collider[] colliders
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Collider*> colliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private UnityEngine.Collider minCollider
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Collider* minCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private UnityEngine.Collider returnCollider
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Collider* returnCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private System.Single magnitude
    // Size: 0x4
    // Offset: 0xA8
    float magnitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean testCanGrab
    // Size: 0x1
    // Offset: 0xAC
    bool testCanGrab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: testCanGrab and: gorillaThrowableLayerMask
    char __padding18[0x3] = {};
    // private System.Int32 gorillaThrowableLayerMask
    // Size: 0x4
    // Offset: 0xB0
    int gorillaThrowableLayerMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform leftHandController
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftHandController();
    // Get instance field reference: public UnityEngine.Transform rightHandController
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightHandController();
    // Get instance field reference: public System.Boolean leftHandIsGrabbing
    [[deprecated("Use field access instead!")]] bool& dyn_leftHandIsGrabbing();
    // Get instance field reference: public System.Boolean rightHandIsGrabbing
    [[deprecated("Use field access instead!")]] bool& dyn_rightHandIsGrabbing();
    // Get instance field reference: public GorillaThrowable leftHandGrabbedObject
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaThrowable*& dyn_leftHandGrabbedObject();
    // Get instance field reference: public GorillaThrowable rightHandGrabbedObject
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaThrowable*& dyn_rightHandGrabbedObject();
    // Get instance field reference: public System.Single hoverVibrationStrength
    [[deprecated("Use field access instead!")]] float& dyn_hoverVibrationStrength();
    // Get instance field reference: public System.Single hoverVibrationDuration
    [[deprecated("Use field access instead!")]] float& dyn_hoverVibrationDuration();
    // Get instance field reference: public System.Single handRadius
    [[deprecated("Use field access instead!")]] float& dyn_handRadius();
    // Get instance field reference: private UnityEngine.XR.InputDevice rightDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_rightDevice();
    // Get instance field reference: private UnityEngine.XR.InputDevice leftDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_leftDevice();
    // Get instance field reference: private UnityEngine.XR.InputDevice inputDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_inputDevice();
    // Get instance field reference: private System.Single triggerValue
    [[deprecated("Use field access instead!")]] float& dyn_triggerValue();
    // Get instance field reference: private System.Boolean boolVar
    [[deprecated("Use field access instead!")]] bool& dyn_boolVar();
    // Get instance field reference: private UnityEngine.Collider[] colliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_colliders();
    // Get instance field reference: private UnityEngine.Collider minCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_minCollider();
    // Get instance field reference: private UnityEngine.Collider returnCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_returnCollider();
    // Get instance field reference: private System.Single magnitude
    [[deprecated("Use field access instead!")]] float& dyn_magnitude();
    // Get instance field reference: public System.Boolean testCanGrab
    [[deprecated("Use field access instead!")]] bool& dyn_testCanGrab();
    // Get instance field reference: private System.Int32 gorillaThrowableLayerMask
    [[deprecated("Use field access instead!")]] int& dyn_gorillaThrowableLayerMask();
    // protected System.Void Awake()
    // Offset: 0x274021C
    void Awake();
    // private System.Void LateUpdate()
    // Offset: 0x27402B4
    void LateUpdate();
    // private System.Boolean CheckIfHandHasReleased(UnityEngine.XR.XRNode node)
    // Offset: 0x2740920
    bool CheckIfHandHasReleased(::UnityEngine::XR::XRNode node);
    // private System.Boolean CheckIfHandHasGrabbed(UnityEngine.XR.XRNode node)
    // Offset: 0x2740A14
    bool CheckIfHandHasGrabbed(::UnityEngine::XR::XRNode node);
    // private System.Boolean CanGrabAnObject(UnityEngine.Transform handTransform, out UnityEngine.Collider returnCollider)
    // Offset: 0x2740560
    bool CanGrabAnObject(::UnityEngine::Transform* handTransform, ByRef<::UnityEngine::Collider*> returnCollider);
    // public System.Void GrabbableObjectHover(System.Boolean isLeft)
    // Offset: 0x2740B08
    void GrabbableObjectHover(bool isLeft);
    // public System.Void .ctor()
    // Offset: 0x2740B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaThrowableController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaThrowableController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaThrowableController*, creationType>()));
    }
  }; // GorillaThrowableController
  #pragma pack(pop)
  static check_size<sizeof(GorillaThrowableController), 176 + sizeof(int)> __GlobalNamespace_GorillaThrowableControllerSizeCheck;
  static_assert(sizeof(GorillaThrowableController) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowableController::*)()>(&GlobalNamespace::GorillaThrowableController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowableController::*)()>(&GlobalNamespace::GorillaThrowableController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::CheckIfHandHasReleased
// Il2CppName: CheckIfHandHasReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::GorillaThrowableController::CheckIfHandHasReleased)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "CheckIfHandHasReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::CheckIfHandHasGrabbed
// Il2CppName: CheckIfHandHasGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::GorillaThrowableController::CheckIfHandHasGrabbed)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "CheckIfHandHasGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::CanGrabAnObject
// Il2CppName: CanGrabAnObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::Transform*, ByRef<::UnityEngine::Collider*>)>(&GlobalNamespace::GorillaThrowableController::CanGrabAnObject)> {
  static const MethodInfo* get() {
    static auto* handTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* returnCollider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "CanGrabAnObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handTransform, returnCollider});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::GrabbableObjectHover
// Il2CppName: GrabbableObjectHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowableController::*)(bool)>(&GlobalNamespace::GorillaThrowableController::GrabbableObjectHover)> {
  static const MethodInfo* get() {
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowableController*), "GrabbableObjectHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeft});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowableController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!