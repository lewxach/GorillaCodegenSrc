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
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Forward declaring type: ControllerButton
  struct ControllerButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "ControllerButton");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton
  // [TokenAttribute] Offset: FFFFFFFF
  struct ControllerButton/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ControllerButton
    constexpr ControllerButton(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryButton
    static constexpr const int PrimaryButton = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryButton
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_PrimaryButton();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryButton
    static void _set_PrimaryButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryTouch
    static constexpr const int PrimaryTouch = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryTouch
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_PrimaryTouch();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton PrimaryTouch
    static void _set_PrimaryTouch(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryButton
    static constexpr const int SecondaryButton = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryButton
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_SecondaryButton();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryButton
    static void _set_SecondaryButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryTouch
    static constexpr const int SecondaryTouch = 3;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryTouch
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_SecondaryTouch();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton SecondaryTouch
    static void _set_SecondaryTouch(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton GripButton
    static constexpr const int GripButton = 4;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton GripButton
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_GripButton();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton GripButton
    static void _set_GripButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton TriggerButton
    static constexpr const int TriggerButton = 5;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton TriggerButton
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_TriggerButton();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton TriggerButton
    static void _set_TriggerButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton MenuButton
    static constexpr const int MenuButton = 6;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton MenuButton
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_MenuButton();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton MenuButton
    static void _set_MenuButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisClick
    static constexpr const int Primary2DAxisClick = 7;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisClick
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_Primary2DAxisClick();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisClick
    static void _set_Primary2DAxisClick(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisTouch
    static constexpr const int Primary2DAxisTouch = 8;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisTouch
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_Primary2DAxisTouch();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Primary2DAxisTouch
    static void _set_Primary2DAxisTouch(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisClick
    static constexpr const int Secondary2DAxisClick = 9;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisClick
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_Secondary2DAxisClick();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisClick
    static void _set_Secondary2DAxisClick(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisTouch
    static constexpr const int Secondary2DAxisTouch = 10;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisTouch
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_Secondary2DAxisTouch();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton Secondary2DAxisTouch
    static void _set_Secondary2DAxisTouch(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton UserPresence
    static constexpr const int UserPresence = 11;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton UserPresence
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton _get_UserPresence();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton UserPresence
    static void _set_UserPresence(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton
  #pragma pack(pop)
  static check_size<sizeof(ControllerButton), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_ControllerButtonSizeCheck;
  static_assert(sizeof(ControllerButton) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
