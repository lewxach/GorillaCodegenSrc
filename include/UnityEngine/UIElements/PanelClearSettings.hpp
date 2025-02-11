// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PanelClearSettings
  struct PanelClearSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelClearSettings, "UnityEngine.UIElements", "PanelClearSettings");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.PanelClearSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct PanelClearSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean clearDepthStencil
    // Size: 0x1
    // Offset: 0x0
    bool clearDepthStencil;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean clearColor
    // Size: 0x1
    // Offset: 0x1
    bool clearColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clearColor and: color
    char __padding1[0x2] = {};
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x4
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating value type constructor for type: PanelClearSettings
    constexpr PanelClearSettings(bool clearDepthStencil_ = {}, bool clearColor_ = {}, ::UnityEngine::Color color_ = {}) noexcept : clearDepthStencil{clearDepthStencil_}, clearColor{clearColor_}, color{color_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean clearDepthStencil
    [[deprecated("Use field access instead!")]] bool& dyn_clearDepthStencil();
    // Get instance field reference: public System.Boolean clearColor
    [[deprecated("Use field access instead!")]] bool& dyn_clearColor();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
  }; // UnityEngine.UIElements.PanelClearSettings
  #pragma pack(pop)
  static check_size<sizeof(PanelClearSettings), 4 + sizeof(::UnityEngine::Color)> __UnityEngine_UIElements_PanelClearSettingsSizeCheck;
  static_assert(sizeof(PanelClearSettings) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
