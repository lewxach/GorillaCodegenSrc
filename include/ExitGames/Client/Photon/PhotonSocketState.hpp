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
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PhotonSocketState
  struct PhotonSocketState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PhotonSocketState, "ExitGames.Client.Photon", "PhotonSocketState");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.PhotonSocketState
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotonSocketState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PhotonSocketState
    constexpr PhotonSocketState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ExitGames.Client.Photon.PhotonSocketState Disconnected
    static constexpr const int Disconnected = 0;
    // Get static field: static public ExitGames.Client.Photon.PhotonSocketState Disconnected
    static ::ExitGames::Client::Photon::PhotonSocketState _get_Disconnected();
    // Set static field: static public ExitGames.Client.Photon.PhotonSocketState Disconnected
    static void _set_Disconnected(::ExitGames::Client::Photon::PhotonSocketState value);
    // static field const value: static public ExitGames.Client.Photon.PhotonSocketState Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public ExitGames.Client.Photon.PhotonSocketState Connecting
    static ::ExitGames::Client::Photon::PhotonSocketState _get_Connecting();
    // Set static field: static public ExitGames.Client.Photon.PhotonSocketState Connecting
    static void _set_Connecting(::ExitGames::Client::Photon::PhotonSocketState value);
    // static field const value: static public ExitGames.Client.Photon.PhotonSocketState Connected
    static constexpr const int Connected = 2;
    // Get static field: static public ExitGames.Client.Photon.PhotonSocketState Connected
    static ::ExitGames::Client::Photon::PhotonSocketState _get_Connected();
    // Set static field: static public ExitGames.Client.Photon.PhotonSocketState Connected
    static void _set_Connected(::ExitGames::Client::Photon::PhotonSocketState value);
    // static field const value: static public ExitGames.Client.Photon.PhotonSocketState Disconnecting
    static constexpr const int Disconnecting = 3;
    // Get static field: static public ExitGames.Client.Photon.PhotonSocketState Disconnecting
    static ::ExitGames::Client::Photon::PhotonSocketState _get_Disconnecting();
    // Set static field: static public ExitGames.Client.Photon.PhotonSocketState Disconnecting
    static void _set_Disconnecting(::ExitGames::Client::Photon::PhotonSocketState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ExitGames.Client.Photon.PhotonSocketState
  #pragma pack(pop)
  static check_size<sizeof(PhotonSocketState), 0 + sizeof(int)> __ExitGames_Client_Photon_PhotonSocketStateSizeCheck;
  static_assert(sizeof(PhotonSocketState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
