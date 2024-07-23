// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Sensor
#include "UnityEngine/InputSystem/Sensor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: AxisControl
  class AxisControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: LightSensor
  class LightSensor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LightSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LightSensor*, "UnityEngine.InputSystem", "LightSensor");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LightSensor
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class LightSensor : public ::UnityEngine::InputSystem::Sensor {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <lightLevel>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::AxisControl* lightLevel;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::Controls::AxisControl*
    constexpr operator ::UnityEngine::InputSystem::Controls::AxisControl*() const noexcept {
      return lightLevel;
    }
    // Get static field: static private UnityEngine.InputSystem.LightSensor <current>k__BackingField
    static ::UnityEngine::InputSystem::LightSensor* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.LightSensor <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::LightSensor* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <lightLevel>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$lightLevel$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_lightLevel()
    // Offset: 0x5109E60
    ::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel();
    // private System.Void set_lightLevel(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x5109E68
    void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // static public UnityEngine.InputSystem.LightSensor get_current()
    // Offset: 0x5109E78
    static ::UnityEngine::InputSystem::LightSensor* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.LightSensor value)
    // Offset: 0x5109EC0
    static void set_current(::UnityEngine::InputSystem::LightSensor* value);
    // public override System.Void MakeCurrent()
    // Offset: 0x5109F18
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0x5109F78
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0x510A014
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x510A098
    // Implemented from: UnityEngine.InputSystem.Sensor
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightSensor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LightSensor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightSensor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.LightSensor
  #pragma pack(pop)
  static check_size<sizeof(LightSensor), 368 + sizeof(::UnityEngine::InputSystem::Controls::AxisControl*)> __UnityEngine_InputSystem_LightSensorSizeCheck;
  static_assert(sizeof(LightSensor) == 0x178);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::get_lightLevel
// Il2CppName: get_lightLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::LightSensor::*)()>(&UnityEngine::InputSystem::LightSensor::get_lightLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "get_lightLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::set_lightLevel
// Il2CppName: set_lightLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LightSensor::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::LightSensor::set_lightLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "set_lightLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LightSensor* (*)()>(&UnityEngine::InputSystem::LightSensor::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LightSensor*)>(&UnityEngine::InputSystem::LightSensor::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "LightSensor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LightSensor::*)()>(&UnityEngine::InputSystem::LightSensor::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LightSensor::*)()>(&UnityEngine::InputSystem::LightSensor::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LightSensor::*)()>(&UnityEngine::InputSystem::LightSensor::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LightSensor*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LightSensor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!