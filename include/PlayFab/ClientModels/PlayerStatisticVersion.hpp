// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: PlayerStatisticVersion
  class PlayerStatisticVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::PlayerStatisticVersion);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::PlayerStatisticVersion*, "PlayFab.ClientModels", "PlayerStatisticVersion");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.PlayerStatisticVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerStatisticVersion : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.DateTime ActivationTime
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime ActivationTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.Nullable`1<System.DateTime> DeactivationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::System::DateTime> DeactivationTime;
    // public System.Nullable`1<System.DateTime> ScheduledActivationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::System::DateTime> ScheduledActivationTime;
    // public System.Nullable`1<System.DateTime> ScheduledDeactivationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<::System::DateTime> ScheduledDeactivationTime;
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x48
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt32 Version
    // Size: 0x4
    // Offset: 0x50
    uint Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.DateTime ActivationTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_ActivationTime();
    // Get instance field reference: public System.Nullable`1<System.DateTime> DeactivationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_DeactivationTime();
    // Get instance field reference: public System.Nullable`1<System.DateTime> ScheduledActivationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_ScheduledActivationTime();
    // Get instance field reference: public System.Nullable`1<System.DateTime> ScheduledDeactivationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_ScheduledDeactivationTime();
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // Get instance field reference: public System.UInt32 Version
    [[deprecated("Use field access instead!")]] uint& dyn_Version();
    // public System.Void .ctor()
    // Offset: 0x4B6EABC
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerStatisticVersion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::PlayerStatisticVersion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerStatisticVersion*, creationType>()));
    }
  }; // PlayFab.ClientModels.PlayerStatisticVersion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::PlayerStatisticVersion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
