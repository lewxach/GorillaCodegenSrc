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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: VirtualCurrencyRechargeTime
  class VirtualCurrencyRechargeTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::VirtualCurrencyRechargeTime);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::VirtualCurrencyRechargeTime*, "PlayFab.ClientModels", "VirtualCurrencyRechargeTime");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.VirtualCurrencyRechargeTime
  // [TokenAttribute] Offset: FFFFFFFF
  class VirtualCurrencyRechargeTime : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Int32 RechargeMax
    // Size: 0x4
    // Offset: 0x10
    int RechargeMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: RechargeMax and: RechargeTime
    char __padding0[0x4] = {};
    // public System.DateTime RechargeTime
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime RechargeTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.Int32 SecondsToRecharge
    // Size: 0x4
    // Offset: 0x20
    int SecondsToRecharge;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 RechargeMax
    [[deprecated("Use field access instead!")]] int& dyn_RechargeMax();
    // Get instance field reference: public System.DateTime RechargeTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_RechargeTime();
    // Get instance field reference: public System.Int32 SecondsToRecharge
    [[deprecated("Use field access instead!")]] int& dyn_SecondsToRecharge();
    // public System.Void .ctor()
    // Offset: 0x4B6EEFC
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtualCurrencyRechargeTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::VirtualCurrencyRechargeTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtualCurrencyRechargeTime*, creationType>()));
    }
  }; // PlayFab.ClientModels.VirtualCurrencyRechargeTime
  #pragma pack(pop)
  static check_size<sizeof(VirtualCurrencyRechargeTime), 32 + sizeof(int)> __PlayFab_ClientModels_VirtualCurrencyRechargeTimeSizeCheck;
  static_assert(sizeof(VirtualCurrencyRechargeTime) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::VirtualCurrencyRechargeTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!