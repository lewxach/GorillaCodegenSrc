// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: TranscriptionRequestEvent
  class TranscriptionRequestEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::TranscriptionRequestEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::TranscriptionRequestEvent*, "Meta.Voice", "TranscriptionRequestEvent");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.Voice.TranscriptionRequestEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TranscriptionRequestEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x443D1B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TranscriptionRequestEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::TranscriptionRequestEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TranscriptionRequestEvent*, creationType>()));
    }
  }; // Meta.Voice.TranscriptionRequestEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::TranscriptionRequestEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
