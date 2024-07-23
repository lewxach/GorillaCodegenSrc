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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ItemInstance
  class ItemInstance;
  // Forward declaring type: VirtualCurrencyRechargeTime
  class VirtualCurrencyRechargeTime;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetCharacterInventoryResult
  class GetCharacterInventoryResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetCharacterInventoryResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetCharacterInventoryResult*, "PlayFab.ClientModels", "GetCharacterInventoryResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetCharacterInventoryResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetCharacterInventoryResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x20
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> Inventory
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* Inventory;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualCurrency
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* VirtualCurrency;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* VirtualCurrencyRechargeTimes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*) == 0x8);
    public:
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> Inventory
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& dyn_Inventory();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualCurrency
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn_VirtualCurrency();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> VirtualCurrencyRechargeTimes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& dyn_VirtualCurrencyRechargeTimes();
    // public System.Void .ctor()
    // Offset: 0x4B6E5A4
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetCharacterInventoryResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetCharacterInventoryResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetCharacterInventoryResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetCharacterInventoryResult
  #pragma pack(pop)
  static check_size<sizeof(GetCharacterInventoryResult), 56 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*)> __PlayFab_ClientModels_GetCharacterInventoryResultSizeCheck;
  static_assert(sizeof(GetCharacterInventoryResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetCharacterInventoryResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!