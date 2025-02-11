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
  // Forward declaring type: ImageUpscalingFilter
  struct ImageUpscalingFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ImageUpscalingFilter, "UnityEngine.Rendering.Universal", "ImageUpscalingFilter");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ImageUpscalingFilter
  // [TokenAttribute] Offset: FFFFFFFF
  struct ImageUpscalingFilter/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ImageUpscalingFilter
    constexpr ImageUpscalingFilter(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Linear
    static constexpr const int Linear = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Linear
    static ::UnityEngine::Rendering::Universal::ImageUpscalingFilter _get_Linear();
    // Set static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Linear
    static void _set_Linear(::UnityEngine::Rendering::Universal::ImageUpscalingFilter value);
    // static field const value: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Point
    static constexpr const int Point = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Point
    static ::UnityEngine::Rendering::Universal::ImageUpscalingFilter _get_Point();
    // Set static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter Point
    static void _set_Point(::UnityEngine::Rendering::Universal::ImageUpscalingFilter value);
    // static field const value: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter FSR
    static constexpr const int FSR = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter FSR
    static ::UnityEngine::Rendering::Universal::ImageUpscalingFilter _get_FSR();
    // Set static field: static public UnityEngine.Rendering.Universal.ImageUpscalingFilter FSR
    static void _set_FSR(::UnityEngine::Rendering::Universal::ImageUpscalingFilter value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.ImageUpscalingFilter
  #pragma pack(pop)
  static check_size<sizeof(ImageUpscalingFilter), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ImageUpscalingFilterSizeCheck;
  static_assert(sizeof(ImageUpscalingFilter) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
