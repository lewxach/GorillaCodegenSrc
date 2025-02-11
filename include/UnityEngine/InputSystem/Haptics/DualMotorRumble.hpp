// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Forward declaring type: DualMotorRumble
  struct DualMotorRumble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::DualMotorRumble, "UnityEngine.InputSystem.Haptics", "DualMotorRumble");
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Haptics.DualMotorRumble
  // [TokenAttribute] Offset: FFFFFFFF
  struct DualMotorRumble/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single <lowFrequencyMotorSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float lowFrequencyMotorSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <highFrequencyMotorSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    float highFrequencyMotorSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: DualMotorRumble
    constexpr DualMotorRumble(float lowFrequencyMotorSpeed_ = {}, float highFrequencyMotorSpeed_ = {}) noexcept : lowFrequencyMotorSpeed{lowFrequencyMotorSpeed_}, highFrequencyMotorSpeed{highFrequencyMotorSpeed_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single <lowFrequencyMotorSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$lowFrequencyMotorSpeed$k__BackingField();
    // Get instance field reference: private System.Single <highFrequencyMotorSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$highFrequencyMotorSpeed$k__BackingField();
    // public System.Single get_lowFrequencyMotorSpeed()
    // Offset: 0x514993C
    float get_lowFrequencyMotorSpeed();
    // private System.Void set_lowFrequencyMotorSpeed(System.Single value)
    // Offset: 0x5149944
    void set_lowFrequencyMotorSpeed(float value);
    // public System.Single get_highFrequencyMotorSpeed()
    // Offset: 0x514994C
    float get_highFrequencyMotorSpeed();
    // private System.Void set_highFrequencyMotorSpeed(System.Single value)
    // Offset: 0x5149954
    void set_highFrequencyMotorSpeed(float value);
    // public System.Boolean get_isRumbling()
    // Offset: 0x514995C
    bool get_isRumbling();
    // public System.Void PauseHaptics(UnityEngine.InputSystem.InputDevice device)
    // Offset: 0x5149A14
    void PauseHaptics(::UnityEngine::InputSystem::InputDevice* device);
    // public System.Void ResumeHaptics(UnityEngine.InputSystem.InputDevice device)
    // Offset: 0x5149B70
    void ResumeHaptics(::UnityEngine::InputSystem::InputDevice* device);
    // public System.Void ResetHaptics(UnityEngine.InputSystem.InputDevice device)
    // Offset: 0x5149D38
    void ResetHaptics(::UnityEngine::InputSystem::InputDevice* device);
    // public System.Void SetMotorSpeeds(UnityEngine.InputSystem.InputDevice device, System.Single lowFrequency, System.Single highFrequency)
    // Offset: 0x5149BF8
    void SetMotorSpeeds(::UnityEngine::InputSystem::InputDevice* device, float lowFrequency, float highFrequency);
  }; // UnityEngine.InputSystem.Haptics.DualMotorRumble
  #pragma pack(pop)
  static check_size<sizeof(DualMotorRumble), 4 + sizeof(float)> __UnityEngine_InputSystem_Haptics_DualMotorRumbleSizeCheck;
  static_assert(sizeof(DualMotorRumble) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::get_lowFrequencyMotorSpeed
// Il2CppName: get_lowFrequencyMotorSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::get_lowFrequencyMotorSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "get_lowFrequencyMotorSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::set_lowFrequencyMotorSpeed
// Il2CppName: set_lowFrequencyMotorSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(float)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::set_lowFrequencyMotorSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "set_lowFrequencyMotorSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::get_highFrequencyMotorSpeed
// Il2CppName: get_highFrequencyMotorSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::get_highFrequencyMotorSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "get_highFrequencyMotorSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::set_highFrequencyMotorSpeed
// Il2CppName: set_highFrequencyMotorSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(float)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::set_highFrequencyMotorSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "set_highFrequencyMotorSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::get_isRumbling
// Il2CppName: get_isRumbling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)()>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::get_isRumbling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "get_isRumbling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::PauseHaptics
// Il2CppName: PauseHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::PauseHaptics)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "PauseHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::ResumeHaptics
// Il2CppName: ResumeHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::ResumeHaptics)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "ResumeHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::ResetHaptics
// Il2CppName: ResetHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::ResetHaptics)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "ResetHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::DualMotorRumble::SetMotorSpeeds
// Il2CppName: SetMotorSpeeds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::DualMotorRumble::*)(::UnityEngine::InputSystem::InputDevice*, float, float)>(&UnityEngine::InputSystem::Haptics::DualMotorRumble::SetMotorSpeeds)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* lowFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::DualMotorRumble), "SetMotorSpeeds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, lowFrequency, highFrequency});
  }
};
