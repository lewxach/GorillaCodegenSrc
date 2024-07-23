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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LinkAndroidDeviceIDRequest
  class LinkAndroidDeviceIDRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*, "PlayFab.ClientModels", "LinkAndroidDeviceIDRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.LinkAndroidDeviceIDRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LinkAndroidDeviceIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String AndroidDevice
    // Size: 0x8
    // Offset: 0x18
    ::StringW AndroidDevice;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AndroidDeviceId
    // Size: 0x8
    // Offset: 0x20
    ::StringW AndroidDeviceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.Boolean> ForceLink
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<bool> ForceLink;
    // public System.String OS
    // Size: 0x8
    // Offset: 0x30
    ::StringW OS;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String AndroidDevice
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AndroidDevice();
    // Get instance field reference: public System.String AndroidDeviceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AndroidDeviceId();
    // Get instance field reference: public System.Nullable`1<System.Boolean> ForceLink
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_ForceLink();
    // Get instance field reference: public System.String OS
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OS();
    // public System.Void .ctor()
    // Offset: 0x4B6E88C
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkAndroidDeviceIDRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LinkAndroidDeviceIDRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkAndroidDeviceIDRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.LinkAndroidDeviceIDRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LinkAndroidDeviceIDRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!