// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.NLPRequestEvents`1
#include "Meta/Voice/NLPRequestEvents_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequestEvent
  class VoiceServiceRequestEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: VoiceServiceRequestEvents
  class VoiceServiceRequestEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::VoiceServiceRequestEvents);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::VoiceServiceRequestEvents*, "Meta.WitAi.Requests", "VoiceServiceRequestEvents");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Requests.VoiceServiceRequestEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceServiceRequestEvents : public ::Meta::Voice::NLPRequestEvents_1<::Meta::WitAi::Requests::VoiceServiceRequestEvent*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4426CA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceServiceRequestEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VoiceServiceRequestEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceServiceRequestEvents*, creationType>()));
    }
  }; // Meta.WitAi.Requests.VoiceServiceRequestEvents
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::VoiceServiceRequestEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
