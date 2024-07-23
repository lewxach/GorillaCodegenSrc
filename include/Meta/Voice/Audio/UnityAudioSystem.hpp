// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Meta.Voice.Audio.IAudioSystem
#include "Meta/Voice/Audio/IAudioSystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::Voice::Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: IAudioClipStream
  class IAudioClipStream;
  // Forward declaring type: IAudioPlayer
  class IAudioPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: UnityAudioSystem
  class UnityAudioSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Audio::UnityAudioSystem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Audio::UnityAudioSystem*, "Meta.Voice.Audio", "UnityAudioSystem");
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Audio.UnityAudioSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityAudioSystem : public ::UnityEngine::MonoBehaviour/*, public ::Meta::Voice::Audio::IAudioSystem*/ {
    public:
    public:
    // public System.Single ChunkBufferLength
    // Size: 0x4
    // Offset: 0x20
    float ChunkBufferLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single AudioClipReadyLength
    // Size: 0x4
    // Offset: 0x24
    float AudioClipReadyLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 AudioClipPreloadCount
    // Size: 0x4
    // Offset: 0x28
    int AudioClipPreloadCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::Audio::IAudioSystem
    operator ::Meta::Voice::Audio::IAudioSystem() noexcept {
      return *reinterpret_cast<::Meta::Voice::Audio::IAudioSystem*>(this);
    }
    // Get instance field reference: public System.Single ChunkBufferLength
    [[deprecated("Use field access instead!")]] float& dyn_ChunkBufferLength();
    // Get instance field reference: public System.Single AudioClipReadyLength
    [[deprecated("Use field access instead!")]] float& dyn_AudioClipReadyLength();
    // Get instance field reference: public System.Int32 AudioClipPreloadCount
    [[deprecated("Use field access instead!")]] int& dyn_AudioClipPreloadCount();
    // private System.Void Awake()
    // Offset: 0x443EED0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x443EFBC
    void OnDestroy();
    // public Meta.Voice.Audio.IAudioClipStream GetAudioClipStream(System.Int32 channels, System.Int32 sampleRate)
    // Offset: 0x443F024
    ::Meta::Voice::Audio::IAudioClipStream* GetAudioClipStream(int channels, int sampleRate);
    // public Meta.Voice.Audio.IAudioPlayer GetAudioPlayer(UnityEngine.GameObject root)
    // Offset: 0x443F0A4
    ::Meta::Voice::Audio::IAudioPlayer* GetAudioPlayer(::UnityEngine::GameObject* root);
    // public System.Void .ctor()
    // Offset: 0x443F0F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityAudioSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Audio::UnityAudioSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityAudioSystem*, creationType>()));
    }
  }; // Meta.Voice.Audio.UnityAudioSystem
  #pragma pack(pop)
  static check_size<sizeof(UnityAudioSystem), 40 + sizeof(int)> __Meta_Voice_Audio_UnityAudioSystemSizeCheck;
  static_assert(sizeof(UnityAudioSystem) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioSystem::*)()>(&Meta::Voice::Audio::UnityAudioSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioSystem::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Audio::UnityAudioSystem::*)()>(&Meta::Voice::Audio::UnityAudioSystem::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioSystem*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioSystem::GetAudioClipStream
// Il2CppName: GetAudioClipStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (Meta::Voice::Audio::UnityAudioSystem::*)(int, int)>(&Meta::Voice::Audio::UnityAudioSystem::GetAudioClipStream)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioSystem*), "GetAudioClipStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, sampleRate});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioSystem::GetAudioPlayer
// Il2CppName: GetAudioPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Audio::IAudioPlayer* (Meta::Voice::Audio::UnityAudioSystem::*)(::UnityEngine::GameObject*)>(&Meta::Voice::Audio::UnityAudioSystem::GetAudioPlayer)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioSystem*), "GetAudioPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!