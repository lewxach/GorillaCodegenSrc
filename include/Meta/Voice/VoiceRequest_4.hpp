// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.IVoiceRequest`4
#include "Meta/Voice/IVoiceRequest_4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: Meta::Voice
namespace Meta::Voice {
  // Forward declaring type: IVoiceRequestOptions
  class IVoiceRequestOptions;
  // Forward declaring type: VoiceRequestEvents`1<TUnityEvent>
  template<typename TUnityEvent>
  class VoiceRequestEvents_1;
  // Forward declaring type: IVoiceRequestResults
  class IVoiceRequestResults;
}
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Forward declaring type: SimulatedResponse
  class SimulatedResponse;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: VoiceRequest`4<TUnityEvent, TOptions, TEvents, TResults>
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class VoiceRequest_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::Voice::VoiceRequest_4, "Meta.Voice", "VoiceRequest`4");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.Voice.VoiceRequest`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class VoiceRequest_4 : public ::Il2CppObject/*, public ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*/ {
    public:
    public:
    // private Meta.Voice.VoiceRequestState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::Meta::Voice::VoiceRequestState State;
    // Field size check
    static_assert(sizeof(::Meta::Voice::VoiceRequestState) == 0x4);
    // private System.Single <DownloadProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float DownloadProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <UploadProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float UploadProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TOptions <Options>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TOptions Options;
    // private TEvents <Events>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TEvents Events;
    // private TResults <Results>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResults Results;
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>
    operator ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>() noexcept {
      return *reinterpret_cast<::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static public Meta.WitAi.Data.SimulatedResponse simulatedResponse
    static ::Meta::WitAi::Data::SimulatedResponse* _get_simulatedResponse() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::_get_simulatedResponse");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::Meta::WitAi::Data::SimulatedResponse*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*>::get(), "simulatedResponse")));
    }
    // Autogenerated static field setter
    // Set static field: static public Meta.WitAi.Data.SimulatedResponse simulatedResponse
    static void _set_simulatedResponse(::Meta::WitAi::Data::SimulatedResponse* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::_set_simulatedResponse");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*>::get(), "simulatedResponse", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private Meta.Voice.VoiceRequestState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::Voice::VoiceRequestState& dyn_$State$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$State$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<State>k__BackingField"))->offset;
      return *reinterpret_cast<::Meta::Voice::VoiceRequestState*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single <DownloadProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$DownloadProgress$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$DownloadProgress$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<DownloadProgress>k__BackingField"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single <UploadProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$UploadProgress$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$UploadProgress$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<UploadProgress>k__BackingField"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TOptions <Options>k__BackingField
    [[deprecated("Use field access instead!")]] TOptions& dyn_$Options$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$Options$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Options>k__BackingField"))->offset;
      return *reinterpret_cast<TOptions*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TEvents <Events>k__BackingField
    [[deprecated("Use field access instead!")]] TEvents& dyn_$Events$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$Events$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Events>k__BackingField"))->offset;
      return *reinterpret_cast<TEvents*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TResults <Results>k__BackingField
    [[deprecated("Use field access instead!")]] TResults& dyn_$Results$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::dyn_$Results$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Results>k__BackingField"))->offset;
      return *reinterpret_cast<TResults*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Meta.Voice.VoiceRequestState get_State()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::Voice::VoiceRequestState get_State() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_State");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::Meta::Voice::VoiceRequestState, false>(this, ___internal__method);
    }
    // private System.Void set_State(Meta.Voice.VoiceRequestState value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_State(::Meta::Voice::VoiceRequestState value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_State");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_State", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_IsActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsActive() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_IsActive");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsActive", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Single get_DownloadProgress()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_DownloadProgress() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_DownloadProgress");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // private System.Void set_DownloadProgress(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_DownloadProgress(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_DownloadProgress");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_DownloadProgress", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Single get_UploadProgress()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_UploadProgress() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_UploadProgress");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // private System.Void set_UploadProgress(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_UploadProgress(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_UploadProgress");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_UploadProgress", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public TOptions get_Options()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TOptions get_Options() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_Options");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TOptions, false>(this, ___internal__method);
    }
    // private System.Void set_Options(TOptions value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Options(TOptions value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_Options");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Options", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public TEvents get_Events()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TEvents get_Events() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_Events");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TEvents, false>(this, ___internal__method);
    }
    // private System.Void set_Events(TEvents value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Events(TEvents value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_Events");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Events", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public TResults get_Results()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResults get_Results() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_Results");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TResults, false>(this, ___internal__method);
    }
    // protected System.Void set_Results(TResults value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Results(TResults value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::set_Results");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Results", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_CanSend()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanSend() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::get_CanSend");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void .ctor(TOptions newOptions, TEvents newEvents)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>* New_ctor(TOptions newOptions, TEvents newEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*, creationType>(newOptions, newEvents)));
    }
    // protected System.Void OnInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnInit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnInit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void SetState(Meta.Voice.VoiceRequestState newState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetState(::Meta::Voice::VoiceRequestState newState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::SetState");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newState);
    }
    // protected System.Void SetDownloadProgress(System.Single newProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetDownloadProgress(float newProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::SetDownloadProgress");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetDownloadProgress", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newProgress)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newProgress);
    }
    // protected System.Void SetUploadProgress(System.Single newProgress)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetUploadProgress(float newProgress) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::SetUploadProgress");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetUploadProgress", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newProgress)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newProgress);
    }
    // protected System.Void RaiseEvent(TUnityEvent requestEvent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RaiseEvent(TUnityEvent requestEvent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::RaiseEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, requestEvent);
    }
    // protected System.Void Log(System.String log, System.Boolean warning)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Log(::StringW log, bool warning) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::Log");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Log", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(log), ::il2cpp_utils::ExtractType(warning)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, log, warning);
    }
    // protected System.Void LogW(System.String log)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void LogW(::StringW log) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::LogW");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LogW", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(log)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, log);
    }
    // protected System.Void AppendLogData(System.Text.StringBuilder log, System.Boolean warning)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AppendLogData(::System::Text::StringBuilder* log, bool warning) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::AppendLogData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, log, warning);
    }
    // protected System.String GetSendError()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetSendError() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::GetSendError");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void Send()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Send() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::Send");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnSend()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSend() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnSend");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void HandleSend()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleSend() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::HandleSend");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Boolean OnSimulateResponse()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool OnSimulateResponse() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnSimulateResponse");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected TResults GetResultsWithMessage(System.String newMessage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResults GetResultsWithMessage(::StringW newMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::GetResultsWithMessage");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TResults, false>(this, ___internal__method, newMessage);
    }
    // protected System.Void HandleFailure(System.String error)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleFailure(::StringW error) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::HandleFailure");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, error);
    }
    // protected System.Void HandleFailure(TResults results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleFailure(TResults results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::HandleFailure");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, results);
    }
    // protected System.Void OnFailed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnFailed() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnFailed");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void HandleSuccess(TResults results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleSuccess(TResults results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::HandleSuccess");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, results);
    }
    // protected System.Void OnSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSuccess() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnSuccess");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Cancel(System.String reason)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Cancel(::StringW reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::Cancel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, reason);
    }
    // protected System.Void HandleCancel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleCancel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::HandleCancel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnCancel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnCancel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnCancel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnComplete()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnComplete() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::VoiceRequest_4::OnComplete");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Meta::Voice::VoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Meta.Voice.VoiceRequest`4
  // Could not write size check! Type: Meta.Voice.VoiceRequest`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
