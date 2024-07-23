// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystem
  class XRDisplaySubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: PlatformAutoDetect
  class PlatformAutoDetect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PlatformAutoDetect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PlatformAutoDetect*, "UnityEngine.Rendering.Universal", "PlatformAutoDetect");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.PlatformAutoDetect
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformAutoDetect : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem> displaySubsystemList
    static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem*>* _get_displaySubsystemList();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem> displaySubsystemList
    static void _set_displaySubsystemList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystem*>* value);
    // Get static field: static private System.Boolean <isXRMobile>k__BackingField
    static bool _get_$isXRMobile$k__BackingField();
    // Set static field: static private System.Boolean <isXRMobile>k__BackingField
    static void _set_$isXRMobile$k__BackingField(bool value);
    // static System.Void Initialize()
    // Offset: 0x52F925C
    static void Initialize();
    // static private System.Boolean IsRunningXRMobile()
    // Offset: 0x52F92F0
    static bool IsRunningXRMobile();
    // static System.Boolean get_isXRMobile()
    // Offset: 0x52F9460
    static bool get_isXRMobile();
    // static private System.Void set_isXRMobile(System.Boolean value)
    // Offset: 0x52F94B8
    static void set_isXRMobile(bool value);
    // static private System.Void .cctor()
    // Offset: 0x52F9518
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.PlatformAutoDetect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PlatformAutoDetect::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::PlatformAutoDetect::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PlatformAutoDetect*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PlatformAutoDetect::IsRunningXRMobile
// Il2CppName: IsRunningXRMobile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Rendering::Universal::PlatformAutoDetect::IsRunningXRMobile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PlatformAutoDetect*), "IsRunningXRMobile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isXRMobile
// Il2CppName: get_isXRMobile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isXRMobile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PlatformAutoDetect*), "get_isXRMobile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PlatformAutoDetect::set_isXRMobile
// Il2CppName: set_isXRMobile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Rendering::Universal::PlatformAutoDetect::set_isXRMobile)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PlatformAutoDetect*), "set_isXRMobile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PlatformAutoDetect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::PlatformAutoDetect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PlatformAutoDetect*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};