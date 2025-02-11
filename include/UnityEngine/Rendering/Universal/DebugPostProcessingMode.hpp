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
  // Forward declaring type: DebugPostProcessingMode
  struct DebugPostProcessingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugPostProcessingMode, "UnityEngine.Rendering.Universal", "DebugPostProcessingMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugPostProcessingMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateHLSL] Offset: FFFFFFFF
  struct DebugPostProcessingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugPostProcessingMode
    constexpr DebugPostProcessingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Disabled
    static ::UnityEngine::Rendering::Universal::DebugPostProcessingMode _get_Disabled();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Disabled
    static void _set_Disabled(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Auto
    static constexpr const int Auto = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Auto
    static ::UnityEngine::Rendering::Universal::DebugPostProcessingMode _get_Auto();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Auto
    static void _set_Auto(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Enabled
    static constexpr const int Enabled = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Enabled
    static ::UnityEngine::Rendering::Universal::DebugPostProcessingMode _get_Enabled();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugPostProcessingMode Enabled
    static void _set_Enabled(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DebugPostProcessingMode
  #pragma pack(pop)
  static check_size<sizeof(DebugPostProcessingMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DebugPostProcessingModeSizeCheck;
  static_assert(sizeof(DebugPostProcessingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
