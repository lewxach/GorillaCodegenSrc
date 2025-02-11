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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::ControllerInHandState, "", "OVRInput/ControllerInHandState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/ControllerInHandState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRInput::ControllerInHandState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ControllerInHandState
    constexpr ControllerInHandState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/ControllerInHandState NoHand
    static constexpr const int NoHand = 0;
    // Get static field: static public OVRInput/ControllerInHandState NoHand
    static ::GlobalNamespace::OVRInput::ControllerInHandState _get_NoHand();
    // Set static field: static public OVRInput/ControllerInHandState NoHand
    static void _set_NoHand(::GlobalNamespace::OVRInput::ControllerInHandState value);
    // static field const value: static public OVRInput/ControllerInHandState ControllerInHand
    static constexpr const int ControllerInHand = 1;
    // Get static field: static public OVRInput/ControllerInHandState ControllerInHand
    static ::GlobalNamespace::OVRInput::ControllerInHandState _get_ControllerInHand();
    // Set static field: static public OVRInput/ControllerInHandState ControllerInHand
    static void _set_ControllerInHand(::GlobalNamespace::OVRInput::ControllerInHandState value);
    // static field const value: static public OVRInput/ControllerInHandState ControllerNotInHand
    static constexpr const int ControllerNotInHand = 2;
    // Get static field: static public OVRInput/ControllerInHandState ControllerNotInHand
    static ::GlobalNamespace::OVRInput::ControllerInHandState _get_ControllerNotInHand();
    // Set static field: static public OVRInput/ControllerInHandState ControllerNotInHand
    static void _set_ControllerNotInHand(::GlobalNamespace::OVRInput::ControllerInHandState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/ControllerInHandState
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::ControllerInHandState), 0 + sizeof(int)> __GlobalNamespace_OVRInput_ControllerInHandStateSizeCheck;
  static_assert(sizeof(OVRInput::ControllerInHandState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
