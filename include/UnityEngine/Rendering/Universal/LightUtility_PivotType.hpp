// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LightUtility
#include "UnityEngine/Rendering/Universal/LightUtility.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightUtility::PivotType, "UnityEngine.Rendering.Universal", "LightUtility/PivotType");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LightUtility/PivotType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightUtility::PivotType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PivotType
    constexpr PivotType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotBase
    static constexpr const int PivotBase = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotBase
    static ::UnityEngine::Rendering::Universal::LightUtility::PivotType _get_PivotBase();
    // Set static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotBase
    static void _set_PivotBase(::UnityEngine::Rendering::Universal::LightUtility::PivotType value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotCurve
    static constexpr const int PivotCurve = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotCurve
    static ::UnityEngine::Rendering::Universal::LightUtility::PivotType _get_PivotCurve();
    // Set static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotCurve
    static void _set_PivotCurve(::UnityEngine::Rendering::Universal::LightUtility::PivotType value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotIntersect
    static constexpr const int PivotIntersect = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotIntersect
    static ::UnityEngine::Rendering::Universal::LightUtility::PivotType _get_PivotIntersect();
    // Set static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotIntersect
    static void _set_PivotIntersect(::UnityEngine::Rendering::Universal::LightUtility::PivotType value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotSkip
    static constexpr const int PivotSkip = 3;
    // Get static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotSkip
    static ::UnityEngine::Rendering::Universal::LightUtility::PivotType _get_PivotSkip();
    // Set static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotSkip
    static void _set_PivotSkip(::UnityEngine::Rendering::Universal::LightUtility::PivotType value);
    // static field const value: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotClip
    static constexpr const int PivotClip = 4;
    // Get static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotClip
    static ::UnityEngine::Rendering::Universal::LightUtility::PivotType _get_PivotClip();
    // Set static field: static public UnityEngine.Rendering.Universal.LightUtility/PivotType PivotClip
    static void _set_PivotClip(::UnityEngine::Rendering::Universal::LightUtility::PivotType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.LightUtility/PivotType
  #pragma pack(pop)
  static check_size<sizeof(LightUtility::PivotType), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_LightUtility_PivotTypeSizeCheck;
  static_assert(sizeof(LightUtility::PivotType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
