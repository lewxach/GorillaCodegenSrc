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
  // Forward declaring type: KeyboardNavigationOperation
  struct KeyboardNavigationOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardNavigationOperation, "UnityEngine.UIElements", "KeyboardNavigationOperation");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.KeyboardNavigationOperation
  // [TokenAttribute] Offset: FFFFFFFF
  struct KeyboardNavigationOperation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: KeyboardNavigationOperation
    constexpr KeyboardNavigationOperation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation None
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_None();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation None
    static void _set_None(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation SelectAll
    static constexpr const int SelectAll = 1;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation SelectAll
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_SelectAll();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation SelectAll
    static void _set_SelectAll(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation Cancel
    static constexpr const int Cancel = 2;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Cancel
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_Cancel();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Cancel
    static void _set_Cancel(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation Submit
    static constexpr const int Submit = 3;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Submit
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_Submit();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Submit
    static void _set_Submit(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation Previous
    static constexpr const int Previous = 4;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Previous
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_Previous();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Previous
    static void _set_Previous(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation Next
    static constexpr const int Next = 5;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Next
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_Next();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Next
    static void _set_Next(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveRight
    static constexpr const int MoveRight = 6;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveRight
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_MoveRight();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveRight
    static void _set_MoveRight(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveLeft
    static constexpr const int MoveLeft = 7;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveLeft
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_MoveLeft();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation MoveLeft
    static void _set_MoveLeft(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation PageUp
    static constexpr const int PageUp = 8;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation PageUp
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_PageUp();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation PageUp
    static void _set_PageUp(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation PageDown
    static constexpr const int PageDown = 9;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation PageDown
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_PageDown();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation PageDown
    static void _set_PageDown(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation Begin
    static constexpr const int Begin = 10;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Begin
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_Begin();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation Begin
    static void _set_Begin(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // static field const value: static public UnityEngine.UIElements.KeyboardNavigationOperation End
    static constexpr const int End = 11;
    // Get static field: static public UnityEngine.UIElements.KeyboardNavigationOperation End
    static ::UnityEngine::UIElements::KeyboardNavigationOperation _get_End();
    // Set static field: static public UnityEngine.UIElements.KeyboardNavigationOperation End
    static void _set_End(::UnityEngine::UIElements::KeyboardNavigationOperation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.KeyboardNavigationOperation
  #pragma pack(pop)
  static check_size<sizeof(KeyboardNavigationOperation), 0 + sizeof(int)> __UnityEngine_UIElements_KeyboardNavigationOperationSizeCheck;
  static_assert(sizeof(KeyboardNavigationOperation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
