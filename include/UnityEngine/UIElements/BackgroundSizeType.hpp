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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BackgroundSizeType
  struct BackgroundSizeType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundSizeType, "UnityEngine.UIElements", "BackgroundSizeType");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BackgroundSizeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BackgroundSizeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BackgroundSizeType
    constexpr BackgroundSizeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.BackgroundSizeType Length
    static constexpr const int Length = 0;
    // Get static field: static public UnityEngine.UIElements.BackgroundSizeType Length
    static ::UnityEngine::UIElements::BackgroundSizeType _get_Length();
    // Set static field: static public UnityEngine.UIElements.BackgroundSizeType Length
    static void _set_Length(::UnityEngine::UIElements::BackgroundSizeType value);
    // static field const value: static public UnityEngine.UIElements.BackgroundSizeType Cover
    static constexpr const int Cover = 1;
    // Get static field: static public UnityEngine.UIElements.BackgroundSizeType Cover
    static ::UnityEngine::UIElements::BackgroundSizeType _get_Cover();
    // Set static field: static public UnityEngine.UIElements.BackgroundSizeType Cover
    static void _set_Cover(::UnityEngine::UIElements::BackgroundSizeType value);
    // static field const value: static public UnityEngine.UIElements.BackgroundSizeType Contain
    static constexpr const int Contain = 2;
    // Get static field: static public UnityEngine.UIElements.BackgroundSizeType Contain
    static ::UnityEngine::UIElements::BackgroundSizeType _get_Contain();
    // Set static field: static public UnityEngine.UIElements.BackgroundSizeType Contain
    static void _set_Contain(::UnityEngine::UIElements::BackgroundSizeType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.BackgroundSizeType
  #pragma pack(pop)
  static check_size<sizeof(BackgroundSizeType), 0 + sizeof(int)> __UnityEngine_UIElements_BackgroundSizeTypeSizeCheck;
  static_assert(sizeof(BackgroundSizeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
