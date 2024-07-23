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
  // Forward declaring type: DebugLightingFeatureFlags
  struct DebugLightingFeatureFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags, "UnityEngine.Rendering.Universal", "DebugLightingFeatureFlags");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugLightingFeatureFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateHLSL] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DebugLightingFeatureFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugLightingFeatureFlags
    constexpr DebugLightingFeatureFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags None
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags None
    static void _set_None(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags GlobalIllumination
    static constexpr const int GlobalIllumination = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags GlobalIllumination
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_GlobalIllumination();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags GlobalIllumination
    static void _set_GlobalIllumination(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags MainLight
    static constexpr const int MainLight = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags MainLight
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_MainLight();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags MainLight
    static void _set_MainLight(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AdditionalLights
    static constexpr const int AdditionalLights = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AdditionalLights
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_AdditionalLights();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AdditionalLights
    static void _set_AdditionalLights(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags VertexLighting
    static constexpr const int VertexLighting = 8;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags VertexLighting
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_VertexLighting();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags VertexLighting
    static void _set_VertexLighting(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags Emission
    static constexpr const int Emission = 16;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags Emission
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_Emission();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags Emission
    static void _set_Emission(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // static field const value: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AmbientOcclusion
    static constexpr const int AmbientOcclusion = 32;
    // Get static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AmbientOcclusion
    static ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags _get_AmbientOcclusion();
    // Set static field: static public UnityEngine.Rendering.Universal.DebugLightingFeatureFlags AmbientOcclusion
    static void _set_AmbientOcclusion(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DebugLightingFeatureFlags
  #pragma pack(pop)
  static check_size<sizeof(DebugLightingFeatureFlags), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DebugLightingFeatureFlagsSizeCheck;
  static_assert(sizeof(DebugLightingFeatureFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"