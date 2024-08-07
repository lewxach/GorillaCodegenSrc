// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseVisualTreeUpdater
#include "UnityEngine/UIElements/BaseVisualTreeUpdater.hpp"
// Including type: Unity.Profiling.ProfilerMarker
#include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseVisualElementPanel
  class BaseVisualElementPanel;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: HierarchyChangeType
  struct HierarchyChangeType;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
}
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: RenderChain
  class RenderChain;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UIRRepaintUpdater
  class UIRRepaintUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIRRepaintUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRRepaintUpdater*, "UnityEngine.UIElements", "UIRRepaintUpdater");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIRRepaintUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class UIRRepaintUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
    public:
    public:
    // private UnityEngine.UIElements.BaseVisualElementPanel attachedPanel
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::BaseVisualElementPanel* attachedPanel;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::BaseVisualElementPanel*) == 0x8);
    // UnityEngine.UIElements.UIR.RenderChain renderChain
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::UIR::RenderChain* renderChain;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderChain*) == 0x8);
    // private System.Boolean <drawStats>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool drawStats;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <breakBatches>k__BackingField
    // Size: 0x1
    // Offset: 0x31
    bool breakBatches;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x32
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.String s_Description
    static ::StringW _get_s_Description();
    // Set static field: static private readonly System.String s_Description
    static void _set_s_Description(::StringW value);
    // Get static field: static private readonly Unity.Profiling.ProfilerMarker s_ProfilerMarker
    static ::Unity::Profiling::ProfilerMarker _get_s_ProfilerMarker();
    // Set static field: static private readonly Unity.Profiling.ProfilerMarker s_ProfilerMarker
    static void _set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);
    // Get instance field reference: private UnityEngine.UIElements.BaseVisualElementPanel attachedPanel
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::BaseVisualElementPanel*& dyn_attachedPanel();
    // Get instance field reference: UnityEngine.UIElements.UIR.RenderChain renderChain
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::RenderChain*& dyn_renderChain();
    // Get instance field reference: private System.Boolean <drawStats>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$drawStats$k__BackingField();
    // Get instance field reference: private System.Boolean <breakBatches>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$breakBatches$k__BackingField();
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // public System.Boolean get_drawStats()
    // Offset: 0x5670014
    bool get_drawStats();
    // public System.Boolean get_breakBatches()
    // Offset: 0x567001C
    bool get_breakBatches();
    // protected UnityEngine.UIElements.UIR.RenderChain CreateRenderChain()
    // Offset: 0x56702A0
    ::UnityEngine::UIElements::UIR::RenderChain* CreateRenderChain();
    // static private System.Void .cctor()
    // Offset: 0x5670310
    static void _cctor();
    // static private System.Void OnGraphicsResourcesRecreate(System.Boolean recreate)
    // Offset: 0x567042C
    static void OnGraphicsResourcesRecreate(bool recreate);
    // private System.Void OnPanelChanged(UnityEngine.UIElements.BaseVisualElementPanel obj)
    // Offset: 0x56705FC
    void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* obj);
    // private System.Void AttachToPanel()
    // Offset: 0x56707BC
    void AttachToPanel();
    // private System.Void DetachFromPanel()
    // Offset: 0x5670614
    void DetachFromPanel();
    // private System.Void InitRenderChain()
    // Offset: 0x56701D8
    void InitRenderChain();
    // System.Void DestroyRenderChain()
    // Offset: 0x56688C4
    void DestroyRenderChain();
    // private System.Void OnPanelAtlasChanged()
    // Offset: 0x5670D58
    void OnPanelAtlasChanged();
    // private System.Void OnPanelHierarchyChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.HierarchyChangeType changeType)
    // Offset: 0x5670D5C
    void OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);
    // private System.Void OnPanelStandardShaderChanged()
    // Offset: 0x567099C
    void OnPanelStandardShaderChanged();
    // private System.Void OnPanelStandardWorldSpaceShaderChanged()
    // Offset: 0x5670B34
    void OnPanelStandardWorldSpaceShaderChanged();
    // private System.Void ResetAllElementsDataRecursive(UnityEngine.UIElements.VisualElement ve)
    // Offset: 0x5670CCC
    void ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* ve);
    // protected System.Boolean get_disposed()
    // Offset: 0x5670D94
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x5670D9C
    void set_disposed(bool value);
    // public System.Void .ctor()
    // Offset: 0x566FF2C
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRRepaintUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIRRepaintUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRRepaintUpdater*, creationType>()));
    }
    // public override Unity.Profiling.ProfilerMarker get_profilerMarker()
    // Offset: 0x566FFBC
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: Unity.Profiling.ProfilerMarker BaseVisualTreeUpdater::get_profilerMarker()
    ::Unity::Profiling::ProfilerMarker get_profilerMarker();
    // public override System.Void OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    // Offset: 0x5670024
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);
    // public override System.Void Update()
    // Offset: 0x567011C
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::Update()
    void Update();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x5670DA8
    // Implemented from: UnityEngine.UIElements.BaseVisualTreeUpdater
    // Base method: System.Void BaseVisualTreeUpdater::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // UnityEngine.UIElements.UIRRepaintUpdater
  #pragma pack(pop)
  static check_size<sizeof(UIRRepaintUpdater), 50 + sizeof(bool)> __UnityEngine_UIElements_UIRRepaintUpdaterSizeCheck;
  static_assert(sizeof(UIRRepaintUpdater) == 0x33);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::get_drawStats
// Il2CppName: get_drawStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::get_drawStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "get_drawStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::get_breakBatches
// Il2CppName: get_breakBatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::get_breakBatches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "get_breakBatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::CreateRenderChain
// Il2CppName: CreateRenderChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChain* (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::CreateRenderChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "CreateRenderChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnGraphicsResourcesRecreate
// Il2CppName: OnGraphicsResourcesRecreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::UIElements::UIRRepaintUpdater::OnGraphicsResourcesRecreate)> {
  static const MethodInfo* get() {
    static auto* recreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnGraphicsResourcesRecreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recreate});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnPanelChanged
// Il2CppName: OnPanelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&UnityEngine::UIElements::UIRRepaintUpdater::OnPanelChanged)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BaseVisualElementPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnPanelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::AttachToPanel
// Il2CppName: AttachToPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::AttachToPanel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "AttachToPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::DetachFromPanel
// Il2CppName: DetachFromPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::DetachFromPanel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "DetachFromPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::InitRenderChain
// Il2CppName: InitRenderChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::InitRenderChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "InitRenderChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::DestroyRenderChain
// Il2CppName: DestroyRenderChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::DestroyRenderChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "DestroyRenderChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnPanelAtlasChanged
// Il2CppName: OnPanelAtlasChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::OnPanelAtlasChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnPanelAtlasChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnPanelHierarchyChanged
// Il2CppName: OnPanelHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&UnityEngine::UIElements::UIRRepaintUpdater::OnPanelHierarchyChanged)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* changeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "HierarchyChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnPanelHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, changeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnPanelStandardShaderChanged
// Il2CppName: OnPanelStandardShaderChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::OnPanelStandardShaderChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnPanelStandardShaderChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnPanelStandardWorldSpaceShaderChanged
// Il2CppName: OnPanelStandardWorldSpaceShaderChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::OnPanelStandardWorldSpaceShaderChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnPanelStandardWorldSpaceShaderChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::ResetAllElementsDataRecursive
// Il2CppName: ResetAllElementsDataRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::UIRRepaintUpdater::ResetAllElementsDataRecursive)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "ResetAllElementsDataRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(bool)>(&UnityEngine::UIElements::UIRRepaintUpdater::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::get_profilerMarker
// Il2CppName: get_profilerMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::get_profilerMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "get_profilerMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::OnVersionChanged
// Il2CppName: OnVersionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::UIRRepaintUpdater::OnVersionChanged)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* versionChangeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "OnVersionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, versionChangeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&UnityEngine::UIElements::UIRRepaintUpdater::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRRepaintUpdater::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRRepaintUpdater::*)(bool)>(&UnityEngine::UIElements::UIRRepaintUpdater::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRRepaintUpdater*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
