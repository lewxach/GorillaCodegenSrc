// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: WindmillBladesController
  class WindmillBladesController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::WindmillBladesController);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::WindmillBladesController*, "OculusSampleFramework", "WindmillBladesController");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.WindmillBladesController
  // [TokenAttribute] Offset: FFFFFFFF
  class WindmillBladesController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::WindmillBladesController::$LerpToSpeed$d__17
    class $LerpToSpeed$d__17;
    // Nested type: ::OculusSampleFramework::WindmillBladesController::$PlaySoundDelayed$d__18
    class $PlaySoundDelayed$d__18;
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip _windMillRotationSound
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* windMillRotationSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _windMillStartSound
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioClip* windMillStartSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _windMillStopSound
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioClip* windMillStopSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Boolean <IsMoving>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool IsMoving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsMoving and: currentSpeed
    char __padding4[0x3] = {};
    // private System.Single _currentSpeed
    // Size: 0x4
    // Offset: 0x44
    float currentSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Coroutine _lerpSpeedCoroutine
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Coroutine* lerpSpeedCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private UnityEngine.Coroutine _audioChangeCr
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Coroutine* audioChangeCr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private UnityEngine.Quaternion _originalRotation
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Quaternion originalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single _rotAngle
    // Size: 0x4
    // Offset: 0x68
    float rotAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single MAX_TIME
    static constexpr const float MAX_TIME = 1;
    // Get static field: static private System.Single MAX_TIME
    static float _get_MAX_TIME();
    // Set static field: static private System.Single MAX_TIME
    static void _set_MAX_TIME(float value);
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private UnityEngine.AudioClip _windMillRotationSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__windMillRotationSound();
    // Get instance field reference: private UnityEngine.AudioClip _windMillStartSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__windMillStartSound();
    // Get instance field reference: private UnityEngine.AudioClip _windMillStopSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__windMillStopSound();
    // Get instance field reference: private System.Boolean <IsMoving>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsMoving$k__BackingField();
    // Get instance field reference: private System.Single _currentSpeed
    [[deprecated("Use field access instead!")]] float& dyn__currentSpeed();
    // Get instance field reference: private UnityEngine.Coroutine _lerpSpeedCoroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__lerpSpeedCoroutine();
    // Get instance field reference: private UnityEngine.Coroutine _audioChangeCr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__audioChangeCr();
    // Get instance field reference: private UnityEngine.Quaternion _originalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__originalRotation();
    // Get instance field reference: private System.Single _rotAngle
    [[deprecated("Use field access instead!")]] float& dyn__rotAngle();
    // public System.Boolean get_IsMoving()
    // Offset: 0x282ED20
    bool get_IsMoving();
    // private System.Void set_IsMoving(System.Boolean value)
    // Offset: 0x282ED28
    void set_IsMoving(bool value);
    // private System.Void Start()
    // Offset: 0x282ED34
    void Start();
    // private System.Void Update()
    // Offset: 0x282ED64
    void Update();
    // public System.Void SetMoveState(System.Boolean newMoveState, System.Single goalSpeed)
    // Offset: 0x282EEA4
    void SetMoveState(bool newMoveState, float goalSpeed);
    // private System.Collections.IEnumerator LerpToSpeed(System.Single goalSpeed)
    // Offset: 0x282EF14
    ::System::Collections::IEnumerator* LerpToSpeed(float goalSpeed);
    // private System.Collections.IEnumerator PlaySoundDelayed(UnityEngine.AudioClip initial, UnityEngine.AudioClip clip, System.Single timeDelayAfterInitial)
    // Offset: 0x282EFB8
    ::System::Collections::IEnumerator* PlaySoundDelayed(::UnityEngine::AudioClip* initial, ::UnityEngine::AudioClip* clip, float timeDelayAfterInitial);
    // private System.Void PlaySound(UnityEngine.AudioClip clip, System.Boolean loop)
    // Offset: 0x282F08C
    void PlaySound(::UnityEngine::AudioClip* clip, bool loop);
    // public System.Void .ctor()
    // Offset: 0x282F0F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindmillBladesController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::WindmillBladesController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindmillBladesController*, creationType>()));
    }
  }; // OculusSampleFramework.WindmillBladesController
  #pragma pack(pop)
  static check_size<sizeof(WindmillBladesController), 104 + sizeof(float)> __OculusSampleFramework_WindmillBladesControllerSizeCheck;
  static_assert(sizeof(WindmillBladesController) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::get_IsMoving
// Il2CppName: get_IsMoving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::WindmillBladesController::*)()>(&OculusSampleFramework::WindmillBladesController::get_IsMoving)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "get_IsMoving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::set_IsMoving
// Il2CppName: set_IsMoving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillBladesController::*)(bool)>(&OculusSampleFramework::WindmillBladesController::set_IsMoving)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "set_IsMoving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillBladesController::*)()>(&OculusSampleFramework::WindmillBladesController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillBladesController::*)()>(&OculusSampleFramework::WindmillBladesController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::SetMoveState
// Il2CppName: SetMoveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillBladesController::*)(bool, float)>(&OculusSampleFramework::WindmillBladesController::SetMoveState)> {
  static const MethodInfo* get() {
    static auto* newMoveState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* goalSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "SetMoveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMoveState, goalSpeed});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::LerpToSpeed
// Il2CppName: LerpToSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::WindmillBladesController::*)(float)>(&OculusSampleFramework::WindmillBladesController::LerpToSpeed)> {
  static const MethodInfo* get() {
    static auto* goalSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "LerpToSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goalSpeed});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::PlaySoundDelayed
// Il2CppName: PlaySoundDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::WindmillBladesController::*)(::UnityEngine::AudioClip*, ::UnityEngine::AudioClip*, float)>(&OculusSampleFramework::WindmillBladesController::PlaySoundDelayed)> {
  static const MethodInfo* get() {
    static auto* initial = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* timeDelayAfterInitial = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "PlaySoundDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initial, clip, timeDelayAfterInitial});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::PlaySound
// Il2CppName: PlaySound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::WindmillBladesController::*)(::UnityEngine::AudioClip*, bool)>(&OculusSampleFramework::WindmillBladesController::PlaySound)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* loop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::WindmillBladesController*), "PlaySound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, loop});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::WindmillBladesController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
