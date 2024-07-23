// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
#include "Meta/WitAi/Requests/VoiceServiceRequestEventsWrapper.hpp"
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
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
}
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceEventToRequestEventMapper
  class VoiceEventToRequestEventMapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VoiceEventToRequestEventMapper);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VoiceEventToRequestEventMapper*, "Meta.WitAi.Requests", "VoiceEventToRequestEventMapper");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.VoiceEventToRequestEventMapper
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceEventToRequestEventMapper : public ::Meta::WitAi::Requests::VoiceServiceRequestEventsWrapper {
    public:
    public:
    // private Meta.WitAi.Events.VoiceEvents _voiceEvents
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::Events::VoiceEvents* voiceEvents;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::VoiceEvents*) == 0x8);
    public:
    // Creating conversion operator: operator ::Meta::WitAi::Events::VoiceEvents*
    constexpr operator ::Meta::WitAi::Events::VoiceEvents*() const noexcept {
      return voiceEvents;
    }
    // Get instance field reference: private Meta.WitAi.Events.VoiceEvents _voiceEvents
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::VoiceEvents*& dyn__voiceEvents();
    // public Meta.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x44378E4
    ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public System.Void set_VoiceEvents(Meta.WitAi.Events.VoiceEvents value)
    // Offset: 0x44378EC
    void set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents* value);
    // public System.Void .ctor(Meta.WitAi.Events.VoiceEvents voiceEvents)
    // Offset: 0x4437904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceEventToRequestEventMapper* New_ctor(::Meta::WitAi::Events::VoiceEvents* voiceEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VoiceEventToRequestEventMapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceEventToRequestEventMapper*, creationType>(voiceEvents)));
    }
    // public System.Void .ctor()
    // Offset: 0x44378F4
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceEventToRequestEventMapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VoiceEventToRequestEventMapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceEventToRequestEventMapper*, creationType>()));
    }
    // protected override System.Void OnStateChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437934
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnStateChange(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnStateChange(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnStopListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437938
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnStopListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnStopListening(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnStartListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x443795C
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnStartListening(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnStartListening(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnFullTranscription(System.String transcription)
    // Offset: 0x4437980
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnFullTranscription(System.String transcription)
    void OnFullTranscription(::StringW transcription);
    // protected override System.Void OnPartialTranscription(System.String transcription)
    // Offset: 0x44379E0
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnPartialTranscription(System.String transcription)
    void OnPartialTranscription(::StringW transcription);
    // protected override System.Void OnPartialResponse(Meta.WitAi.Json.WitResponseNode response)
    // Offset: 0x4437A40
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnPartialResponse(Meta.WitAi.Json.WitResponseNode response)
    void OnPartialResponse(::Meta::WitAi::Json::WitResponseNode* response);
    // protected override System.Void OnFullResponse(Meta.WitAi.Json.WitResponseNode response)
    // Offset: 0x4437AA0
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnFullResponse(Meta.WitAi.Json.WitResponseNode response)
    void OnFullResponse(::Meta::WitAi::Json::WitResponseNode* response);
    // protected override System.Void OnSuccess(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437B00
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnSuccess(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnSuccess(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnSend(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437B04
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnSend(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnSend(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnInit(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437B08
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnInit(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnInit(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnFailed(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437B0C
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnFailed(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnFailed(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnComplete(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437BD8
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnComplete(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnComplete(::Meta::WitAi::Requests::VoiceServiceRequest* request);
    // protected override System.Void OnCancel(Meta.WitAi.Requests.VoiceServiceRequest request)
    // Offset: 0x4437C38
    // Implemented from: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper
    // Base method: System.Void VoiceServiceRequestEventsWrapper::OnCancel(Meta.WitAi.Requests.VoiceServiceRequest request)
    void OnCancel(::Meta::WitAi::Requests::VoiceServiceRequest* request);
  }; // Meta.WitAi.Requests.VoiceEventToRequestEventMapper
  #pragma pack(pop)
  static check_size<sizeof(VoiceEventToRequestEventMapper), 16 + sizeof(::Meta::WitAi::Events::VoiceEvents*)> __Meta_WitAi_Requests_VoiceEventToRequestEventMapperSizeCheck;
  static_assert(sizeof(VoiceEventToRequestEventMapper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::VoiceEvents* (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)()>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::set_VoiceEvents
// Il2CppName: set_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Events::VoiceEvents*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::set_VoiceEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Events", "VoiceEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "set_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStateChange
// Il2CppName: OnStateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStateChange)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnStateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStopListening
// Il2CppName: OnStopListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStopListening)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnStopListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStartListening
// Il2CppName: OnStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnStartListening)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFullTranscription
// Il2CppName: OnFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::StringW)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnPartialTranscription
// Il2CppName: OnPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::StringW)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnPartialResponse
// Il2CppName: OnPartialResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnPartialResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnPartialResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFullResponse
// Il2CppName: OnFullResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFullResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnFullResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnSuccess
// Il2CppName: OnSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnSuccess)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnSend
// Il2CppName: OnSend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnSend)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnSend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnInit
// Il2CppName: OnInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnInit)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFailed
// Il2CppName: OnFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnFailed)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnComplete
// Il2CppName: OnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnComplete)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnCancel
// Il2CppName: OnCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::VoiceEventToRequestEventMapper::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&Meta::WitAi::Requests::VoiceEventToRequestEventMapper::OnCancel)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::VoiceEventToRequestEventMapper*), "OnCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};