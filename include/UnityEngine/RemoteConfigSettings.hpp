// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RemoteConfigSettings
  class RemoteConfigSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RemoteConfigSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettings*, "UnityEngine", "RemoteConfigSettings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RemoteConfigSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [ExcludeFromDocsAttribute] Offset: FFFFFFFF
  class RemoteConfigSettings : public ::Il2CppObject {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Action`1<System.Boolean> Updated
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<bool>* Updated;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private System.Action`1<System.Boolean> Updated
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_Updated();
    // static System.Void RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings rcs, System.Boolean wasLastUpdatedFromServer)
    // Offset: 0x570839C
    static void RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings* rcs, bool wasLastUpdatedFromServer);
  }; // UnityEngine.RemoteConfigSettings
  #pragma pack(pop)
  static check_size<sizeof(RemoteConfigSettings), 24 + sizeof(::System::Action_1<bool>*)> __UnityEngine_RemoteConfigSettingsSizeCheck;
  static_assert(sizeof(RemoteConfigSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated
// Il2CppName: RemoteConfigSettingsUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RemoteConfigSettings*, bool)>(&UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated)> {
  static const MethodInfo* get() {
    static auto* rcs = &::il2cpp_utils::GetClassFromName("UnityEngine", "RemoteConfigSettings")->byval_arg;
    static auto* wasLastUpdatedFromServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RemoteConfigSettings*), "RemoteConfigSettingsUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rcs, wasLastUpdatedFromServer});
  }
};