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
// Including type: PlayFab.MultiplayerModels.ContainerFlavor
#include "PlayFab/MultiplayerModels/ContainerFlavor.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: PlayFab.MultiplayerModels.AzureVmSize
#include "PlayFab/MultiplayerModels/AzureVmSize.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ContainerImageReference
  class ContainerImageReference;
  // Forward declaring type: AssetReference
  class AssetReference;
  // Forward declaring type: GameCertificateReference
  class GameCertificateReference;
  // Forward declaring type: Port
  class Port;
  // Forward declaring type: BuildRegion
  class BuildRegion;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CreateBuildWithCustomContainerResponse
  class CreateBuildWithCustomContainerResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse*, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.CreateBuildWithCustomContainerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateBuildWithCustomContainerResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x20
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String BuildName
    // Size: 0x8
    // Offset: 0x28
    ::StringW BuildName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.MultiplayerModels.ContainerFlavor> ContainerFlavor
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> ContainerFlavor;
    // public System.String ContainerRunCommand
    // Size: 0x8
    // Offset: 0x38
    ::StringW ContainerRunCommand;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> CreationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<::System::DateTime> CreationTime;
    // public PlayFab.MultiplayerModels.ContainerImageReference CustomGameContainerImage
    // Size: 0x8
    // Offset: 0x50
    ::PlayFab::MultiplayerModels::ContainerImageReference* CustomGameContainerImage;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::ContainerImageReference*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.AssetReference> GameAssetReferences
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>* GameAssetReferences;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.GameCertificateReference> GameCertificateReferences
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>* GameCertificateReferences;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Metadata;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // public System.Int32 MultiplayerServerCountPerVm
    // Size: 0x4
    // Offset: 0x70
    int MultiplayerServerCountPerVm;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String OsPlatform
    // Size: 0x8
    // Offset: 0x78
    ::StringW OsPlatform;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* Ports;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegion> RegionConfigurations
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* RegionConfigurations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*) == 0x8);
    // public System.String ServerType
    // Size: 0x8
    // Offset: 0x90
    ::StringW ServerType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.MultiplayerModels.AzureVmSize> VmSize
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> VmSize;
    public:
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.String BuildName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildName();
    // Get instance field reference: public System.Nullable`1<PlayFab.MultiplayerModels.ContainerFlavor> ContainerFlavor
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& dyn_ContainerFlavor();
    // Get instance field reference: public System.String ContainerRunCommand
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ContainerRunCommand();
    // Get instance field reference: public System.Nullable`1<System.DateTime> CreationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_CreationTime();
    // Get instance field reference: public PlayFab.MultiplayerModels.ContainerImageReference CustomGameContainerImage
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::ContainerImageReference*& dyn_CustomGameContainerImage();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.AssetReference> GameAssetReferences
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*& dyn_GameAssetReferences();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.GameCertificateReference> GameCertificateReferences
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*& dyn_GameCertificateReferences();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Metadata();
    // Get instance field reference: public System.Int32 MultiplayerServerCountPerVm
    [[deprecated("Use field access instead!")]] int& dyn_MultiplayerServerCountPerVm();
    // Get instance field reference: public System.String OsPlatform
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OsPlatform();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& dyn_Ports();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegion> RegionConfigurations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& dyn_RegionConfigurations();
    // Get instance field reference: public System.String ServerType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ServerType();
    // Get instance field reference: public System.Nullable`1<PlayFab.MultiplayerModels.AzureVmSize> VmSize
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& dyn_VmSize();
    // public System.Void .ctor()
    // Offset: 0x4B60D7C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateBuildWithCustomContainerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateBuildWithCustomContainerResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.CreateBuildWithCustomContainerResponse
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
