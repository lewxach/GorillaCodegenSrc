// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalRenderer
  class UniversalRenderer;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: RTClearFlags
  struct RTClearFlags;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ClearTargetsPass
  class ClearTargetsPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClearTargetsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClearTargetsPass*, "UnityEngine.Rendering.Universal", "ClearTargetsPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ClearTargetsPass
  // [TokenAttribute] Offset: FFFFFFFF
  class ClearTargetsPass : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::ClearTargetsPass::PassData
    class PassData;
    // Nested type: ::UnityEngine::Rendering::Universal::ClearTargetsPass::$$c
    class $$c;
    // Get static field: static private UnityEngine.Rendering.ProfilingSampler s_ClearProfilingSampler
    static ::UnityEngine::Rendering::ProfilingSampler* _get_s_ClearProfilingSampler();
    // Set static field: static private UnityEngine.Rendering.ProfilingSampler s_ClearProfilingSampler
    static void _set_s_ClearProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);
    // static System.Void Render(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph graph, UnityEngine.Rendering.Universal.UniversalRenderer renderer, UnityEngine.Rendering.RTClearFlags clearFlags, UnityEngine.Color clearColor)
    // Offset: 0x52EE468
    static void Render(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::Universal::UniversalRenderer* renderer, ::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color clearColor);
    // public System.Void .ctor()
    // Offset: 0x52EED20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClearTargetsPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ClearTargetsPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClearTargetsPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x52EED28
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.ClearTargetsPass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ClearTargetsPass::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalRenderer*, ::UnityEngine::Rendering::RTClearFlags, ::UnityEngine::Color)>(&UnityEngine::Rendering::Universal::ClearTargetsPass::Render)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "UniversalRenderer")->byval_arg;
    static auto* clearFlags = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTClearFlags")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ClearTargetsPass*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, renderer, clearFlags, clearColor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ClearTargetsPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ClearTargetsPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::ClearTargetsPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ClearTargetsPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
