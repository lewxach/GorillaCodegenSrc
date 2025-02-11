// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
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
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ItemInstance
  class ItemInstance;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ConfirmPurchaseResult
  class ConfirmPurchaseResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ConfirmPurchaseResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ConfirmPurchaseResult*, "PlayFab.ClientModels", "ConfirmPurchaseResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.ConfirmPurchaseResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfirmPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> Items
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* Items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*) == 0x8);
    // public System.String OrderId
    // Size: 0x8
    // Offset: 0x28
    ::StringW OrderId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime PurchaseDate
    // Size: 0x8
    // Offset: 0x30
    ::System::DateTime PurchaseDate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> Items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& dyn_Items();
    // Get instance field reference: public System.String OrderId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrderId();
    // Get instance field reference: public System.DateTime PurchaseDate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_PurchaseDate();
    // public System.Void .ctor()
    // Offset: 0x4B6E47C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfirmPurchaseResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ConfirmPurchaseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfirmPurchaseResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.ConfirmPurchaseResult
  #pragma pack(pop)
  static check_size<sizeof(ConfirmPurchaseResult), 48 + sizeof(::System::DateTime)> __PlayFab_ClientModels_ConfirmPurchaseResultSizeCheck;
  static_assert(sizeof(ConfirmPurchaseResult) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ConfirmPurchaseResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
