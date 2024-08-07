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
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: RenderDataDirtyTypeClasses
  struct RenderDataDirtyTypeClasses;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypeClasses");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderDataDirtyTypeClasses/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderDataDirtyTypeClasses
    constexpr RenderDataDirtyTypeClasses(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Clipping
    static constexpr const int Clipping = 0;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Clipping
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_Clipping();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Clipping
    static void _set_Clipping(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Opacity
    static constexpr const int Opacity = 1;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Opacity
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_Opacity();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Opacity
    static void _set_Opacity(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Color
    static constexpr const int Color = 2;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Color
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_Color();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Color
    static void _set_Color(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses TransformSize
    static constexpr const int TransformSize = 3;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses TransformSize
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_TransformSize();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses TransformSize
    static void _set_TransformSize(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Visuals
    static constexpr const int Visuals = 4;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Visuals
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_Visuals();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Visuals
    static void _set_Visuals(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // static field const value: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Count
    static constexpr const int Count = 5;
    // Get static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Count
    static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses _get_Count();
    // Set static field: static public UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses Count
    static void _set_Count(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses
  #pragma pack(pop)
  static check_size<sizeof(RenderDataDirtyTypeClasses), 0 + sizeof(int)> __UnityEngine_UIElements_UIR_RenderDataDirtyTypeClassesSizeCheck;
  static_assert(sizeof(RenderDataDirtyTypeClasses) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
