// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetLeaderboardAroundCharacterRequest
  class GetLeaderboardAroundCharacterRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*, "PlayFab.ClientModels", "GetLeaderboardAroundCharacterRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetLeaderboardAroundCharacterRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x18
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String CharacterType
    // Size: 0x8
    // Offset: 0x20
    ::StringW CharacterType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.Int32> MaxResultsCount
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<int> MaxResultsCount;
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x30
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // Get instance field reference: public System.String CharacterType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterType();
    // Get instance field reference: public System.Nullable`1<System.Int32> MaxResultsCount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_MaxResultsCount();
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // public System.Void .ctor()
    // Offset: 0x4B6E604
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetLeaderboardAroundCharacterRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetLeaderboardAroundCharacterRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
