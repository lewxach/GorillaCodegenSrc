// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Voice.Dictation.Listeners
namespace Oculus::Voice::Dictation::Listeners {
  // Forward declaring type: DictationListener
  class DictationListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Dictation::Listeners::DictationListener);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Dictation::Listeners::DictationListener*, "Oculus.Voice.Dictation.Listeners", "DictationListener");
// Type namespace: Oculus.Voice.Dictation.Listeners
namespace Oculus::Voice::Dictation::Listeners {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Dictation.Listeners.DictationListener
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationListener {
    public:
    // public System.Void OnStart(Oculus.Voice.Dictation.Listeners.DictationListener listener)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStart(::Oculus::Voice::Dictation::Listeners::DictationListener* listener);
    // public System.Void OnMicAudioLevel(System.Single micLevel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnMicAudioLevel(float micLevel);
    // public System.Void OnPartialTranscription(System.String transcription)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPartialTranscription(::StringW transcription);
    // public System.Void OnFinalTranscription(System.String transcription)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnFinalTranscription(::StringW transcription);
    // public System.Void OnError(System.String errorType, System.String errorMessage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnError(::StringW errorType, ::StringW errorMessage);
    // public System.Void OnStopped(Oculus.Voice.Dictation.Listeners.DictationListener listener)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStopped(::Oculus::Voice::Dictation::Listeners::DictationListener* listener);
  }; // Oculus.Voice.Dictation.Listeners.DictationListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnStart
// Il2CppName: OnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(::Oculus::Voice::Dictation::Listeners::DictationListener*)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnStart)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("Oculus.Voice.Dictation.Listeners", "DictationListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnMicAudioLevel
// Il2CppName: OnMicAudioLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(float)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnMicAudioLevel)> {
  static const MethodInfo* get() {
    static auto* micLevel = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnMicAudioLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{micLevel});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnPartialTranscription
// Il2CppName: OnPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(::StringW)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnFinalTranscription
// Il2CppName: OnFinalTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(::StringW)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnFinalTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnFinalTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnError
// Il2CppName: OnError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(::StringW, ::StringW)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnError)> {
  static const MethodInfo* get() {
    static auto* errorType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorType, errorMessage});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Dictation::Listeners::DictationListener::OnStopped
// Il2CppName: OnStopped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Dictation::Listeners::DictationListener::*)(::Oculus::Voice::Dictation::Listeners::DictationListener*)>(&Oculus::Voice::Dictation::Listeners::DictationListener::OnStopped)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("Oculus.Voice.Dictation.Listeners", "DictationListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Dictation::Listeners::DictationListener*), "OnStopped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
