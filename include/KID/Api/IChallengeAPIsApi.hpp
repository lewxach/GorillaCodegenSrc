// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Api.IChallengeAPIsApiSync
#include "KID/Api/IChallengeAPIsApiSync.hpp"
// Including type: KID.Api.IChallengeAPIsApiAsync
#include "KID/Api/IChallengeAPIsApiAsync.hpp"
// Completed includes
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: IChallengeAPIsApi
  class IChallengeAPIsApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::IChallengeAPIsApi);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::IChallengeAPIsApi*, "KID.Api", "IChallengeAPIsApi");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.IChallengeAPIsApi
  // [TokenAttribute] Offset: FFFFFFFF
  class IChallengeAPIsApi/*, public ::KID::Api::IChallengeAPIsApiSync, public ::KID::Api::IChallengeAPIsApiAsync*/ {
    public:
    // Creating interface conversion operator: operator ::KID::Api::IChallengeAPIsApiSync
    operator ::KID::Api::IChallengeAPIsApiSync() noexcept {
      return *reinterpret_cast<::KID::Api::IChallengeAPIsApiSync*>(this);
    }
    // Creating interface conversion operator: operator ::KID::Api::IChallengeAPIsApiAsync
    operator ::KID::Api::IChallengeAPIsApiAsync() noexcept {
      return *reinterpret_cast<::KID::Api::IChallengeAPIsApiAsync*>(this);
    }
  }; // KID.Api.IChallengeAPIsApi
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"