// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.Audio.AudioPlayer
#include "Meta/Voice/Audio/AudioPlayer.hpp"
// Including type: Meta.Voice.Audio.IAudioSourceProvider
#include "Meta/Voice/Audio/IAudioSourceProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: UnityAudioPlayer
  class UnityAudioPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Audio::UnityAudioPlayer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Audio::UnityAudioPlayer*, "Meta.Voice.Audio", "UnityAudioPlayer");
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Audio.UnityAudioPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityAudioPlayer : public ::Meta::Voice::Audio::AudioPlayer/*, public ::Meta::Voice::Audio::IAudioSourceProvider*/ {
    public:
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Boolean _cloneAudioSource
    // Size: 0x1
    // Offset: 0x30
    bool cloneAudioSource;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::Audio::IAudioSourceProvider
    operator ::Meta::Voice::Audio::IAudioSourceProvider() noexcept {
      return *reinterpret_cast<::Meta::Voice::Audio::IAudioSourceProvider*>(this);
    }
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Boolean _cloneAudioSource
    [[deprecated("Use field access instead!")]] bool& dyn__cloneAudioSource();
    // public UnityEngine.AudioSource get_AudioSource()
    // Offset: 0x443E6F0
    ::UnityEngine::AudioSource* get_AudioSource();
    // public System.Boolean get_CloneAudioSource()
    // Offset: 0x443E6F8
    bool get_CloneAudioSource();
    // public override System.Void Init()
    // Offset: 0x443E700
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::Init()
    void Init();
    // public override System.String GetPlaybackErrors()
    // Offset: 0x443EA98
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.String AudioPlayer::GetPlaybackErrors()
    ::StringW GetPlaybackErrors();
    // protected override System.Void Play(System.Int32 offsetSamples)
    // Offset: 0x443EB38
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::Play(System.Int32 offsetSamples)
    void Play(int offsetSamples);
    // public override System.Boolean get_IsPlaying()
    // Offset: 0x443ECE8
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Boolean AudioPlayer::get_IsPlaying()
    bool get_IsPlaying();
    // public override System.Int32 get_ElapsedSamples()
    // Offset: 0x443ED70
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Int32 AudioPlayer::get_ElapsedSamples()
    int get_ElapsedSamples();
    // public override System.Void Pause()
    // Offset: 0x443EDF8
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::Pause()
    void Pause();
    // public override System.Void Resume()
    // Offset: 0x443EE34
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::Resume()
    void Resume();
    // public override System.Void Stop()
    // Offset: 0x443EE70
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::Stop()
    void Stop();
    // public System.Void .ctor()
    // Offset: 0x443EEC8
    // Implemented from: Meta.Voice.Audio.AudioPlayer
    // Base method: System.Void AudioPlayer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityAudioPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Audio::UnityAudioPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityAudioPlayer*, creationType>()));
    }
  }; // Meta.Voice.Audio.UnityAudioPlayer
  #pragma pack(pop)
  static check_size<sizeof(UnityAudioPlayer), 48 + sizeof(bool)> __Meta_Voice_Audio_UnityAudioPlayerSizeCheck;
  static_assert(sizeof(UnityAudioPlayer) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::get_AudioSource
// Il2CppName: get_AudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::get_AudioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "get_AudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::get_CloneAudioSource
// Il2CppName: get_CloneAudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::get_CloneAudioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "get_CloneAudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::GetPlaybackErrors
// Il2CppName: GetPlaybackErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::GetPlaybackErrors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "GetPlaybackErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioPlayer::*)(int)>(&Meta::Voice::Audio::UnityAudioPlayer::Play)> {
  static const MethodInfo* get() {
    static auto* offsetSamples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetSamples});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::get_ElapsedSamples
// Il2CppName: get_ElapsedSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::get_ElapsedSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "get_ElapsedSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioPlayer::*)()>(&Meta::Voice::Audio::UnityAudioPlayer::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioPlayer*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!