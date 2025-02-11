// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ExperimentationModels.AnalysisTaskState
#include "PlayFab/ExperimentationModels/AnalysisTaskState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: ScorecardDataRow
  class ScorecardDataRow;
}
// Completed forward declares
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: Scorecard
  class Scorecard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ExperimentationModels::Scorecard);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ExperimentationModels::Scorecard*, "PlayFab.ExperimentationModels", "Scorecard");
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ExperimentationModels.Scorecard
  // [TokenAttribute] Offset: FFFFFFFF
  class Scorecard : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String DateGenerated
    // Size: 0x8
    // Offset: 0x10
    ::StringW DateGenerated;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Duration
    // Size: 0x8
    // Offset: 0x18
    ::StringW Duration;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Double EventsProcessed
    // Size: 0x8
    // Offset: 0x20
    double EventsProcessed;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.String ExperimentId
    // Size: 0x8
    // Offset: 0x28
    ::StringW ExperimentId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ExperimentName
    // Size: 0x8
    // Offset: 0x30
    ::StringW ExperimentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ExperimentationModels.AnalysisTaskState> LatestJobStatus
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState> LatestJobStatus;
    // public System.Boolean SampleRatioMismatch
    // Size: 0x1
    // Offset: 0x40
    bool SampleRatioMismatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Collections.Generic.List`1<PlayFab.ExperimentationModels.ScorecardDataRow> ScorecardDataRows
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>* ScorecardDataRows;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*) == 0x8);
    public:
    // Get instance field reference: public System.String DateGenerated
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DateGenerated();
    // Get instance field reference: public System.String Duration
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Duration();
    // Get instance field reference: public System.Double EventsProcessed
    [[deprecated("Use field access instead!")]] double& dyn_EventsProcessed();
    // Get instance field reference: public System.String ExperimentId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ExperimentId();
    // Get instance field reference: public System.String ExperimentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ExperimentName();
    // Get instance field reference: public System.Nullable`1<PlayFab.ExperimentationModels.AnalysisTaskState> LatestJobStatus
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>& dyn_LatestJobStatus();
    // Get instance field reference: public System.Boolean SampleRatioMismatch
    [[deprecated("Use field access instead!")]] bool& dyn_SampleRatioMismatch();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ExperimentationModels.ScorecardDataRow> ScorecardDataRows
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*& dyn_ScorecardDataRows();
    // public System.Void .ctor()
    // Offset: 0x4B61404
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scorecard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ExperimentationModels::Scorecard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scorecard*, creationType>()));
    }
  }; // PlayFab.ExperimentationModels.Scorecard
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ExperimentationModels::Scorecard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
