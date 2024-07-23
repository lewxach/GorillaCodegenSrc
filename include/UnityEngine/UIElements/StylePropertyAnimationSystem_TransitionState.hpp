// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StylePropertyAnimationSystem
#include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState, "UnityEngine.UIElements", "StylePropertyAnimationSystem/TransitionState");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct StylePropertyAnimationSystem::TransitionState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TransitionState
    constexpr TransitionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState None
    static ::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState _get_None();
    // Set static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState None
    static void _set_None(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState value);
    // static field const value: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Running
    static constexpr const int Running = 1;
    // Get static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Running
    static ::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState _get_Running();
    // Set static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Running
    static void _set_Running(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState value);
    // static field const value: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Started
    static constexpr const int Started = 2;
    // Get static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Started
    static ::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState _get_Started();
    // Set static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Started
    static void _set_Started(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState value);
    // static field const value: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Ended
    static constexpr const int Ended = 4;
    // Get static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Ended
    static ::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState _get_Ended();
    // Set static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Ended
    static void _set_Ended(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState value);
    // static field const value: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Canceled
    static constexpr const int Canceled = 8;
    // Get static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Canceled
    static ::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState _get_Canceled();
    // Set static field: static public UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState Canceled
    static void _set_Canceled(::UnityEngine::UIElements::StylePropertyAnimationSystem::TransitionState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.StylePropertyAnimationSystem/TransitionState
  #pragma pack(pop)
  static check_size<sizeof(StylePropertyAnimationSystem::TransitionState), 0 + sizeof(int)> __UnityEngine_UIElements_StylePropertyAnimationSystem_TransitionStateSizeCheck;
  static_assert(sizeof(StylePropertyAnimationSystem::TransitionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"