// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConnectFailedReason
  struct NetConnectFailedReason;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConnectFailedReason, "Fusion.Sockets", "NetConnectFailedReason");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Sockets.NetConnectFailedReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetConnectFailedReason/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: NetConnectFailedReason
    constexpr NetConnectFailedReason(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Sockets.NetConnectFailedReason Timeout
    static constexpr const uint8_t Timeout = 1u;
    // Get static field: static public Fusion.Sockets.NetConnectFailedReason Timeout
    static ::Fusion::Sockets::NetConnectFailedReason _get_Timeout();
    // Set static field: static public Fusion.Sockets.NetConnectFailedReason Timeout
    static void _set_Timeout(::Fusion::Sockets::NetConnectFailedReason value);
    // static field const value: static public Fusion.Sockets.NetConnectFailedReason ServerFull
    static constexpr const uint8_t ServerFull = 2u;
    // Get static field: static public Fusion.Sockets.NetConnectFailedReason ServerFull
    static ::Fusion::Sockets::NetConnectFailedReason _get_ServerFull();
    // Set static field: static public Fusion.Sockets.NetConnectFailedReason ServerFull
    static void _set_ServerFull(::Fusion::Sockets::NetConnectFailedReason value);
    // static field const value: static public Fusion.Sockets.NetConnectFailedReason ServerRefused
    static constexpr const uint8_t ServerRefused = 3u;
    // Get static field: static public Fusion.Sockets.NetConnectFailedReason ServerRefused
    static ::Fusion::Sockets::NetConnectFailedReason _get_ServerRefused();
    // Set static field: static public Fusion.Sockets.NetConnectFailedReason ServerRefused
    static void _set_ServerRefused(::Fusion::Sockets::NetConnectFailedReason value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.Sockets.NetConnectFailedReason
  #pragma pack(pop)
  static check_size<sizeof(NetConnectFailedReason), 0 + sizeof(uint8_t)> __Fusion_Sockets_NetConnectFailedReasonSizeCheck;
  static_assert(sizeof(NetConnectFailedReason) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
