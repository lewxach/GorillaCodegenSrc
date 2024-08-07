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
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: EntityWithLineage
  class EntityWithLineage;
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: ApplyToGroupResponse
  class ApplyToGroupResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::ApplyToGroupResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::ApplyToGroupResponse*, "PlayFab.GroupsModels", "ApplyToGroupResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.ApplyToGroupResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplyToGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.GroupsModels.EntityWithLineage Entity
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::GroupsModels::EntityWithLineage* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityWithLineage*) == 0x8);
    // public System.DateTime Expires
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime Expires;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public PlayFab.GroupsModels.EntityKey Group
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::GroupsModels::EntityKey* Group;
    // Field size check
    static_assert(sizeof(::PlayFab::GroupsModels::EntityKey*) == 0x8);
    public:
    // Get instance field reference: public PlayFab.GroupsModels.EntityWithLineage Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityWithLineage*& dyn_Entity();
    // Get instance field reference: public System.DateTime Expires
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Expires();
    // Get instance field reference: public PlayFab.GroupsModels.EntityKey Group
    [[deprecated("Use field access instead!")]] ::PlayFab::GroupsModels::EntityKey*& dyn_Group();
    // public System.Void .ctor()
    // Offset: 0x4B6123C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplyToGroupResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::ApplyToGroupResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplyToGroupResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.ApplyToGroupResponse
  #pragma pack(pop)
  static check_size<sizeof(ApplyToGroupResponse), 48 + sizeof(::PlayFab::GroupsModels::EntityKey*)> __PlayFab_GroupsModels_ApplyToGroupResponseSizeCheck;
  static_assert(sizeof(ApplyToGroupResponse) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::ApplyToGroupResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
