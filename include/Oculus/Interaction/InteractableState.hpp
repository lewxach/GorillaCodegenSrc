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
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: InteractableState
  struct InteractableState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::InteractableState, "Oculus.Interaction", "InteractableState");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.InteractableState
  // [TokenAttribute] Offset: FFFFFFFF
  struct InteractableState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InteractableState
    constexpr InteractableState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.InteractableState Normal
    static constexpr const int Normal = 0;
    // Get static field: static public Oculus.Interaction.InteractableState Normal
    static ::Oculus::Interaction::InteractableState _get_Normal();
    // Set static field: static public Oculus.Interaction.InteractableState Normal
    static void _set_Normal(::Oculus::Interaction::InteractableState value);
    // static field const value: static public Oculus.Interaction.InteractableState Hover
    static constexpr const int Hover = 1;
    // Get static field: static public Oculus.Interaction.InteractableState Hover
    static ::Oculus::Interaction::InteractableState _get_Hover();
    // Set static field: static public Oculus.Interaction.InteractableState Hover
    static void _set_Hover(::Oculus::Interaction::InteractableState value);
    // static field const value: static public Oculus.Interaction.InteractableState Select
    static constexpr const int Select = 2;
    // Get static field: static public Oculus.Interaction.InteractableState Select
    static ::Oculus::Interaction::InteractableState _get_Select();
    // Set static field: static public Oculus.Interaction.InteractableState Select
    static void _set_Select(::Oculus::Interaction::InteractableState value);
    // static field const value: static public Oculus.Interaction.InteractableState Disabled
    static constexpr const int Disabled = 3;
    // Get static field: static public Oculus.Interaction.InteractableState Disabled
    static ::Oculus::Interaction::InteractableState _get_Disabled();
    // Set static field: static public Oculus.Interaction.InteractableState Disabled
    static void _set_Disabled(::Oculus::Interaction::InteractableState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.InteractableState
  #pragma pack(pop)
  static check_size<sizeof(InteractableState), 0 + sizeof(int)> __Oculus_Interaction_InteractableStateSizeCheck;
  static_assert(sizeof(InteractableState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
