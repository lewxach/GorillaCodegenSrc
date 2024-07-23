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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::InsightsModels
namespace PlayFab::InsightsModels {
  // Forward declaring type: InsightsGetLimitsResponse
  class InsightsGetLimitsResponse;
  // Forward declaring type: InsightsGetOperationStatusResponse
  class InsightsGetOperationStatusResponse;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Forward declaring type: InsightsGetDetailsResponse
  class InsightsGetDetailsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::InsightsModels::InsightsGetDetailsResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::InsightsModels::InsightsGetDetailsResponse*, "PlayFab.InsightsModels", "InsightsGetDetailsResponse");
// Type namespace: PlayFab.InsightsModels
namespace PlayFab::InsightsModels {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.InsightsModels.InsightsGetDetailsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class InsightsGetDetailsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.UInt32 DataUsageMb
    // Size: 0x4
    // Offset: 0x20
    uint DataUsageMb;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: DataUsageMb and: ErrorMessage
    char __padding0[0x4] = {};
    // public System.String ErrorMessage
    // Size: 0x8
    // Offset: 0x28
    ::StringW ErrorMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.InsightsModels.InsightsGetLimitsResponse Limits
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::InsightsModels::InsightsGetLimitsResponse* Limits;
    // Field size check
    static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetLimitsResponse*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.InsightsModels.InsightsGetOperationStatusResponse> PendingOperations
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>* PendingOperations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*) == 0x8);
    // public System.Int32 PerformanceLevel
    // Size: 0x4
    // Offset: 0x40
    int PerformanceLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 RetentionDays
    // Size: 0x4
    // Offset: 0x44
    int RetentionDays;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.UInt32 DataUsageMb
    [[deprecated("Use field access instead!")]] uint& dyn_DataUsageMb();
    // Get instance field reference: public System.String ErrorMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ErrorMessage();
    // Get instance field reference: public PlayFab.InsightsModels.InsightsGetLimitsResponse Limits
    [[deprecated("Use field access instead!")]] ::PlayFab::InsightsModels::InsightsGetLimitsResponse*& dyn_Limits();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.InsightsModels.InsightsGetOperationStatusResponse> PendingOperations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*& dyn_PendingOperations();
    // Get instance field reference: public System.Int32 PerformanceLevel
    [[deprecated("Use field access instead!")]] int& dyn_PerformanceLevel();
    // Get instance field reference: public System.Int32 RetentionDays
    [[deprecated("Use field access instead!")]] int& dyn_RetentionDays();
    // public System.Void .ctor()
    // Offset: 0x4B611CC
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InsightsGetDetailsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::InsightsModels::InsightsGetDetailsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InsightsGetDetailsResponse*, creationType>()));
    }
  }; // PlayFab.InsightsModels.InsightsGetDetailsResponse
  #pragma pack(pop)
  static check_size<sizeof(InsightsGetDetailsResponse), 68 + sizeof(int)> __PlayFab_InsightsModels_InsightsGetDetailsResponseSizeCheck;
  static_assert(sizeof(InsightsGetDetailsResponse) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::InsightsModels::InsightsGetDetailsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!