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
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: HandAlignType
  struct HandAlignType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::HandAlignType, "Oculus.Interaction.HandGrab", "HandAlignType");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.HandAlignType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HandAlignType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HandAlignType
    constexpr HandAlignType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.HandGrab.HandAlignType None
    static constexpr const int None = 0;
    // Get static field: static public Oculus.Interaction.HandGrab.HandAlignType None
    static ::Oculus::Interaction::HandGrab::HandAlignType _get_None();
    // Set static field: static public Oculus.Interaction.HandGrab.HandAlignType None
    static void _set_None(::Oculus::Interaction::HandGrab::HandAlignType value);
    // static field const value: static public Oculus.Interaction.HandGrab.HandAlignType AlignOnGrab
    static constexpr const int AlignOnGrab = 1;
    // Get static field: static public Oculus.Interaction.HandGrab.HandAlignType AlignOnGrab
    static ::Oculus::Interaction::HandGrab::HandAlignType _get_AlignOnGrab();
    // Set static field: static public Oculus.Interaction.HandGrab.HandAlignType AlignOnGrab
    static void _set_AlignOnGrab(::Oculus::Interaction::HandGrab::HandAlignType value);
    // static field const value: static public Oculus.Interaction.HandGrab.HandAlignType AttractOnHover
    static constexpr const int AttractOnHover = 2;
    // Get static field: static public Oculus.Interaction.HandGrab.HandAlignType AttractOnHover
    static ::Oculus::Interaction::HandGrab::HandAlignType _get_AttractOnHover();
    // Set static field: static public Oculus.Interaction.HandGrab.HandAlignType AttractOnHover
    static void _set_AttractOnHover(::Oculus::Interaction::HandGrab::HandAlignType value);
    // static field const value: static public Oculus.Interaction.HandGrab.HandAlignType AlignFingersOnHover
    static constexpr const int AlignFingersOnHover = 3;
    // Get static field: static public Oculus.Interaction.HandGrab.HandAlignType AlignFingersOnHover
    static ::Oculus::Interaction::HandGrab::HandAlignType _get_AlignFingersOnHover();
    // Set static field: static public Oculus.Interaction.HandGrab.HandAlignType AlignFingersOnHover
    static void _set_AlignFingersOnHover(::Oculus::Interaction::HandGrab::HandAlignType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.HandGrab.HandAlignType
  #pragma pack(pop)
  static check_size<sizeof(HandAlignType), 0 + sizeof(int)> __Oculus_Interaction_HandGrab_HandAlignTypeSizeCheck;
  static_assert(sizeof(HandAlignType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
