// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Dictation.DictationService
#include "Meta/WitAi/Dictation/DictationService.hpp"
// Including type: Meta.WitAi.IWitRuntimeConfigProvider
#include "Meta/WitAi/IWitRuntimeConfigProvider.hpp"
// Including type: Meta.WitAi.IVoiceEventProvider
#include "Meta/WitAi/IVoiceEventProvider.hpp"
// Including type: Meta.WitAi.Interfaces.IWitRequestProvider
#include "Meta/WitAi/Interfaces/IWitRequestProvider.hpp"
// Including type: Meta.WitAi.Interfaces.IWitConfigurationProvider
#include "Meta/WitAi/Interfaces/IWitConfigurationProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: WitRequest
  class WitRequest;
}
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
}
// Forward declaring namespace: Meta::WitAi::Data::Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfiguration
  class WitConfiguration;
}
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
  // Forward declaring type: VoiceServiceRequest
  class VoiceServiceRequest;
}
// Forward declaring namespace: Meta::WitAi::Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: IDynamicEntitiesProvider
  class IDynamicEntitiesProvider;
  // Forward declaring type: ITranscriptionProvider
  class ITranscriptionProvider;
}
// Forward declaring namespace: Meta::WitAi::Dictation::Events
namespace Meta::WitAi::Dictation::Events {
  // Forward declaring type: DictationEvents
  class DictationEvents;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Dictation
namespace Meta::WitAi::Dictation {
  // Forward declaring type: WitDictation
  class WitDictation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Dictation::WitDictation);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Dictation::WitDictation*, "Meta.WitAi.Dictation", "WitDictation");
// Type namespace: Meta.WitAi.Dictation
namespace Meta::WitAi::Dictation {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Dictation.WitDictation
  // [TokenAttribute] Offset: FFFFFFFF
  class WitDictation : public ::Meta::WitAi::Dictation::DictationService/*, public ::Meta::WitAi::IWitRuntimeConfigProvider, public ::Meta::WitAi::IVoiceEventProvider, public ::Meta::WitAi::Interfaces::IWitRequestProvider, public ::Meta::WitAi::Interfaces::IWitConfigurationProvider*/ {
    public:
    public:
    // private Meta.WitAi.Configuration.WitRuntimeConfiguration witRuntimeConfiguration
    // Size: 0x8
    // Offset: 0x30
    ::Meta::WitAi::Configuration::WitRuntimeConfiguration* witRuntimeConfiguration;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Configuration::WitRuntimeConfiguration*) == 0x8);
    // private Meta.WitAi.WitService witService
    // Size: 0x8
    // Offset: 0x38
    ::Meta::WitAi::WitService* witService;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::WitService*) == 0x8);
    // private readonly Meta.WitAi.Events.VoiceEvents _voiceEvents
    // Size: 0x8
    // Offset: 0x40
    ::Meta::WitAi::Events::VoiceEvents* voiceEvents;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::VoiceEvents*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::IWitRuntimeConfigProvider
    operator ::Meta::WitAi::IWitRuntimeConfigProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(this);
    }
    // Creating interface conversion operator: operator ::Meta::WitAi::IVoiceEventProvider
    operator ::Meta::WitAi::IVoiceEventProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IVoiceEventProvider*>(this);
    }
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IWitRequestProvider
    operator ::Meta::WitAi::Interfaces::IWitRequestProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IWitRequestProvider*>(this);
    }
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IWitConfigurationProvider
    operator ::Meta::WitAi::Interfaces::IWitConfigurationProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(this);
    }
    // Get instance field reference: private Meta.WitAi.Configuration.WitRuntimeConfiguration witRuntimeConfiguration
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& dyn_witRuntimeConfiguration();
    // Get instance field reference: private Meta.WitAi.WitService witService
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::WitService*& dyn_witService();
    // Get instance field reference: private readonly Meta.WitAi.Events.VoiceEvents _voiceEvents
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::VoiceEvents*& dyn__voiceEvents();
    // public Meta.WitAi.Configuration.WitRuntimeConfiguration get_RuntimeConfiguration()
    // Offset: 0x2AD1ADC
    ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration();
    // public System.Void set_RuntimeConfiguration(Meta.WitAi.Configuration.WitRuntimeConfiguration value)
    // Offset: 0x2AD1AE4
    void set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration* value);
    // public Meta.WitAi.Data.Configuration.WitConfiguration get_Configuration()
    // Offset: 0x2AD1AEC
    ::Meta::WitAi::Data::Configuration::WitConfiguration* get_Configuration();
    // public Meta.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x2AD1D14
    ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public Meta.WitAi.WitRequest CreateWitRequest(Meta.WitAi.Data.Configuration.WitConfiguration config, Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents, Meta.WitAi.Interfaces.IDynamicEntitiesProvider[] additionalEntityProviders)
    // Offset: 0x2AD1DA0
    ::Meta::WitAi::WitRequest* CreateWitRequest(::Meta::WitAi::Data::Configuration::WitConfiguration* config, ::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*> additionalEntityProviders);
    // public System.Void TranscribeFile(System.String fileName)
    // Offset: 0x2AD1F50
    void TranscribeFile(::StringW fileName);
    // public override System.Boolean get_Active()
    // Offset: 0x2AD1B04
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Boolean DictationService::get_Active()
    bool get_Active();
    // public override System.Boolean get_IsRequestActive()
    // Offset: 0x2AD1B8C
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Boolean DictationService::get_IsRequestActive()
    bool get_IsRequestActive();
    // public override Meta.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0x2AD1C14
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: Meta.WitAi.Interfaces.ITranscriptionProvider DictationService::get_TranscriptionProvider()
    ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public override System.Void set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0x2AD1C30
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::set_TranscriptionProvider(Meta.WitAi.Interfaces.ITranscriptionProvider value)
    void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider* value);
    // public override System.Boolean get_MicActive()
    // Offset: 0x2AD1C4C
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Boolean DictationService::get_MicActive()
    bool get_MicActive();
    // protected override System.Boolean get_ShouldSendMicData()
    // Offset: 0x2AD1CD4
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Boolean DictationService::get_ShouldSendMicData()
    bool get_ShouldSendMicData();
    // public override Meta.WitAi.Dictation.Events.DictationEvents get_DictationEvents()
    // Offset: 0x2AD1D1C
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: Meta.WitAi.Dictation.Events.DictationEvents DictationService::get_DictationEvents()
    ::Meta::WitAi::Dictation::Events::DictationEvents* get_DictationEvents();
    // public override System.Void set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents value)
    // Offset: 0x2AD1D24
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::set_DictationEvents(Meta.WitAi.Dictation.Events.DictationEvents value)
    void set_DictationEvents(::Meta::WitAi::Dictation::Events::DictationEvents* value);
    // public override Meta.WitAi.Requests.VoiceServiceRequest Activate(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    // Offset: 0x2AD1DB4
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: Meta.WitAi.Requests.VoiceServiceRequest DictationService::Activate(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents);
    // public override Meta.WitAi.Requests.VoiceServiceRequest ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    // Offset: 0x2AD1DD0
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: Meta.WitAi.Requests.VoiceServiceRequest DictationService::ActivateImmediately(Meta.WitAi.Configuration.WitRequestOptions requestOptions, Meta.WitAi.Requests.VoiceServiceRequestEvents requestEvents)
    ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions* requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents* requestEvents);
    // public override System.Void Deactivate()
    // Offset: 0x2AD1DEC
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::Deactivate()
    void Deactivate();
    // public override System.Void Cancel()
    // Offset: 0x2AD1E08
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::Cancel()
    void Cancel();
    // protected override System.Void Awake()
    // Offset: 0x2AD1E24
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x2AD1EE8
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x2AD1F1C
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::OnDisable()
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x2AD2030
    // Implemented from: Meta.WitAi.Dictation.DictationService
    // Base method: System.Void DictationService::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDictation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Dictation::WitDictation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDictation*, creationType>()));
    }
  }; // Meta.WitAi.Dictation.WitDictation
  #pragma pack(pop)
  static check_size<sizeof(WitDictation), 64 + sizeof(::Meta::WitAi::Events::VoiceEvents*)> __Meta_WitAi_Dictation_WitDictationSizeCheck;
  static_assert(sizeof(WitDictation) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_RuntimeConfiguration
// Il2CppName: get_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::set_RuntimeConfiguration
// Il2CppName: set_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&Meta::WitAi::Dictation::WitDictation::set_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRuntimeConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "set_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Configuration::WitConfiguration* (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::VoiceEvents* (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::CreateWitRequest
// Il2CppName: CreateWitRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::WitRequest* (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>)>(&Meta::WitAi::Dictation::WitDictation::CreateWitRequest)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Configuration", "WitConfiguration")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    static auto* additionalEntityProviders = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Meta.WitAi.Interfaces", "IDynamicEntitiesProvider"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "CreateWitRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, requestOptions, requestEvents, additionalEntityProviders});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::TranscribeFile
// Il2CppName: TranscribeFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)(::StringW)>(&Meta::WitAi::Dictation::WitDictation::TranscribeFile)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "TranscribeFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&Meta::WitAi::Dictation::WitDictation::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_ShouldSendMicData
// Il2CppName: get_ShouldSendMicData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_ShouldSendMicData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_ShouldSendMicData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::get_DictationEvents
// Il2CppName: get_DictationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Dictation::Events::DictationEvents* (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::get_DictationEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "get_DictationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::set_DictationEvents
// Il2CppName: set_DictationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Dictation::Events::DictationEvents*)>(&Meta::WitAi::Dictation::WitDictation::set_DictationEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Dictation.Events", "DictationEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "set_DictationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&Meta::WitAi::Dictation::WitDictation::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions, requestEvents});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (Meta::WitAi::Dictation::WitDictation::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&Meta::WitAi::Dictation::WitDictation::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    static auto* requestEvents = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "VoiceServiceRequestEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions, requestEvents});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Dictation::WitDictation::*)()>(&Meta::WitAi::Dictation::WitDictation::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Dictation::WitDictation*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Dictation::WitDictation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
