// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulator.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Forward declaring type: TargetedDevicesExtensions
  class TargetedDevicesExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "TargetedDevicesExtensions");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.TargetedDevicesExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TargetedDevicesExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices WithDevice(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices devices, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices device)
    // Offset: 0x543B7C0
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices WithDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices device);
    // static public UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices WithoutDevice(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices devices, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices device)
    // Offset: 0x543B7C8
    static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices WithoutDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices device);
    // static public System.Boolean HasDevice(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices devices, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices device)
    // Offset: 0x543B7D0
    static bool HasDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices device);
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.TargetedDevicesExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithDevice
// Il2CppName: WithDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithDevice)> {
  static const MethodInfo* get() {
    static auto* devices = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*), "WithDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, device});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithoutDevice
// Il2CppName: WithoutDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithoutDevice)> {
  static const MethodInfo* get() {
    static auto* devices = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*), "WithoutDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, device});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::HasDevice
// Il2CppName: HasDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::TargetedDevices)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::HasDevice)> {
  static const MethodInfo* get() {
    static auto* devices = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/TargetedDevices")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*), "HasDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, device});
  }
};
