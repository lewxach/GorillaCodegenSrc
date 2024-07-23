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
  // Forward declaring type: MixedLightingSetup
  struct MixedLightingSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MixedLightingSetup, "UnityEngine.Rendering.Universal", "MixedLightingSetup");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.MixedLightingSetup
  // [TokenAttribute] Offset: FFFFFFFF
  struct MixedLightingSetup/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MixedLightingSetup
    constexpr MixedLightingSetup(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.MixedLightingSetup None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup None
    static ::UnityEngine::Rendering::Universal::MixedLightingSetup _get_None();
    // Set static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup None
    static void _set_None(::UnityEngine::Rendering::Universal::MixedLightingSetup value);
    // static field const value: static public UnityEngine.Rendering.Universal.MixedLightingSetup ShadowMask
    static constexpr const int ShadowMask = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup ShadowMask
    static ::UnityEngine::Rendering::Universal::MixedLightingSetup _get_ShadowMask();
    // Set static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup ShadowMask
    static void _set_ShadowMask(::UnityEngine::Rendering::Universal::MixedLightingSetup value);
    // static field const value: static public UnityEngine.Rendering.Universal.MixedLightingSetup Subtractive
    static constexpr const int Subtractive = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup Subtractive
    static ::UnityEngine::Rendering::Universal::MixedLightingSetup _get_Subtractive();
    // Set static field: static public UnityEngine.Rendering.Universal.MixedLightingSetup Subtractive
    static void _set_Subtractive(::UnityEngine::Rendering::Universal::MixedLightingSetup value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.MixedLightingSetup
  #pragma pack(pop)
  static check_size<sizeof(MixedLightingSetup), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_MixedLightingSetupSizeCheck;
  static_assert(sizeof(MixedLightingSetup) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"