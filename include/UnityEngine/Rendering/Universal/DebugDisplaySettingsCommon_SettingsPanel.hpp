// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon
#include "UnityEngine/Rendering/Universal/DebugDisplaySettingsCommon.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettingsPanel
#include "UnityEngine/Rendering/DebugDisplaySettingsPanel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsCommon/SettingsPanel");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon/SettingsPanel
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayInfoAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsCommon::SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // static field const value: static private System.String k_GoToSectionString
    static constexpr const char* k_GoToSectionString = "Go to Section...";
    // Get static field: static private System.String k_GoToSectionString
    static ::StringW _get_k_GoToSectionString();
    // Set static field: static private System.String k_GoToSectionString
    static void _set_k_GoToSectionString(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x5293ED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsCommon::SettingsPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsCommon::SettingsPanel*, creationType>()));
    }
    // public override UnityEngine.Rendering.DebugUI/Flags get_Flags()
    // Offset: 0x52944C4
    // Implemented from: UnityEngine.Rendering.DebugDisplaySettingsPanel
    // Base method: UnityEngine.Rendering.DebugUI/Flags DebugDisplaySettingsPanel::get_Flags()
    ::UnityEngine::Rendering::DebugUI::Flags get_Flags();
  }; // UnityEngine.Rendering.Universal.DebugDisplaySettingsCommon/SettingsPanel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugUI::Flags (UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon::SettingsPanel*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
