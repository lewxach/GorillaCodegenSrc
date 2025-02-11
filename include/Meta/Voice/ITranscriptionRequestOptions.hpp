// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.IVoiceRequestOptions
#include "Meta/Voice/IVoiceRequestOptions.hpp"
// Completed includes
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: ITranscriptionRequestOptions
  class ITranscriptionRequestOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::ITranscriptionRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::ITranscriptionRequestOptions*, "Meta.Voice", "ITranscriptionRequestOptions");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.ITranscriptionRequestOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class ITranscriptionRequestOptions/*, public ::Meta::Voice::IVoiceRequestOptions*/ {
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::IVoiceRequestOptions
    operator ::Meta::Voice::IVoiceRequestOptions() noexcept {
      return *reinterpret_cast<::Meta::Voice::IVoiceRequestOptions*>(this);
    }
    // public System.Single get_AudioThreshold()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_AudioThreshold();
  }; // Meta.Voice.ITranscriptionRequestOptions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::ITranscriptionRequestOptions::get_AudioThreshold
// Il2CppName: get_AudioThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Meta::Voice::ITranscriptionRequestOptions::*)()>(&Meta::Voice::ITranscriptionRequestOptions::get_AudioThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::ITranscriptionRequestOptions*), "get_AudioThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
