// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderPass
#include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
// Including type: UnityEngine.Rendering.FilteringSettings
#include "UnityEngine/Rendering/FilteringSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalDrawDBufferSystem
  class DecalDrawDBufferSystem;
  // Forward declaring type: DBufferSettings
  class DBufferSettings;
  // Forward declaring type: CameraData
  struct CameraData;
  // Forward declaring type: RenderingData
  struct RenderingData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DBufferRenderPass
  class DBufferRenderPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferRenderPass*, "UnityEngine.Rendering.Universal", "DBufferRenderPass");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.DBufferRenderPass
  // [TokenAttribute] Offset: FFFFFFFF
  class DBufferRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
    public:
    public:
    // private UnityEngine.Rendering.Universal.DecalDrawDBufferSystem m_DrawSystem
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DrawSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*) == 0x8);
    // private UnityEngine.Rendering.Universal.DBufferSettings m_Settings
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Rendering::Universal::DBufferSettings* m_Settings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DBufferSettings*) == 0x8);
    // private UnityEngine.Material m_DBufferClear
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Material* m_DBufferClear;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    // Size: 0x18
    // Offset: 0xF8
    ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    // private System.Collections.Generic.List`1<UnityEngine.Rendering.ShaderTagId> m_ShaderTagIdList
    // Size: 0x8
    // Offset: 0x110
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*) == 0x8);
    // private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ProfilingSampler*) == 0x8);
    // private UnityEngine.Rendering.ProfilingSampler m_DBufferClearSampler
    // Size: 0x8
    // Offset: 0x120
    ::UnityEngine::Rendering::ProfilingSampler* m_DBufferClearSampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ProfilingSampler*) == 0x8);
    // private System.Boolean m_DecalLayers
    // Size: 0x1
    // Offset: 0x128
    bool m_DecalLayers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Rendering.RTHandle m_DBufferDepth
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::Rendering::RTHandle* m_DBufferDepth;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private UnityEngine.Rendering.RTHandle[] <dBufferColorHandles>k__BackingField
    // Size: 0x8
    // Offset: 0x138
    ::ArrayW<::UnityEngine::Rendering::RTHandle*> dBufferColorHandles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rendering::RTHandle*>) == 0x8);
    // private UnityEngine.Rendering.RTHandle <depthHandle>k__BackingField
    // Size: 0x8
    // Offset: 0x140
    ::UnityEngine::Rendering::RTHandle* depthHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    public:
    // Get static field: static private System.String[] s_DBufferNames
    static ::ArrayW<::StringW> _get_s_DBufferNames();
    // Set static field: static private System.String[] s_DBufferNames
    static void _set_s_DBufferNames(::ArrayW<::StringW> value);
    // Get static field: static private System.String s_DBufferDepthName
    static ::StringW _get_s_DBufferDepthName();
    // Set static field: static private System.String s_DBufferDepthName
    static void _set_s_DBufferDepthName(::StringW value);
    // Get instance field reference: private UnityEngine.Rendering.Universal.DecalDrawDBufferSystem m_DrawSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& dyn_m_DrawSystem();
    // Get instance field reference: private UnityEngine.Rendering.Universal.DBufferSettings m_Settings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DBufferSettings*& dyn_m_Settings();
    // Get instance field reference: private UnityEngine.Material m_DBufferClear
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_DBufferClear();
    // Get instance field reference: private UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_m_FilteringSettings();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Rendering.ShaderTagId> m_ShaderTagIdList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& dyn_m_ShaderTagIdList();
    // Get instance field reference: private UnityEngine.Rendering.ProfilingSampler m_ProfilingSampler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ProfilingSampler*& dyn_m_ProfilingSampler();
    // Get instance field reference: private UnityEngine.Rendering.ProfilingSampler m_DBufferClearSampler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ProfilingSampler*& dyn_m_DBufferClearSampler();
    // Get instance field reference: private System.Boolean m_DecalLayers
    [[deprecated("Use field access instead!")]] bool& dyn_m_DecalLayers();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle m_DBufferDepth
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_DBufferDepth();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle[] <dBufferColorHandles>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rendering::RTHandle*>& dyn_$dBufferColorHandles$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.RTHandle <depthHandle>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_$depthHandle$k__BackingField();
    // UnityEngine.Rendering.RTHandle[] get_dBufferColorHandles()
    // Offset: 0x52A028C
    ::ArrayW<::UnityEngine::Rendering::RTHandle*> get_dBufferColorHandles();
    // private System.Void set_dBufferColorHandles(UnityEngine.Rendering.RTHandle[] value)
    // Offset: 0x52A0294
    void set_dBufferColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value);
    // UnityEngine.Rendering.RTHandle get_depthHandle()
    // Offset: 0x52A02A4
    ::UnityEngine::Rendering::RTHandle* get_depthHandle();
    // private System.Void set_depthHandle(UnityEngine.Rendering.RTHandle value)
    // Offset: 0x52A02AC
    void set_depthHandle(::UnityEngine::Rendering::RTHandle* value);
    // UnityEngine.Rendering.RTHandle get_dBufferDepth()
    // Offset: 0x52A02BC
    ::UnityEngine::Rendering::RTHandle* get_dBufferDepth();
    // public System.Void .ctor(UnityEngine.Material dBufferClear, UnityEngine.Rendering.Universal.DBufferSettings settings, UnityEngine.Rendering.Universal.DecalDrawDBufferSystem drawSystem, System.Boolean decalLayers)
    // Offset: 0x52A02C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DBufferRenderPass* New_ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem, bool decalLayers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DBufferRenderPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DBufferRenderPass*, creationType>(dBufferClear, settings, drawSystem, decalLayers)));
    }
    // public System.Void Dispose()
    // Offset: 0x52A05E4
    void Dispose();
    // public System.Void Setup(in UnityEngine.Rendering.Universal.CameraData cameraData)
    // Offset: 0x52A0678
    void Setup(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);
    // public System.Void Setup(in UnityEngine.Rendering.Universal.CameraData cameraData, UnityEngine.Rendering.RTHandle depthTextureHandle)
    // Offset: 0x52A078C
    void Setup(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::RTHandle* depthTextureHandle);
    // public override System.Void OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52A0AB0
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraSetup(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    // Offset: 0x52A0ABC
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::Execute(UnityEngine.Rendering.ScriptableRenderContext context, ref UnityEngine.Rendering.Universal.RenderingData renderingData)
    void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);
    // public override System.Void OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    // Offset: 0x52A1008
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::OnCameraCleanup(UnityEngine.Rendering.CommandBuffer cmd)
    void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);
    // static private System.Void .cctor()
    // Offset: 0x52A1148
    // Implemented from: UnityEngine.Rendering.Universal.ScriptableRenderPass
    // Base method: System.Void ScriptableRenderPass::.cctor()
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.DBufferRenderPass
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::get_dBufferColorHandles
// Il2CppName: get_dBufferColorHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*> (UnityEngine::Rendering::Universal::DBufferRenderPass::*)()>(&UnityEngine::Rendering::Universal::DBufferRenderPass::get_dBufferColorHandles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "get_dBufferColorHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::set_dBufferColorHandles
// Il2CppName: set_dBufferColorHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::set_dBufferColorHandles)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "set_dBufferColorHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::get_depthHandle
// Il2CppName: get_depthHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::DBufferRenderPass::*)()>(&UnityEngine::Rendering::Universal::DBufferRenderPass::get_depthHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "get_depthHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::set_depthHandle
// Il2CppName: set_depthHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::set_depthHandle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "set_depthHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::get_dBufferDepth
// Il2CppName: get_dBufferDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::DBufferRenderPass::*)()>(&UnityEngine::Rendering::Universal::DBufferRenderPass::get_dBufferDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "get_dBufferDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)()>(&UnityEngine::Rendering::Universal::DBufferRenderPass::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::Setup)> {
  static const MethodInfo* get() {
    static auto* cameraData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "CameraData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::Setup)> {
  static const MethodInfo* get() {
    static auto* cameraData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "CameraData")->this_arg;
    static auto* depthTextureHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraData, depthTextureHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraSetup
// Il2CppName: OnCameraSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraSetup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "OnCameraSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* renderingData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "RenderingData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, renderingData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraCleanup
// Il2CppName: OnCameraCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraCleanup)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), "OnCameraCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferRenderPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::DBufferRenderPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DBufferRenderPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
