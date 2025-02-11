// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Forward declaring type: ParameterCode
  class ParameterCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Chat::ParameterCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ParameterCode*, "Photon.Chat", "ParameterCode");
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Chat.ParameterCode
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterCode : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte ApplicationId
    static constexpr const uint8_t ApplicationId = 224u;
    // Get static field: static public System.Byte ApplicationId
    static uint8_t _get_ApplicationId();
    // Set static field: static public System.Byte ApplicationId
    static void _set_ApplicationId(uint8_t value);
    // static field const value: static public System.Byte Secret
    static constexpr const uint8_t Secret = 221u;
    // Get static field: static public System.Byte Secret
    static uint8_t _get_Secret();
    // Set static field: static public System.Byte Secret
    static void _set_Secret(uint8_t value);
    // static field const value: static public System.Byte AppVersion
    static constexpr const uint8_t AppVersion = 220u;
    // Get static field: static public System.Byte AppVersion
    static uint8_t _get_AppVersion();
    // Set static field: static public System.Byte AppVersion
    static void _set_AppVersion(uint8_t value);
    // static field const value: static public System.Byte ClientAuthenticationType
    static constexpr const uint8_t ClientAuthenticationType = 217u;
    // Get static field: static public System.Byte ClientAuthenticationType
    static uint8_t _get_ClientAuthenticationType();
    // Set static field: static public System.Byte ClientAuthenticationType
    static void _set_ClientAuthenticationType(uint8_t value);
    // static field const value: static public System.Byte ClientAuthenticationParams
    static constexpr const uint8_t ClientAuthenticationParams = 216u;
    // Get static field: static public System.Byte ClientAuthenticationParams
    static uint8_t _get_ClientAuthenticationParams();
    // Set static field: static public System.Byte ClientAuthenticationParams
    static void _set_ClientAuthenticationParams(uint8_t value);
    // static field const value: static public System.Byte ClientAuthenticationData
    static constexpr const uint8_t ClientAuthenticationData = 214u;
    // Get static field: static public System.Byte ClientAuthenticationData
    static uint8_t _get_ClientAuthenticationData();
    // Set static field: static public System.Byte ClientAuthenticationData
    static void _set_ClientAuthenticationData(uint8_t value);
    // static field const value: static public System.Byte Region
    static constexpr const uint8_t Region = 210u;
    // Get static field: static public System.Byte Region
    static uint8_t _get_Region();
    // Set static field: static public System.Byte Region
    static void _set_Region(uint8_t value);
    // static field const value: static public System.Byte Address
    static constexpr const uint8_t Address = 230u;
    // Get static field: static public System.Byte Address
    static uint8_t _get_Address();
    // Set static field: static public System.Byte Address
    static void _set_Address(uint8_t value);
    // static field const value: static public System.Byte UserId
    static constexpr const uint8_t UserId = 225u;
    // Get static field: static public System.Byte UserId
    static uint8_t _get_UserId();
    // Set static field: static public System.Byte UserId
    static void _set_UserId(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x4A0F744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterCode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Chat::ParameterCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterCode*, creationType>()));
    }
  }; // Photon.Chat.ParameterCode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Chat::ParameterCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
