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
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: MatchmakingPlayer
  class MatchmakingPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetMatchmakingTicketResult
  class GetMatchmakingTicketResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*, "PlayFab.MultiplayerModels", "GetMatchmakingTicketResult");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetMatchmakingTicketResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetMatchmakingTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String CancellationReasonString
    // Size: 0x8
    // Offset: 0x20
    ::StringW CancellationReasonString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime Created
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime Created;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public PlayFab.MultiplayerModels.EntityKey Creator
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::MultiplayerModels::EntityKey* Creator;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::EntityKey*) == 0x8);
    // public System.Int32 GiveUpAfterSeconds
    // Size: 0x4
    // Offset: 0x38
    int GiveUpAfterSeconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: GiveUpAfterSeconds and: MatchId
    char __padding3[0x4] = {};
    // public System.String MatchId
    // Size: 0x8
    // Offset: 0x40
    ::StringW MatchId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayer> Members
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>* Members;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.EntityKey> MembersToMatchWith
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>* MembersToMatchWith;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*) == 0x8);
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x58
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Status
    // Size: 0x8
    // Offset: 0x60
    ::StringW Status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TicketId
    // Size: 0x8
    // Offset: 0x68
    ::StringW TicketId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String CancellationReasonString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CancellationReasonString();
    // Get instance field reference: public System.DateTime Created
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Created();
    // Get instance field reference: public PlayFab.MultiplayerModels.EntityKey Creator
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::EntityKey*& dyn_Creator();
    // Get instance field reference: public System.Int32 GiveUpAfterSeconds
    [[deprecated("Use field access instead!")]] int& dyn_GiveUpAfterSeconds();
    // Get instance field reference: public System.String MatchId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MatchId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayer> Members
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*& dyn_Members();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.EntityKey> MembersToMatchWith
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*& dyn_MembersToMatchWith();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // Get instance field reference: public System.String Status
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Status();
    // Get instance field reference: public System.String TicketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TicketId();
    // public System.Void .ctor()
    // Offset: 0x4B60ECC
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetMatchmakingTicketResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetMatchmakingTicketResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetMatchmakingTicketResult*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetMatchmakingTicketResult
  #pragma pack(pop)
  static check_size<sizeof(GetMatchmakingTicketResult), 104 + sizeof(::StringW)> __PlayFab_MultiplayerModels_GetMatchmakingTicketResultSizeCheck;
  static_assert(sizeof(GetMatchmakingTicketResult) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetMatchmakingTicketResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!