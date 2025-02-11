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
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: UEventType
  struct UEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::UEventType, "UnityEngine.Rendering.Universal.UTess", "UEventType");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.UEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UEventType
    constexpr UEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_POINT
    static constexpr const int EVENT_POINT = 0;
    // Get static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_POINT
    static ::UnityEngine::Rendering::Universal::UTess::UEventType _get_EVENT_POINT();
    // Set static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_POINT
    static void _set_EVENT_POINT(::UnityEngine::Rendering::Universal::UTess::UEventType value);
    // static field const value: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_END
    static constexpr const int EVENT_END = 1;
    // Get static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_END
    static ::UnityEngine::Rendering::Universal::UTess::UEventType _get_EVENT_END();
    // Set static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_END
    static void _set_EVENT_END(::UnityEngine::Rendering::Universal::UTess::UEventType value);
    // static field const value: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_START
    static constexpr const int EVENT_START = 2;
    // Get static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_START
    static ::UnityEngine::Rendering::Universal::UTess::UEventType _get_EVENT_START();
    // Set static field: static public UnityEngine.Rendering.Universal.UTess.UEventType EVENT_START
    static void _set_EVENT_START(::UnityEngine::Rendering::Universal::UTess::UEventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.Universal.UTess.UEventType
  #pragma pack(pop)
  static check_size<sizeof(UEventType), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_UTess_UEventTypeSizeCheck;
  static_assert(sizeof(UEventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
