// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CurrentServerStats
  class CurrentServerStats;
  // Forward declaring type: DynamicStandbySettings
  class DynamicStandbySettings;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildRegion
  class BuildRegion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::BuildRegion);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::BuildRegion*, "PlayFab.MultiplayerModels", "BuildRegion");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.BuildRegion
  // [TokenAttribute] Offset: FFFFFFFF
  class BuildRegion : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.MultiplayerModels.CurrentServerStats CurrentServerStats
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::MultiplayerModels::CurrentServerStats* CurrentServerStats;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::CurrentServerStats*) == 0x8);
    // public PlayFab.MultiplayerModels.DynamicStandbySettings DynamicStandbySettings
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::DynamicStandbySettings* DynamicStandbySettings;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::DynamicStandbySettings*) == 0x8);
    // public System.Int32 MaxServers
    // Size: 0x4
    // Offset: 0x20
    int MaxServers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: MaxServers and: Region
    char __padding2[0x4] = {};
    // public System.String Region
    // Size: 0x8
    // Offset: 0x28
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 StandbyServers
    // Size: 0x4
    // Offset: 0x30
    int StandbyServers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: StandbyServers and: Status
    char __padding4[0x4] = {};
    // public System.String Status
    // Size: 0x8
    // Offset: 0x38
    ::StringW Status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public PlayFab.MultiplayerModels.CurrentServerStats CurrentServerStats
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::CurrentServerStats*& dyn_CurrentServerStats();
    // Get instance field reference: public PlayFab.MultiplayerModels.DynamicStandbySettings DynamicStandbySettings
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::DynamicStandbySettings*& dyn_DynamicStandbySettings();
    // Get instance field reference: public System.Int32 MaxServers
    [[deprecated("Use field access instead!")]] int& dyn_MaxServers();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // Get instance field reference: public System.Int32 StandbyServers
    [[deprecated("Use field access instead!")]] int& dyn_StandbyServers();
    // Get instance field reference: public System.String Status
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Status();
    // public System.Void .ctor()
    // Offset: 0x4B60CE4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildRegion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::BuildRegion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildRegion*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.BuildRegion
  #pragma pack(pop)
  static check_size<sizeof(BuildRegion), 56 + sizeof(::StringW)> __PlayFab_MultiplayerModels_BuildRegionSizeCheck;
  static_assert(sizeof(BuildRegion) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::BuildRegion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
