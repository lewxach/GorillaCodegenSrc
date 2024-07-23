// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
#include "UnityEngine/Rendering/Universal/Internal/ColorGradingLutPass.hpp"
// Including type: UnityEngine.Rendering.Universal.RenderingData
#include "UnityEngine/Rendering/Universal/RenderingData.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/PassData");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorGradingLutPass::PassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.Universal.RenderingData renderingData
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::RenderingData renderingData;
    // UnityEngine.Material lutBuilderLdr
    // Size: 0x8
    // Offset: 0x2C8
    ::UnityEngine::Material* lutBuilderLdr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.Material lutBuilderHdr
    // Size: 0x8
    // Offset: 0x2D0
    ::UnityEngine::Material* lutBuilderHdr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // System.Boolean allowColorGradingACESHDR
    // Size: 0x1
    // Offset: 0x2D8
    bool allowColorGradingACESHDR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle internalLut
    // Size: 0x8
    // Offset: 0x2DC
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle internalLut;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Rendering.Universal.RenderingData renderingData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::RenderingData& dyn_renderingData();
    // Get instance field reference: UnityEngine.Material lutBuilderLdr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_lutBuilderLdr();
    // Get instance field reference: UnityEngine.Material lutBuilderHdr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_lutBuilderHdr();
    // Get instance field reference: System.Boolean allowColorGradingACESHDR
    [[deprecated("Use field access instead!")]] bool& dyn_allowColorGradingACESHDR();
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle internalLut
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_internalLut();
    // public System.Void .ctor()
    // Offset: 0x530E874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorGradingLutPass::PassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorGradingLutPass::PassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::PassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!