// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Realtime.LoadBalancingClient
#include "Photon/Realtime/LoadBalancingClient.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::LoadBalancingClient::EncryptionDataParameters);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LoadBalancingClient::EncryptionDataParameters*, "Photon.Realtime", "LoadBalancingClient/EncryptionDataParameters");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.LoadBalancingClient/EncryptionDataParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadBalancingClient::EncryptionDataParameters : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte Mode
    static constexpr const uint8_t Mode = 0u;
    // Get static field: static public System.Byte Mode
    static uint8_t _get_Mode();
    // Set static field: static public System.Byte Mode
    static void _set_Mode(uint8_t value);
    // static field const value: static public System.Byte Secret1
    static constexpr const uint8_t Secret1 = 1u;
    // Get static field: static public System.Byte Secret1
    static uint8_t _get_Secret1();
    // Set static field: static public System.Byte Secret1
    static void _set_Secret1(uint8_t value);
    // static field const value: static public System.Byte Secret2
    static constexpr const uint8_t Secret2 = 2u;
    // Get static field: static public System.Byte Secret2
    static uint8_t _get_Secret2();
    // Set static field: static public System.Byte Secret2
    static void _set_Secret2(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x4A202C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingClient::EncryptionDataParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::LoadBalancingClient::EncryptionDataParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingClient::EncryptionDataParameters*, creationType>()));
    }
  }; // Photon.Realtime.LoadBalancingClient/EncryptionDataParameters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingClient::EncryptionDataParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
