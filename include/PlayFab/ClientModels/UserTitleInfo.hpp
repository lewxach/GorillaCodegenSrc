// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.UserOrigination
#include "PlayFab/ClientModels/UserOrigination.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UserTitleInfo
  class UserTitleInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserTitleInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserTitleInfo*, "PlayFab.ClientModels", "UserTitleInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.UserTitleInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserTitleInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String AvatarUrl
    // Size: 0x8
    // Offset: 0x10
    ::StringW AvatarUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime Created
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime Created;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x20
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> FirstLogin
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::System::DateTime> FirstLogin;
    // public System.Nullable`1<System.Boolean> isBanned
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<bool> isBanned;
    // public System.Nullable`1<System.DateTime> LastLogin
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<::System::DateTime> LastLogin;
    // public System.Nullable`1<PlayFab.ClientModels.UserOrigination> Origination
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination> Origination;
    // public PlayFab.ClientModels.EntityKey TitlePlayerAccount
    // Size: 0x8
    // Offset: 0x58
    ::PlayFab::ClientModels::EntityKey* TitlePlayerAccount;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::EntityKey*) == 0x8);
    public:
    // Get instance field reference: public System.String AvatarUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AvatarUrl();
    // Get instance field reference: public System.DateTime Created
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Created();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.Nullable`1<System.DateTime> FirstLogin
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_FirstLogin();
    // Get instance field reference: public System.Nullable`1<System.Boolean> isBanned
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_isBanned();
    // Get instance field reference: public System.Nullable`1<System.DateTime> LastLogin
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_LastLogin();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.UserOrigination> Origination
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>& dyn_Origination();
    // Get instance field reference: public PlayFab.ClientModels.EntityKey TitlePlayerAccount
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::EntityKey*& dyn_TitlePlayerAccount();
    // public System.Void .ctor()
    // Offset: 0x4B6EE8C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserTitleInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserTitleInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserTitleInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserTitleInfo
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserTitleInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!