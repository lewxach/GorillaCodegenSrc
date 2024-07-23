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
  // Forward declaring type: DebugWireframeMode
  struct DebugWireframeMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugWireframeMode, "UnityEngine.Rendering.Universal", "DebugWireframeMode");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugWireframeMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct DebugWireframeMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugWireframeMode
    constexpr DebugWireframeMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DebugWireframeMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode None
    static ::UnityEngine::Rendering::Universal::DebugWireframeMode _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode None
    static void _set_None(::UnityEngine::Rendering::Universal::DebugWireframeMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugWireframeMode Wireframe
    static constexpr const int Wireframe = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode Wireframe
    static ::UnityEngine::Rendering::Universal::DebugWireframeMode _get_Wireframe();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode Wireframe
    static void _set_Wireframe(::UnityEngine::Rendering::Universal::DebugWireframeMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugWireframeMode SolidWireframe
    static constexpr const int SolidWireframe = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode SolidWireframe
    static ::UnityEngine::Rendering::Universal::DebugWireframeMode _get_SolidWireframe();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode SolidWireframe
    static void _set_SolidWireframe(::UnityEngine::Rendering::Universal::DebugWireframeMode value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugWireframeMode ShadedWireframe
    static constexpr const int ShadedWireframe = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode ShadedWireframe
    static ::UnityEngine::Rendering::Universal::DebugWireframeMode _get_ShadedWireframe();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugWireframeMode ShadedWireframe
    static void _set_ShadedWireframe(::UnityEngine::Rendering::Universal::DebugWireframeMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DebugWireframeMode
  #pragma pack(pop)
  static check_size<sizeof(DebugWireframeMode), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DebugWireframeModeSizeCheck;
  static_assert(sizeof(DebugWireframeMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"