// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetContainerRegistryCredentialsRequest
  class GetContainerRegistryCredentialsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest*, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetContainerRegistryCredentialsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetContainerRegistryCredentialsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B60EA4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetContainerRegistryCredentialsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetContainerRegistryCredentialsRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetContainerRegistryCredentialsRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!