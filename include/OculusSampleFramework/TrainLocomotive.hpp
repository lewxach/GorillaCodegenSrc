// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusSampleFramework.TrainCarBase
#include "OculusSampleFramework/TrainCarBase.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
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
  // Forward declaring type: TrainLocomotive
  class TrainLocomotive;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::TrainLocomotive);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::TrainLocomotive*, "OculusSampleFramework", "TrainLocomotive");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.TrainLocomotive
  // [TokenAttribute] Offset: FFFFFFFF
  class TrainLocomotive : public ::OculusSampleFramework::TrainCarBase {
    public:
    // Nested type: ::OculusSampleFramework::TrainLocomotive::EngineSoundState
    struct EngineSoundState;
    // Nested type: ::OculusSampleFramework::TrainLocomotive::$StartStopTrain$d__34
    class $StartStopTrain$d__34;
    public:
    // protected System.Single _initialSpeed
    // Size: 0x4
    // Offset: 0x58
    float initialSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: initialSpeed and: startStopButton
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject _startStopButton
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* startStopButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _decreaseSpeedButton
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::GameObject* decreaseSpeedButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _increaseSpeedButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* increaseSpeedButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _smokeButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* smokeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _whistleButton
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* whistleButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _reverseButton
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::GameObject* reverseButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.AudioSource _whistleAudioSource
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::AudioSource* whistleAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip _whistleSound
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::AudioClip* whistleSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioSource _engineAudioSource
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::AudioSource* engineAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip[] _accelerationSounds
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::UnityEngine::AudioClip*> accelerationSounds;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip[] _decelerationSounds
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<::UnityEngine::AudioClip*> decelerationSounds;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip _startUpSound
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::AudioClip* startUpSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioSource _smokeStackAudioSource
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::AudioSource* smokeStackAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip _smokeSound
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::AudioClip* smokeSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.ParticleSystem _smoke1
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::ParticleSystem* smoke1;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _smoke2
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::ParticleSystem* smoke2;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private OculusSampleFramework.TrainCarBase[] _childCars
    // Size: 0x8
    // Offset: 0xE0
    ::ArrayW<::OculusSampleFramework::TrainCarBase*> childCars;
    // Field size check
    static_assert(sizeof(::ArrayW<::OculusSampleFramework::TrainCarBase*>) == 0x8);
    // private System.Boolean _isMoving
    // Size: 0x1
    // Offset: 0xE8
    bool isMoving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _reverse
    // Size: 0x1
    // Offset: 0xE9
    bool reverse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reverse and: currentSpeed
    char __padding19[0x2] = {};
    // private System.Single _currentSpeed
    // Size: 0x4
    // Offset: 0xEC
    float currentSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _speedDiv
    // Size: 0x4
    // Offset: 0xF0
    float speedDiv;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _standardRateOverTimeMultiplier
    // Size: 0x4
    // Offset: 0xF4
    float standardRateOverTimeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _standardMaxParticles
    // Size: 0x4
    // Offset: 0xF8
    int standardMaxParticles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: standardMaxParticles and: startStopTrainCr
    char __padding23[0x4] = {};
    // private UnityEngine.Coroutine _startStopTrainCr
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::Coroutine* startStopTrainCr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // static field const value: static private System.Single MIN_SPEED
    static constexpr const float MIN_SPEED = 0.2;
    // Get static field: static private System.Single MIN_SPEED
    static float _get_MIN_SPEED();
    // Set static field: static private System.Single MIN_SPEED
    static void _set_MIN_SPEED(float value);
    // static field const value: static private System.Single MAX_SPEED
    static constexpr const float MAX_SPEED = 2.7;
    // Get static field: static private System.Single MAX_SPEED
    static float _get_MAX_SPEED();
    // Set static field: static private System.Single MAX_SPEED
    static void _set_MAX_SPEED(float value);
    // static field const value: static private System.Single SMOKE_SPEED_MULTIPLIER
    static constexpr const float SMOKE_SPEED_MULTIPLIER = 8;
    // Get static field: static private System.Single SMOKE_SPEED_MULTIPLIER
    static float _get_SMOKE_SPEED_MULTIPLIER();
    // Set static field: static private System.Single SMOKE_SPEED_MULTIPLIER
    static void _set_SMOKE_SPEED_MULTIPLIER(float value);
    // static field const value: static private System.Int32 MAX_PARTICLES_MULTIPLIER
    static constexpr const int MAX_PARTICLES_MULTIPLIER = 3;
    // Get static field: static private System.Int32 MAX_PARTICLES_MULTIPLIER
    static int _get_MAX_PARTICLES_MULTIPLIER();
    // Set static field: static private System.Int32 MAX_PARTICLES_MULTIPLIER
    static void _set_MAX_PARTICLES_MULTIPLIER(int value);
    // Get instance field reference: protected System.Single _initialSpeed
    [[deprecated("Use field access instead!")]] float& dyn__initialSpeed();
    // Get instance field reference: private UnityEngine.GameObject _startStopButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__startStopButton();
    // Get instance field reference: private UnityEngine.GameObject _decreaseSpeedButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__decreaseSpeedButton();
    // Get instance field reference: private UnityEngine.GameObject _increaseSpeedButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__increaseSpeedButton();
    // Get instance field reference: private UnityEngine.GameObject _smokeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__smokeButton();
    // Get instance field reference: private UnityEngine.GameObject _whistleButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__whistleButton();
    // Get instance field reference: private UnityEngine.GameObject _reverseButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__reverseButton();
    // Get instance field reference: private UnityEngine.AudioSource _whistleAudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__whistleAudioSource();
    // Get instance field reference: private UnityEngine.AudioClip _whistleSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__whistleSound();
    // Get instance field reference: private UnityEngine.AudioSource _engineAudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__engineAudioSource();
    // Get instance field reference: private UnityEngine.AudioClip[] _accelerationSounds
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__accelerationSounds();
    // Get instance field reference: private UnityEngine.AudioClip[] _decelerationSounds
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__decelerationSounds();
    // Get instance field reference: private UnityEngine.AudioClip _startUpSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__startUpSound();
    // Get instance field reference: private UnityEngine.AudioSource _smokeStackAudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__smokeStackAudioSource();
    // Get instance field reference: private UnityEngine.AudioClip _smokeSound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__smokeSound();
    // Get instance field reference: private UnityEngine.ParticleSystem _smoke1
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__smoke1();
    // Get instance field reference: private UnityEngine.ParticleSystem _smoke2
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__smoke2();
    // Get instance field reference: private OculusSampleFramework.TrainCarBase[] _childCars
    [[deprecated("Use field access instead!")]] ::ArrayW<::OculusSampleFramework::TrainCarBase*>& dyn__childCars();
    // Get instance field reference: private System.Boolean _isMoving
    [[deprecated("Use field access instead!")]] bool& dyn__isMoving();
    // Get instance field reference: private System.Boolean _reverse
    [[deprecated("Use field access instead!")]] bool& dyn__reverse();
    // Get instance field reference: private System.Single _currentSpeed
    [[deprecated("Use field access instead!")]] float& dyn__currentSpeed();
    // Get instance field reference: private System.Single _speedDiv
    [[deprecated("Use field access instead!")]] float& dyn__speedDiv();
    // Get instance field reference: private System.Single _standardRateOverTimeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__standardRateOverTimeMultiplier();
    // Get instance field reference: private System.Int32 _standardMaxParticles
    [[deprecated("Use field access instead!")]] int& dyn__standardMaxParticles();
    // Get instance field reference: private UnityEngine.Coroutine _startStopTrainCr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__startStopTrainCr();
    // private System.Void Start()
    // Offset: 0x282E0E8
    void Start();
    // private System.Void Update()
    // Offset: 0x282E238
    void Update();
    // public System.Void StartStopStateChanged()
    // Offset: 0x282A8B4
    void StartStopStateChanged();
    // private System.Collections.IEnumerator StartStopTrain(System.Boolean startTrain)
    // Offset: 0x282E1B8
    ::System::Collections::IEnumerator* StartStopTrain(bool startTrain);
    // private System.Single PlayEngineSound(OculusSampleFramework.TrainLocomotive/EngineSoundState engineSoundState)
    // Offset: 0x282E3A4
    float PlayEngineSound(::OculusSampleFramework::TrainLocomotive::EngineSoundState engineSoundState);
    // private System.Void UpdateDistance()
    // Offset: 0x282E31C
    void UpdateDistance();
    // public System.Void DecreaseSpeedStateChanged()
    // Offset: 0x282A940
    void DecreaseSpeedStateChanged();
    // public System.Void IncreaseSpeedStateChanged()
    // Offset: 0x282A9D0
    void IncreaseSpeedStateChanged();
    // private System.Void UpdateSmokeEmissionBasedOnSpeed()
    // Offset: 0x282E5B8
    void UpdateSmokeEmissionBasedOnSpeed();
    // private System.Single GetCurrentSmokeEmission()
    // Offset: 0x282E6A8
    float GetCurrentSmokeEmission();
    // public System.Void SmokeButtonStateChanged()
    // Offset: 0x282AA60
    void SmokeButtonStateChanged();
    // public System.Void WhistleButtonStateChanged()
    // Offset: 0x282AB0C
    void WhistleButtonStateChanged();
    // public System.Void ReverseButtonStateChanged()
    // Offset: 0x282ABEC
    void ReverseButtonStateChanged();
    // public override System.Void UpdatePosition()
    // Offset: 0x282E244
    // Implemented from: OculusSampleFramework.TrainCarBase
    // Base method: System.Void TrainCarBase::UpdatePosition()
    void UpdatePosition();
    // public System.Void .ctor()
    // Offset: 0x282E6E4
    // Implemented from: OculusSampleFramework.TrainCarBase
    // Base method: System.Void TrainCarBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrainLocomotive* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::TrainLocomotive::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrainLocomotive*, creationType>()));
    }
  }; // OculusSampleFramework.TrainLocomotive
  #pragma pack(pop)
  static check_size<sizeof(TrainLocomotive), 256 + sizeof(::UnityEngine::Coroutine*)> __OculusSampleFramework_TrainLocomotiveSizeCheck;
  static_assert(sizeof(TrainLocomotive) == 0x108);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::StartStopStateChanged
// Il2CppName: StartStopStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::StartStopStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "StartStopStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::StartStopTrain
// Il2CppName: StartStopTrain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::TrainLocomotive::*)(bool)>(&OculusSampleFramework::TrainLocomotive::StartStopTrain)> {
  static const MethodInfo* get() {
    static auto* startTrain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "StartStopTrain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTrain});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::PlayEngineSound
// Il2CppName: PlayEngineSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrainLocomotive::*)(::OculusSampleFramework::TrainLocomotive::EngineSoundState)>(&OculusSampleFramework::TrainLocomotive::PlayEngineSound)> {
  static const MethodInfo* get() {
    static auto* engineSoundState = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "TrainLocomotive/EngineSoundState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "PlayEngineSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{engineSoundState});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::UpdateDistance
// Il2CppName: UpdateDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::UpdateDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "UpdateDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::DecreaseSpeedStateChanged
// Il2CppName: DecreaseSpeedStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::DecreaseSpeedStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "DecreaseSpeedStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::IncreaseSpeedStateChanged
// Il2CppName: IncreaseSpeedStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::IncreaseSpeedStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "IncreaseSpeedStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::UpdateSmokeEmissionBasedOnSpeed
// Il2CppName: UpdateSmokeEmissionBasedOnSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::UpdateSmokeEmissionBasedOnSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "UpdateSmokeEmissionBasedOnSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::GetCurrentSmokeEmission
// Il2CppName: GetCurrentSmokeEmission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::GetCurrentSmokeEmission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "GetCurrentSmokeEmission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::SmokeButtonStateChanged
// Il2CppName: SmokeButtonStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::SmokeButtonStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "SmokeButtonStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::WhistleButtonStateChanged
// Il2CppName: WhistleButtonStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::WhistleButtonStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "WhistleButtonStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::ReverseButtonStateChanged
// Il2CppName: ReverseButtonStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::ReverseButtonStateChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "ReverseButtonStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrainLocomotive::*)()>(&OculusSampleFramework::TrainLocomotive::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrainLocomotive*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrainLocomotive::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
