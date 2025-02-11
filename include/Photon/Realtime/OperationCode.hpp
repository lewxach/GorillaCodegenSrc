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
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: OperationCode
  class OperationCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::OperationCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::OperationCode*, "Photon.Realtime", "OperationCode");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.OperationCode
  // [TokenAttribute] Offset: FFFFFFFF
  class OperationCode : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte ExchangeKeysForEncryption
    static constexpr const uint8_t ExchangeKeysForEncryption = 250u;
    // Get static field: static public System.Byte ExchangeKeysForEncryption
    static uint8_t _get_ExchangeKeysForEncryption();
    // Set static field: static public System.Byte ExchangeKeysForEncryption
    static void _set_ExchangeKeysForEncryption(uint8_t value);
    // static field const value: static public System.Byte Join
    static constexpr const uint8_t Join = 255u;
    // Get static field: static public System.Byte Join
    static uint8_t _get_Join();
    // Set static field: static public System.Byte Join
    static void _set_Join(uint8_t value);
    // static field const value: static public System.Byte AuthenticateOnce
    static constexpr const uint8_t AuthenticateOnce = 231u;
    // Get static field: static public System.Byte AuthenticateOnce
    static uint8_t _get_AuthenticateOnce();
    // Set static field: static public System.Byte AuthenticateOnce
    static void _set_AuthenticateOnce(uint8_t value);
    // static field const value: static public System.Byte Authenticate
    static constexpr const uint8_t Authenticate = 230u;
    // Get static field: static public System.Byte Authenticate
    static uint8_t _get_Authenticate();
    // Set static field: static public System.Byte Authenticate
    static void _set_Authenticate(uint8_t value);
    // static field const value: static public System.Byte JoinLobby
    static constexpr const uint8_t JoinLobby = 229u;
    // Get static field: static public System.Byte JoinLobby
    static uint8_t _get_JoinLobby();
    // Set static field: static public System.Byte JoinLobby
    static void _set_JoinLobby(uint8_t value);
    // static field const value: static public System.Byte LeaveLobby
    static constexpr const uint8_t LeaveLobby = 228u;
    // Get static field: static public System.Byte LeaveLobby
    static uint8_t _get_LeaveLobby();
    // Set static field: static public System.Byte LeaveLobby
    static void _set_LeaveLobby(uint8_t value);
    // static field const value: static public System.Byte CreateGame
    static constexpr const uint8_t CreateGame = 227u;
    // Get static field: static public System.Byte CreateGame
    static uint8_t _get_CreateGame();
    // Set static field: static public System.Byte CreateGame
    static void _set_CreateGame(uint8_t value);
    // static field const value: static public System.Byte JoinGame
    static constexpr const uint8_t JoinGame = 226u;
    // Get static field: static public System.Byte JoinGame
    static uint8_t _get_JoinGame();
    // Set static field: static public System.Byte JoinGame
    static void _set_JoinGame(uint8_t value);
    // static field const value: static public System.Byte JoinRandomGame
    static constexpr const uint8_t JoinRandomGame = 225u;
    // Get static field: static public System.Byte JoinRandomGame
    static uint8_t _get_JoinRandomGame();
    // Set static field: static public System.Byte JoinRandomGame
    static void _set_JoinRandomGame(uint8_t value);
    // static field const value: static public System.Byte Leave
    static constexpr const uint8_t Leave = 254u;
    // Get static field: static public System.Byte Leave
    static uint8_t _get_Leave();
    // Set static field: static public System.Byte Leave
    static void _set_Leave(uint8_t value);
    // static field const value: static public System.Byte RaiseEvent
    static constexpr const uint8_t RaiseEvent = 253u;
    // Get static field: static public System.Byte RaiseEvent
    static uint8_t _get_RaiseEvent();
    // Set static field: static public System.Byte RaiseEvent
    static void _set_RaiseEvent(uint8_t value);
    // static field const value: static public System.Byte SetProperties
    static constexpr const uint8_t SetProperties = 252u;
    // Get static field: static public System.Byte SetProperties
    static uint8_t _get_SetProperties();
    // Set static field: static public System.Byte SetProperties
    static void _set_SetProperties(uint8_t value);
    // static field const value: static public System.Byte GetProperties
    static constexpr const uint8_t GetProperties = 251u;
    // Get static field: static public System.Byte GetProperties
    static uint8_t _get_GetProperties();
    // Set static field: static public System.Byte GetProperties
    static void _set_GetProperties(uint8_t value);
    // static field const value: static public System.Byte ChangeGroups
    static constexpr const uint8_t ChangeGroups = 248u;
    // Get static field: static public System.Byte ChangeGroups
    static uint8_t _get_ChangeGroups();
    // Set static field: static public System.Byte ChangeGroups
    static void _set_ChangeGroups(uint8_t value);
    // static field const value: static public System.Byte FindFriends
    static constexpr const uint8_t FindFriends = 222u;
    // Get static field: static public System.Byte FindFriends
    static uint8_t _get_FindFriends();
    // Set static field: static public System.Byte FindFriends
    static void _set_FindFriends(uint8_t value);
    // static field const value: static public System.Byte FindFriendsUpdate
    static constexpr const uint8_t FindFriendsUpdate = 223u;
    // Get static field: static public System.Byte FindFriendsUpdate
    static uint8_t _get_FindFriendsUpdate();
    // Set static field: static public System.Byte FindFriendsUpdate
    static void _set_FindFriendsUpdate(uint8_t value);
    // static field const value: static public System.Byte GetLobbyStats
    static constexpr const uint8_t GetLobbyStats = 221u;
    // Get static field: static public System.Byte GetLobbyStats
    static uint8_t _get_GetLobbyStats();
    // Set static field: static public System.Byte GetLobbyStats
    static void _set_GetLobbyStats(uint8_t value);
    // static field const value: static public System.Byte GetRegions
    static constexpr const uint8_t GetRegions = 220u;
    // Get static field: static public System.Byte GetRegions
    static uint8_t _get_GetRegions();
    // Set static field: static public System.Byte GetRegions
    static void _set_GetRegions(uint8_t value);
    // static field const value: static public System.Byte WebRpc
    static constexpr const uint8_t WebRpc = 219u;
    // Get static field: static public System.Byte WebRpc
    static uint8_t _get_WebRpc();
    // Set static field: static public System.Byte WebRpc
    static void _set_WebRpc(uint8_t value);
    // static field const value: static public System.Byte ServerSettings
    static constexpr const uint8_t ServerSettings = 218u;
    // Get static field: static public System.Byte ServerSettings
    static uint8_t _get_ServerSettings();
    // Set static field: static public System.Byte ServerSettings
    static void _set_ServerSettings(uint8_t value);
    // static field const value: static public System.Byte GetGameList
    static constexpr const uint8_t GetGameList = 217u;
    // Get static field: static public System.Byte GetGameList
    static uint8_t _get_GetGameList();
    // Set static field: static public System.Byte GetGameList
    static void _set_GetGameList(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x4A23634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationCode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::OperationCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationCode*, creationType>()));
    }
  }; // Photon.Realtime.OperationCode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::OperationCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
