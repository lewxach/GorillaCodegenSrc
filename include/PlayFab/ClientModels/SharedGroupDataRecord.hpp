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
// Including type: PlayFab.ClientModels.UserDataPermission
#include "PlayFab/ClientModels/UserDataPermission.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: SharedGroupDataRecord
  class SharedGroupDataRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::SharedGroupDataRecord);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::SharedGroupDataRecord*, "PlayFab.ClientModels", "SharedGroupDataRecord");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.SharedGroupDataRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class SharedGroupDataRecord : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.DateTime LastUpdated
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime LastUpdated;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.String LastUpdatedBy
    // Size: 0x8
    // Offset: 0x18
    ::StringW LastUpdatedBy;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.UserDataPermission> Permission
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> Permission;
    // public System.String Value
    // Size: 0x8
    // Offset: 0x28
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.DateTime LastUpdated
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_LastUpdated();
    // Get instance field reference: public System.String LastUpdatedBy
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LastUpdatedBy();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.UserDataPermission> Permission
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& dyn_Permission();
    // Get instance field reference: public System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // public System.Void .ctor()
    // Offset: 0x4B6EBEC
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedGroupDataRecord* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::SharedGroupDataRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedGroupDataRecord*, creationType>()));
    }
  }; // PlayFab.ClientModels.SharedGroupDataRecord
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::SharedGroupDataRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
