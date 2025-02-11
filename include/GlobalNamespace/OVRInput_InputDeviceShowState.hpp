// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::InputDeviceShowState, "", "OVRInput/InputDeviceShowState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/InputDeviceShowState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRInput::InputDeviceShowState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputDeviceShowState
    constexpr InputDeviceShowState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/InputDeviceShowState Always
    static constexpr const int Always = 0;
    // Get static field: static public OVRInput/InputDeviceShowState Always
    static ::GlobalNamespace::OVRInput::InputDeviceShowState _get_Always();
    // Set static field: static public OVRInput/InputDeviceShowState Always
    static void _set_Always(::GlobalNamespace::OVRInput::InputDeviceShowState value);
    // static field const value: static public OVRInput/InputDeviceShowState ControllerInHandOrNoHand
    static constexpr const int ControllerInHandOrNoHand = 1;
    // Get static field: static public OVRInput/InputDeviceShowState ControllerInHandOrNoHand
    static ::GlobalNamespace::OVRInput::InputDeviceShowState _get_ControllerInHandOrNoHand();
    // Set static field: static public OVRInput/InputDeviceShowState ControllerInHandOrNoHand
    static void _set_ControllerInHandOrNoHand(::GlobalNamespace::OVRInput::InputDeviceShowState value);
    // static field const value: static public OVRInput/InputDeviceShowState ControllerInHand
    static constexpr const int ControllerInHand = 2;
    // Get static field: static public OVRInput/InputDeviceShowState ControllerInHand
    static ::GlobalNamespace::OVRInput::InputDeviceShowState _get_ControllerInHand();
    // Set static field: static public OVRInput/InputDeviceShowState ControllerInHand
    static void _set_ControllerInHand(::GlobalNamespace::OVRInput::InputDeviceShowState value);
    // static field const value: static public OVRInput/InputDeviceShowState ControllerNotInHand
    static constexpr const int ControllerNotInHand = 3;
    // Get static field: static public OVRInput/InputDeviceShowState ControllerNotInHand
    static ::GlobalNamespace::OVRInput::InputDeviceShowState _get_ControllerNotInHand();
    // Set static field: static public OVRInput/InputDeviceShowState ControllerNotInHand
    static void _set_ControllerNotInHand(::GlobalNamespace::OVRInput::InputDeviceShowState value);
    // static field const value: static public OVRInput/InputDeviceShowState NoHand
    static constexpr const int NoHand = 4;
    // Get static field: static public OVRInput/InputDeviceShowState NoHand
    static ::GlobalNamespace::OVRInput::InputDeviceShowState _get_NoHand();
    // Set static field: static public OVRInput/InputDeviceShowState NoHand
    static void _set_NoHand(::GlobalNamespace::OVRInput::InputDeviceShowState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/InputDeviceShowState
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::InputDeviceShowState), 0 + sizeof(int)> __GlobalNamespace_OVRInput_InputDeviceShowStateSizeCheck;
  static_assert(sizeof(OVRInput::InputDeviceShowState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
