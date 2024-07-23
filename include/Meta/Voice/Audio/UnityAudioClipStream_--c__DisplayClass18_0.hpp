// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.Audio.UnityAudioClipStream
#include "Meta/Voice/Audio/UnityAudioClipStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0*, "Meta.Voice.Audio", "UnityAudioClipStream/<>c__DisplayClass18_0");
// Type namespace: Meta.Voice.Audio
namespace Meta::Voice::Audio {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Audio.UnityAudioClipStream/<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityAudioClipStream::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 lengthSamples
    // Size: 0x4
    // Offset: 0x10
    int lengthSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 channels
    // Size: 0x4
    // Offset: 0x14
    int channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 frequency
    // Size: 0x4
    // Offset: 0x18
    int frequency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 lengthSamples
    [[deprecated("Use field access instead!")]] int& dyn_lengthSamples();
    // Get instance field reference: public System.Int32 channels
    [[deprecated("Use field access instead!")]] int& dyn_channels();
    // Get instance field reference: public System.Int32 frequency
    [[deprecated("Use field access instead!")]] int& dyn_frequency();
    // public System.Void .ctor()
    // Offset: 0x443E3B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityAudioClipStream::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityAudioClipStream::$$c__DisplayClass18_0*, creationType>()));
    }
    // System.Boolean <GetCachedClip>b__0(UnityEngine.AudioClip clip)
    // Offset: 0x443E67C
    bool $GetCachedClip$b__0(::UnityEngine::AudioClip* clip);
  }; // Meta.Voice.Audio.UnityAudioClipStream/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(UnityAudioClipStream::$$c__DisplayClass18_0), 24 + sizeof(int)> __Meta_Voice_Audio_UnityAudioClipStream_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(UnityAudioClipStream::$$c__DisplayClass18_0) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0::$GetCachedClip$b__0
// Il2CppName: <GetCachedClip>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0::*)(::UnityEngine::AudioClip*)>(&Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0::$GetCachedClip$b__0)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Audio::UnityAudioClipStream::$$c__DisplayClass18_0*), "<GetCachedClip>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};