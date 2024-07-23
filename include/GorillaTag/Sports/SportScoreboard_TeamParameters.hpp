// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.Sports.SportScoreboard
#include "GorillaTag/Sports/SportScoreboard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Sports::SportScoreboard::TeamParameters);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Sports::SportScoreboard::TeamParameters*, "GorillaTag.Sports", "SportScoreboard/TeamParameters");
// Type namespace: GorillaTag.Sports
namespace GorillaTag::Sports {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Sports.SportScoreboard/TeamParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class SportScoreboard::TeamParameters : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AudioClip matchWonAudio
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioClip* matchWonAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public UnityEngine.AudioClip goalScoredAudio
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip* goalScoredAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AudioClip matchWonAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_matchWonAudio();
    // Get instance field reference: public UnityEngine.AudioClip goalScoredAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_goalScoredAudio();
    // public System.Void .ctor()
    // Offset: 0x28A1678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SportScoreboard::TeamParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Sports::SportScoreboard::TeamParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SportScoreboard::TeamParameters*, creationType>()));
    }
  }; // GorillaTag.Sports.SportScoreboard/TeamParameters
  #pragma pack(pop)
  static check_size<sizeof(SportScoreboard::TeamParameters), 24 + sizeof(::UnityEngine::AudioClip*)> __GorillaTag_Sports_SportScoreboard_TeamParametersSizeCheck;
  static_assert(sizeof(SportScoreboard::TeamParameters) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Sports::SportScoreboard::TeamParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!