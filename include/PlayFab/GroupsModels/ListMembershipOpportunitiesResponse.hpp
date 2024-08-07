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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: GroupApplication
  class GroupApplication;
  // Forward declaring type: GroupInvitation
  class GroupInvitation;
}
// Completed forward declares
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: ListMembershipOpportunitiesResponse
  class ListMembershipOpportunitiesResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse*, "PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.ListMembershipOpportunitiesResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ListMembershipOpportunitiesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupApplication> Applications
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>* Applications;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupInvitation> Invitations
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>* Invitations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupApplication> Applications
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*& dyn_Applications();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.GroupsModels.GroupInvitation> Invitations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*& dyn_Invitations();
    // public System.Void .ctor()
    // Offset: 0x4B61344
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListMembershipOpportunitiesResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListMembershipOpportunitiesResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.ListMembershipOpportunitiesResponse
  #pragma pack(pop)
  static check_size<sizeof(ListMembershipOpportunitiesResponse), 40 + sizeof(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupInvitation*>*)> __PlayFab_GroupsModels_ListMembershipOpportunitiesResponseSizeCheck;
  static_assert(sizeof(ListMembershipOpportunitiesResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::ListMembershipOpportunitiesResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
