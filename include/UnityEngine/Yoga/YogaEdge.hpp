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
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaEdge
  struct YogaEdge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaEdge, "UnityEngine.Yoga", "YogaEdge");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaEdge
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaEdge/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaEdge
    constexpr YogaEdge(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaEdge Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Left
    static ::UnityEngine::Yoga::YogaEdge _get_Left();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Left
    static void _set_Left(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Top
    static constexpr const int Top = 1;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Top
    static ::UnityEngine::Yoga::YogaEdge _get_Top();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Top
    static void _set_Top(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Right
    static constexpr const int Right = 2;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Right
    static ::UnityEngine::Yoga::YogaEdge _get_Right();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Right
    static void _set_Right(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Bottom
    static constexpr const int Bottom = 3;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Bottom
    static ::UnityEngine::Yoga::YogaEdge _get_Bottom();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Bottom
    static void _set_Bottom(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Start
    static constexpr const int Start = 4;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Start
    static ::UnityEngine::Yoga::YogaEdge _get_Start();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Start
    static void _set_Start(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge End
    static constexpr const int End = 5;
    // Get static field: static public UnityEngine.Yoga.YogaEdge End
    static ::UnityEngine::Yoga::YogaEdge _get_End();
    // Set static field: static public UnityEngine.Yoga.YogaEdge End
    static void _set_End(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Horizontal
    static constexpr const int Horizontal = 6;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Horizontal
    static ::UnityEngine::Yoga::YogaEdge _get_Horizontal();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Horizontal
    static void _set_Horizontal(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge Vertical
    static constexpr const int Vertical = 7;
    // Get static field: static public UnityEngine.Yoga.YogaEdge Vertical
    static ::UnityEngine::Yoga::YogaEdge _get_Vertical();
    // Set static field: static public UnityEngine.Yoga.YogaEdge Vertical
    static void _set_Vertical(::UnityEngine::Yoga::YogaEdge value);
    // static field const value: static public UnityEngine.Yoga.YogaEdge All
    static constexpr const int All = 8;
    // Get static field: static public UnityEngine.Yoga.YogaEdge All
    static ::UnityEngine::Yoga::YogaEdge _get_All();
    // Set static field: static public UnityEngine.Yoga.YogaEdge All
    static void _set_All(::UnityEngine::Yoga::YogaEdge value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaEdge
  #pragma pack(pop)
  static check_size<sizeof(YogaEdge), 0 + sizeof(int)> __UnityEngine_Yoga_YogaEdgeSizeCheck;
  static_assert(sizeof(YogaEdge) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
