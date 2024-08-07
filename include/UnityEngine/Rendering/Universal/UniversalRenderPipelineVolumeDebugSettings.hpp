// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeDebugSettings`1
#include "UnityEngine/Rendering/VolumeDebugSettings_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalAdditionalCameraData
  class UniversalAdditionalCameraData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VolumeStack
  class VolumeStack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: LayerMask because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalRenderPipelineVolumeDebugSettings
  class UniversalRenderPipelineVolumeDebugSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineVolumeDebugSettings");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipelineVolumeDebugSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class UniversalRenderPipelineVolumeDebugSettings : public ::UnityEngine::Rendering::VolumeDebugSettings_1<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x529FE70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalRenderPipelineVolumeDebugSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalRenderPipelineVolumeDebugSettings*, creationType>()));
    }
    // public override System.Type get_targetRenderPipeline()
    // Offset: 0x529FF08
    // Implemented from: UnityEngine.Rendering.VolumeDebugSettings`1
    // Base method: System.Type VolumeDebugSettings_1::get_targetRenderPipeline()
    ::System::Type* get_targetRenderPipeline();
    // public override UnityEngine.Rendering.VolumeStack get_selectedCameraVolumeStack()
    // Offset: 0x529FF74
    // Implemented from: UnityEngine.Rendering.VolumeDebugSettings`1
    // Base method: UnityEngine.Rendering.VolumeStack VolumeDebugSettings_1::get_selectedCameraVolumeStack()
    ::UnityEngine::Rendering::VolumeStack* get_selectedCameraVolumeStack();
    // public override UnityEngine.LayerMask get_selectedCameraLayerMask()
    // Offset: 0x52A008C
    // Implemented from: UnityEngine.Rendering.VolumeDebugSettings`1
    // Base method: UnityEngine.LayerMask VolumeDebugSettings_1::get_selectedCameraLayerMask()
    ::UnityEngine::LayerMask get_selectedCameraLayerMask();
    // public override UnityEngine.Vector3 get_selectedCameraPosition()
    // Offset: 0x52A0144
    // Implemented from: UnityEngine.Rendering.VolumeDebugSettings`1
    // Base method: UnityEngine.Vector3 VolumeDebugSettings_1::get_selectedCameraPosition()
    ::UnityEngine::Vector3 get_selectedCameraPosition();
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipelineVolumeDebugSettings
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_targetRenderPipeline
// Il2CppName: get_targetRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_targetRenderPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*), "get_targetRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraVolumeStack
// Il2CppName: get_selectedCameraVolumeStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraVolumeStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*), "get_selectedCameraVolumeStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraLayerMask
// Il2CppName: get_selectedCameraLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*), "get_selectedCameraLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraPosition
// Il2CppName: get_selectedCameraPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*), "get_selectedCameraPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
