// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Api.IAgeGateAPIsApiSync
#include "KID/Api/IAgeGateAPIsApiSync.hpp"
// Including type: KID.Api.IAgeGateAPIsApiAsync
#include "KID/Api/IAgeGateAPIsApiAsync.hpp"
// Completed includes
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: IAgeGateAPIsApi
  class IAgeGateAPIsApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::IAgeGateAPIsApi);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::IAgeGateAPIsApi*, "KID.Api", "IAgeGateAPIsApi");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.IAgeGateAPIsApi
  // [TokenAttribute] Offset: FFFFFFFF
  class IAgeGateAPIsApi/*, public ::KID::Api::IAgeGateAPIsApiSync, public ::KID::Api::IAgeGateAPIsApiAsync*/ {
    public:
    // Creating interface conversion operator: operator ::KID::Api::IAgeGateAPIsApiSync
    operator ::KID::Api::IAgeGateAPIsApiSync() noexcept {
      return *reinterpret_cast<::KID::Api::IAgeGateAPIsApiSync*>(this);
    }
    // Creating interface conversion operator: operator ::KID::Api::IAgeGateAPIsApiAsync
    operator ::KID::Api::IAgeGateAPIsApiAsync() noexcept {
      return *reinterpret_cast<::KID::Api::IAgeGateAPIsApiAsync*>(this);
    }
  }; // KID.Api.IAgeGateAPIsApi
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
