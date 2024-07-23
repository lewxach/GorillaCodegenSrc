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
  // Forward declaring type: PixelValidationChannels
  struct PixelValidationChannels;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PixelValidationChannels, "UnityEngine.Rendering.Universal", "PixelValidationChannels");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.PixelValidationChannels
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateHLSL] Offset: FFFFFFFF
  struct PixelValidationChannels/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PixelValidationChannels
    constexpr PixelValidationChannels(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.PixelValidationChannels RGB
    static constexpr const int RGB = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels RGB
    static ::UnityEngine::Rendering::Universal::PixelValidationChannels _get_RGB();
    // Set static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels RGB
    static void _set_RGB(::UnityEngine::Rendering::Universal::PixelValidationChannels value);
    // static field const value: static public UnityEngine.Rendering.Universal.PixelValidationChannels R
    static constexpr const int R = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels R
    static ::UnityEngine::Rendering::Universal::PixelValidationChannels _get_R();
    // Set static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels R
    static void _set_R(::UnityEngine::Rendering::Universal::PixelValidationChannels value);
    // static field const value: static public UnityEngine.Rendering.Universal.PixelValidationChannels G
    static constexpr const int G = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels G
    static ::UnityEngine::Rendering::Universal::PixelValidationChannels _get_G();
    // Set static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels G
    static void _set_G(::UnityEngine::Rendering::Universal::PixelValidationChannels value);
    // static field const value: static public UnityEngine.Rendering.Universal.PixelValidationChannels B
    static constexpr const int B = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels B
    static ::UnityEngine::Rendering::Universal::PixelValidationChannels _get_B();
    // Set static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels B
    static void _set_B(::UnityEngine::Rendering::Universal::PixelValidationChannels value);
    // static field const value: static public UnityEngine.Rendering.Universal.PixelValidationChannels A
    static constexpr const int A = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels A
    static ::UnityEngine::Rendering::Universal::PixelValidationChannels _get_A();
    // Set static field: static public UnityEngine.Rendering.Universal.PixelValidationChannels A
    static void _set_A(::UnityEngine::Rendering::Universal::PixelValidationChannels value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.PixelValidationChannels
  #pragma pack(pop)
  static check_size<sizeof(PixelValidationChannels), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_PixelValidationChannelsSizeCheck;
  static_assert(sizeof(PixelValidationChannels) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"