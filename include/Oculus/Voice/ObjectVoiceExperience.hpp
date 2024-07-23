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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
}
// Forward declaring namespace: Oculus::Voice
namespace Oculus::Voice {
  // Forward declaring type: AppVoiceExperience
  class AppVoiceExperience;
}
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
}
// Completed forward declares
// Type namespace: Oculus.Voice
namespace Oculus::Voice {
  // Forward declaring type: ObjectVoiceExperience
  class ObjectVoiceExperience;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::ObjectVoiceExperience);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::ObjectVoiceExperience*, "Oculus.Voice", "ObjectVoiceExperience");
// Type namespace: Oculus.Voice
namespace Oculus::Voice {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.ObjectVoiceExperience
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectVoiceExperience : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Meta.WitAi.Events.VoiceEvents _voiceEvents
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Events::VoiceEvents* voiceEvents;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::VoiceEvents*) == 0x8);
    // private Oculus.Voice.AppVoiceExperience _voice
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Voice::AppVoiceExperience* voice;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::AppVoiceExperience*) == 0x8);
    // private Meta.WitAi.Requests.VoiceServiceRequest _activation
    // Size: 0x8
    // Offset: 0x30
    ::Meta::WitAi::Requests::VoiceServiceRequest* activation;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequest*) == 0x8);
    // private Meta.WitAi.Requests.VoiceServiceRequestEvents _events
    // Size: 0x8
    // Offset: 0x38
    ::Meta::WitAi::Requests::VoiceServiceRequestEvents* events;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequestEvents*) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.Events.VoiceEvents _voiceEvents
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::VoiceEvents*& dyn__voiceEvents();
    // Get instance field reference: private Oculus.Voice.AppVoiceExperience _voice
    [[deprecated("Use field access instead!")]] ::Oculus::Voice::AppVoiceExperience*& dyn__voice();
    // Get instance field reference: private Meta.WitAi.Requests.VoiceServiceRequest _activation
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VoiceServiceRequest*& dyn__activation();
    // Get instance field reference: private Meta.WitAi.Requests.VoiceServiceRequestEvents _events
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VoiceServiceRequestEvents*& dyn__events();
    // private System.Void OnEnable()
    // Offset: 0x5720880
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x5720F44
    void OnDisable();
    // private System.Void HandleAudioInputStateChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721590
    void HandleAudioInputStateChange(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleUploadProgressChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x57215F0
    void HandleUploadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleDownloadProgressChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721650
    void HandleDownloadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleStopListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x57216B0
    void HandleStopListening(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleStartListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721710
    void HandleStartListening(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleStateChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721770
    void HandleStateChange(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleFullTranscription(System.String transcription)
    // Offset: 0x57217D0
    void HandleFullTranscription(::StringW transcription);
    // private System.Void HandlePartialTranscription(System.String transcription)
    // Offset: 0x5721830
    void HandlePartialTranscription(::StringW transcription);
    // private System.Void HandleAudioDeactivation(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721890
    void HandleAudioDeactivation(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleAudioActivation(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x57218F0
    void HandleAudioActivation(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleSuccess(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721950
    void HandleSuccess(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleSend(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x57219B0
    void HandleSend(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleInit(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721A10
    void HandleInit(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleFailed(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721A70
    void HandleFailed(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleComplete(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721AD0
    void HandleComplete(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // private System.Void HandleCancel(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x5721B58
    void HandleCancel(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // public System.Void Activate()
    // Offset: 0x5721BF4
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x5721C7C
    void Deactivate();
    // public System.Void .ctor()
    // Offset: 0x5721CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectVoiceExperience* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::ObjectVoiceExperience::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectVoiceExperience*, creationType>()));
    }
  }; // Oculus.Voice.ObjectVoiceExperience
  #pragma pack(pop)
  static check_size<sizeof(ObjectVoiceExperience), 56 + sizeof(::Meta::WitAi::Requests::VoiceServiceRequestEvents*)> __Oculus_Voice_ObjectVoiceExperienceSizeCheck;
  static_assert(sizeof(ObjectVoiceExperience) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)()>(&Oculus::Voice::ObjectVoiceExperience::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)()>(&Oculus::Voice::ObjectVoiceExperience::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleAudioInputStateChange
// Il2CppName: HandleAudioInputStateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleAudioInputStateChange)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleAudioInputStateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleUploadProgressChange
// Il2CppName: HandleUploadProgressChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleUploadProgressChange)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleUploadProgressChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleDownloadProgressChange
// Il2CppName: HandleDownloadProgressChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleDownloadProgressChange)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleDownloadProgressChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleStopListening
// Il2CppName: HandleStopListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleStopListening)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleStopListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleStartListening
// Il2CppName: HandleStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleStartListening)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleStateChange
// Il2CppName: HandleStateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleStateChange)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleStateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleFullTranscription
// Il2CppName: HandleFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::StringW)>(&Oculus::Voice::ObjectVoiceExperience::HandleFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandlePartialTranscription
// Il2CppName: HandlePartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::StringW)>(&Oculus::Voice::ObjectVoiceExperience::HandlePartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandlePartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleAudioDeactivation
// Il2CppName: HandleAudioDeactivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleAudioDeactivation)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleAudioDeactivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleAudioActivation
// Il2CppName: HandleAudioActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleAudioActivation)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleAudioActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleSuccess
// Il2CppName: HandleSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleSuccess)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleSend
// Il2CppName: HandleSend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleSend)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleSend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleInit
// Il2CppName: HandleInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleInit)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleFailed
// Il2CppName: HandleFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleFailed)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleComplete
// Il2CppName: HandleComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleComplete)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::HandleCancel
// Il2CppName: HandleCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Oculus::Voice::ObjectVoiceExperience::HandleCancel)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "HandleCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)()>(&Oculus::Voice::ObjectVoiceExperience::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::ObjectVoiceExperience::*)()>(&Oculus::Voice::ObjectVoiceExperience::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::ObjectVoiceExperience*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::ObjectVoiceExperience::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!