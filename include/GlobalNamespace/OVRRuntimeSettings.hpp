// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: OVRManager/ColorSpace
#include "GlobalNamespace/OVRManager_ColorSpace.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRRuntimeSettings
  class OVRRuntimeSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1F
  #pragma pack(push, 1)
  // Autogenerated type: OVRRuntimeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public OVRManager/ColorSpace colorSpace
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRManager_ColorSpace colorSpace;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager_ColorSpace) == 0x4);
    // private System.Boolean hasSentConsentEvent
    // Size: 0x1
    // Offset: 0x1C
    bool hasSentConsentEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasSetTelemetryEnabled
    // Size: 0x1
    // Offset: 0x1D
    bool hasSetTelemetryEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean telemetryEnabled
    // Size: 0x1
    // Offset: 0x1E
    bool telemetryEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private OVRRuntimeSettings _instance
    static ::GlobalNamespace::OVRRuntimeSettings* _get__instance();
    // Set static field: static private OVRRuntimeSettings _instance
    static void _set__instance(::GlobalNamespace::OVRRuntimeSettings* value);
    // Get instance field reference: public OVRManager/ColorSpace colorSpace
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager_ColorSpace& dyn_colorSpace();
    // Get instance field reference: private System.Boolean hasSentConsentEvent
    [[deprecated("Use field access instead!")]] bool& dyn_hasSentConsentEvent();
    // Get instance field reference: private System.Boolean hasSetTelemetryEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_hasSetTelemetryEnabled();
    // Get instance field reference: private System.Boolean telemetryEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_telemetryEnabled();
    // static OVRRuntimeSettings get_Instance()
    // Offset: 0x491A234
    static ::GlobalNamespace::OVRRuntimeSettings* get_Instance();
    // private System.Void OnEnable()
    // Offset: 0x491A3F4
    void OnEnable();
    // System.Boolean get_HasSetTelemetryEnabled()
    // Offset: 0x491A44C
    bool get_HasSetTelemetryEnabled();
    // System.Boolean get_TelemetryEnabled()
    // Offset: 0x491A454
    bool get_TelemetryEnabled();
    // static public OVRRuntimeSettings GetRuntimeSettings()
    // Offset: 0x491A2E0
    static ::GlobalNamespace::OVRRuntimeSettings* GetRuntimeSettings();
    // public System.Void .ctor()
    // Offset: 0x491A474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRRuntimeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRRuntimeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRRuntimeSettings*, creationType>()));
    }
  }; // OVRRuntimeSettings
  #pragma pack(pop)
  static check_size<sizeof(OVRRuntimeSettings), 30 + sizeof(bool)> __GlobalNamespace_OVRRuntimeSettingsSizeCheck;
  static_assert(sizeof(OVRRuntimeSettings) == 0x1F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings* (*)()>(&GlobalNamespace::OVRRuntimeSettings::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRuntimeSettings*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRRuntimeSettings::*)()>(&GlobalNamespace::OVRRuntimeSettings::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRuntimeSettings*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled
// Il2CppName: get_HasSetTelemetryEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRRuntimeSettings::*)()>(&GlobalNamespace::OVRRuntimeSettings::get_HasSetTelemetryEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRuntimeSettings*), "get_HasSetTelemetryEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled
// Il2CppName: get_TelemetryEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRRuntimeSettings::*)()>(&GlobalNamespace::OVRRuntimeSettings::get_TelemetryEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRuntimeSettings*), "get_TelemetryEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings
// Il2CppName: GetRuntimeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings* (*)()>(&GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRRuntimeSettings*), "GetRuntimeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRRuntimeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!