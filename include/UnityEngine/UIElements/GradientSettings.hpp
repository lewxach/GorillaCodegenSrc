// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.GradientType
#include "UnityEngine/UIElements/GradientType.hpp"
// Including type: UnityEngine.UIElements.AddressMode
#include "UnityEngine/UIElements/AddressMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.RectInt
#include "UnityEngine/RectInt.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: GradientSettings
  struct GradientSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GradientSettings, "UnityEngine.UIElements", "GradientSettings");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.GradientSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct GradientSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.UIElements.GradientType gradientType
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::GradientType gradientType;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::GradientType) == 0x4);
    // public UnityEngine.UIElements.AddressMode addressMode
    // Size: 0x4
    // Offset: 0x4
    ::UnityEngine::UIElements::AddressMode addressMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::AddressMode) == 0x4);
    // public UnityEngine.Vector2 radialFocus
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 radialFocus;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.RectInt location
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::RectInt location;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectInt) == 0x10);
    public:
    // Creating value type constructor for type: GradientSettings
    constexpr GradientSettings(::UnityEngine::UIElements::GradientType gradientType_ = {}, ::UnityEngine::UIElements::AddressMode addressMode_ = {}, ::UnityEngine::Vector2 radialFocus_ = {}, ::UnityEngine::RectInt location_ = {}) noexcept : gradientType{gradientType_}, addressMode{addressMode_}, radialFocus{radialFocus_}, location{location_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.UIElements.GradientType gradientType
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::GradientType& dyn_gradientType();
    // Get instance field reference: public UnityEngine.UIElements.AddressMode addressMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::AddressMode& dyn_addressMode();
    // Get instance field reference: public UnityEngine.Vector2 radialFocus
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_radialFocus();
    // Get instance field reference: public UnityEngine.RectInt location
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectInt& dyn_location();
  }; // UnityEngine.UIElements.GradientSettings
  #pragma pack(pop)
  static check_size<sizeof(GradientSettings), 16 + sizeof(::UnityEngine::RectInt)> __UnityEngine_UIElements_GradientSettingsSizeCheck;
  static_assert(sizeof(GradientSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
