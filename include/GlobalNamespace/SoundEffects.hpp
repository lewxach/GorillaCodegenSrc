// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SRand
#include "GlobalNamespace/SRand.hpp"
// Including type: TimeSince
#include "GlobalNamespace/TimeSince.hpp"
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
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SoundEffects
  class SoundEffects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SoundEffects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoundEffects*, "", "SoundEffects");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SoundEffects
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundEffects : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.AudioSource source
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* source;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.AudioClip> audioClips
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* audioClips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*) == 0x8);
    // public System.String seed
    // Size: 0x8
    // Offset: 0x30
    ::StringW seed;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean distinct
    // Size: 0x1
    // Offset: 0x38
    bool distinct;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: distinct and: minDelay
    char __padding3[0x3] = {};
    // private System.Single _minDelay
    // Size: 0x4
    // Offset: 0x3C
    float minDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private SRand _rnd
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SRand rnd;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SRand) == 0x8);
    // private System.Int32 _lastClipIndex
    // Size: 0x4
    // Offset: 0x48
    int lastClipIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastClipIndex and: lastClipLength
    char __padding6[0x4] = {};
    // private System.Double _lastClipLength
    // Size: 0x8
    // Offset: 0x50
    double lastClipLength;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private TimeSince _lastClipElapsedTime
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::TimeSince lastClipElapsedTime;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TimeSince) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AudioSource source
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_source();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.AudioClip> audioClips
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*& dyn_audioClips();
    // Get instance field reference: public System.String seed
    [[deprecated("Use field access instead!")]] ::StringW& dyn_seed();
    // Get instance field reference: public System.Boolean distinct
    [[deprecated("Use field access instead!")]] bool& dyn_distinct();
    // Get instance field reference: private System.Single _minDelay
    [[deprecated("Use field access instead!")]] float& dyn__minDelay();
    // Get instance field reference: private SRand _rnd
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SRand& dyn__rnd();
    // Get instance field reference: private System.Int32 _lastClipIndex
    [[deprecated("Use field access instead!")]] int& dyn__lastClipIndex();
    // Get instance field reference: private System.Double _lastClipLength
    [[deprecated("Use field access instead!")]] double& dyn__lastClipLength();
    // Get instance field reference: private TimeSince _lastClipElapsedTime
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TimeSince& dyn__lastClipElapsedTime();
    // public System.Boolean get_isPlaying()
    // Offset: 0x26DB288
    bool get_isPlaying();
    // public System.Void Clear()
    // Offset: 0x26DBE30
    void Clear();
    // public System.Void Stop()
    // Offset: 0x26DBEA8
    void Stop();
    // public System.Void PlayNext(System.Single delayMin, System.Single delayMax, System.Single volMin, System.Single volMax)
    // Offset: 0x26DBF28
    void PlayNext(float delayMin, float delayMax, float volMin, float volMax);
    // public System.Void PlayNext(System.Single delay, System.Single volume)
    // Offset: 0x26DB2CC
    void PlayNext(float delay, float volume);
    // private System.Void OnValidate()
    // Offset: 0x26DBF8C
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x26DC060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundEffects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SoundEffects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundEffects*, creationType>()));
    }
  }; // SoundEffects
  #pragma pack(pop)
  static check_size<sizeof(SoundEffects), 88 + sizeof(::GlobalNamespace::TimeSince)> __GlobalNamespace_SoundEffectsSizeCheck;
  static_assert(sizeof(SoundEffects) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SoundEffects::*)()>(&GlobalNamespace::SoundEffects::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundEffects::*)()>(&GlobalNamespace::SoundEffects::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundEffects::*)()>(&GlobalNamespace::SoundEffects::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::PlayNext
// Il2CppName: PlayNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundEffects::*)(float, float, float, float)>(&GlobalNamespace::SoundEffects::PlayNext)> {
  static const MethodInfo* get() {
    static auto* delayMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* delayMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* volMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* volMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "PlayNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delayMin, delayMax, volMin, volMax});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::PlayNext
// Il2CppName: PlayNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundEffects::*)(float, float)>(&GlobalNamespace::SoundEffects::PlayNext)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "PlayNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay, volume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SoundEffects::*)()>(&GlobalNamespace::SoundEffects::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SoundEffects*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SoundEffects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
