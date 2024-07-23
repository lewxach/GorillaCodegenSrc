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
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: TriangulationAlgorithm
  struct TriangulationAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::TriangulationAlgorithm, "Pathfinding.Poly2Tri", "TriangulationAlgorithm");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.TriangulationAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  struct TriangulationAlgorithm/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TriangulationAlgorithm
    constexpr TriangulationAlgorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Poly2Tri.TriangulationAlgorithm DTSweep
    static constexpr const int DTSweep = 0;
    // Get static field: static public Pathfinding.Poly2Tri.TriangulationAlgorithm DTSweep
    static ::Pathfinding::Poly2Tri::TriangulationAlgorithm _get_DTSweep();
    // Set static field: static public Pathfinding.Poly2Tri.TriangulationAlgorithm DTSweep
    static void _set_DTSweep(::Pathfinding::Poly2Tri::TriangulationAlgorithm value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Poly2Tri.TriangulationAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(TriangulationAlgorithm), 0 + sizeof(int)> __Pathfinding_Poly2Tri_TriangulationAlgorithmSizeCheck;
  static_assert(sizeof(TriangulationAlgorithm) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"