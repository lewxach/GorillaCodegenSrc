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
  // Forward declaring type: DecalTechnique
  struct DecalTechnique;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalTechnique, "UnityEngine.Rendering.Universal", "DecalTechnique");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalTechnique
  // [TokenAttribute] Offset: FFFFFFFF
  struct DecalTechnique/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DecalTechnique
    constexpr DecalTechnique(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.DecalTechnique Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalTechnique Invalid
    static ::UnityEngine::Rendering::Universal::DecalTechnique _get_Invalid();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalTechnique Invalid
    static void _set_Invalid(::UnityEngine::Rendering::Universal::DecalTechnique value);
    // static field const value: static public UnityEngine.Rendering.Universal.DecalTechnique DBuffer
    static constexpr const int DBuffer = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalTechnique DBuffer
    static ::UnityEngine::Rendering::Universal::DecalTechnique _get_DBuffer();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalTechnique DBuffer
    static void _set_DBuffer(::UnityEngine::Rendering::Universal::DecalTechnique value);
    // static field const value: static public UnityEngine.Rendering.Universal.DecalTechnique ScreenSpace
    static constexpr const int ScreenSpace = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalTechnique ScreenSpace
    static ::UnityEngine::Rendering::Universal::DecalTechnique _get_ScreenSpace();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalTechnique ScreenSpace
    static void _set_ScreenSpace(::UnityEngine::Rendering::Universal::DecalTechnique value);
    // static field const value: static public UnityEngine.Rendering.Universal.DecalTechnique GBuffer
    static constexpr const int GBuffer = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.DecalTechnique GBuffer
    static ::UnityEngine::Rendering::Universal::DecalTechnique _get_GBuffer();
    // Set static field: static public UnityEngine.Rendering.Universal.DecalTechnique GBuffer
    static void _set_GBuffer(::UnityEngine::Rendering::Universal::DecalTechnique value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.DecalTechnique
  #pragma pack(pop)
  static check_size<sizeof(DecalTechnique), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_DecalTechniqueSizeCheck;
  static_assert(sizeof(DecalTechnique) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
