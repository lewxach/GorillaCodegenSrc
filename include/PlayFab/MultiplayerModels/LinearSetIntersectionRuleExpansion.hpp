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
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: LinearSetIntersectionRuleExpansion
  class LinearSetIntersectionRuleExpansion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*, "PlayFab.MultiplayerModels", "LinearSetIntersectionRuleExpansion");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.LinearSetIntersectionRuleExpansion
  // [TokenAttribute] Offset: FFFFFFFF
  class LinearSetIntersectionRuleExpansion : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.UInt32 Delta
    // Size: 0x4
    // Offset: 0x10
    uint Delta;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 SecondsBetweenExpansions
    // Size: 0x4
    // Offset: 0x14
    uint SecondsBetweenExpansions;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.UInt32 Delta
    [[deprecated("Use field access instead!")]] uint& dyn_Delta();
    // Get instance field reference: public System.UInt32 SecondsBetweenExpansions
    [[deprecated("Use field access instead!")]] uint& dyn_SecondsBetweenExpansions();
    // public System.Void .ctor()
    // Offset: 0x4B60F84
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearSetIntersectionRuleExpansion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearSetIntersectionRuleExpansion*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.LinearSetIntersectionRuleExpansion
  #pragma pack(pop)
  static check_size<sizeof(LinearSetIntersectionRuleExpansion), 20 + sizeof(uint)> __PlayFab_MultiplayerModels_LinearSetIntersectionRuleExpansionSizeCheck;
  static_assert(sizeof(LinearSetIntersectionRuleExpansion) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
