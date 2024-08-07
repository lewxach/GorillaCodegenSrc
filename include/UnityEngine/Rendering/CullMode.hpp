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
  // Forward declaring type: CullMode
  struct CullMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullMode, "UnityEngine.Rendering", "CullMode");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CullMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct CullMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CullMode
    constexpr CullMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CullMode Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.CullMode Off
    static ::UnityEngine::Rendering::CullMode _get_Off();
    // Set static field: static public UnityEngine.Rendering.CullMode Off
    static void _set_Off(::UnityEngine::Rendering::CullMode value);
    // static field const value: static public UnityEngine.Rendering.CullMode Front
    static constexpr const int Front = 1;
    // Get static field: static public UnityEngine.Rendering.CullMode Front
    static ::UnityEngine::Rendering::CullMode _get_Front();
    // Set static field: static public UnityEngine.Rendering.CullMode Front
    static void _set_Front(::UnityEngine::Rendering::CullMode value);
    // static field const value: static public UnityEngine.Rendering.CullMode Back
    static constexpr const int Back = 2;
    // Get static field: static public UnityEngine.Rendering.CullMode Back
    static ::UnityEngine::Rendering::CullMode _get_Back();
    // Set static field: static public UnityEngine.Rendering.CullMode Back
    static void _set_Back(::UnityEngine::Rendering::CullMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.CullMode
  #pragma pack(pop)
  static check_size<sizeof(CullMode), 0 + sizeof(int)> __UnityEngine_Rendering_CullModeSizeCheck;
  static_assert(sizeof(CullMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
