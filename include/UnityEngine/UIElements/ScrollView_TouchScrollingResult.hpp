// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ScrollView
#include "UnityEngine/UIElements/ScrollView.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView::TouchScrollingResult, "UnityEngine.UIElements", "ScrollView/TouchScrollingResult");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ScrollView/TouchScrollingResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScrollView::TouchScrollingResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TouchScrollingResult
    constexpr TouchScrollingResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Apply
    static constexpr const int Apply = 0;
    // Get static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Apply
    static ::UnityEngine::UIElements::ScrollView::TouchScrollingResult _get_Apply();
    // Set static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Apply
    static void _set_Apply(::UnityEngine::UIElements::ScrollView::TouchScrollingResult value);
    // static field const value: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Forward
    static constexpr const int Forward = 1;
    // Get static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Forward
    static ::UnityEngine::UIElements::ScrollView::TouchScrollingResult _get_Forward();
    // Set static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Forward
    static void _set_Forward(::UnityEngine::UIElements::ScrollView::TouchScrollingResult value);
    // static field const value: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Block
    static constexpr const int Block = 2;
    // Get static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Block
    static ::UnityEngine::UIElements::ScrollView::TouchScrollingResult _get_Block();
    // Set static field: static public UnityEngine.UIElements.ScrollView/TouchScrollingResult Block
    static void _set_Block(::UnityEngine::UIElements::ScrollView::TouchScrollingResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.ScrollView/TouchScrollingResult
  #pragma pack(pop)
  static check_size<sizeof(ScrollView::TouchScrollingResult), 0 + sizeof(int)> __UnityEngine_UIElements_ScrollView_TouchScrollingResultSizeCheck;
  static_assert(sizeof(ScrollView::TouchScrollingResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"