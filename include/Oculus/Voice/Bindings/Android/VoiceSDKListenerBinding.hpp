// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Voice::Bindings::Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: IVCBindingEvents
  class IVCBindingEvents;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: IVoiceService
  class IVoiceService;
}
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
  // Forward declaring type: TelemetryEvents
  class TelemetryEvents;
}
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKListenerBinding
  class VoiceSDKListenerBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKListenerBinding");
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKListenerBinding : public ::UnityEngine::AndroidJavaProxy {
    public:
    // Nested type: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::StoppedListeningReason
    struct StoppedListeningReason;
    public:
    // private Meta.WitAi.IVoiceService _voiceService
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::IVoiceService* voiceService;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::IVoiceService*) == 0x8);
    // private readonly Oculus.Voice.Bindings.Android.IVCBindingEvents _bindingEvents
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Voice::Bindings::Android::IVCBindingEvents* bindingEvents;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Bindings::Android::IVCBindingEvents*) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.IVoiceService _voiceService
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::IVoiceService*& dyn__voiceService();
    // Get instance field reference: private readonly Oculus.Voice.Bindings.Android.IVCBindingEvents _bindingEvents
    [[deprecated("Use field access instead!")]] ::Oculus::Voice::Bindings::Android::IVCBindingEvents*& dyn__bindingEvents();
    // public Meta.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x572463C
    ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public Meta.WitAi.Events.TelemetryEvents get_TelemetryEvents()
    // Offset: 0x5725C90
    ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents();
    // public System.Void .ctor(Meta.WitAi.IVoiceService voiceService, Oculus.Voice.Bindings.Android.IVCBindingEvents bindingEvents)
    // Offset: 0x572459C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKListenerBinding* New_ctor(::Meta::WitAi::IVoiceService* voiceService, ::Oculus::Voice::Bindings::Android::IVCBindingEvents* bindingEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKListenerBinding*, creationType>(voiceService, bindingEvents)));
    }
    // private Meta.WitAi.Requests.VoiceServiceRequest GetRequest(System.String requestId)
    // Offset: 0x5725D34
    ::Meta::WitAi::Requests::VoiceServiceRequest* GetRequest(::StringW requestId);
    // public System.Void onStartListening(System.String requestId)
    // Offset: 0x5725F9C
    void onStartListening(::StringW requestId);
    // public System.Void onStartListening()
    // Offset: 0x5725FC8
    void onStartListening();
    // public System.Void onStoppedListening(System.Int32 reason, System.String requestId)
    // Offset: 0x5725FCC
    void onStoppedListening(int reason, ::StringW requestId);
    // public System.Void onStoppedListening(System.Int32 reason)
    // Offset: 0x57260D8
    void onStoppedListening(int reason);
    // public System.Void onRequestCreated(System.String requestId)
    // Offset: 0x57260E0
    void onRequestCreated(::StringW requestId);
    // private System.Void onRequestCreated()
    // Offset: 0x57261D8
    void onRequestCreated();
    // public System.Void onPartialTranscription(System.String transcription, System.String requestId)
    // Offset: 0x57261E0
    void onPartialTranscription(::StringW transcription, ::StringW requestId);
    // public System.Void onPartialTranscription(System.String transcription)
    // Offset: 0x57262C4
    void onPartialTranscription(::StringW transcription);
    // public System.Void onFullTranscription(System.String transcription, System.String requestId)
    // Offset: 0x57262CC
    void onFullTranscription(::StringW transcription, ::StringW requestId);
    // public System.Void onFullTranscription(System.String transcription)
    // Offset: 0x57263B0
    void onFullTranscription(::StringW transcription);
    // public System.Void onPartialResponse(System.String responseJson, System.String requestId)
    // Offset: 0x57263B8
    void onPartialResponse(::StringW responseJson, ::StringW requestId);
    // public System.Void onPartialResponse(System.String responseJson)
    // Offset: 0x5726478
    void onPartialResponse(::StringW responseJson);
    // public System.Void onAborted(System.String requestId)
    // Offset: 0x5726480
    void onAborted(::StringW requestId);
    // public System.Void onAborted()
    // Offset: 0x5726514
    void onAborted();
    // public System.Void onError(System.String error, System.String message, System.String errorBody, System.String requestId)
    // Offset: 0x572651C
    void onError(::StringW error, ::StringW message, ::StringW errorBody, ::StringW requestId);
    // public System.Void onError(System.String error, System.String message, System.String errorBody)
    // Offset: 0x57265C4
    void onError(::StringW error, ::StringW message, ::StringW errorBody);
    // public System.Void onResponse(System.String responseJson, System.String requestId)
    // Offset: 0x57265CC
    void onResponse(::StringW responseJson, ::StringW requestId);
    // public System.Void onResponse(System.String responseJson)
    // Offset: 0x5726690
    void onResponse(::StringW responseJson);
    // public System.Void onMicLevelChanged(System.Single level, System.String requestId)
    // Offset: 0x5726698
    void onMicLevelChanged(float level, ::StringW requestId);
    // public System.Void onMicLevelChanged(System.Single level)
    // Offset: 0x5726714
    void onMicLevelChanged(float level);
    // public System.Void onMicDataSent(System.String requestId)
    // Offset: 0x5726718
    void onMicDataSent(::StringW requestId);
    // public System.Void onMicDataSent()
    // Offset: 0x5726744
    void onMicDataSent();
    // public System.Void onMinimumWakeThresholdHit(System.String requestId)
    // Offset: 0x5726748
    void onMinimumWakeThresholdHit(::StringW requestId);
    // public System.Void onMinimumWakeThresholdHit()
    // Offset: 0x5726774
    void onMinimumWakeThresholdHit();
    // public System.Void onRequestCompleted(System.String requestId)
    // Offset: 0x5726778
    void onRequestCompleted(::StringW requestId);
    // public System.Void onRequestCompleted()
    // Offset: 0x572677C
    void onRequestCompleted();
    // public System.Void onServiceNotAvailable(System.String error, System.String message)
    // Offset: 0x5726780
    void onServiceNotAvailable(::StringW error, ::StringW message);
    // public System.Void onAudioDurationTrackerFinished(System.Int64 timestamp, System.Double duration)
    // Offset: 0x5726888
    void onAudioDurationTrackerFinished(int64_t timestamp, double duration);
    // private System.DateTime NativeTimestampToDateTime(System.Int64 javaTimestamp)
    // Offset: 0x5726934
    ::System::DateTime NativeTimestampToDateTime(int64_t javaTimestamp);
  }; // Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
  #pragma pack(pop)
  static check_size<sizeof(VoiceSDKListenerBinding), 40 + sizeof(::Oculus::Voice::Bindings::Android::IVCBindingEvents*)> __Oculus_Voice_Bindings_Android_VoiceSDKListenerBindingSizeCheck;
  static_assert(sizeof(VoiceSDKListenerBinding) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::VoiceEvents* (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_TelemetryEvents
// Il2CppName: get_TelemetryEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_TelemetryEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "get_TelemetryEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::GetRequest
// Il2CppName: GetRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::GetRequest)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "GetRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening
// Il2CppName: onStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening
// Il2CppName: onStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening
// Il2CppName: onStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening)> {
  static const MethodInfo* get() {
    static auto* reason = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reason, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening
// Il2CppName: onStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening)> {
  static const MethodInfo* get() {
    static auto* reason = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reason});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated
// Il2CppName: onRequestCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onRequestCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated
// Il2CppName: onRequestCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onRequestCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription
// Il2CppName: onPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription
// Il2CppName: onPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription
// Il2CppName: onFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription
// Il2CppName: onFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse
// Il2CppName: onPartialResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onPartialResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse
// Il2CppName: onPartialResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onPartialResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted
// Il2CppName: onAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted
// Il2CppName: onAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError
// Il2CppName: onError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorBody = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message, errorBody, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError
// Il2CppName: onError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorBody = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message, errorBody});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse
// Il2CppName: onResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse
// Il2CppName: onResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse)> {
  static const MethodInfo* get() {
    static auto* responseJson = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseJson});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged
// Il2CppName: onMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(float, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged
// Il2CppName: onMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(float)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent
// Il2CppName: onMicDataSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicDataSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent
// Il2CppName: onMicDataSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicDataSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit
// Il2CppName: onMinimumWakeThresholdHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMinimumWakeThresholdHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit
// Il2CppName: onMinimumWakeThresholdHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMinimumWakeThresholdHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted
// Il2CppName: onRequestCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onRequestCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted
// Il2CppName: onRequestCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onRequestCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onServiceNotAvailable
// Il2CppName: onServiceNotAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onServiceNotAvailable)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onServiceNotAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAudioDurationTrackerFinished
// Il2CppName: onAudioDurationTrackerFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int64_t, double)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAudioDurationTrackerFinished)> {
  static const MethodInfo* get() {
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onAudioDurationTrackerFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timestamp, duration});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::NativeTimestampToDateTime
// Il2CppName: NativeTimestampToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int64_t)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::NativeTimestampToDateTime)> {
  static const MethodInfo* get() {
    static auto* javaTimestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "NativeTimestampToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaTimestamp});
  }
};
