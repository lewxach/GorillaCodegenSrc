// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
  // Forward declaring type: TextureHandle
  struct TextureHandle;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: InvokeOnRenderObjectCallbackPass
  class InvokeOnRenderObjectCallbackPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*, "UnityEngine.Rendering.Universal", "InvokeOnRenderObjectCallbackPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass
  // [TokenAttribute] Offset: FFFFFFFF
  class InvokeOnRenderObjectCallbackPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::$$c
    class $$c;
    // public System.Void .ctor(UnityEngine.Rendering.Universal.RenderPassEvent evt)
    // Offset: 0x52C6204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokeOnRenderObjectCallbackPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokeOnRenderObjectCallbackPass*, creationType>(evt)));
    }
    // System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle colorTarget, UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depthTarget, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52C62E0
    void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle colorTarget, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle depthTarget, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52C62C4
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
  }; // UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Render)> {
  static const MethodInfo* get() {
    static auto* renderGraph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* colorTarget = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* depthTarget = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderGraph, colorTarget, depthTarget, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
