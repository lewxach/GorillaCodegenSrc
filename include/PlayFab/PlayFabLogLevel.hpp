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
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabLogLevel
  struct PlayFabLogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabLogLevel, "PlayFab", "PlayFabLogLevel");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PlayFabLogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayFabLogLevel
    constexpr PlayFabLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.PlayFabLogLevel None
    static constexpr const int None = 0;
    // Get static field: static public PlayFab.PlayFabLogLevel None
    static ::PlayFab::PlayFabLogLevel _get_None();
    // Set static field: static public PlayFab.PlayFabLogLevel None
    static void _set_None(::PlayFab::PlayFabLogLevel value);
    // static field const value: static public PlayFab.PlayFabLogLevel Debug
    static constexpr const int Debug = 1;
    // Get static field: static public PlayFab.PlayFabLogLevel Debug
    static ::PlayFab::PlayFabLogLevel _get_Debug();
    // Set static field: static public PlayFab.PlayFabLogLevel Debug
    static void _set_Debug(::PlayFab::PlayFabLogLevel value);
    // static field const value: static public PlayFab.PlayFabLogLevel Info
    static constexpr const int Info = 2;
    // Get static field: static public PlayFab.PlayFabLogLevel Info
    static ::PlayFab::PlayFabLogLevel _get_Info();
    // Set static field: static public PlayFab.PlayFabLogLevel Info
    static void _set_Info(::PlayFab::PlayFabLogLevel value);
    // static field const value: static public PlayFab.PlayFabLogLevel Warning
    static constexpr const int Warning = 4;
    // Get static field: static public PlayFab.PlayFabLogLevel Warning
    static ::PlayFab::PlayFabLogLevel _get_Warning();
    // Set static field: static public PlayFab.PlayFabLogLevel Warning
    static void _set_Warning(::PlayFab::PlayFabLogLevel value);
    // static field const value: static public PlayFab.PlayFabLogLevel Error
    static constexpr const int Error = 8;
    // Get static field: static public PlayFab.PlayFabLogLevel Error
    static ::PlayFab::PlayFabLogLevel _get_Error();
    // Set static field: static public PlayFab.PlayFabLogLevel Error
    static void _set_Error(::PlayFab::PlayFabLogLevel value);
    // static field const value: static public PlayFab.PlayFabLogLevel All
    static constexpr const int All = 15;
    // Get static field: static public PlayFab.PlayFabLogLevel All
    static ::PlayFab::PlayFabLogLevel _get_All();
    // Set static field: static public PlayFab.PlayFabLogLevel All
    static void _set_All(::PlayFab::PlayFabLogLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.PlayFabLogLevel
  #pragma pack(pop)
  static check_size<sizeof(PlayFabLogLevel), 0 + sizeof(int)> __PlayFab_PlayFabLogLevelSizeCheck;
  static_assert(sizeof(PlayFabLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"