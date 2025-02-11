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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayerCombinedInfoRequestParams
  class GetPlayerCombinedInfoRequestParams;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LoginWithEmailAddressRequest
  class LoginWithEmailAddressRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LoginWithEmailAddressRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LoginWithEmailAddressRequest*, "PlayFab.ClientModels", "LoginWithEmailAddressRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.LoginWithEmailAddressRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginWithEmailAddressRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String Email
    // Size: 0x8
    // Offset: 0x18
    ::StringW Email;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*) == 0x8);
    // public System.String Password
    // Size: 0x8
    // Offset: 0x28
    ::StringW Password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TitleId
    // Size: 0x8
    // Offset: 0x30
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String Email
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Email();
    // Get instance field reference: public PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams InfoRequestParameters
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& dyn_InfoRequestParameters();
    // Get instance field reference: public System.String Password
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Password();
    // Get instance field reference: public System.String TitleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TitleId();
    // public System.Void .ctor()
    // Offset: 0x4B6E9C4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginWithEmailAddressRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LoginWithEmailAddressRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginWithEmailAddressRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.LoginWithEmailAddressRequest
  #pragma pack(pop)
  static check_size<sizeof(LoginWithEmailAddressRequest), 48 + sizeof(::StringW)> __PlayFab_ClientModels_LoginWithEmailAddressRequestSizeCheck;
  static_assert(sizeof(LoginWithEmailAddressRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LoginWithEmailAddressRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
