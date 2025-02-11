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
  // Forward declaring type: ShadowCascadesOption
  struct ShadowCascadesOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowCascadesOption, "UnityEngine.Rendering.Universal", "ShadowCascadesOption");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ShadowCascadesOption
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct ShadowCascadesOption/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShadowCascadesOption
    constexpr ShadowCascadesOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.ShadowCascadesOption NoCascades
    static constexpr const int NoCascades = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption NoCascades
    static ::UnityEngine::Rendering::Universal::ShadowCascadesOption _get_NoCascades();
    // Set static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption NoCascades
    static void _set_NoCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShadowCascadesOption TwoCascades
    static constexpr const int TwoCascades = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption TwoCascades
    static ::UnityEngine::Rendering::Universal::ShadowCascadesOption _get_TwoCascades();
    // Set static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption TwoCascades
    static void _set_TwoCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);
    // static field const value: static public UnityEngine.Rendering.Universal.ShadowCascadesOption FourCascades
    static constexpr const int FourCascades = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption FourCascades
    static ::UnityEngine::Rendering::Universal::ShadowCascadesOption _get_FourCascades();
    // Set static field: static public UnityEngine.Rendering.Universal.ShadowCascadesOption FourCascades
    static void _set_FourCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.ShadowCascadesOption
  #pragma pack(pop)
  static check_size<sizeof(ShadowCascadesOption), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_ShadowCascadesOptionSizeCheck;
  static_assert(sizeof(ShadowCascadesOption) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
