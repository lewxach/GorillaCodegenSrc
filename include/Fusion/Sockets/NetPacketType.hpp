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
  // Forward declaring type: NetPacketType
  struct NetPacketType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetPacketType, "Fusion.Sockets", "NetPacketType");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Sockets.NetPacketType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetPacketType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: NetPacketType
    constexpr NetPacketType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Sockets.NetPacketType Command
    static constexpr const uint8_t Command = 1u;
    // Get static field: static public Fusion.Sockets.NetPacketType Command
    static ::Fusion::Sockets::NetPacketType _get_Command();
    // Set static field: static public Fusion.Sockets.NetPacketType Command
    static void _set_Command(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType UnreliableData
    static constexpr const uint8_t UnreliableData = 2u;
    // Get static field: static public Fusion.Sockets.NetPacketType UnreliableData
    static ::Fusion::Sockets::NetPacketType _get_UnreliableData();
    // Set static field: static public Fusion.Sockets.NetPacketType UnreliableData
    static void _set_UnreliableData(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType NotifyData
    static constexpr const uint8_t NotifyData = 3u;
    // Get static field: static public Fusion.Sockets.NetPacketType NotifyData
    static ::Fusion::Sockets::NetPacketType _get_NotifyData();
    // Set static field: static public Fusion.Sockets.NetPacketType NotifyData
    static void _set_NotifyData(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType NotifyAcks
    static constexpr const uint8_t NotifyAcks = 4u;
    // Get static field: static public Fusion.Sockets.NetPacketType NotifyAcks
    static ::Fusion::Sockets::NetPacketType _get_NotifyAcks();
    // Set static field: static public Fusion.Sockets.NetPacketType NotifyAcks
    static void _set_NotifyAcks(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType Unconnected
    static constexpr const uint8_t Unconnected = 5u;
    // Get static field: static public Fusion.Sockets.NetPacketType Unconnected
    static ::Fusion::Sockets::NetPacketType _get_Unconnected();
    // Set static field: static public Fusion.Sockets.NetPacketType Unconnected
    static void _set_Unconnected(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType MtuDiscoveryReq
    static constexpr const uint8_t MtuDiscoveryReq = 6u;
    // Get static field: static public Fusion.Sockets.NetPacketType MtuDiscoveryReq
    static ::Fusion::Sockets::NetPacketType _get_MtuDiscoveryReq();
    // Set static field: static public Fusion.Sockets.NetPacketType MtuDiscoveryReq
    static void _set_MtuDiscoveryReq(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType MtuDiscoveryRep
    static constexpr const uint8_t MtuDiscoveryRep = 7u;
    // Get static field: static public Fusion.Sockets.NetPacketType MtuDiscoveryRep
    static ::Fusion::Sockets::NetPacketType _get_MtuDiscoveryRep();
    // Set static field: static public Fusion.Sockets.NetPacketType MtuDiscoveryRep
    static void _set_MtuDiscoveryRep(::Fusion::Sockets::NetPacketType value);
    // static field const value: static public Fusion.Sockets.NetPacketType NotifyReliableData
    static constexpr const uint8_t NotifyReliableData = 8u;
    // Get static field: static public Fusion.Sockets.NetPacketType NotifyReliableData
    static ::Fusion::Sockets::NetPacketType _get_NotifyReliableData();
    // Set static field: static public Fusion.Sockets.NetPacketType NotifyReliableData
    static void _set_NotifyReliableData(::Fusion::Sockets::NetPacketType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.Sockets.NetPacketType
  #pragma pack(pop)
  static check_size<sizeof(NetPacketType), 0 + sizeof(uint8_t)> __Fusion_Sockets_NetPacketTypeSizeCheck;
  static_assert(sizeof(NetPacketType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"