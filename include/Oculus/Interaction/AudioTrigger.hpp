// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.MinMaxPair
#include "Oculus/Interaction/MinMaxPair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: AudioTrigger
  class AudioTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::AudioTrigger);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::AudioTrigger*, "Oculus.Interaction", "AudioTrigger");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.AudioTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioTrigger : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip[] _audioClips
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AudioClip*> audioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x30
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Interaction.MinMaxPair _volumeRandomization
    // Size: 0xC
    // Offset: 0x34
    ::Oculus::Interaction::MinMaxPair volumeRandomization;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MinMaxPair) == 0xC);
    // private System.Single _pitch
    // Size: 0x4
    // Offset: 0x40
    float pitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Interaction.MinMaxPair _pitchRandomization
    // Size: 0xC
    // Offset: 0x44
    ::Oculus::Interaction::MinMaxPair pitchRandomization;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MinMaxPair) == 0xC);
    // private System.Boolean _spatialize
    // Size: 0x1
    // Offset: 0x50
    bool spatialize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _loop
    // Size: 0x1
    // Offset: 0x51
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: chanceToPlay
    char __padding7[0x2] = {};
    // private System.Single _chanceToPlay
    // Size: 0x4
    // Offset: 0x54
    float chanceToPlay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _playOnStart
    // Size: 0x1
    // Offset: 0x58
    bool playOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playOnStart and: previousAudioClipIndex
    char __padding9[0x3] = {};
    // private System.Int32 _previousAudioClipIndex
    // Size: 0x4
    // Offset: 0x5C
    int previousAudioClipIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private UnityEngine.AudioClip[] _audioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__audioClips();
    // Get instance field reference: private System.Single _volume
    [[deprecated("Use field access instead!")]] float& dyn__volume();
    // Get instance field reference: private Oculus.Interaction.MinMaxPair _volumeRandomization
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MinMaxPair& dyn__volumeRandomization();
    // Get instance field reference: private System.Single _pitch
    [[deprecated("Use field access instead!")]] float& dyn__pitch();
    // Get instance field reference: private Oculus.Interaction.MinMaxPair _pitchRandomization
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MinMaxPair& dyn__pitchRandomization();
    // Get instance field reference: private System.Boolean _spatialize
    [[deprecated("Use field access instead!")]] bool& dyn__spatialize();
    // Get instance field reference: private System.Boolean _loop
    [[deprecated("Use field access instead!")]] bool& dyn__loop();
    // Get instance field reference: private System.Single _chanceToPlay
    [[deprecated("Use field access instead!")]] float& dyn__chanceToPlay();
    // Get instance field reference: private System.Boolean _playOnStart
    [[deprecated("Use field access instead!")]] bool& dyn__playOnStart();
    // Get instance field reference: private System.Int32 _previousAudioClipIndex
    [[deprecated("Use field access instead!")]] int& dyn__previousAudioClipIndex();
    // public System.Single get_Volume()
    // Offset: 0x479866C
    float get_Volume();
    // public System.Void set_Volume(System.Single value)
    // Offset: 0x4798674
    void set_Volume(float value);
    // public Oculus.Interaction.MinMaxPair get_VolumeRandomization()
    // Offset: 0x479867C
    ::Oculus::Interaction::MinMaxPair get_VolumeRandomization();
    // public System.Void set_VolumeRandomization(Oculus.Interaction.MinMaxPair value)
    // Offset: 0x479868C
    void set_VolumeRandomization(::Oculus::Interaction::MinMaxPair value);
    // public System.Single get_Pitch()
    // Offset: 0x4798698
    float get_Pitch();
    // public System.Void set_Pitch(System.Single value)
    // Offset: 0x47986A0
    void set_Pitch(float value);
    // public Oculus.Interaction.MinMaxPair get_PitchRandomization()
    // Offset: 0x47986A8
    ::Oculus::Interaction::MinMaxPair get_PitchRandomization();
    // public System.Void set_PitchRandomization(Oculus.Interaction.MinMaxPair value)
    // Offset: 0x47986B8
    void set_PitchRandomization(::Oculus::Interaction::MinMaxPair value);
    // public System.Boolean get_Spatialize()
    // Offset: 0x47986C4
    bool get_Spatialize();
    // public System.Void set_Spatialize(System.Boolean value)
    // Offset: 0x47986CC
    void set_Spatialize(bool value);
    // public System.Boolean get_Loop()
    // Offset: 0x47986D8
    bool get_Loop();
    // public System.Void set_Loop(System.Boolean value)
    // Offset: 0x47986E0
    void set_Loop(bool value);
    // public System.Single get_ChanceToPlay()
    // Offset: 0x47986EC
    float get_ChanceToPlay();
    // public System.Void set_ChanceToPlay(System.Single value)
    // Offset: 0x47986F4
    void set_ChanceToPlay(float value);
    // protected System.Void Start()
    // Offset: 0x47986FC
    void Start();
    // public System.Void PlayAudio()
    // Offset: 0x4798394
    void PlayAudio();
    // private UnityEngine.AudioClip RandomClipWithoutRepeat()
    // Offset: 0x47987CC
    ::UnityEngine::AudioClip* RandomClipWithoutRepeat();
    // public System.Void InjectAllAudioTrigger(UnityEngine.AudioSource audioSource, UnityEngine.AudioClip[] audioClips)
    // Offset: 0x4798834
    void InjectAllAudioTrigger(::UnityEngine::AudioSource* audioSource, ::ArrayW<::UnityEngine::AudioClip*> audioClips);
    // public System.Void InjectAudioSource(UnityEngine.AudioSource audioSource)
    // Offset: 0x4798864
    void InjectAudioSource(::UnityEngine::AudioSource* audioSource);
    // public System.Void InjectAudioClips(UnityEngine.AudioClip[] audioClips)
    // Offset: 0x479886C
    void InjectAudioClips(::ArrayW<::UnityEngine::AudioClip*> audioClips);
    // public System.Void InjectOptionalPlayOnStart(System.Boolean playOnStart)
    // Offset: 0x4798874
    void InjectOptionalPlayOnStart(bool playOnStart);
    // public System.Void .ctor()
    // Offset: 0x4798880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::AudioTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioTrigger*, creationType>()));
    }
  }; // Oculus.Interaction.AudioTrigger
  #pragma pack(pop)
  static check_size<sizeof(AudioTrigger), 92 + sizeof(int)> __Oculus_Interaction_AudioTriggerSizeCheck;
  static_assert(sizeof(AudioTrigger) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_Volume
// Il2CppName: get_Volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_Volume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_Volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_Volume
// Il2CppName: set_Volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(float)>(&Oculus::Interaction::AudioTrigger::set_Volume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_Volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_VolumeRandomization
// Il2CppName: get_VolumeRandomization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::MinMaxPair (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_VolumeRandomization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_VolumeRandomization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_VolumeRandomization
// Il2CppName: set_VolumeRandomization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(::Oculus::Interaction::MinMaxPair)>(&Oculus::Interaction::AudioTrigger::set_VolumeRandomization)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MinMaxPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_VolumeRandomization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_Pitch
// Il2CppName: get_Pitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_Pitch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_Pitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_Pitch
// Il2CppName: set_Pitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(float)>(&Oculus::Interaction::AudioTrigger::set_Pitch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_Pitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_PitchRandomization
// Il2CppName: get_PitchRandomization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::MinMaxPair (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_PitchRandomization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_PitchRandomization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_PitchRandomization
// Il2CppName: set_PitchRandomization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(::Oculus::Interaction::MinMaxPair)>(&Oculus::Interaction::AudioTrigger::set_PitchRandomization)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MinMaxPair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_PitchRandomization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_Spatialize
// Il2CppName: get_Spatialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_Spatialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_Spatialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_Spatialize
// Il2CppName: set_Spatialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(bool)>(&Oculus::Interaction::AudioTrigger::set_Spatialize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_Spatialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_Loop
// Il2CppName: get_Loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_Loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_Loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_Loop
// Il2CppName: set_Loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(bool)>(&Oculus::Interaction::AudioTrigger::set_Loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_Loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::get_ChanceToPlay
// Il2CppName: get_ChanceToPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::get_ChanceToPlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "get_ChanceToPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::set_ChanceToPlay
// Il2CppName: set_ChanceToPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(float)>(&Oculus::Interaction::AudioTrigger::set_ChanceToPlay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "set_ChanceToPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::PlayAudio
// Il2CppName: PlayAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::PlayAudio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "PlayAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::RandomClipWithoutRepeat
// Il2CppName: RandomClipWithoutRepeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (Oculus::Interaction::AudioTrigger::*)()>(&Oculus::Interaction::AudioTrigger::RandomClipWithoutRepeat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "RandomClipWithoutRepeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::InjectAllAudioTrigger
// Il2CppName: InjectAllAudioTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(::UnityEngine::AudioSource*, ::ArrayW<::UnityEngine::AudioClip*>)>(&Oculus::Interaction::AudioTrigger::InjectAllAudioTrigger)> {
  static const MethodInfo* get() {
    static auto* audioSource = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    static auto* audioClips = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "InjectAllAudioTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioSource, audioClips});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::InjectAudioSource
// Il2CppName: InjectAudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(::UnityEngine::AudioSource*)>(&Oculus::Interaction::AudioTrigger::InjectAudioSource)> {
  static const MethodInfo* get() {
    static auto* audioSource = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "InjectAudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioSource});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::InjectAudioClips
// Il2CppName: InjectAudioClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(::ArrayW<::UnityEngine::AudioClip*>)>(&Oculus::Interaction::AudioTrigger::InjectAudioClips)> {
  static const MethodInfo* get() {
    static auto* audioClips = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "InjectAudioClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClips});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::InjectOptionalPlayOnStart
// Il2CppName: InjectOptionalPlayOnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioTrigger::*)(bool)>(&Oculus::Interaction::AudioTrigger::InjectOptionalPlayOnStart)> {
  static const MethodInfo* get() {
    static auto* playOnStart = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioTrigger*), "InjectOptionalPlayOnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playOnStart});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
