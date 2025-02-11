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
// Type namespace: UnityEngine.InputSystem.Users
namespace UnityEngine::InputSystem::Users {
  // Forward declaring type: InputUserPairingOptions
  struct InputUserPairingOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserPairingOptions, "UnityEngine.InputSystem.Users", "InputUserPairingOptions");
// Type namespace: UnityEngine.InputSystem.Users
namespace UnityEngine::InputSystem::Users {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Users.InputUserPairingOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputUserPairingOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputUserPairingOptions
    constexpr InputUserPairingOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.Users.InputUserPairingOptions None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions None
    static ::UnityEngine::InputSystem::Users::InputUserPairingOptions _get_None();
    // Set static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions None
    static void _set_None(::UnityEngine::InputSystem::Users::InputUserPairingOptions value);
    // static field const value: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForcePlatformUserAccountSelection
    static constexpr const int ForcePlatformUserAccountSelection = 1;
    // Get static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForcePlatformUserAccountSelection
    static ::UnityEngine::InputSystem::Users::InputUserPairingOptions _get_ForcePlatformUserAccountSelection();
    // Set static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForcePlatformUserAccountSelection
    static void _set_ForcePlatformUserAccountSelection(::UnityEngine::InputSystem::Users::InputUserPairingOptions value);
    // static field const value: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForceNoPlatformUserAccountSelection
    static constexpr const int ForceNoPlatformUserAccountSelection = 2;
    // Get static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForceNoPlatformUserAccountSelection
    static ::UnityEngine::InputSystem::Users::InputUserPairingOptions _get_ForceNoPlatformUserAccountSelection();
    // Set static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions ForceNoPlatformUserAccountSelection
    static void _set_ForceNoPlatformUserAccountSelection(::UnityEngine::InputSystem::Users::InputUserPairingOptions value);
    // static field const value: static public UnityEngine.InputSystem.Users.InputUserPairingOptions UnpairCurrentDevicesFromUser
    static constexpr const int UnpairCurrentDevicesFromUser = 8;
    // Get static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions UnpairCurrentDevicesFromUser
    static ::UnityEngine::InputSystem::Users::InputUserPairingOptions _get_UnpairCurrentDevicesFromUser();
    // Set static field: static public UnityEngine.InputSystem.Users.InputUserPairingOptions UnpairCurrentDevicesFromUser
    static void _set_UnpairCurrentDevicesFromUser(::UnityEngine::InputSystem::Users::InputUserPairingOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.Users.InputUserPairingOptions
  #pragma pack(pop)
  static check_size<sizeof(InputUserPairingOptions), 0 + sizeof(int)> __UnityEngine_InputSystem_Users_InputUserPairingOptionsSizeCheck;
  static_assert(sizeof(InputUserPairingOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
