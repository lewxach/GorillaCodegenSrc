// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.IVoiceRequest`4
#include "Meta/Voice/IVoiceRequest_4.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: Meta::Voice
namespace Meta::Voice {
  // Forward declaring type: INLPTextRequestOptions
  class INLPTextRequestOptions;
  // Forward declaring type: INLPTextRequestEvents`1<TUnityEvent>
  template<typename TUnityEvent>
  class INLPTextRequestEvents_1;
  // Forward declaring type: INLPTextRequestResults
  class INLPTextRequestResults;
}
// Completed forward declares
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: INLPTextRequest`4<TUnityEvent, TOptions, TEvents, TResults>
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class INLPTextRequest_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::Voice::INLPTextRequest_4, "Meta.Voice", "INLPTextRequest`4");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.Voice.INLPTextRequest`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TUnityEvent, typename TOptions, typename TEvents, typename TResults>
  class INLPTextRequest_4/*, public ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*/ {
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>
    operator ::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>() noexcept {
      return *reinterpret_cast<::Meta::Voice::IVoiceRequest_4<TUnityEvent, TOptions, TEvents, TResults>*>(this);
    }
  }; // Meta.Voice.INLPTextRequest`4
  // Could not write size check! Type: Meta.Voice.INLPTextRequest`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"