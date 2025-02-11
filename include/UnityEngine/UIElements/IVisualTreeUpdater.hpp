// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseVisualElementPanel
  class BaseVisualElementPanel;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
}
// Forward declaring namespace: Unity::Profiling
namespace Unity::Profiling {
  // Forward declaring type: ProfilerMarker
  struct ProfilerMarker;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IVisualTreeUpdater
  class IVisualTreeUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualTreeUpdater*, "UnityEngine.UIElements", "IVisualTreeUpdater");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IVisualTreeUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class IVisualTreeUpdater/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.Void set_panel(UnityEngine.UIElements.BaseVisualElementPanel value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);
    // public Unity.Profiling.ProfilerMarker get_profilerMarker()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Profiling::ProfilerMarker get_profilerMarker();
    // public System.Void Update()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update();
    // public System.Void OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);
  }; // UnityEngine.UIElements.IVisualTreeUpdater
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IVisualTreeUpdater::set_panel
// Il2CppName: set_panel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IVisualTreeUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&UnityEngine::UIElements::IVisualTreeUpdater::set_panel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BaseVisualElementPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IVisualTreeUpdater*), "set_panel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IVisualTreeUpdater::get_profilerMarker
// Il2CppName: get_profilerMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (UnityEngine::UIElements::IVisualTreeUpdater::*)()>(&UnityEngine::UIElements::IVisualTreeUpdater::get_profilerMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IVisualTreeUpdater*), "get_profilerMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IVisualTreeUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IVisualTreeUpdater::*)()>(&UnityEngine::UIElements::IVisualTreeUpdater::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IVisualTreeUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IVisualTreeUpdater::OnVersionChanged
// Il2CppName: OnVersionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IVisualTreeUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::IVisualTreeUpdater::OnVersionChanged)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* versionChangeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IVisualTreeUpdater*), "OnVersionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, versionChangeType});
  }
};
