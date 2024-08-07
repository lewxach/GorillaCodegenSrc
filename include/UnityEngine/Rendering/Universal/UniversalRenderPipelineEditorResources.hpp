// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalRenderPipelineEditorResources
  class UniversalRenderPipelineEditorResources;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineEditorResources");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources
  // [TokenAttribute] Offset: FFFFFFFF
  class UniversalRenderPipelineEditorResources : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources
    class ShaderResources;
    // Nested type: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::MaterialResources
    class MaterialResources;
    public:
    // public UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources shaders
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources* shaders;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources*) == 0x8);
    // public UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources materials
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::MaterialResources* materials;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::MaterialResources*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources shaders
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::ShaderResources*& dyn_shaders();
    // Get instance field reference: public UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources materials
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::MaterialResources*& dyn_materials();
    // public System.Void .ctor()
    // Offset: 0x5293E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalRenderPipelineEditorResources* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalRenderPipelineEditorResources*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources
  #pragma pack(pop)
  static check_size<sizeof(UniversalRenderPipelineEditorResources), 32 + sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::MaterialResources*)> __UnityEngine_Rendering_Universal_UniversalRenderPipelineEditorResourcesSizeCheck;
  static_assert(sizeof(UniversalRenderPipelineEditorResources) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
