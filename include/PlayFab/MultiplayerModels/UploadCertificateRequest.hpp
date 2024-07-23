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
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: Certificate
  class Certificate;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: UploadCertificateRequest
  class UploadCertificateRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::UploadCertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::UploadCertificateRequest*, "PlayFab.MultiplayerModels", "UploadCertificateRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.UploadCertificateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UploadCertificateRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.MultiplayerModels.Certificate GameCertificate
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::Certificate* GameCertificate;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::Certificate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.MultiplayerModels.Certificate GameCertificate
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::Certificate*& dyn_GameCertificate();
    // public System.Void .ctor()
    // Offset: 0x4B611A4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadCertificateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::UploadCertificateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadCertificateRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.UploadCertificateRequest
  #pragma pack(pop)
  static check_size<sizeof(UploadCertificateRequest), 24 + sizeof(::PlayFab::MultiplayerModels::Certificate*)> __PlayFab_MultiplayerModels_UploadCertificateRequestSizeCheck;
  static_assert(sizeof(UploadCertificateRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::UploadCertificateRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!