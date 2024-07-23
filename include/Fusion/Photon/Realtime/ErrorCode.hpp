// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: ErrorCode
  class ErrorCode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::ErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::ErrorCode*, "Fusion.Photon.Realtime", "ErrorCode");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.ErrorCode
  // [TokenAttribute] Offset: FFFFFFFF
  class ErrorCode : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 Ok
    static constexpr const int Ok = 0;
    // Get static field: static public System.Int32 Ok
    static int _get_Ok();
    // Set static field: static public System.Int32 Ok
    static void _set_Ok(int value);
    // static field const value: static public System.Int32 OperationNotAllowedInCurrentState
    static constexpr const int OperationNotAllowedInCurrentState = -3;
    // Get static field: static public System.Int32 OperationNotAllowedInCurrentState
    static int _get_OperationNotAllowedInCurrentState();
    // Set static field: static public System.Int32 OperationNotAllowedInCurrentState
    static void _set_OperationNotAllowedInCurrentState(int value);
    // static field const value: static public System.Int32 InvalidOperationCode
    static constexpr const int InvalidOperationCode = -2;
    // Get static field: static public System.Int32 InvalidOperationCode
    static int _get_InvalidOperationCode();
    // Set static field: static public System.Int32 InvalidOperationCode
    static void _set_InvalidOperationCode(int value);
    // static field const value: static public System.Int32 InvalidOperation
    static constexpr const int InvalidOperation = -2;
    // Get static field: static public System.Int32 InvalidOperation
    static int _get_InvalidOperation();
    // Set static field: static public System.Int32 InvalidOperation
    static void _set_InvalidOperation(int value);
    // static field const value: static public System.Int32 InternalServerError
    static constexpr const int InternalServerError = -1;
    // Get static field: static public System.Int32 InternalServerError
    static int _get_InternalServerError();
    // Set static field: static public System.Int32 InternalServerError
    static void _set_InternalServerError(int value);
    // static field const value: static public System.Int32 InvalidAuthentication
    static constexpr const int InvalidAuthentication = 32767;
    // Get static field: static public System.Int32 InvalidAuthentication
    static int _get_InvalidAuthentication();
    // Set static field: static public System.Int32 InvalidAuthentication
    static void _set_InvalidAuthentication(int value);
    // static field const value: static public System.Int32 GameIdAlreadyExists
    static constexpr const int GameIdAlreadyExists = 32766;
    // Get static field: static public System.Int32 GameIdAlreadyExists
    static int _get_GameIdAlreadyExists();
    // Set static field: static public System.Int32 GameIdAlreadyExists
    static void _set_GameIdAlreadyExists(int value);
    // static field const value: static public System.Int32 GameFull
    static constexpr const int GameFull = 32765;
    // Get static field: static public System.Int32 GameFull
    static int _get_GameFull();
    // Set static field: static public System.Int32 GameFull
    static void _set_GameFull(int value);
    // static field const value: static public System.Int32 GameClosed
    static constexpr const int GameClosed = 32764;
    // Get static field: static public System.Int32 GameClosed
    static int _get_GameClosed();
    // Set static field: static public System.Int32 GameClosed
    static void _set_GameClosed(int value);
    // static field const value: static public System.Int32 AlreadyMatched
    static constexpr const int AlreadyMatched = 32763;
    // Get static field: static public System.Int32 AlreadyMatched
    static int _get_AlreadyMatched();
    // Set static field: static public System.Int32 AlreadyMatched
    static void _set_AlreadyMatched(int value);
    // static field const value: static public System.Int32 ServerFull
    static constexpr const int ServerFull = 32762;
    // Get static field: static public System.Int32 ServerFull
    static int _get_ServerFull();
    // Set static field: static public System.Int32 ServerFull
    static void _set_ServerFull(int value);
    // static field const value: static public System.Int32 UserBlocked
    static constexpr const int UserBlocked = 32761;
    // Get static field: static public System.Int32 UserBlocked
    static int _get_UserBlocked();
    // Set static field: static public System.Int32 UserBlocked
    static void _set_UserBlocked(int value);
    // static field const value: static public System.Int32 NoRandomMatchFound
    static constexpr const int NoRandomMatchFound = 32760;
    // Get static field: static public System.Int32 NoRandomMatchFound
    static int _get_NoRandomMatchFound();
    // Set static field: static public System.Int32 NoRandomMatchFound
    static void _set_NoRandomMatchFound(int value);
    // static field const value: static public System.Int32 GameDoesNotExist
    static constexpr const int GameDoesNotExist = 32758;
    // Get static field: static public System.Int32 GameDoesNotExist
    static int _get_GameDoesNotExist();
    // Set static field: static public System.Int32 GameDoesNotExist
    static void _set_GameDoesNotExist(int value);
    // static field const value: static public System.Int32 MaxCcuReached
    static constexpr const int MaxCcuReached = 32757;
    // Get static field: static public System.Int32 MaxCcuReached
    static int _get_MaxCcuReached();
    // Set static field: static public System.Int32 MaxCcuReached
    static void _set_MaxCcuReached(int value);
    // static field const value: static public System.Int32 InvalidRegion
    static constexpr const int InvalidRegion = 32756;
    // Get static field: static public System.Int32 InvalidRegion
    static int _get_InvalidRegion();
    // Set static field: static public System.Int32 InvalidRegion
    static void _set_InvalidRegion(int value);
    // static field const value: static public System.Int32 CustomAuthenticationFailed
    static constexpr const int CustomAuthenticationFailed = 32755;
    // Get static field: static public System.Int32 CustomAuthenticationFailed
    static int _get_CustomAuthenticationFailed();
    // Set static field: static public System.Int32 CustomAuthenticationFailed
    static void _set_CustomAuthenticationFailed(int value);
    // static field const value: static public System.Int32 AuthenticationTicketExpired
    static constexpr const int AuthenticationTicketExpired = 32753;
    // Get static field: static public System.Int32 AuthenticationTicketExpired
    static int _get_AuthenticationTicketExpired();
    // Set static field: static public System.Int32 AuthenticationTicketExpired
    static void _set_AuthenticationTicketExpired(int value);
    // static field const value: static public System.Int32 PluginReportedError
    static constexpr const int PluginReportedError = 32752;
    // Get static field: static public System.Int32 PluginReportedError
    static int _get_PluginReportedError();
    // Set static field: static public System.Int32 PluginReportedError
    static void _set_PluginReportedError(int value);
    // static field const value: static public System.Int32 PluginMismatch
    static constexpr const int PluginMismatch = 32751;
    // Get static field: static public System.Int32 PluginMismatch
    static int _get_PluginMismatch();
    // Set static field: static public System.Int32 PluginMismatch
    static void _set_PluginMismatch(int value);
    // static field const value: static public System.Int32 JoinFailedPeerAlreadyJoined
    static constexpr const int JoinFailedPeerAlreadyJoined = 32750;
    // Get static field: static public System.Int32 JoinFailedPeerAlreadyJoined
    static int _get_JoinFailedPeerAlreadyJoined();
    // Set static field: static public System.Int32 JoinFailedPeerAlreadyJoined
    static void _set_JoinFailedPeerAlreadyJoined(int value);
    // static field const value: static public System.Int32 JoinFailedFoundInactiveJoiner
    static constexpr const int JoinFailedFoundInactiveJoiner = 32749;
    // Get static field: static public System.Int32 JoinFailedFoundInactiveJoiner
    static int _get_JoinFailedFoundInactiveJoiner();
    // Set static field: static public System.Int32 JoinFailedFoundInactiveJoiner
    static void _set_JoinFailedFoundInactiveJoiner(int value);
    // static field const value: static public System.Int32 JoinFailedWithRejoinerNotFound
    static constexpr const int JoinFailedWithRejoinerNotFound = 32748;
    // Get static field: static public System.Int32 JoinFailedWithRejoinerNotFound
    static int _get_JoinFailedWithRejoinerNotFound();
    // Set static field: static public System.Int32 JoinFailedWithRejoinerNotFound
    static void _set_JoinFailedWithRejoinerNotFound(int value);
    // static field const value: static public System.Int32 JoinFailedFoundExcludedUserId
    static constexpr const int JoinFailedFoundExcludedUserId = 32747;
    // Get static field: static public System.Int32 JoinFailedFoundExcludedUserId
    static int _get_JoinFailedFoundExcludedUserId();
    // Set static field: static public System.Int32 JoinFailedFoundExcludedUserId
    static void _set_JoinFailedFoundExcludedUserId(int value);
    // static field const value: static public System.Int32 JoinFailedFoundActiveJoiner
    static constexpr const int JoinFailedFoundActiveJoiner = 32746;
    // Get static field: static public System.Int32 JoinFailedFoundActiveJoiner
    static int _get_JoinFailedFoundActiveJoiner();
    // Set static field: static public System.Int32 JoinFailedFoundActiveJoiner
    static void _set_JoinFailedFoundActiveJoiner(int value);
    // static field const value: static public System.Int32 HttpLimitReached
    static constexpr const int HttpLimitReached = 32745;
    // Get static field: static public System.Int32 HttpLimitReached
    static int _get_HttpLimitReached();
    // Set static field: static public System.Int32 HttpLimitReached
    static void _set_HttpLimitReached(int value);
    // static field const value: static public System.Int32 ExternalHttpCallFailed
    static constexpr const int ExternalHttpCallFailed = 32744;
    // Get static field: static public System.Int32 ExternalHttpCallFailed
    static int _get_ExternalHttpCallFailed();
    // Set static field: static public System.Int32 ExternalHttpCallFailed
    static void _set_ExternalHttpCallFailed(int value);
    // static field const value: static public System.Int32 OperationLimitReached
    static constexpr const int OperationLimitReached = 32743;
    // Get static field: static public System.Int32 OperationLimitReached
    static int _get_OperationLimitReached();
    // Set static field: static public System.Int32 OperationLimitReached
    static void _set_OperationLimitReached(int value);
    // static field const value: static public System.Int32 SlotError
    static constexpr const int SlotError = 32742;
    // Get static field: static public System.Int32 SlotError
    static int _get_SlotError();
    // Set static field: static public System.Int32 SlotError
    static void _set_SlotError(int value);
    // static field const value: static public System.Int32 InvalidEncryptionParameters
    static constexpr const int InvalidEncryptionParameters = 32741;
    // Get static field: static public System.Int32 InvalidEncryptionParameters
    static int _get_InvalidEncryptionParameters();
    // Set static field: static public System.Int32 InvalidEncryptionParameters
    static void _set_InvalidEncryptionParameters(int value);
    // public System.Void .ctor()
    // Offset: 0x2AF1024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorCode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::ErrorCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorCode*, creationType>()));
    }
  }; // Fusion.Photon.Realtime.ErrorCode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::ErrorCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!