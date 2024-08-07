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
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Direction
  struct Direction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Direction, "UnityEngine.Rendering.Universal", "Direction");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Direction
  // [TokenAttribute] Offset: FFFFFFFF
  struct Direction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Direction
    constexpr Direction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.Direction dRightToLeft
    static constexpr const int dRightToLeft = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.Direction dRightToLeft
    static ::UnityEngine::Rendering::Universal::Direction _get_dRightToLeft();
    // Set static field: static public UnityEngine.Rendering.Universal.Direction dRightToLeft
    static void _set_dRightToLeft(::UnityEngine::Rendering::Universal::Direction value);
    // static field const value: static public UnityEngine.Rendering.Universal.Direction dLeftToRight
    static constexpr const int dLeftToRight = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.Direction dLeftToRight
    static ::UnityEngine::Rendering::Universal::Direction _get_dLeftToRight();
    // Set static field: static public UnityEngine.Rendering.Universal.Direction dLeftToRight
    static void _set_dLeftToRight(::UnityEngine::Rendering::Universal::Direction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.Direction
  #pragma pack(pop)
  static check_size<sizeof(Direction), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DirectionSizeCheck;
  static_assert(sizeof(Direction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
