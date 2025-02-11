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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraLateLatchMatrixType
  struct CameraLateLatchMatrixType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraLateLatchMatrixType, "UnityEngine.Rendering", "CameraLateLatchMatrixType");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CameraLateLatchMatrixType
  // [TokenAttribute] Offset: FFFFFFFF
  struct CameraLateLatchMatrixType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraLateLatchMatrixType
    constexpr CameraLateLatchMatrixType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CameraLateLatchMatrixType View
    static constexpr const int View = 0;
    // Get static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType View
    static ::UnityEngine::Rendering::CameraLateLatchMatrixType _get_View();
    // Set static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType View
    static void _set_View(::UnityEngine::Rendering::CameraLateLatchMatrixType value);
    // static field const value: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseView
    static constexpr const int InverseView = 1;
    // Get static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseView
    static ::UnityEngine::Rendering::CameraLateLatchMatrixType _get_InverseView();
    // Set static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseView
    static void _set_InverseView(::UnityEngine::Rendering::CameraLateLatchMatrixType value);
    // static field const value: static public UnityEngine.Rendering.CameraLateLatchMatrixType ViewProjection
    static constexpr const int ViewProjection = 2;
    // Get static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType ViewProjection
    static ::UnityEngine::Rendering::CameraLateLatchMatrixType _get_ViewProjection();
    // Set static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType ViewProjection
    static void _set_ViewProjection(::UnityEngine::Rendering::CameraLateLatchMatrixType value);
    // static field const value: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseViewProjection
    static constexpr const int InverseViewProjection = 3;
    // Get static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseViewProjection
    static ::UnityEngine::Rendering::CameraLateLatchMatrixType _get_InverseViewProjection();
    // Set static field: static public UnityEngine.Rendering.CameraLateLatchMatrixType InverseViewProjection
    static void _set_InverseViewProjection(::UnityEngine::Rendering::CameraLateLatchMatrixType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.CameraLateLatchMatrixType
  #pragma pack(pop)
  static check_size<sizeof(CameraLateLatchMatrixType), 0 + sizeof(int)> __UnityEngine_Rendering_CameraLateLatchMatrixTypeSizeCheck;
  static_assert(sizeof(CameraLateLatchMatrixType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
