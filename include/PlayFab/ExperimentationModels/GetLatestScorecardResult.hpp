// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: Scorecard
  class Scorecard;
}
// Completed forward declares
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: GetLatestScorecardResult
  class GetLatestScorecardResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ExperimentationModels::GetLatestScorecardResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ExperimentationModels::GetLatestScorecardResult*, "PlayFab.ExperimentationModels", "GetLatestScorecardResult");
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ExperimentationModels.GetLatestScorecardResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetLatestScorecardResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.ExperimentationModels.Scorecard Scorecard
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::ExperimentationModels::Scorecard* Scorecard;
    // Field size check
    static_assert(sizeof(::PlayFab::ExperimentationModels::Scorecard*) == 0x8);
    public:
    // Creating conversion operator: operator ::PlayFab::ExperimentationModels::Scorecard*
    constexpr operator ::PlayFab::ExperimentationModels::Scorecard*() const noexcept {
      return Scorecard;
    }
    // Get instance field reference: public PlayFab.ExperimentationModels.Scorecard Scorecard
    [[deprecated("Use field access instead!")]] ::PlayFab::ExperimentationModels::Scorecard*& dyn_Scorecard();
    // public System.Void .ctor()
    // Offset: 0x4B613E4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetLatestScorecardResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ExperimentationModels::GetLatestScorecardResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetLatestScorecardResult*, creationType>()));
    }
  }; // PlayFab.ExperimentationModels.GetLatestScorecardResult
  #pragma pack(pop)
  static check_size<sizeof(GetLatestScorecardResult), 32 + sizeof(::PlayFab::ExperimentationModels::Scorecard*)> __PlayFab_ExperimentationModels_GetLatestScorecardResultSizeCheck;
  static_assert(sizeof(GetLatestScorecardResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ExperimentationModels::GetLatestScorecardResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
