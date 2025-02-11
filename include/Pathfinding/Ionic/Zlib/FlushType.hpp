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
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: FlushType
  struct FlushType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::FlushType, "Pathfinding.Ionic.Zlib", "FlushType");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.FlushType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FlushType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FlushType
    constexpr FlushType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zlib.FlushType None
    static constexpr const int None = 0;
    // Get static field: static public Pathfinding.Ionic.Zlib.FlushType None
    static ::Pathfinding::Ionic::Zlib::FlushType _get_None();
    // Set static field: static public Pathfinding.Ionic.Zlib.FlushType None
    static void _set_None(::Pathfinding::Ionic::Zlib::FlushType value);
    // static field const value: static public Pathfinding.Ionic.Zlib.FlushType Partial
    static constexpr const int Partial = 1;
    // Get static field: static public Pathfinding.Ionic.Zlib.FlushType Partial
    static ::Pathfinding::Ionic::Zlib::FlushType _get_Partial();
    // Set static field: static public Pathfinding.Ionic.Zlib.FlushType Partial
    static void _set_Partial(::Pathfinding::Ionic::Zlib::FlushType value);
    // static field const value: static public Pathfinding.Ionic.Zlib.FlushType Sync
    static constexpr const int Sync = 2;
    // Get static field: static public Pathfinding.Ionic.Zlib.FlushType Sync
    static ::Pathfinding::Ionic::Zlib::FlushType _get_Sync();
    // Set static field: static public Pathfinding.Ionic.Zlib.FlushType Sync
    static void _set_Sync(::Pathfinding::Ionic::Zlib::FlushType value);
    // static field const value: static public Pathfinding.Ionic.Zlib.FlushType Full
    static constexpr const int Full = 3;
    // Get static field: static public Pathfinding.Ionic.Zlib.FlushType Full
    static ::Pathfinding::Ionic::Zlib::FlushType _get_Full();
    // Set static field: static public Pathfinding.Ionic.Zlib.FlushType Full
    static void _set_Full(::Pathfinding::Ionic::Zlib::FlushType value);
    // static field const value: static public Pathfinding.Ionic.Zlib.FlushType Finish
    static constexpr const int Finish = 4;
    // Get static field: static public Pathfinding.Ionic.Zlib.FlushType Finish
    static ::Pathfinding::Ionic::Zlib::FlushType _get_Finish();
    // Set static field: static public Pathfinding.Ionic.Zlib.FlushType Finish
    static void _set_Finish(::Pathfinding::Ionic::Zlib::FlushType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zlib.FlushType
  #pragma pack(pop)
  static check_size<sizeof(FlushType), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_FlushTypeSizeCheck;
  static_assert(sizeof(FlushType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
