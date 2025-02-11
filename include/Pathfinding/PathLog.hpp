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
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PathLog
  struct PathLog;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PathLog, "Pathfinding", "PathLog");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PathLog
  // [TokenAttribute] Offset: FFFFFFFF
  struct PathLog/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PathLog
    constexpr PathLog(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.PathLog None
    static constexpr const int None = 0;
    // Get static field: static public Pathfinding.PathLog None
    static ::Pathfinding::PathLog _get_None();
    // Set static field: static public Pathfinding.PathLog None
    static void _set_None(::Pathfinding::PathLog value);
    // static field const value: static public Pathfinding.PathLog Normal
    static constexpr const int Normal = 1;
    // Get static field: static public Pathfinding.PathLog Normal
    static ::Pathfinding::PathLog _get_Normal();
    // Set static field: static public Pathfinding.PathLog Normal
    static void _set_Normal(::Pathfinding::PathLog value);
    // static field const value: static public Pathfinding.PathLog Heavy
    static constexpr const int Heavy = 2;
    // Get static field: static public Pathfinding.PathLog Heavy
    static ::Pathfinding::PathLog _get_Heavy();
    // Set static field: static public Pathfinding.PathLog Heavy
    static void _set_Heavy(::Pathfinding::PathLog value);
    // static field const value: static public Pathfinding.PathLog InGame
    static constexpr const int InGame = 3;
    // Get static field: static public Pathfinding.PathLog InGame
    static ::Pathfinding::PathLog _get_InGame();
    // Set static field: static public Pathfinding.PathLog InGame
    static void _set_InGame(::Pathfinding::PathLog value);
    // static field const value: static public Pathfinding.PathLog OnlyErrors
    static constexpr const int OnlyErrors = 4;
    // Get static field: static public Pathfinding.PathLog OnlyErrors
    static ::Pathfinding::PathLog _get_OnlyErrors();
    // Set static field: static public Pathfinding.PathLog OnlyErrors
    static void _set_OnlyErrors(::Pathfinding::PathLog value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.PathLog
  #pragma pack(pop)
  static check_size<sizeof(PathLog), 0 + sizeof(int)> __Pathfinding_PathLogSizeCheck;
  static_assert(sizeof(PathLog) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
