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
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CreateRemoteUserRequest
  class CreateRemoteUserRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::CreateRemoteUserRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::CreateRemoteUserRequest*, "PlayFab.MultiplayerModels", "CreateRemoteUserRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.CreateRemoteUserRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateRemoteUserRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> ExpirationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::System::DateTime> ExpirationTime;
    // public System.String Region
    // Size: 0x8
    // Offset: 0x30
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Username
    // Size: 0x8
    // Offset: 0x38
    ::StringW Username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String VmId
    // Size: 0x8
    // Offset: 0x40
    ::StringW VmId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.Nullable`1<System.DateTime> ExpirationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_ExpirationTime();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // Get instance field reference: public System.String Username
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Username();
    // Get instance field reference: public System.String VmId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VmId();
    // public System.Void .ctor()
    // Offset: 0x4B60DA4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateRemoteUserRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::CreateRemoteUserRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateRemoteUserRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.CreateRemoteUserRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::CreateRemoteUserRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!