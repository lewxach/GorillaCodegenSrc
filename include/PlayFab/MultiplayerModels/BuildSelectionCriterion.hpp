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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildSelectionCriterion
  class BuildSelectionCriterion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::BuildSelectionCriterion);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::BuildSelectionCriterion*, "PlayFab.MultiplayerModels", "BuildSelectionCriterion");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.BuildSelectionCriterion
  // [TokenAttribute] Offset: FFFFFFFF
  class BuildSelectionCriterion : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> BuildWeightDistribution
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, uint>* BuildWeightDistribution;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, uint>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, uint>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, uint>*() const noexcept {
      return BuildWeightDistribution;
    }
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.UInt32> BuildWeightDistribution
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, uint>*& dyn_BuildWeightDistribution();
    // public System.Void .ctor()
    // Offset: 0x4B60CF4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildSelectionCriterion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::BuildSelectionCriterion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildSelectionCriterion*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.BuildSelectionCriterion
  #pragma pack(pop)
  static check_size<sizeof(BuildSelectionCriterion), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, uint>*)> __PlayFab_MultiplayerModels_BuildSelectionCriterionSizeCheck;
  static_assert(sizeof(BuildSelectionCriterion) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::BuildSelectionCriterion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!