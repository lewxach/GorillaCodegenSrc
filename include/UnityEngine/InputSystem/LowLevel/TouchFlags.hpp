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
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: TouchFlags
  struct TouchFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchFlags, "UnityEngine.InputSystem.LowLevel", "TouchFlags");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.TouchFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TouchFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: TouchFlags
    constexpr TouchFlags(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags IndirectTouch
    static constexpr const uint8_t IndirectTouch = 1u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags IndirectTouch
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_IndirectTouch();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags IndirectTouch
    static void _set_IndirectTouch(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags PrimaryTouch
    static constexpr const uint8_t PrimaryTouch = 8u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags PrimaryTouch
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_PrimaryTouch();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags PrimaryTouch
    static void _set_PrimaryTouch(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapPress
    static constexpr const uint8_t TapPress = 16u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapPress
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_TapPress();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapPress
    static void _set_TapPress(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapRelease
    static constexpr const uint8_t TapRelease = 32u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapRelease
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_TapRelease();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags TapRelease
    static void _set_TapRelease(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags OrphanedPrimaryTouch
    static constexpr const uint8_t OrphanedPrimaryTouch = 64u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags OrphanedPrimaryTouch
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_OrphanedPrimaryTouch();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags OrphanedPrimaryTouch
    static void _set_OrphanedPrimaryTouch(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.TouchFlags BeganInSameFrame
    static constexpr const uint8_t BeganInSameFrame = 128u;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags BeganInSameFrame
    static ::UnityEngine::InputSystem::LowLevel::TouchFlags _get_BeganInSameFrame();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.TouchFlags BeganInSameFrame
    static void _set_BeganInSameFrame(::UnityEngine::InputSystem::LowLevel::TouchFlags value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // UnityEngine.InputSystem.LowLevel.TouchFlags
  #pragma pack(pop)
  static check_size<sizeof(TouchFlags), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_TouchFlagsSizeCheck;
  static_assert(sizeof(TouchFlags) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"