// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.PushNotificationPlatform
#include "PlayFab/ClientModels/PushNotificationPlatform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: PushNotificationRegistrationModel
  class PushNotificationRegistrationModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::PushNotificationRegistrationModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::PushNotificationRegistrationModel*, "PlayFab.ClientModels", "PushNotificationRegistrationModel");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.PushNotificationRegistrationModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PushNotificationRegistrationModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String NotificationEndpointARN
    // Size: 0x8
    // Offset: 0x10
    ::StringW NotificationEndpointARN;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform> Platform
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform> Platform;
    public:
    // Get instance field reference: public System.String NotificationEndpointARN
    [[deprecated("Use field access instead!")]] ::StringW& dyn_NotificationEndpointARN();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform> Platform
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform>& dyn_Platform();
    // public System.Void .ctor()
    // Offset: 0x4B6EAE4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PushNotificationRegistrationModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::PushNotificationRegistrationModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PushNotificationRegistrationModel*, creationType>()));
    }
  }; // PlayFab.ClientModels.PushNotificationRegistrationModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::PushNotificationRegistrationModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!