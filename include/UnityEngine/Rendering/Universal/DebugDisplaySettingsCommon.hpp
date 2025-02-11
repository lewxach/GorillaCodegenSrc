// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.IDebugDisplaySettingsData
#include "UnityEngine/Rendering/IDebugDisplaySettingsData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IDebugDisplaySettingsPanelDisposable
  class IDebugDisplaySettingsPanelDisposable;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DebugDisplaySettingsCommon
  class DebugDisplaySettingsCommon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsCommon : public ::Il2CppObject/*, public ::UnityEngine::Rendering::IDebugDisplaySettingsData*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::WidgetFactory
    class WidgetFactory;
    // Nested type: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel
    class SettingsPanel;
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::IDebugDisplaySettingsData
    operator ::UnityEngine::Rendering::IDebugDisplaySettingsData() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(this);
    }
    // public System.Boolean get_AreAnySettingsActive()
    // Offset: 0x5293E68
    bool get_AreAnySettingsActive();
    // public System.Boolean get_IsPostProcessingAllowed()
    // Offset: 0x5293E70
    bool get_IsPostProcessingAllowed();
    // public System.Boolean get_IsLightingActive()
    // Offset: 0x5293E78
    bool get_IsLightingActive();
    // public System.Boolean TryGetScreenClearColor(ref UnityEngine.Color _)
    // Offset: 0x5293E80
    bool TryGetScreenClearColor(ByRef<::UnityEngine::Color> _);
    // public UnityEngine.Rendering.IDebugDisplaySettingsPanelDisposable CreatePanel()
    // Offset: 0x5293E88
    ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();
    // public System.Void .ctor()
    // Offset: 0x529423C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsCommon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsCommon*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_AreAnySettingsActive
// Il2CppName: get_AreAnySettingsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_AreAnySettingsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*), "get_AreAnySettingsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_IsPostProcessingAllowed
// Il2CppName: get_IsPostProcessingAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_IsPostProcessingAllowed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*), "get_IsPostProcessingAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_IsLightingActive
// Il2CppName: get_IsLightingActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::get_IsLightingActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*), "get_IsLightingActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::TryGetScreenClearColor
// Il2CppName: TryGetScreenClearColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::TryGetScreenClearColor)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*), "TryGetScreenClearColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::CreatePanel
// Il2CppName: CreatePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::CreatePanel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*), "CreatePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
