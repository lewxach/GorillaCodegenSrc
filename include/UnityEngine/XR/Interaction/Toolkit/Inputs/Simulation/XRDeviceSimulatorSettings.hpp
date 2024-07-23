// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.ScriptableSettings`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/ScriptableSettings_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // Forward declaring type: XRDeviceSimulatorSettings
  class XRDeviceSimulatorSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulatorSettings");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulatorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [ScriptableSettingsPathAttribute] Offset: FFFFFFFF
  class XRDeviceSimulatorSettings : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettings_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*> {
    public:
    public:
    // private System.Boolean m_AutomaticallyInstantiateSimulatorPrefab
    // Size: 0x1
    // Offset: 0x18
    bool m_AutomaticallyInstantiateSimulatorPrefab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.GameObject m_SimulatorPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* m_SimulatorPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean m_AutomaticallyInstantiateSimulatorPrefab
    [[deprecated("Use field access instead!")]] bool& dyn_m_AutomaticallyInstantiateSimulatorPrefab();
    // Get instance field reference: private UnityEngine.GameObject m_SimulatorPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_SimulatorPrefab();
    // System.Boolean get_automaticallyInstantiateSimulatorPrefab()
    // Offset: 0x543BA34
    bool get_automaticallyInstantiateSimulatorPrefab();
    // System.Void set_automaticallyInstantiateSimulatorPrefab(System.Boolean value)
    // Offset: 0x543BA3C
    void set_automaticallyInstantiateSimulatorPrefab(bool value);
    // UnityEngine.GameObject get_simulatorPrefab()
    // Offset: 0x543BA48
    ::UnityEngine::GameObject* get_simulatorPrefab();
    // System.Void set_simulatorPrefab(UnityEngine.GameObject value)
    // Offset: 0x543BA50
    void set_simulatorPrefab(::UnityEngine::GameObject* value);
    // public System.Void .ctor()
    // Offset: 0x543BA58
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.ScriptableSettings`1
    // Base method: System.Void ScriptableSettings_1::.ctor()
    // Base method: System.Void ScriptableSettingsBase_1::.ctor()
    // Base method: System.Void ScriptableSettingsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDeviceSimulatorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDeviceSimulatorSettings*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulatorSettings
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::get_automaticallyInstantiateSimulatorPrefab
// Il2CppName: get_automaticallyInstantiateSimulatorPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::get_automaticallyInstantiateSimulatorPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*), "get_automaticallyInstantiateSimulatorPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::set_automaticallyInstantiateSimulatorPrefab
// Il2CppName: set_automaticallyInstantiateSimulatorPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::set_automaticallyInstantiateSimulatorPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*), "set_automaticallyInstantiateSimulatorPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::get_simulatorPrefab
// Il2CppName: get_simulatorPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::get_simulatorPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*), "get_simulatorPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::set_simulatorPrefab
// Il2CppName: set_simulatorPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::*)(::UnityEngine::GameObject*)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::set_simulatorPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings*), "set_simulatorPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!