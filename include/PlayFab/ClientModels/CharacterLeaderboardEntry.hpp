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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CharacterLeaderboardEntry
  class CharacterLeaderboardEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::CharacterLeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::CharacterLeaderboardEntry*, "PlayFab.ClientModels", "CharacterLeaderboardEntry");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.CharacterLeaderboardEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class CharacterLeaderboardEntry : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x10
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String CharacterName
    // Size: 0x8
    // Offset: 0x18
    ::StringW CharacterName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String CharacterType
    // Size: 0x8
    // Offset: 0x20
    ::StringW CharacterType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x28
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String PlayFabId
    // Size: 0x8
    // Offset: 0x30
    ::StringW PlayFabId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Position
    // Size: 0x4
    // Offset: 0x38
    int Position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 StatValue
    // Size: 0x4
    // Offset: 0x3C
    int StatValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // Get instance field reference: public System.String CharacterName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterName();
    // Get instance field reference: public System.String CharacterType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterType();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.String PlayFabId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayFabId();
    // Get instance field reference: public System.Int32 Position
    [[deprecated("Use field access instead!")]] int& dyn_Position();
    // Get instance field reference: public System.Int32 StatValue
    [[deprecated("Use field access instead!")]] int& dyn_StatValue();
    // public System.Void .ctor()
    // Offset: 0x4B6E45C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterLeaderboardEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::CharacterLeaderboardEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterLeaderboardEntry*, creationType>()));
    }
  }; // PlayFab.ClientModels.CharacterLeaderboardEntry
  #pragma pack(pop)
  static check_size<sizeof(CharacterLeaderboardEntry), 60 + sizeof(int)> __PlayFab_ClientModels_CharacterLeaderboardEntrySizeCheck;
  static_assert(sizeof(CharacterLeaderboardEntry) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::CharacterLeaderboardEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!