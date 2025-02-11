// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
#include "UnityEngine/Rendering/Universal/UniversalRenderPipeline_Profiling.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline
  // [TokenAttribute] Offset: FFFFFFFF
  class UniversalRenderPipeline::Profiling::Pipeline : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline::Renderer
    class Renderer;
    // Nested type: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline::Context
    class Context;
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler beginContextRendering
    static ::UnityEngine::Rendering::ProfilingSampler* _get_beginContextRendering();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler beginContextRendering
    static void _set_beginContextRendering(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler endContextRendering
    static ::UnityEngine::Rendering::ProfilingSampler* _get_endContextRendering();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler endContextRendering
    static void _set_endContextRendering(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler beginCameraRendering
    static ::UnityEngine::Rendering::ProfilingSampler* _get_beginCameraRendering();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler beginCameraRendering
    static void _set_beginCameraRendering(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler endCameraRendering
    static ::UnityEngine::Rendering::ProfilingSampler* _get_endCameraRendering();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler endCameraRendering
    static void _set_endCameraRendering(::UnityEngine::Rendering::ProfilingSampler* value);
    // static field const value: static private System.String k_Name
    static constexpr const char* k_Name = "UniversalRenderPipeline";
    // Get static field: static private System.String k_Name
    static ::StringW _get_k_Name();
    // Set static field: static private System.String k_Name
    static void _set_k_Name(::StringW value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeCameraData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeCameraData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeCameraData
    static void _set_initializeCameraData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeStackedCameraData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeStackedCameraData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeStackedCameraData
    static void _set_initializeStackedCameraData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeAdditionalCameraData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeAdditionalCameraData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeAdditionalCameraData
    static void _set_initializeAdditionalCameraData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeRenderingData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeRenderingData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeRenderingData
    static void _set_initializeRenderingData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeShadowData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeShadowData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeShadowData
    static void _set_initializeShadowData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeLightData
    static ::UnityEngine::Rendering::ProfilingSampler* _get_initializeLightData();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler initializeLightData
    static void _set_initializeLightData(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler getPerObjectLightFlags
    static ::UnityEngine::Rendering::ProfilingSampler* _get_getPerObjectLightFlags();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler getPerObjectLightFlags
    static void _set_getPerObjectLightFlags(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler getMainLightIndex
    static ::UnityEngine::Rendering::ProfilingSampler* _get_getMainLightIndex();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler getMainLightIndex
    static void _set_getMainLightIndex(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler setupPerFrameShaderConstants
    static ::UnityEngine::Rendering::ProfilingSampler* _get_setupPerFrameShaderConstants();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler setupPerFrameShaderConstants
    static void _set_setupPerFrameShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get static field: static public readonly UnityEngine.Rendering.ProfilingSampler setupPerCameraShaderConstants
    static ::UnityEngine::Rendering::ProfilingSampler* _get_setupPerCameraShaderConstants();
    // Set static field: static public readonly UnityEngine.Rendering.ProfilingSampler setupPerCameraShaderConstants
    static void _set_setupPerCameraShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value);
    // static private System.Void .cctor()
    // Offset: 0x52F7588
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderPipeline::Profiling::Pipeline*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
