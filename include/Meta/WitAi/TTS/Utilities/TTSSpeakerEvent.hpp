// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeaker
  class TTSSpeaker;
}
// Completed forward declares
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeakerEvent
  class TTSSpeakerEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerEvent");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSSpeakerEvent : public ::UnityEngine::Events::UnityEvent_2<::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x445BCEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeakerEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeakerEvent*, creationType>()));
    }
  }; // Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeakerEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!