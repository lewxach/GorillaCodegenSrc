// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Meta.WitAi.Interfaces.IAudioInputSource
#include "Meta/WitAi/Interfaces/IAudioInputSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
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
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Forward declaring type: AudioEncoding
  class AudioEncoding;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioClipAudioSource
  class AudioClipAudioSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioClipAudioSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAudioSource*, "", "AudioClipAudioSource");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipAudioSource
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClipAudioSource : public ::UnityEngine::MonoBehaviour/*, public ::Meta::WitAi::Interfaces::IAudioInputSource*/ {
    public:
    // Nested type: ::GlobalNamespace::AudioClipAudioSource::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    // Nested type: ::GlobalNamespace::AudioClipAudioSource::$ProcessClip$d__25
    class $ProcessClip$d__25;
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AudioClip> _audioClips
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* audioClips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*) == 0x8);
    // private System.Boolean _loopRequests
    // Size: 0x1
    // Offset: 0x30
    bool loopRequests;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isRecording
    // Size: 0x1
    // Offset: 0x31
    bool isRecording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRecording and: audioQueue
    char __padding3[0x6] = {};
    // private System.Collections.Generic.Queue`1<System.Int32> _audioQueue
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Queue_1<int>* audioQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<int>*) == 0x8);
    // private System.Int32 clipIndex
    // Size: 0x4
    // Offset: 0x40
    int clipIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clipIndex and: activeClip
    char __padding5[0x4] = {};
    // private System.Single[] activeClip
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> activeClip;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Int32 activeClipIndex
    // Size: 0x4
    // Offset: 0x50
    int activeClipIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: activeClipIndex and: activeClipBuffer
    char __padding7[0x4] = {};
    // private System.Single[] activeClipBuffer
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<float> activeClipBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Collections.Generic.List`1<System.Single[]> clipData
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::ArrayW<float>>* clipData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<float>>*) == 0x8);
    // private System.Action OnStartRecording
    // Size: 0x8
    // Offset: 0x68
    ::System::Action* OnStartRecording;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action OnStartRecordingFailed
    // Size: 0x8
    // Offset: 0x70
    ::System::Action* OnStartRecordingFailed;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`3<System.Int32,System.Single[],System.Single> OnSampleReady
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_3<int, ::ArrayW<float>, float>* OnSampleReady;
    // Field size check
    static_assert(sizeof(::System::Action_3<int, ::ArrayW<float>, float>*) == 0x8);
    // private System.Action OnStopRecording
    // Size: 0x8
    // Offset: 0x80
    ::System::Action* OnStopRecording;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IAudioInputSource
    operator ::Meta::WitAi::Interfaces::IAudioInputSource() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(this);
    }
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.AudioClip> _audioClips
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*& dyn__audioClips();
    // Get instance field reference: private System.Boolean _loopRequests
    [[deprecated("Use field access instead!")]] bool& dyn__loopRequests();
    // Get instance field reference: private System.Boolean _isRecording
    [[deprecated("Use field access instead!")]] bool& dyn__isRecording();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Int32> _audioQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<int>*& dyn__audioQueue();
    // Get instance field reference: private System.Int32 clipIndex
    [[deprecated("Use field access instead!")]] int& dyn_clipIndex();
    // Get instance field reference: private System.Single[] activeClip
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_activeClip();
    // Get instance field reference: private System.Int32 activeClipIndex
    [[deprecated("Use field access instead!")]] int& dyn_activeClipIndex();
    // Get instance field reference: private System.Single[] activeClipBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_activeClipBuffer();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single[]> clipData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ArrayW<float>>*& dyn_clipData();
    // Get instance field reference: private System.Action OnStartRecording
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnStartRecording();
    // Get instance field reference: private System.Action OnStartRecordingFailed
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnStartRecordingFailed();
    // Get instance field reference: private System.Action`3<System.Int32,System.Single[],System.Single> OnSampleReady
    [[deprecated("Use field access instead!")]] ::System::Action_3<int, ::ArrayW<float>, float>*& dyn_OnSampleReady();
    // Get instance field reference: private System.Action OnStopRecording
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnStopRecording();
    // private System.Void Start()
    // Offset: 0x442409C
    void Start();
    // private System.Void SendSample(System.Single[] sample)
    // Offset: 0x442433C
    void SendSample(::ArrayW<float> sample);
    // public System.Void add_OnStartRecording(System.Action value)
    // Offset: 0x4424574
    void add_OnStartRecording(::System::Action* value);
    // public System.Void remove_OnStartRecording(System.Action value)
    // Offset: 0x4424610
    void remove_OnStartRecording(::System::Action* value);
    // public System.Void add_OnStartRecordingFailed(System.Action value)
    // Offset: 0x44246AC
    void add_OnStartRecordingFailed(::System::Action* value);
    // public System.Void remove_OnStartRecordingFailed(System.Action value)
    // Offset: 0x4424748
    void remove_OnStartRecordingFailed(::System::Action* value);
    // public System.Void add_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single> value)
    // Offset: 0x44247E4
    void add_OnSampleReady(::System::Action_3<int, ::ArrayW<float>, float>* value);
    // public System.Void remove_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single> value)
    // Offset: 0x4424894
    void remove_OnSampleReady(::System::Action_3<int, ::ArrayW<float>, float>* value);
    // public System.Void add_OnStopRecording(System.Action value)
    // Offset: 0x4424944
    void add_OnStopRecording(::System::Action* value);
    // public System.Void remove_OnStopRecording(System.Action value)
    // Offset: 0x44249E0
    void remove_OnStopRecording(::System::Action* value);
    // public System.Void StartRecording(System.Int32 sampleLen)
    // Offset: 0x4424A7C
    void StartRecording(int sampleLen);
    // private System.Collections.IEnumerator ProcessClip(UnityEngine.AudioClip clip, System.Single[] clipData)
    // Offset: 0x4424CB0
    ::System::Collections::IEnumerator* ProcessClip(::UnityEngine::AudioClip* clip, ::ArrayW<float> clipData);
    // public System.Void StopRecording()
    // Offset: 0x4424D60
    void StopRecording();
    // public System.Boolean get_IsRecording()
    // Offset: 0x4424D80
    bool get_IsRecording();
    // public Meta.WitAi.Data.AudioEncoding get_AudioEncoding()
    // Offset: 0x4424D88
    ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding();
    // public System.Boolean get_IsInputAvailable()
    // Offset: 0x4424DDC
    bool get_IsInputAvailable();
    // public System.Void CheckForInput()
    // Offset: 0x4424DE4
    void CheckForInput();
    // public System.Boolean SetActiveClip(System.String clipName)
    // Offset: 0x4424DE8
    bool SetActiveClip(::StringW clipName);
    // public System.Void AddClip(UnityEngine.AudioClip clip)
    // Offset: 0x4424F48
    void AddClip(::UnityEngine::AudioClip* clip);
    // private System.Void AddClipData(UnityEngine.AudioClip clip)
    // Offset: 0x4424244
    void AddClipData(::UnityEngine::AudioClip* clip);
    // public System.Void .ctor()
    // Offset: 0x442503C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipAudioSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioClipAudioSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipAudioSource*, creationType>()));
    }
  }; // AudioClipAudioSource
  #pragma pack(pop)
  static check_size<sizeof(AudioClipAudioSource), 128 + sizeof(::System::Action*)> __GlobalNamespace_AudioClipAudioSourceSizeCheck;
  static_assert(sizeof(AudioClipAudioSource) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::SendSample
// Il2CppName: SendSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::ArrayW<float>)>(&GlobalNamespace::AudioClipAudioSource::SendSample)> {
  static const MethodInfo* get() {
    static auto* sample = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "SendSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::add_OnStartRecording
// Il2CppName: add_OnStartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::add_OnStartRecording)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "add_OnStartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::remove_OnStartRecording
// Il2CppName: remove_OnStartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::remove_OnStartRecording)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "remove_OnStartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::add_OnStartRecordingFailed
// Il2CppName: add_OnStartRecordingFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::add_OnStartRecordingFailed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "add_OnStartRecordingFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::remove_OnStartRecordingFailed
// Il2CppName: remove_OnStartRecordingFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::remove_OnStartRecordingFailed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "remove_OnStartRecordingFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::add_OnSampleReady
// Il2CppName: add_OnSampleReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action_3<int, ::ArrayW<float>, float>*)>(&GlobalNamespace::AudioClipAudioSource::add_OnSampleReady)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "add_OnSampleReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::remove_OnSampleReady
// Il2CppName: remove_OnSampleReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action_3<int, ::ArrayW<float>, float>*)>(&GlobalNamespace::AudioClipAudioSource::remove_OnSampleReady)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "remove_OnSampleReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::add_OnStopRecording
// Il2CppName: add_OnStopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::add_OnStopRecording)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "add_OnStopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::remove_OnStopRecording
// Il2CppName: remove_OnStopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&GlobalNamespace::AudioClipAudioSource::remove_OnStopRecording)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "remove_OnStopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::StartRecording
// Il2CppName: StartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(int)>(&GlobalNamespace::AudioClipAudioSource::StartRecording)> {
  static const MethodInfo* get() {
    static auto* sampleLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "StartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleLen});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::ProcessClip
// Il2CppName: ProcessClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::AudioClipAudioSource::*)(::UnityEngine::AudioClip*, ::ArrayW<float>)>(&GlobalNamespace::AudioClipAudioSource::ProcessClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* clipData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "ProcessClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, clipData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::StopRecording
// Il2CppName: StopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::StopRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "StopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::get_IsRecording
// Il2CppName: get_IsRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::get_IsRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "get_IsRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::get_AudioEncoding
// Il2CppName: get_AudioEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::AudioEncoding* (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::get_AudioEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "get_AudioEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::get_IsInputAvailable
// Il2CppName: get_IsInputAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::get_IsInputAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "get_IsInputAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::CheckForInput
// Il2CppName: CheckForInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)()>(&GlobalNamespace::AudioClipAudioSource::CheckForInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "CheckForInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::SetActiveClip
// Il2CppName: SetActiveClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioClipAudioSource::*)(::StringW)>(&GlobalNamespace::AudioClipAudioSource::SetActiveClip)> {
  static const MethodInfo* get() {
    static auto* clipName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "SetActiveClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::AddClip
// Il2CppName: AddClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAudioSource::AddClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "AddClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::AddClipData
// Il2CppName: AddClipData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipAudioSource::*)(::UnityEngine::AudioClip*)>(&GlobalNamespace::AudioClipAudioSource::AddClipData)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAudioSource*), "AddClipData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAudioSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
