// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettings`1
#include "UnityEngine/Rendering/DebugDisplaySettings_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DebugDisplaySettingsCommon
  class DebugDisplaySettingsCommon;
  // Forward declaring type: DebugDisplaySettingsMaterial
  class DebugDisplaySettingsMaterial;
  // Forward declaring type: DebugDisplaySettingsRendering
  class DebugDisplaySettingsRendering;
  // Forward declaring type: DebugDisplaySettingsLighting
  class DebugDisplaySettingsLighting;
  // Forward declaring type: DebugDisplayStats
  class DebugDisplayStats;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DebugDisplaySettingsVolume
  class DebugDisplaySettingsVolume;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalRenderPipelineDebugDisplaySettings
  class UniversalRenderPipelineDebugDisplaySettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineDebugDisplaySettings");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings
  // [TokenAttribute] Offset: FFFFFFFF
  class UniversalRenderPipelineDebugDisplaySettings : public ::UnityEngine::Rendering::DebugDisplaySettings_1<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*> {
    public:
    public:
    // private UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon <commonSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* commonSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*) == 0x8);
    // private UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial <materialSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* materialSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*) == 0x8);
    // private UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering <renderingSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* renderingSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*) == 0x8);
    // private UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting <lightingSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* lightingSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*) == 0x8);
    // private UnityEngine.Rendering.DebugDisplaySettingsVolume <volumeSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume* volumeSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume*) == 0x8);
    // private UnityEngine.Rendering.Universal.DebugDisplayStats <displayStats>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rendering::Universal::DebugDisplayStats* displayStats;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplayStats*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*
    constexpr operator ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon <commonSettings>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*& dyn_$commonSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial <materialSettings>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& dyn_$materialSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering <renderingSettings>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& dyn_$renderingSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting <lightingSettings>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& dyn_$lightingSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.DebugDisplaySettingsVolume <volumeSettings>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& dyn_$volumeSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DebugDisplayStats <displayStats>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplayStats*& dyn_$displayStats$k__BackingField();
    // private UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon get_commonSettings()
    // Offset: 0x529F83C
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* get_commonSettings();
    // private System.Void set_commonSettings(UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon value)
    // Offset: 0x529F844
    void set_commonSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value);
    // public UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial get_materialSettings()
    // Offset: 0x529F84C
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_materialSettings();
    // private System.Void set_materialSettings(UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial value)
    // Offset: 0x529F854
    void set_materialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);
    // public UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering get_renderingSettings()
    // Offset: 0x529F85C
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_renderingSettings();
    // private System.Void set_renderingSettings(UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering value)
    // Offset: 0x529F864
    void set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);
    // public UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting get_lightingSettings()
    // Offset: 0x529F86C
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_lightingSettings();
    // private System.Void set_lightingSettings(UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting value)
    // Offset: 0x529F874
    void set_lightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);
    // public UnityEngine.Rendering.DebugDisplaySettingsVolume get_volumeSettings()
    // Offset: 0x529F87C
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume* get_volumeSettings();
    // private System.Void set_volumeSettings(UnityEngine.Rendering.DebugDisplaySettingsVolume value)
    // Offset: 0x529F884
    void set_volumeSettings(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);
    // UnityEngine.Rendering.Universal.DebugDisplayStats get_displayStats()
    // Offset: 0x529F88C
    ::UnityEngine::Rendering::Universal::DebugDisplayStats* get_displayStats();
    // private System.Void set_displayStats(UnityEngine.Rendering.Universal.DebugDisplayStats value)
    // Offset: 0x529F894
    void set_displayStats(::UnityEngine::Rendering::Universal::DebugDisplayStats* value);
    // public System.Void .ctor()
    // Offset: 0x529FB18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalRenderPipelineDebugDisplaySettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalRenderPipelineDebugDisplaySettings*, creationType>()));
    }
    // System.Void UpdateFrameTiming()
    // Offset: 0x529FEDC
    void UpdateFrameTiming();
    // public override System.Boolean get_IsPostProcessingAllowed()
    // Offset: 0x529F89C
    // Implemented from: UnityEngine.Rendering.DebugDisplaySettings`1
    // Base method: System.Boolean DebugDisplaySettings_1::get_IsPostProcessingAllowed()
    bool get_IsPostProcessingAllowed();
    // public override System.Void Reset()
    // Offset: 0x529FB98
    // Implemented from: UnityEngine.Rendering.DebugDisplaySettings`1
    // Base method: System.Void DebugDisplaySettings_1::Reset()
    void Reset();
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_commonSettings
// Il2CppName: get_commonSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_commonSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_commonSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_commonSettings
// Il2CppName: set_commonSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_commonSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_commonSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_materialSettings
// Il2CppName: get_materialSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_materialSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_materialSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_materialSettings
// Il2CppName: set_materialSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_materialSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_materialSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_renderingSettings
// Il2CppName: get_renderingSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_renderingSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_renderingSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_renderingSettings
// Il2CppName: set_renderingSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_renderingSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_renderingSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_lightingSettings
// Il2CppName: get_lightingSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_lightingSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_lightingSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_lightingSettings
// Il2CppName: set_lightingSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_lightingSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_lightingSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_volumeSettings
// Il2CppName: get_volumeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugDisplaySettingsVolume* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_volumeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_volumeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_volumeSettings
// Il2CppName: set_volumeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::DebugDisplaySettingsVolume*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_volumeSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DebugDisplaySettingsVolume")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_volumeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_displayStats
// Il2CppName: get_displayStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplayStats* (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_displayStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_displayStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_displayStats
// Il2CppName: set_displayStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)(::UnityEngine::Rendering::Universal::DebugDisplayStats*)>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::set_displayStats)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DebugDisplayStats")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "set_displayStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateFrameTiming
// Il2CppName: UpdateFrameTiming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::UpdateFrameTiming)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "UpdateFrameTiming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_IsPostProcessingAllowed
// Il2CppName: get_IsPostProcessingAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::get_IsPostProcessingAllowed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "get_IsPostProcessingAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
