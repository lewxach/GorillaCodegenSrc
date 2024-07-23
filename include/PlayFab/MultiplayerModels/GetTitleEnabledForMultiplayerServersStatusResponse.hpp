// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.MultiplayerModels.TitleMultiplayerServerEnabledStatus
#include "PlayFab/MultiplayerModels/TitleMultiplayerServerEnabledStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetTitleEnabledForMultiplayerServersStatusResponse
  class GetTitleEnabledForMultiplayerServersStatusResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class GetTitleEnabledForMultiplayerServersStatusResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Nullable`1<PlayFab.MultiplayerModels.TitleMultiplayerServerEnabledStatus> Status
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus> Status;
    public:
    // Creating conversion operator: operator ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>
    constexpr operator ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>() const noexcept {
      return Status;
    }
    // Get instance field reference: public System.Nullable`1<PlayFab.MultiplayerModels.TitleMultiplayerServerEnabledStatus> Status
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>& dyn_Status();
    // public System.Void .ctor()
    // Offset: 0x4B60F44
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetTitleEnabledForMultiplayerServersStatusResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetTitleEnabledForMultiplayerServersStatusResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusResponse
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!