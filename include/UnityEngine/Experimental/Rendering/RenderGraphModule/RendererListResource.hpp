// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rendering.RendererUtils.RendererListDesc
#include "UnityEngine/Rendering/RendererUtils/RendererListDesc.hpp"
// Including type: UnityEngine.Rendering.RendererList
#include "UnityEngine/Rendering/RendererList.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RendererListResource
  struct RendererListResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RendererListResource");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListResource
  // [TokenAttribute] Offset: FFFFFFFF
  struct RendererListResource/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Rendering.RendererUtils.RendererListDesc desc
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::Rendering::RendererUtils::RendererListDesc desc;
    // public UnityEngine.Rendering.RendererList rendererList
    // Size: 0x14
    // Offset: 0xD0
    ::UnityEngine::Rendering::RendererList rendererList;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RendererList) == 0x14);
    public:
    // Creating value type constructor for type: RendererListResource
    constexpr RendererListResource(::UnityEngine::Rendering::RendererUtils::RendererListDesc desc_ = {}, ::UnityEngine::Rendering::RendererList rendererList_ = {}) noexcept : desc{desc_}, rendererList{rendererList_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.RendererUtils.RendererListDesc desc
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RendererUtils::RendererListDesc& dyn_desc();
    // Get instance field reference: public UnityEngine.Rendering.RendererList rendererList
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RendererList& dyn_rendererList();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListResource
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"