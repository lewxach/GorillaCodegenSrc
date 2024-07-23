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
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputTrackingState
  struct InputTrackingState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTrackingState, "UnityEngine.XR", "InputTrackingState");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.InputTrackingState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputTrackingState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: InputTrackingState
    constexpr InputTrackingState(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.InputTrackingState None
    static constexpr const uint None = 0u;
    // Get static field: static public UnityEngine.XR.InputTrackingState None
    static ::UnityEngine::XR::InputTrackingState _get_None();
    // Set static field: static public UnityEngine.XR.InputTrackingState None
    static void _set_None(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState Position
    static constexpr const uint Position = 1u;
    // Get static field: static public UnityEngine.XR.InputTrackingState Position
    static ::UnityEngine::XR::InputTrackingState _get_Position();
    // Set static field: static public UnityEngine.XR.InputTrackingState Position
    static void _set_Position(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState Rotation
    static constexpr const uint Rotation = 2u;
    // Get static field: static public UnityEngine.XR.InputTrackingState Rotation
    static ::UnityEngine::XR::InputTrackingState _get_Rotation();
    // Set static field: static public UnityEngine.XR.InputTrackingState Rotation
    static void _set_Rotation(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState Velocity
    static constexpr const uint Velocity = 4u;
    // Get static field: static public UnityEngine.XR.InputTrackingState Velocity
    static ::UnityEngine::XR::InputTrackingState _get_Velocity();
    // Set static field: static public UnityEngine.XR.InputTrackingState Velocity
    static void _set_Velocity(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState AngularVelocity
    static constexpr const uint AngularVelocity = 8u;
    // Get static field: static public UnityEngine.XR.InputTrackingState AngularVelocity
    static ::UnityEngine::XR::InputTrackingState _get_AngularVelocity();
    // Set static field: static public UnityEngine.XR.InputTrackingState AngularVelocity
    static void _set_AngularVelocity(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState Acceleration
    static constexpr const uint Acceleration = 16u;
    // Get static field: static public UnityEngine.XR.InputTrackingState Acceleration
    static ::UnityEngine::XR::InputTrackingState _get_Acceleration();
    // Set static field: static public UnityEngine.XR.InputTrackingState Acceleration
    static void _set_Acceleration(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState AngularAcceleration
    static constexpr const uint AngularAcceleration = 32u;
    // Get static field: static public UnityEngine.XR.InputTrackingState AngularAcceleration
    static ::UnityEngine::XR::InputTrackingState _get_AngularAcceleration();
    // Set static field: static public UnityEngine.XR.InputTrackingState AngularAcceleration
    static void _set_AngularAcceleration(::UnityEngine::XR::InputTrackingState value);
    // static field const value: static public UnityEngine.XR.InputTrackingState All
    static constexpr const uint All = 63u;
    // Get static field: static public UnityEngine.XR.InputTrackingState All
    static ::UnityEngine::XR::InputTrackingState _get_All();
    // Set static field: static public UnityEngine.XR.InputTrackingState All
    static void _set_All(::UnityEngine::XR::InputTrackingState value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // UnityEngine.XR.InputTrackingState
  #pragma pack(pop)
  static check_size<sizeof(InputTrackingState), 0 + sizeof(uint)> __UnityEngine_XR_InputTrackingStateSizeCheck;
  static_assert(sizeof(InputTrackingState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"