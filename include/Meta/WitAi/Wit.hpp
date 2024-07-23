// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.VoiceService
#include "Meta/WitAi/VoiceService.hpp"
// Including type: Meta.WitAi.IWitRuntimeConfigProvider
#include "Meta/WitAi/IWitRuntimeConfigProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitRuntimeConfiguration
  class WitRuntimeConfiguration;
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: WitService
  class WitService;
}
// Forward declaring namespace: Meta::WitAi::Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionProvider
  class ITranscriptionProvider;
}
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: Wit
  class Wit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Wit);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Wit*, "Meta.WitAi", "Wit");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Wit
  // [TokenAttribute] Offset: FFFFFFFF
  class Wit : public ::Meta::WitAi::VoiceService/*, public ::Meta::WitAi::IWitRuntimeConfigProvider*/ {
    public:
    public:
    // private Meta.WitAi.Configuration.WitRuntimeConfiguration witRuntimeConfiguration
    // Size: 0x8
    // Offset: 0x50
    ::Meta::WitAi::Configuration::WitRuntimeConfiguration* witRuntimeConfiguration;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Configuration::WitRuntimeConfiguration*) == 0x8);
    // private Meta.WitAi.WitService witService
    // Size: 0x8
    // Offset: 0x58
    ::Meta::WitAi::WitService* witService;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::WitService*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::IWitRuntimeConfigProvider
    operator ::Meta::WitAi::IWitRuntimeConfigProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(this);
    }
    // Get instance field reference: private Meta.WitAi.Configuration.WitRuntimeConfiguration witRuntimeConfiguration
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& dyn_witRuntimeConfiguration();
    // Get instance field reference: private Meta.WitAi.WitService witService
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::WitService*& dyn_witService();
    // public Meta.WitAi.Configuration.WitRuntimeConfiguration get_RuntimeConfiguration()
    // Offset: 0x4428F20
    ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration();
    // public System.Void set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration value)
    // Offset: 0x4428F28
    void set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration* value);
    // public override System.Boolean get_Active()
    // Offset: 0x4428F30
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_Active()
    bool get_Active();
    // public override System.Boolean get_IsRequestActive()
    // Offset: 0x442900C
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_IsRequestActive()
    bool get_IsRequestActive();
    // public override Meta.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0x4429104
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: Meta.WitAi.Interfaces.ITranscriptionProvider VoiceService::get_TranscriptionProvider()
    ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public override System.Void set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0x4429120
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Void VoiceService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider value)
    void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider* value);
    // public override System.Boolean get_MicActive()
    // Offset: 0x4429904
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_MicActive()
    bool get_MicActive();
    // protected override System.Boolean get_ShouldSendMicData()
    // Offset: 0x44299B0
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_ShouldSendMicData()
    bool get_ShouldSendMicData();
    // protected override System.String GetSendError()
    // Offset: 0x44299F0
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.String VoiceService::GetSendError()
    ::StringW GetSendError();
    // protected override System.String GetActivateAudioError()
    // Offset: 0x4429C28
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.String VoiceService::GetActivateAudioError()
    ::StringW GetActivateAudioError();
    // public override Meta.WitAi.Requests.VoiceServiceRequest Activate(System.String text, Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    // Offset: 0x4429C9C
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: Meta.WitAi.Requests.VoiceServiceRequest VoiceService::Activate(System.String text, Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::StringW text, ::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents);
    // public override Meta.WitAi.Requests.VoiceServiceRequest Activate(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    // Offset: 0x442A098
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: Meta.WitAi.Requests.VoiceServiceRequest VoiceService::Activate(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents);
    // public override Meta.WitAi.Requests.VoiceServiceRequest ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    // Offset: 0x442A468
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: Meta.WitAi.Requests.VoiceServiceRequest VoiceService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents);
    // public override System.Void Deactivate()
    // Offset: 0x442A5C8
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Void VoiceService::Deactivate()
    void Deactivate();
    // public override System.Void DeactivateAndAbortRequest()
    // Offset: 0x442A638
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Void VoiceService::DeactivateAndAbortRequest()
    void DeactivateAndAbortRequest();
    // protected override System.Void Awake()
    // Offset: 0x442A6A8
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Void VoiceService::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x442A758
    // Implemented from: Meta.WitAi.VoiceService
    // Base method: System.Void VoiceService::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Wit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Wit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Wit*, creationType>()));
    }
  }; // Meta.WitAi.Wit
  #pragma pack(pop)
  static check_size<sizeof(Wit), 88 + sizeof(::Meta::WitAi::WitService*)> __Meta_WitAi_WitSizeCheck;
  static_assert(sizeof(Wit) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_RuntimeConfiguration
// Il2CppName: get_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::set_RuntimeConfiguration
// Il2CppName: set_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&Meta::WitAi::Wit::set_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRuntimeConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "set_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Wit::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&Meta::WitAi::Wit::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::get_ShouldSendMicData
// Il2CppName: get_ShouldSendMicData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::get_ShouldSendMicData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "get_ShouldSendMicData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::GetSendError
// Il2CppName: GetSendError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::GetSendError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "GetSendError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::GetActivateAudioError
// Il2CppName: GetActivateAudioError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::GetActivateAudioError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "GetActivateAudioError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Meta::WitAi::Wit::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&Meta::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, requestOptions, requestEvents});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&Meta::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions, requestEvents});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&Meta::WitAi::Wit::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions, requestEvents});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::DeactivateAndAbortRequest
// Il2CppName: DeactivateAndAbortRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::DeactivateAndAbortRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "DeactivateAndAbortRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Wit::*)()>(&Meta::WitAi::Wit::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Wit*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Wit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!