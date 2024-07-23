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
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: JointFreedom
  struct JointFreedom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::JointFreedom, "Oculus.Interaction.Input", "JointFreedom");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.JointFreedom
  // [TokenAttribute] Offset: FFFFFFFF
  struct JointFreedom/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JointFreedom
    constexpr JointFreedom(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.Input.JointFreedom Free
    static constexpr const int Free = 0;
    // Get static field: static public Oculus.Interaction.Input.JointFreedom Free
    static ::Oculus::Interaction::Input::JointFreedom _get_Free();
    // Set static field: static public Oculus.Interaction.Input.JointFreedom Free
    static void _set_Free(::Oculus::Interaction::Input::JointFreedom value);
    // static field const value: static public Oculus.Interaction.Input.JointFreedom Constrained
    static constexpr const int Constrained = 1;
    // Get static field: static public Oculus.Interaction.Input.JointFreedom Constrained
    static ::Oculus::Interaction::Input::JointFreedom _get_Constrained();
    // Set static field: static public Oculus.Interaction.Input.JointFreedom Constrained
    static void _set_Constrained(::Oculus::Interaction::Input::JointFreedom value);
    // static field const value: static public Oculus.Interaction.Input.JointFreedom Locked
    static constexpr const int Locked = 2;
    // Get static field: static public Oculus.Interaction.Input.JointFreedom Locked
    static ::Oculus::Interaction::Input::JointFreedom _get_Locked();
    // Set static field: static public Oculus.Interaction.Input.JointFreedom Locked
    static void _set_Locked(::Oculus::Interaction::Input::JointFreedom value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.Input.JointFreedom
  #pragma pack(pop)
  static check_size<sizeof(JointFreedom), 0 + sizeof(int)> __Oculus_Interaction_Input_JointFreedomSizeCheck;
  static_assert(sizeof(JointFreedom) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"