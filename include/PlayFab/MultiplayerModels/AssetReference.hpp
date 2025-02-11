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
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: AssetReference
  class AssetReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::AssetReference);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::AssetReference*, "PlayFab.MultiplayerModels", "AssetReference");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.AssetReference
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetReference : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String FileName
    // Size: 0x8
    // Offset: 0x10
    ::StringW FileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String MountPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW MountPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String FileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FileName();
    // Get instance field reference: public System.String MountPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MountPath();
    // public System.Void .ctor()
    // Offset: 0x4B60CBC
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::AssetReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReference*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.AssetReference
  #pragma pack(pop)
  static check_size<sizeof(AssetReference), 24 + sizeof(::StringW)> __PlayFab_MultiplayerModels_AssetReferenceSizeCheck;
  static_assert(sizeof(AssetReference) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::AssetReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
