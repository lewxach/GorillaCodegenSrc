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
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CatalogItemBundleInfo
  class CatalogItemBundleInfo;
  // Forward declaring type: CatalogItemConsumableInfo
  class CatalogItemConsumableInfo;
  // Forward declaring type: CatalogItemContainerInfo
  class CatalogItemContainerInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CatalogItem
  class CatalogItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::CatalogItem);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::CatalogItem*, "PlayFab.ClientModels", "CatalogItem");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.CatalogItem
  // [TokenAttribute] Offset: FFFFFFFF
  class CatalogItem : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.ClientModels.CatalogItemBundleInfo Bundle
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::ClientModels::CatalogItemBundleInfo* Bundle;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::CatalogItemBundleInfo*) == 0x8);
    // public System.Boolean CanBecomeCharacter
    // Size: 0x1
    // Offset: 0x18
    bool CanBecomeCharacter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CanBecomeCharacter and: CatalogVersion
    char __padding1[0x7] = {};
    // public System.String CatalogVersion
    // Size: 0x8
    // Offset: 0x20
    ::StringW CatalogVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ClientModels.CatalogItemConsumableInfo Consumable
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::ClientModels::CatalogItemConsumableInfo* Consumable;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::CatalogItemConsumableInfo*) == 0x8);
    // public PlayFab.ClientModels.CatalogItemContainerInfo Container
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::ClientModels::CatalogItemContainerInfo* Container;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::CatalogItemContainerInfo*) == 0x8);
    // public System.String CustomData
    // Size: 0x8
    // Offset: 0x38
    ::StringW CustomData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Description
    // Size: 0x8
    // Offset: 0x40
    ::StringW Description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x48
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 InitialLimitedEditionCount
    // Size: 0x4
    // Offset: 0x50
    int InitialLimitedEditionCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsLimitedEdition
    // Size: 0x1
    // Offset: 0x54
    bool IsLimitedEdition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsStackable
    // Size: 0x1
    // Offset: 0x55
    bool IsStackable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsTradable
    // Size: 0x1
    // Offset: 0x56
    bool IsTradable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsTradable and: ItemClass
    char __padding11[0x1] = {};
    // public System.String ItemClass
    // Size: 0x8
    // Offset: 0x58
    ::StringW ItemClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ItemId
    // Size: 0x8
    // Offset: 0x60
    ::StringW ItemId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ItemImageUrl
    // Size: 0x8
    // Offset: 0x68
    ::StringW ItemImageUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> RealCurrencyPrices
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::Dictionary_2<::StringW, uint>* RealCurrencyPrices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, uint>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> Tags
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::StringW>* Tags;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> VirtualCurrencyPrices
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::Dictionary_2<::StringW, uint>* VirtualCurrencyPrices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, uint>*) == 0x8);
    public:
    // Get instance field reference: public PlayFab.ClientModels.CatalogItemBundleInfo Bundle
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::CatalogItemBundleInfo*& dyn_Bundle();
    // Get instance field reference: public System.Boolean CanBecomeCharacter
    [[deprecated("Use field access instead!")]] bool& dyn_CanBecomeCharacter();
    // Get instance field reference: public System.String CatalogVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CatalogVersion();
    // Get instance field reference: public PlayFab.ClientModels.CatalogItemConsumableInfo Consumable
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::CatalogItemConsumableInfo*& dyn_Consumable();
    // Get instance field reference: public PlayFab.ClientModels.CatalogItemContainerInfo Container
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::CatalogItemContainerInfo*& dyn_Container();
    // Get instance field reference: public System.String CustomData
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CustomData();
    // Get instance field reference: public System.String Description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Description();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.Int32 InitialLimitedEditionCount
    [[deprecated("Use field access instead!")]] int& dyn_InitialLimitedEditionCount();
    // Get instance field reference: public System.Boolean IsLimitedEdition
    [[deprecated("Use field access instead!")]] bool& dyn_IsLimitedEdition();
    // Get instance field reference: public System.Boolean IsStackable
    [[deprecated("Use field access instead!")]] bool& dyn_IsStackable();
    // Get instance field reference: public System.Boolean IsTradable
    [[deprecated("Use field access instead!")]] bool& dyn_IsTradable();
    // Get instance field reference: public System.String ItemClass
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ItemClass();
    // Get instance field reference: public System.String ItemId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ItemId();
    // Get instance field reference: public System.String ItemImageUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ItemImageUrl();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> RealCurrencyPrices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, uint>*& dyn_RealCurrencyPrices();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> Tags
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_Tags();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> VirtualCurrencyPrices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, uint>*& dyn_VirtualCurrencyPrices();
    // public System.Void .ctor()
    // Offset: 0x4B6E434
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CatalogItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::CatalogItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CatalogItem*, creationType>()));
    }
  }; // PlayFab.ClientModels.CatalogItem
  #pragma pack(pop)
  static check_size<sizeof(CatalogItem), 128 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, uint>*)> __PlayFab_ClientModels_CatalogItemSizeCheck;
  static_assert(sizeof(CatalogItem) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::CatalogItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!