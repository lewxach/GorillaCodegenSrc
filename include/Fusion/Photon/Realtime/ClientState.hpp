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
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: ClientState
  struct ClientState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::ClientState, "Fusion.Photon.Realtime", "ClientState");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.ClientState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClientState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ClientState
    constexpr ClientState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Photon.Realtime.ClientState PeerCreated
    static constexpr const int PeerCreated = 0;
    // Get static field: static public Fusion.Photon.Realtime.ClientState PeerCreated
    static ::Fusion::Photon::Realtime::ClientState _get_PeerCreated();
    // Set static field: static public Fusion.Photon.Realtime.ClientState PeerCreated
    static void _set_PeerCreated(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Authenticating
    static constexpr const int Authenticating = 1;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Authenticating
    static ::Fusion::Photon::Realtime::ClientState _get_Authenticating();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Authenticating
    static void _set_Authenticating(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Authenticated
    static constexpr const int Authenticated = 2;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Authenticated
    static ::Fusion::Photon::Realtime::ClientState _get_Authenticated();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Authenticated
    static void _set_Authenticated(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState JoiningLobby
    static constexpr const int JoiningLobby = 3;
    // Get static field: static public Fusion.Photon.Realtime.ClientState JoiningLobby
    static ::Fusion::Photon::Realtime::ClientState _get_JoiningLobby();
    // Set static field: static public Fusion.Photon.Realtime.ClientState JoiningLobby
    static void _set_JoiningLobby(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState JoinedLobby
    static constexpr const int JoinedLobby = 4;
    // Get static field: static public Fusion.Photon.Realtime.ClientState JoinedLobby
    static ::Fusion::Photon::Realtime::ClientState _get_JoinedLobby();
    // Set static field: static public Fusion.Photon.Realtime.ClientState JoinedLobby
    static void _set_JoinedLobby(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterServer
    static constexpr const int DisconnectingFromMasterServer = 5;
    // Get static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterServer
    static ::Fusion::Photon::Realtime::ClientState _get_DisconnectingFromMasterServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterServer
    static void _set_DisconnectingFromMasterServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterserver
    static constexpr const int DisconnectingFromMasterserver = 5;
    // Get static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterserver
    static ::Fusion::Photon::Realtime::ClientState _get_DisconnectingFromMasterserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromMasterserver
    static void _set_DisconnectingFromMasterserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectingToGameServer
    static constexpr const int ConnectingToGameServer = 6;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectingToGameServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectingToGameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectingToGameServer
    static void _set_ConnectingToGameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectingToGameserver
    static constexpr const int ConnectingToGameserver = 6;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectingToGameserver
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectingToGameserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectingToGameserver
    static void _set_ConnectingToGameserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToGameServer
    static constexpr const int ConnectedToGameServer = 7;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToGameServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToGameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToGameServer
    static void _set_ConnectedToGameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToGameserver
    static constexpr const int ConnectedToGameserver = 7;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToGameserver
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToGameserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToGameserver
    static void _set_ConnectedToGameserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Joining
    static constexpr const int Joining = 8;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Joining
    static ::Fusion::Photon::Realtime::ClientState _get_Joining();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Joining
    static void _set_Joining(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Joined
    static constexpr const int Joined = 9;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Joined
    static ::Fusion::Photon::Realtime::ClientState _get_Joined();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Joined
    static void _set_Joined(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Leaving
    static constexpr const int Leaving = 10;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Leaving
    static ::Fusion::Photon::Realtime::ClientState _get_Leaving();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Leaving
    static void _set_Leaving(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameServer
    static constexpr const int DisconnectingFromGameServer = 11;
    // Get static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameServer
    static ::Fusion::Photon::Realtime::ClientState _get_DisconnectingFromGameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameServer
    static void _set_DisconnectingFromGameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameserver
    static constexpr const int DisconnectingFromGameserver = 11;
    // Get static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameserver
    static ::Fusion::Photon::Realtime::ClientState _get_DisconnectingFromGameserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromGameserver
    static void _set_DisconnectingFromGameserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterServer
    static constexpr const int ConnectingToMasterServer = 12;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectingToMasterServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterServer
    static void _set_ConnectingToMasterServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterserver
    static constexpr const int ConnectingToMasterserver = 12;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterserver
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectingToMasterserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectingToMasterserver
    static void _set_ConnectingToMasterserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Disconnecting
    static constexpr const int Disconnecting = 13;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Disconnecting
    static ::Fusion::Photon::Realtime::ClientState _get_Disconnecting();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Disconnecting
    static void _set_Disconnecting(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState Disconnected
    static constexpr const int Disconnected = 14;
    // Get static field: static public Fusion.Photon.Realtime.ClientState Disconnected
    static ::Fusion::Photon::Realtime::ClientState _get_Disconnected();
    // Set static field: static public Fusion.Photon.Realtime.ClientState Disconnected
    static void _set_Disconnected(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterServer
    static constexpr const int ConnectedToMasterServer = 15;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToMasterServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterServer
    static void _set_ConnectedToMasterServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterserver
    static constexpr const int ConnectedToMasterserver = 15;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterserver
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToMasterserver();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMasterserver
    static void _set_ConnectedToMasterserver(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToMaster
    static constexpr const int ConnectedToMaster = 15;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMaster
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToMaster();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToMaster
    static void _set_ConnectedToMaster(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectingToNameServer
    static constexpr const int ConnectingToNameServer = 16;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectingToNameServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectingToNameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectingToNameServer
    static void _set_ConnectingToNameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectedToNameServer
    static constexpr const int ConnectedToNameServer = 17;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectedToNameServer
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectedToNameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectedToNameServer
    static void _set_ConnectedToNameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState DisconnectingFromNameServer
    static constexpr const int DisconnectingFromNameServer = 18;
    // Get static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromNameServer
    static ::Fusion::Photon::Realtime::ClientState _get_DisconnectingFromNameServer();
    // Set static field: static public Fusion.Photon.Realtime.ClientState DisconnectingFromNameServer
    static void _set_DisconnectingFromNameServer(::Fusion::Photon::Realtime::ClientState value);
    // static field const value: static public Fusion.Photon.Realtime.ClientState ConnectWithFallbackProtocol
    static constexpr const int ConnectWithFallbackProtocol = 19;
    // Get static field: static public Fusion.Photon.Realtime.ClientState ConnectWithFallbackProtocol
    static ::Fusion::Photon::Realtime::ClientState _get_ConnectWithFallbackProtocol();
    // Set static field: static public Fusion.Photon.Realtime.ClientState ConnectWithFallbackProtocol
    static void _set_ConnectWithFallbackProtocol(::Fusion::Photon::Realtime::ClientState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.Photon.Realtime.ClientState
  #pragma pack(pop)
  static check_size<sizeof(ClientState), 0 + sizeof(int)> __Fusion_Photon_Realtime_ClientStateSizeCheck;
  static_assert(sizeof(ClientState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"