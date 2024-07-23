// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScreenSpaceShadows
#include "UnityEngine/Rendering/Universal/ScreenSpaceShadows.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScreenSpaceShadowsSettings
  class ScreenSpaceShadowsSettings;
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPass
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenSpaceShadows::ScreenSpaceShadowsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    public:
    // private UnityEngine.Material m_Material
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Material* m_Material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Rendering.Universal.ScreenSpaceShadowsSettings m_CurrentSettings
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_CurrentSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*) == 0x8);
    // private UnityEngine.Rendering.RTHandle m_RenderTarget
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Rendering::RTHandle* m_RenderTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    public:
    // Get static field: static private System.String m_ProfilerTag
    static ::StringW _get_m_ProfilerTag();
    // Set static field: static private System.String m_ProfilerTag
    static void _set_m_ProfilerTag(::StringW value);
    // Get static field: static private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    static ::UnityEngine::Rendering::ProfilingSampler* _get_m_ProfilingSampler();
    // Set static field: static private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    static void _set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);
    // Get instance field reference: private UnityEngine.Material m_Material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_Material();
    // Get instance field reference: private UnityEngine.Rendering.Universal.ScreenSpaceShadowsSettings m_CurrentSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& dyn_m_CurrentSettings();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle m_RenderTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_RenderTarget();
    // public System.Void Dispose()
    // Offset: 0x52D7854
    void Dispose();
    // System.Boolean Setup(UnityEngine.Rendering.Universal.ScreenSpaceShadowsSettings featureSettings, UnityEngine.Material material)
    // Offset: 0x52D7734
    bool Setup(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* featureSettings, ::UnityEngine::Material* material);
    // System.Void .ctor()
    // Offset: 0x52D72B0
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenSpaceShadows::ScreenSpaceShadowsPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenSpaceShadows::ScreenSpaceShadowsPass*, creationType>()));
    }
    // public override System.Void OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52D78DC
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52D7C40
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // static private System.Void .cctor()
    // Offset: 0x52D7F34
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::*)()>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::*)(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*, ::UnityEngine::Material*)>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Setup)> {
  static const MethodInfo* get() {
    static auto* featureSettings = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ScreenSpaceShadowsSettings")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{featureSettings, material});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::OnCameraSetup
// Il2CppName: OnCameraSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::OnCameraSetup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*), "OnCameraSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadowsPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};