// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources
#include "UnityEngine/Rendering/Universal/UniversalRenderPipelineEditorResources.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineEditorResources/ShaderResources");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources
  // [TokenAttribute] Offset: FFFFFFFF
  // [ReloadGroupAttribute] Offset: FFFFFFFF
  class UniversalRenderPipelineEditorResources::ShaderResources : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Shader autodeskInteractivePS
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Shader* autodeskInteractivePS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader autodeskInteractiveTransparentPS
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* autodeskInteractiveTransparentPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader autodeskInteractiveMaskedPS
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Shader* autodeskInteractiveMaskedPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader terrainDetailLitPS
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Shader* terrainDetailLitPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader terrainDetailGrassPS
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Shader* terrainDetailGrassPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader terrainDetailGrassBillboardPS
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Shader* terrainDetailGrassBillboardPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader defaultSpeedTree7PS
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Shader* defaultSpeedTree7PS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader defaultSpeedTree8PS
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Shader* defaultSpeedTree8PS;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Shader autodeskInteractivePS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_autodeskInteractivePS();
    // Get instance field reference: public UnityEngine.Shader autodeskInteractiveTransparentPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_autodeskInteractiveTransparentPS();
    // Get instance field reference: public UnityEngine.Shader autodeskInteractiveMaskedPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_autodeskInteractiveMaskedPS();
    // Get instance field reference: public UnityEngine.Shader terrainDetailLitPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_terrainDetailLitPS();
    // Get instance field reference: public UnityEngine.Shader terrainDetailGrassPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_terrainDetailGrassPS();
    // Get instance field reference: public UnityEngine.Shader terrainDetailGrassBillboardPS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_terrainDetailGrassBillboardPS();
    // Get instance field reference: public UnityEngine.Shader defaultSpeedTree7PS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_defaultSpeedTree7PS();
    // Get instance field reference: public UnityEngine.Shader defaultSpeedTree8PS
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_defaultSpeedTree8PS();
    // public System.Void .ctor()
    // Offset: 0x5293E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalRenderPipelineEditorResources::ShaderResources* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalRenderPipelineEditorResources::ShaderResources*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources
  #pragma pack(pop)
  static check_size<sizeof(UniversalRenderPipelineEditorResources::ShaderResources), 72 + sizeof(::UnityEngine::Shader*)> __UnityEngine_Rendering_Universal_UniversalRenderPipelineEditorResources_ShaderResourcesSizeCheck;
  static_assert(sizeof(UniversalRenderPipelineEditorResources::ShaderResources) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
