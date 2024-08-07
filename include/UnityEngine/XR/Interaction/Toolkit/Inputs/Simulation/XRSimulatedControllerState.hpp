// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
#include "UnityEngine/InputSystem/LowLevel/IInputStateTypeInfo.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Forward declaring type: ControllerButton
  struct ControllerButton;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Forward declaring type: XRSimulatedControllerState
  struct XRSimulatedControllerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedControllerState");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Size: 0x3F
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
  // [TokenAttribute] Offset: FFFFFFFF
  struct XRSimulatedControllerState/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*/ {
    public:
    public:
    // public UnityEngine.Vector2 primary2DAxis
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 primary2DAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single trigger
    // Size: 0x4
    // Offset: 0x8
    float trigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single grip
    // Size: 0x4
    // Offset: 0xC
    float grip;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 secondary2DAxis
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 secondary2DAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.UInt16 buttons
    // Size: 0x2
    // Offset: 0x18
    uint16_t buttons;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Single batteryLevel
    // Size: 0x4
    // Offset: 0x1A
    float batteryLevel;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 trackingState
    // Size: 0x4
    // Offset: 0x1E
    int trackingState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isTracked
    // Size: 0x1
    // Offset: 0x22
    bool isTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Vector3 devicePosition
    // Size: 0xC
    // Offset: 0x23
    ::UnityEngine::Vector3 devicePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion deviceRotation
    // Size: 0x10
    // Offset: 0x2F
    ::UnityEngine::Quaternion deviceRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: XRSimulatedControllerState
    constexpr XRSimulatedControllerState(::UnityEngine::Vector2 primary2DAxis_ = {}, float trigger_ = {}, float grip_ = {}, ::UnityEngine::Vector2 secondary2DAxis_ = {}, uint16_t buttons_ = {}, float batteryLevel_ = {}, int trackingState_ = {}, bool isTracked_ = {}, ::UnityEngine::Vector3 devicePosition_ = {}, ::UnityEngine::Quaternion deviceRotation_ = {}) noexcept : primary2DAxis{primary2DAxis_}, trigger{trigger_}, grip{grip_}, secondary2DAxis{secondary2DAxis_}, buttons{buttons_}, batteryLevel{batteryLevel_}, trackingState{trackingState_}, isTracked{isTracked_}, devicePosition{devicePosition_}, deviceRotation{deviceRotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2 primary2DAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_primary2DAxis();
    // Get instance field reference: public System.Single trigger
    [[deprecated("Use field access instead!")]] float& dyn_trigger();
    // Get instance field reference: public System.Single grip
    [[deprecated("Use field access instead!")]] float& dyn_grip();
    // Get instance field reference: public UnityEngine.Vector2 secondary2DAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_secondary2DAxis();
    // Get instance field reference: public System.UInt16 buttons
    [[deprecated("Use field access instead!")]] uint16_t& dyn_buttons();
    // Get instance field reference: public System.Single batteryLevel
    [[deprecated("Use field access instead!")]] float& dyn_batteryLevel();
    // Get instance field reference: public System.Int32 trackingState
    [[deprecated("Use field access instead!")]] int& dyn_trackingState();
    // Get instance field reference: public System.Boolean isTracked
    [[deprecated("Use field access instead!")]] bool& dyn_isTracked();
    // Get instance field reference: public UnityEngine.Vector3 devicePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_devicePosition();
    // Get instance field reference: public UnityEngine.Quaternion deviceRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_deviceRotation();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_formatId()
    // Offset: 0x543C0D0
    static ::UnityEngine::InputSystem::Utilities::FourCC get_formatId();
    // public UnityEngine.InputSystem.Utilities.FourCC get_format()
    // Offset: 0x543C100
    ::UnityEngine::InputSystem::Utilities::FourCC get_format();
    // public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState WithButton(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton button, System.Boolean state)
    // Offset: 0x543C130
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState WithButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton button, bool state);
    // public System.Boolean HasButton(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerButton button)
    // Offset: 0x543C16C
    bool HasButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton button);
    // public System.Void Reset()
    // Offset: 0x543C17C
    void Reset();
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
  #pragma pack(pop)
  static check_size<sizeof(XRSimulatedControllerState), 47 + sizeof(::UnityEngine::Quaternion)> __UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedControllerStateSizeCheck;
  static_assert(sizeof(XRSimulatedControllerState) == 0x3F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_formatId
// Il2CppName: get_formatId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_formatId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState), "get_formatId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::WithButton
// Il2CppName: WithButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, bool)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::WithButton)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "ControllerButton")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState), "WithButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, state});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::HasButton
// Il2CppName: HasButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::HasButton)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "ControllerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState), "HasButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
