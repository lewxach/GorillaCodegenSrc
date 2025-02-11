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
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TargetPriorityMode
  struct TargetPriorityMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode, "UnityEngine.XR.Interaction.Toolkit", "TargetPriorityMode");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TargetPriorityMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TargetPriorityMode
    constexpr TargetPriorityMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode None
    static ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode _get_None();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode None
    static void _set_None(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode HighestPriorityOnly
    static constexpr const int HighestPriorityOnly = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode HighestPriorityOnly
    static ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode _get_HighestPriorityOnly();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode HighestPriorityOnly
    static void _set_HighestPriorityOnly(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode All
    static constexpr const int All = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode All
    static ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode _get_All();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode All
    static void _set_All(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode
  #pragma pack(pop)
  static check_size<sizeof(TargetPriorityMode), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_TargetPriorityModeSizeCheck;
  static_assert(sizeof(TargetPriorityMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
