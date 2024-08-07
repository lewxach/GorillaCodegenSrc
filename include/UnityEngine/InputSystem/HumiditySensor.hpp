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
  // Forward declaring type: HumiditySensor
  class HumiditySensor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::HumiditySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HumiditySensor*, "UnityEngine.InputSystem", "HumiditySensor");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.HumiditySensor
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class HumiditySensor : public ::UnityEngine::InputSystem::Sensor {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <relativeHumidity>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::AxisControl* relativeHumidity;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::Controls::AxisControl*
    constexpr operator ::UnityEngine::InputSystem::Controls::AxisControl*() const noexcept {
      return relativeHumidity;
    }
    // Get static field: static private UnityEngine.InputSystem.HumiditySensor <current>k__BackingField
    static ::UnityEngine::InputSystem::HumiditySensor* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.HumiditySensor <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::HumiditySensor* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <relativeHumidity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$relativeHumidity$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_relativeHumidity()
    // Offset: 0x510A520
    ::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity();
    // private System.Void set_relativeHumidity(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x510A528
    void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // static public UnityEngine.InputSystem.HumiditySensor get_current()
    // Offset: 0x510A538
    static ::UnityEngine::InputSystem::HumiditySensor* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.HumiditySensor value)
    // Offset: 0x510A580
    static void set_current(::UnityEngine::InputSystem::HumiditySensor* value);
    // public override System.Void MakeCurrent()
    // Offset: 0x510A5D8
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0x510A638
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0x510A6D4
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x510A758
    // Implemented from: UnityEngine.InputSystem.Sensor
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HumiditySensor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::HumiditySensor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HumiditySensor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.HumiditySensor
  #pragma pack(pop)
  static check_size<sizeof(HumiditySensor), 368 + sizeof(::UnityEngine::InputSystem::Controls::AxisControl*)> __UnityEngine_InputSystem_HumiditySensorSizeCheck;
  static_assert(sizeof(HumiditySensor) == 0x178);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::get_relativeHumidity
// Il2CppName: get_relativeHumidity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::HumiditySensor::*)()>(&UnityEngine::InputSystem::HumiditySensor::get_relativeHumidity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "get_relativeHumidity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::set_relativeHumidity
// Il2CppName: set_relativeHumidity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HumiditySensor::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::HumiditySensor::set_relativeHumidity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "set_relativeHumidity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::HumiditySensor* (*)()>(&UnityEngine::InputSystem::HumiditySensor::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::HumiditySensor*)>(&UnityEngine::InputSystem::HumiditySensor::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "HumiditySensor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HumiditySensor::*)()>(&UnityEngine::InputSystem::HumiditySensor::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HumiditySensor::*)()>(&UnityEngine::InputSystem::HumiditySensor::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::HumiditySensor::*)()>(&UnityEngine::InputSystem::HumiditySensor::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HumiditySensor*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HumiditySensor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
