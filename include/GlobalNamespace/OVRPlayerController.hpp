// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CharacterController
  class CharacterController;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRPlayerController
  class OVRPlayerController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlayerController*, "", "OVRPlayerController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRPlayerController
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class OVRPlayerController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single Acceleration
    // Size: 0x4
    // Offset: 0x20
    float Acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Damping
    // Size: 0x4
    // Offset: 0x24
    float Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single BackAndSideDampen
    // Size: 0x4
    // Offset: 0x28
    float BackAndSideDampen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single JumpForce
    // Size: 0x4
    // Offset: 0x2C
    float JumpForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotationAmount
    // Size: 0x4
    // Offset: 0x30
    float RotationAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotationRatchet
    // Size: 0x4
    // Offset: 0x34
    float RotationRatchet;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean SnapRotation
    // Size: 0x1
    // Offset: 0x38
    bool SnapRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RotateAroundGuardianCenter
    // Size: 0x1
    // Offset: 0x39
    bool RotateAroundGuardianCenter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 FixedSpeedSteps
    // Size: 0x4
    // Offset: 0x3C
    int FixedSpeedSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean HmdResetsY
    // Size: 0x1
    // Offset: 0x40
    bool HmdResetsY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean HmdRotatesY
    // Size: 0x1
    // Offset: 0x41
    bool HmdRotatesY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single GravityModifier
    // Size: 0x4
    // Offset: 0x44
    float GravityModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useProfileData
    // Size: 0x1
    // Offset: 0x48
    bool useProfileData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single CameraHeight
    // Size: 0x4
    // Offset: 0x4C
    float CameraHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Action`1<UnityEngine.Transform> TransformUpdated
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::UnityEngine::Transform*>* TransformUpdated;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Transform*>*) == 0x8);
    // public System.Boolean Teleported
    // Size: 0x1
    // Offset: 0x58
    bool Teleported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Action CameraUpdated
    // Size: 0x8
    // Offset: 0x60
    ::System::Action* CameraUpdated;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action PreCharacterMove
    // Size: 0x8
    // Offset: 0x68
    ::System::Action* PreCharacterMove;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Boolean EnableLinearMovement
    // Size: 0x1
    // Offset: 0x70
    bool EnableLinearMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableRotation
    // Size: 0x1
    // Offset: 0x71
    bool EnableRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RotationEitherThumbstick
    // Size: 0x1
    // Offset: 0x72
    bool RotationEitherThumbstick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected UnityEngine.CharacterController Controller
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::CharacterController* Controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::CharacterController*) == 0x8);
    // protected OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // private System.Single MoveScale
    // Size: 0x4
    // Offset: 0x88
    float MoveScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 MoveThrottle
    // Size: 0xC
    // Offset: 0x8C
    ::UnityEngine::Vector3 MoveThrottle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single FallSpeed
    // Size: 0x4
    // Offset: 0x98
    float FallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Nullable`1<OVRPose> InitialPose
    // Size: 0xFFFFFFFF
    // Offset: 0x9C
    ::System::Nullable_1<::GlobalNamespace::OVRPose> InitialPose;
    // private System.Single <InitialYRotation>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    float InitialYRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single MoveScaleMultiplier
    // Size: 0x4
    // Offset: 0xC0
    float MoveScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single RotationScaleMultiplier
    // Size: 0x4
    // Offset: 0xC4
    float RotationScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean SkipMouseRotation
    // Size: 0x1
    // Offset: 0xC8
    bool SkipMouseRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean HaltUpdateMovement
    // Size: 0x1
    // Offset: 0xC9
    bool HaltUpdateMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean prevHatLeft
    // Size: 0x1
    // Offset: 0xCA
    bool prevHatLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean prevHatRight
    // Size: 0x1
    // Offset: 0xCB
    bool prevHatRight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single SimulationRate
    // Size: 0x4
    // Offset: 0xCC
    float SimulationRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single buttonRotation
    // Size: 0x4
    // Offset: 0xD0
    float buttonRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean ReadyToSnapTurn
    // Size: 0x1
    // Offset: 0xD4
    bool ReadyToSnapTurn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean playerControllerEnabled
    // Size: 0x1
    // Offset: 0xD5
    bool playerControllerEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single Acceleration
    [[deprecated("Use field access instead!")]] float& dyn_Acceleration();
    // Get instance field reference: public System.Single Damping
    [[deprecated("Use field access instead!")]] float& dyn_Damping();
    // Get instance field reference: public System.Single BackAndSideDampen
    [[deprecated("Use field access instead!")]] float& dyn_BackAndSideDampen();
    // Get instance field reference: public System.Single JumpForce
    [[deprecated("Use field access instead!")]] float& dyn_JumpForce();
    // Get instance field reference: public System.Single RotationAmount
    [[deprecated("Use field access instead!")]] float& dyn_RotationAmount();
    // Get instance field reference: public System.Single RotationRatchet
    [[deprecated("Use field access instead!")]] float& dyn_RotationRatchet();
    // Get instance field reference: public System.Boolean SnapRotation
    [[deprecated("Use field access instead!")]] bool& dyn_SnapRotation();
    // Get instance field reference: public System.Boolean RotateAroundGuardianCenter
    [[deprecated("Use field access instead!")]] bool& dyn_RotateAroundGuardianCenter();
    // Get instance field reference: public System.Int32 FixedSpeedSteps
    [[deprecated("Use field access instead!")]] int& dyn_FixedSpeedSteps();
    // Get instance field reference: public System.Boolean HmdResetsY
    [[deprecated("Use field access instead!")]] bool& dyn_HmdResetsY();
    // Get instance field reference: public System.Boolean HmdRotatesY
    [[deprecated("Use field access instead!")]] bool& dyn_HmdRotatesY();
    // Get instance field reference: public System.Single GravityModifier
    [[deprecated("Use field access instead!")]] float& dyn_GravityModifier();
    // Get instance field reference: public System.Boolean useProfileData
    [[deprecated("Use field access instead!")]] bool& dyn_useProfileData();
    // Get instance field reference: public System.Single CameraHeight
    [[deprecated("Use field access instead!")]] float& dyn_CameraHeight();
    // Get instance field reference: private System.Action`1<UnityEngine.Transform> TransformUpdated
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Transform*>*& dyn_TransformUpdated();
    // Get instance field reference: public System.Boolean Teleported
    [[deprecated("Use field access instead!")]] bool& dyn_Teleported();
    // Get instance field reference: private System.Action CameraUpdated
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_CameraUpdated();
    // Get instance field reference: private System.Action PreCharacterMove
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PreCharacterMove();
    // Get instance field reference: public System.Boolean EnableLinearMovement
    [[deprecated("Use field access instead!")]] bool& dyn_EnableLinearMovement();
    // Get instance field reference: public System.Boolean EnableRotation
    [[deprecated("Use field access instead!")]] bool& dyn_EnableRotation();
    // Get instance field reference: public System.Boolean RotationEitherThumbstick
    [[deprecated("Use field access instead!")]] bool& dyn_RotationEitherThumbstick();
    // Get instance field reference: protected UnityEngine.CharacterController Controller
    [[deprecated("Use field access instead!")]] ::UnityEngine::CharacterController*& dyn_Controller();
    // Get instance field reference: protected OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: private System.Single MoveScale
    [[deprecated("Use field access instead!")]] float& dyn_MoveScale();
    // Get instance field reference: private UnityEngine.Vector3 MoveThrottle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_MoveThrottle();
    // Get instance field reference: private System.Single FallSpeed
    [[deprecated("Use field access instead!")]] float& dyn_FallSpeed();
    // Get instance field reference: private System.Nullable`1<OVRPose> InitialPose
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::GlobalNamespace::OVRPose>& dyn_InitialPose();
    // Get instance field reference: private System.Single <InitialYRotation>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$InitialYRotation$k__BackingField();
    // Get instance field reference: private System.Single MoveScaleMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_MoveScaleMultiplier();
    // Get instance field reference: private System.Single RotationScaleMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_RotationScaleMultiplier();
    // Get instance field reference: private System.Boolean SkipMouseRotation
    [[deprecated("Use field access instead!")]] bool& dyn_SkipMouseRotation();
    // Get instance field reference: private System.Boolean HaltUpdateMovement
    [[deprecated("Use field access instead!")]] bool& dyn_HaltUpdateMovement();
    // Get instance field reference: private System.Boolean prevHatLeft
    [[deprecated("Use field access instead!")]] bool& dyn_prevHatLeft();
    // Get instance field reference: private System.Boolean prevHatRight
    [[deprecated("Use field access instead!")]] bool& dyn_prevHatRight();
    // Get instance field reference: private System.Single SimulationRate
    [[deprecated("Use field access instead!")]] float& dyn_SimulationRate();
    // Get instance field reference: private System.Single buttonRotation
    [[deprecated("Use field access instead!")]] float& dyn_buttonRotation();
    // Get instance field reference: private System.Boolean ReadyToSnapTurn
    [[deprecated("Use field access instead!")]] bool& dyn_ReadyToSnapTurn();
    // Get instance field reference: private System.Boolean playerControllerEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_playerControllerEnabled();
    // public System.Void add_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0x4953770
    void add_TransformUpdated(::System::Action_1<::UnityEngine::Transform*>* value);
    // public System.Void remove_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0x4953820
    void remove_TransformUpdated(::System::Action_1<::UnityEngine::Transform*>* value);
    // public System.Void add_CameraUpdated(System.Action value)
    // Offset: 0x49538D0
    void add_CameraUpdated(::System::Action* value);
    // public System.Void remove_CameraUpdated(System.Action value)
    // Offset: 0x495396C
    void remove_CameraUpdated(::System::Action* value);
    // public System.Void add_PreCharacterMove(System.Action value)
    // Offset: 0x4953A08
    void add_PreCharacterMove(::System::Action* value);
    // public System.Void remove_PreCharacterMove(System.Action value)
    // Offset: 0x4953AA4
    void remove_PreCharacterMove(::System::Action* value);
    // public System.Single get_InitialYRotation()
    // Offset: 0x4953B40
    float get_InitialYRotation();
    // private System.Void set_InitialYRotation(System.Single value)
    // Offset: 0x4953B48
    void set_InitialYRotation(float value);
    // private System.Void Start()
    // Offset: 0x4953B50
    void Start();
    // private System.Void Awake()
    // Offset: 0x4953C14
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x4953E08
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x4953E0C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x4953FA0
    void Update();
    // protected System.Void UpdateController()
    // Offset: 0x495414C
    void UpdateController();
    // public System.Void UpdateMovement()
    // Offset: 0x4954874
    void UpdateMovement();
    // public System.Void UpdateTransform(OVRCameraRig rig)
    // Offset: 0x4954878
    void UpdateTransform(::GlobalNamespace::OVRCameraRig* rig);
    // public System.Boolean Jump()
    // Offset: 0x4954A00
    bool Jump();
    // public System.Void Stop()
    // Offset: 0x4954A84
    void Stop();
    // public System.Void GetMoveScaleMultiplier(ref System.Single moveScaleMultiplier)
    // Offset: 0x4954B2C
    void GetMoveScaleMultiplier(ByRef<float> moveScaleMultiplier);
    // public System.Void SetMoveScaleMultiplier(System.Single moveScaleMultiplier)
    // Offset: 0x4954B38
    void SetMoveScaleMultiplier(float moveScaleMultiplier);
    // public System.Void GetRotationScaleMultiplier(ref System.Single rotationScaleMultiplier)
    // Offset: 0x4954B40
    void GetRotationScaleMultiplier(ByRef<float> rotationScaleMultiplier);
    // public System.Void SetRotationScaleMultiplier(System.Single rotationScaleMultiplier)
    // Offset: 0x4954B4C
    void SetRotationScaleMultiplier(float rotationScaleMultiplier);
    // public System.Void GetSkipMouseRotation(ref System.Boolean skipMouseRotation)
    // Offset: 0x4954B54
    void GetSkipMouseRotation(ByRef<bool> skipMouseRotation);
    // public System.Void SetSkipMouseRotation(System.Boolean skipMouseRotation)
    // Offset: 0x4954B60
    void SetSkipMouseRotation(bool skipMouseRotation);
    // public System.Void GetHaltUpdateMovement(ref System.Boolean haltUpdateMovement)
    // Offset: 0x4954B6C
    void GetHaltUpdateMovement(ByRef<bool> haltUpdateMovement);
    // public System.Void SetHaltUpdateMovement(System.Boolean haltUpdateMovement)
    // Offset: 0x4954B78
    void SetHaltUpdateMovement(bool haltUpdateMovement);
    // public System.Void ResetOrientation()
    // Offset: 0x4954B84
    void ResetOrientation();
    // public System.Void .ctor()
    // Offset: 0x4954C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlayerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPlayerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlayerController*, creationType>()));
    }
  }; // OVRPlayerController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::add_TransformUpdated
// Il2CppName: add_TransformUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action_1<::UnityEngine::Transform*>*)>(&GlobalNamespace::OVRPlayerController::add_TransformUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "add_TransformUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::remove_TransformUpdated
// Il2CppName: remove_TransformUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action_1<::UnityEngine::Transform*>*)>(&GlobalNamespace::OVRPlayerController::remove_TransformUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "remove_TransformUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::add_CameraUpdated
// Il2CppName: add_CameraUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&GlobalNamespace::OVRPlayerController::add_CameraUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "add_CameraUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::remove_CameraUpdated
// Il2CppName: remove_CameraUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&GlobalNamespace::OVRPlayerController::remove_CameraUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "remove_CameraUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::add_PreCharacterMove
// Il2CppName: add_PreCharacterMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&GlobalNamespace::OVRPlayerController::add_PreCharacterMove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "add_PreCharacterMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::remove_PreCharacterMove
// Il2CppName: remove_PreCharacterMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&GlobalNamespace::OVRPlayerController::remove_PreCharacterMove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "remove_PreCharacterMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::get_InitialYRotation
// Il2CppName: get_InitialYRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::get_InitialYRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "get_InitialYRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::set_InitialYRotation
// Il2CppName: set_InitialYRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(float)>(&GlobalNamespace::OVRPlayerController::set_InitialYRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "set_InitialYRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::UpdateController
// Il2CppName: UpdateController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::UpdateController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "UpdateController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::UpdateMovement
// Il2CppName: UpdateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::UpdateMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "UpdateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::UpdateTransform
// Il2CppName: UpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(::GlobalNamespace::OVRCameraRig*)>(&GlobalNamespace::OVRPlayerController::UpdateTransform)> {
  static const MethodInfo* get() {
    static auto* rig = &::il2cpp_utils::GetClassFromName("", "OVRCameraRig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "UpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rig});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::Jump
// Il2CppName: Jump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::Jump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "Jump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::GetMoveScaleMultiplier
// Il2CppName: GetMoveScaleMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(ByRef<float>)>(&GlobalNamespace::OVRPlayerController::GetMoveScaleMultiplier)> {
  static const MethodInfo* get() {
    static auto* moveScaleMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "GetMoveScaleMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{moveScaleMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::SetMoveScaleMultiplier
// Il2CppName: SetMoveScaleMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(float)>(&GlobalNamespace::OVRPlayerController::SetMoveScaleMultiplier)> {
  static const MethodInfo* get() {
    static auto* moveScaleMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "SetMoveScaleMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{moveScaleMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::GetRotationScaleMultiplier
// Il2CppName: GetRotationScaleMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(ByRef<float>)>(&GlobalNamespace::OVRPlayerController::GetRotationScaleMultiplier)> {
  static const MethodInfo* get() {
    static auto* rotationScaleMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "GetRotationScaleMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationScaleMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::SetRotationScaleMultiplier
// Il2CppName: SetRotationScaleMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(float)>(&GlobalNamespace::OVRPlayerController::SetRotationScaleMultiplier)> {
  static const MethodInfo* get() {
    static auto* rotationScaleMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "SetRotationScaleMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationScaleMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::GetSkipMouseRotation
// Il2CppName: GetSkipMouseRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(ByRef<bool>)>(&GlobalNamespace::OVRPlayerController::GetSkipMouseRotation)> {
  static const MethodInfo* get() {
    static auto* skipMouseRotation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "GetSkipMouseRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipMouseRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::SetSkipMouseRotation
// Il2CppName: SetSkipMouseRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(bool)>(&GlobalNamespace::OVRPlayerController::SetSkipMouseRotation)> {
  static const MethodInfo* get() {
    static auto* skipMouseRotation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "SetSkipMouseRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipMouseRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::GetHaltUpdateMovement
// Il2CppName: GetHaltUpdateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(ByRef<bool>)>(&GlobalNamespace::OVRPlayerController::GetHaltUpdateMovement)> {
  static const MethodInfo* get() {
    static auto* haltUpdateMovement = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "GetHaltUpdateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{haltUpdateMovement});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::SetHaltUpdateMovement
// Il2CppName: SetHaltUpdateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)(bool)>(&GlobalNamespace::OVRPlayerController::SetHaltUpdateMovement)> {
  static const MethodInfo* get() {
    static auto* haltUpdateMovement = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "SetHaltUpdateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{haltUpdateMovement});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::ResetOrientation
// Il2CppName: ResetOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlayerController::*)()>(&GlobalNamespace::OVRPlayerController::ResetOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlayerController*), "ResetOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlayerController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
