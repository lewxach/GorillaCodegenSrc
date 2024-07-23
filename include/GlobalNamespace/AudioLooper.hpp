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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioLooper
  class AudioLooper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioLooper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioLooper*, "", "AudioLooper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: AudioLooper
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class AudioLooper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip loopClip
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* loopClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip[] interjectionClips
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::AudioClip*> interjectionClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private System.Single interjectionLikelyhood
    // Size: 0x4
    // Offset: 0x38
    float interjectionLikelyhood;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private UnityEngine.AudioClip loopClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_loopClip();
    // Get instance field reference: private UnityEngine.AudioClip[] interjectionClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_interjectionClips();
    // Get instance field reference: private System.Single interjectionLikelyhood
    [[deprecated("Use field access instead!")]] float& dyn_interjectionLikelyhood();
    // protected System.Void Awake()
    // Offset: 0x2772A94
    void Awake();
    // private System.Void Update()
    // Offset: 0x2772AEC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x2772C24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioLooper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioLooper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioLooper*, creationType>()));
    }
  }; // AudioLooper
  #pragma pack(pop)
  static check_size<sizeof(AudioLooper), 56 + sizeof(float)> __GlobalNamespace_AudioLooperSizeCheck;
  static_assert(sizeof(AudioLooper) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioLooper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLooper::*)()>(&GlobalNamespace::AudioLooper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLooper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLooper::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLooper::*)()>(&GlobalNamespace::AudioLooper::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLooper*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLooper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!