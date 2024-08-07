// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Examples.ProceduralWorld
#include "Pathfinding/Examples/ProceduralWorld.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::ProceduralWorld::RotationRandomness, "Pathfinding.Examples", "ProceduralWorld/RotationRandomness");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.ProceduralWorld/RotationRandomness
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProceduralWorld::RotationRandomness/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RotationRandomness
    constexpr RotationRandomness(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness AllAxes
    static constexpr const int AllAxes = 0;
    // Get static field: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness AllAxes
    static ::Pathfinding::Examples::ProceduralWorld::RotationRandomness _get_AllAxes();
    // Set static field: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness AllAxes
    static void _set_AllAxes(::Pathfinding::Examples::ProceduralWorld::RotationRandomness value);
    // static field const value: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness Y
    static constexpr const int Y = 1;
    // Get static field: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness Y
    static ::Pathfinding::Examples::ProceduralWorld::RotationRandomness _get_Y();
    // Set static field: static public Pathfinding.Examples.ProceduralWorld/RotationRandomness Y
    static void _set_Y(::Pathfinding::Examples::ProceduralWorld::RotationRandomness value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Examples.ProceduralWorld/RotationRandomness
  #pragma pack(pop)
  static check_size<sizeof(ProceduralWorld::RotationRandomness), 0 + sizeof(int)> __Pathfinding_Examples_ProceduralWorld_RotationRandomnessSizeCheck;
  static_assert(sizeof(ProceduralWorld::RotationRandomness) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
