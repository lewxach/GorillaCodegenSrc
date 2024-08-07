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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Units
  struct Units;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Units, "Fusion", "Units");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Units
  // [TokenAttribute] Offset: FFFFFFFF
  struct Units/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Units
    constexpr Units(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.Units None
    static constexpr const int None = 0;
    // Get static field: static public Fusion.Units None
    static ::Fusion::Units _get_None();
    // Set static field: static public Fusion.Units None
    static void _set_None(::Fusion::Units value);
    // static field const value: static public Fusion.Units Ticks
    static constexpr const int Ticks = 1;
    // Get static field: static public Fusion.Units Ticks
    static ::Fusion::Units _get_Ticks();
    // Set static field: static public Fusion.Units Ticks
    static void _set_Ticks(::Fusion::Units value);
    // static field const value: static public Fusion.Units Seconds
    static constexpr const int Seconds = 2;
    // Get static field: static public Fusion.Units Seconds
    static ::Fusion::Units _get_Seconds();
    // Set static field: static public Fusion.Units Seconds
    static void _set_Seconds(::Fusion::Units value);
    // static field const value: static public Fusion.Units MilliSecs
    static constexpr const int MilliSecs = 3;
    // Get static field: static public Fusion.Units MilliSecs
    static ::Fusion::Units _get_MilliSecs();
    // Set static field: static public Fusion.Units MilliSecs
    static void _set_MilliSecs(::Fusion::Units value);
    // static field const value: static public Fusion.Units Kilobytes
    static constexpr const int Kilobytes = 4;
    // Get static field: static public Fusion.Units Kilobytes
    static ::Fusion::Units _get_Kilobytes();
    // Set static field: static public Fusion.Units Kilobytes
    static void _set_Kilobytes(::Fusion::Units value);
    // static field const value: static public Fusion.Units Megabytes
    static constexpr const int Megabytes = 5;
    // Get static field: static public Fusion.Units Megabytes
    static ::Fusion::Units _get_Megabytes();
    // Set static field: static public Fusion.Units Megabytes
    static void _set_Megabytes(::Fusion::Units value);
    // static field const value: static public Fusion.Units Normalized
    static constexpr const int Normalized = 6;
    // Get static field: static public Fusion.Units Normalized
    static ::Fusion::Units _get_Normalized();
    // Set static field: static public Fusion.Units Normalized
    static void _set_Normalized(::Fusion::Units value);
    // static field const value: static public Fusion.Units Multiplier
    static constexpr const int Multiplier = 7;
    // Get static field: static public Fusion.Units Multiplier
    static ::Fusion::Units _get_Multiplier();
    // Set static field: static public Fusion.Units Multiplier
    static void _set_Multiplier(::Fusion::Units value);
    // static field const value: static public Fusion.Units Percentage
    static constexpr const int Percentage = 8;
    // Get static field: static public Fusion.Units Percentage
    static ::Fusion::Units _get_Percentage();
    // Set static field: static public Fusion.Units Percentage
    static void _set_Percentage(::Fusion::Units value);
    // static field const value: static public Fusion.Units NormalizedPercentage
    static constexpr const int NormalizedPercentage = 9;
    // Get static field: static public Fusion.Units NormalizedPercentage
    static ::Fusion::Units _get_NormalizedPercentage();
    // Set static field: static public Fusion.Units NormalizedPercentage
    static void _set_NormalizedPercentage(::Fusion::Units value);
    // static field const value: static public Fusion.Units Degrees
    static constexpr const int Degrees = 10;
    // Get static field: static public Fusion.Units Degrees
    static ::Fusion::Units _get_Degrees();
    // Set static field: static public Fusion.Units Degrees
    static void _set_Degrees(::Fusion::Units value);
    // static field const value: static public Fusion.Units PerSecond
    static constexpr const int PerSecond = 11;
    // Get static field: static public Fusion.Units PerSecond
    static ::Fusion::Units _get_PerSecond();
    // Set static field: static public Fusion.Units PerSecond
    static void _set_PerSecond(::Fusion::Units value);
    // static field const value: static public Fusion.Units DegreesPerSecond
    static constexpr const int DegreesPerSecond = 12;
    // Get static field: static public Fusion.Units DegreesPerSecond
    static ::Fusion::Units _get_DegreesPerSecond();
    // Set static field: static public Fusion.Units DegreesPerSecond
    static void _set_DegreesPerSecond(::Fusion::Units value);
    // static field const value: static public Fusion.Units Radians
    static constexpr const int Radians = 13;
    // Get static field: static public Fusion.Units Radians
    static ::Fusion::Units _get_Radians();
    // Set static field: static public Fusion.Units Radians
    static void _set_Radians(::Fusion::Units value);
    // static field const value: static public Fusion.Units RadiansPerSecond
    static constexpr const int RadiansPerSecond = 14;
    // Get static field: static public Fusion.Units RadiansPerSecond
    static ::Fusion::Units _get_RadiansPerSecond();
    // Set static field: static public Fusion.Units RadiansPerSecond
    static void _set_RadiansPerSecond(::Fusion::Units value);
    // static field const value: static public Fusion.Units TicksPerSecond
    static constexpr const int TicksPerSecond = 15;
    // Get static field: static public Fusion.Units TicksPerSecond
    static ::Fusion::Units _get_TicksPerSecond();
    // Set static field: static public Fusion.Units TicksPerSecond
    static void _set_TicksPerSecond(::Fusion::Units value);
    // static field const value: static public Fusion.Units Units
    static constexpr const int _Units = 16;
    // Get static field: static public Fusion.Units Units
    static ::Fusion::Units _get_Units();
    // Set static field: static public Fusion.Units Units
    static void _set_Units(::Fusion::Units value);
    // static field const value: static public Fusion.Units Bytes
    static constexpr const int Bytes = 17;
    // Get static field: static public Fusion.Units Bytes
    static ::Fusion::Units _get_Bytes();
    // Set static field: static public Fusion.Units Bytes
    static void _set_Bytes(::Fusion::Units value);
    // static field const value: static public Fusion.Units Count
    static constexpr const int Count = 18;
    // Get static field: static public Fusion.Units Count
    static ::Fusion::Units _get_Count();
    // Set static field: static public Fusion.Units Count
    static void _set_Count(::Fusion::Units value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.Units
  #pragma pack(pop)
  static check_size<sizeof(Units), 0 + sizeof(int)> __Fusion_UnitsSizeCheck;
  static_assert(sizeof(Units) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
