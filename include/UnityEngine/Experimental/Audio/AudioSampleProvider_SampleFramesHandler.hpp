// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Audio.AudioSampleProvider
#include "UnityEngine/Experimental/Audio/AudioSampleProvider.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*, "UnityEngine.Experimental.Audio", "AudioSampleProvider/SampleFramesHandler");
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioSampleProvider::SampleFramesHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x54773F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioSampleProvider::SampleFramesHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioSampleProvider::SampleFramesHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider provider, System.UInt32 sampleFrameCount)
    // Offset: 0x5477504
    void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint sampleFrameCount);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::*)(::UnityEngine::Experimental::Audio::AudioSampleProvider*, uint)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Audio", "AudioSampleProvider")->byval_arg;
    static auto* sampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, sampleFrameCount});
  }
};
