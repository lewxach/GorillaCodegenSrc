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
  // Forward declaring type: CartItem
  class CartItem;
  // Forward declaring type: PaymentOption
  class PaymentOption;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: StartPurchaseResult
  class StartPurchaseResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::StartPurchaseResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::StartPurchaseResult*, "PlayFab.ClientModels", "StartPurchaseResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.StartPurchaseResult
  // [TokenAttribute] Offset: FFFFFFFF
  class StartPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem> Contents
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>* Contents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*) == 0x8);
    // public System.String OrderId
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrderId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption> PaymentOptions
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>* PaymentOptions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualCurrencyBalances
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::StringW, int>* VirtualCurrencyBalances;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem> Contents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*& dyn_Contents();
    // Get instance field reference: public System.String OrderId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrderId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption> PaymentOptions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*& dyn_PaymentOptions();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualCurrencyBalances
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, int>*& dyn_VirtualCurrencyBalances();
    // public System.Void .ctor()
    // Offset: 0x4B6EC0C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartPurchaseResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::StartPurchaseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartPurchaseResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.StartPurchaseResult
  #pragma pack(pop)
  static check_size<sizeof(StartPurchaseResult), 56 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, int>*)> __PlayFab_ClientModels_StartPurchaseResultSizeCheck;
  static_assert(sizeof(StartPurchaseResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::StartPurchaseResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
