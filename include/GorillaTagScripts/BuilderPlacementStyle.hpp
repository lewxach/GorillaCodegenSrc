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
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: BuilderPlacementStyle
  struct BuilderPlacementStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::BuilderPlacementStyle, "GorillaTagScripts", "BuilderPlacementStyle");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.BuilderPlacementStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct BuilderPlacementStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BuilderPlacementStyle
    constexpr BuilderPlacementStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaTagScripts.BuilderPlacementStyle Float
    static constexpr const int Float = 0;
    // Get static field: static public GorillaTagScripts.BuilderPlacementStyle Float
    static ::GorillaTagScripts::BuilderPlacementStyle _get_Float();
    // Set static field: static public GorillaTagScripts.BuilderPlacementStyle Float
    static void _set_Float(::GorillaTagScripts::BuilderPlacementStyle value);
    // static field const value: static public GorillaTagScripts.BuilderPlacementStyle SnapDown
    static constexpr const int SnapDown = 1;
    // Get static field: static public GorillaTagScripts.BuilderPlacementStyle SnapDown
    static ::GorillaTagScripts::BuilderPlacementStyle _get_SnapDown();
    // Set static field: static public GorillaTagScripts.BuilderPlacementStyle SnapDown
    static void _set_SnapDown(::GorillaTagScripts::BuilderPlacementStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaTagScripts.BuilderPlacementStyle
  #pragma pack(pop)
  static check_size<sizeof(BuilderPlacementStyle), 0 + sizeof(int)> __GorillaTagScripts_BuilderPlacementStyleSizeCheck;
  static_assert(sizeof(BuilderPlacementStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"