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
// Including type: PlayFab.AuthenticationModels.LoginIdentityProvider
#include "PlayFab/AuthenticationModels/LoginIdentityProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::AuthenticationModels
namespace PlayFab::AuthenticationModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: EntityLineage
  class EntityLineage;
}
// Completed forward declares
// Type namespace: PlayFab.AuthenticationModels
namespace PlayFab::AuthenticationModels {
  // Forward declaring type: ValidateEntityTokenResponse
  class ValidateEntityTokenResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*, "PlayFab.AuthenticationModels", "ValidateEntityTokenResponse");
// Type namespace: PlayFab.AuthenticationModels
namespace PlayFab::AuthenticationModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.AuthenticationModels.ValidateEntityTokenResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidateEntityTokenResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public PlayFab.AuthenticationModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::AuthenticationModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::AuthenticationModels::EntityKey*) == 0x8);
    // public System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider> IdentityProvider
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider> IdentityProvider;
    // public PlayFab.AuthenticationModels.EntityLineage Lineage
    // Size: 0x8
    // Offset: 0x30
    ::PlayFab::AuthenticationModels::EntityLineage* Lineage;
    // Field size check
    static_assert(sizeof(::PlayFab::AuthenticationModels::EntityLineage*) == 0x8);
    public:
    // Get instance field reference: public PlayFab.AuthenticationModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::AuthenticationModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider> IdentityProvider
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>& dyn_IdentityProvider();
    // Get instance field reference: public PlayFab.AuthenticationModels.EntityLineage Lineage
    [[deprecated("Use field access instead!")]] ::PlayFab::AuthenticationModels::EntityLineage*& dyn_Lineage();
    // public System.Void .ctor()
    // Offset: 0x4B6F0A8
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidateEntityTokenResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::AuthenticationModels::ValidateEntityTokenResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidateEntityTokenResponse*, creationType>()));
    }
  }; // PlayFab.AuthenticationModels.ValidateEntityTokenResponse
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::AuthenticationModels::ValidateEntityTokenResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
