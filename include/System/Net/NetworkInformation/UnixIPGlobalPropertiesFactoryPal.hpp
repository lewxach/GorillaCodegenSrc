// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPGlobalProperties
  class IPGlobalProperties;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnixIPGlobalPropertiesFactoryPal
  class UnixIPGlobalPropertiesFactoryPal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*, "System.Net.NetworkInformation", "UnixIPGlobalPropertiesFactoryPal");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixIPGlobalPropertiesFactoryPal
  // [TokenAttribute] Offset: FFFFFFFF
  class UnixIPGlobalPropertiesFactoryPal : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Boolean <PlatformNeedsLibCWorkaround>k__BackingField
    static bool _get_$PlatformNeedsLibCWorkaround$k__BackingField();
    // Set static field: static private readonly System.Boolean <PlatformNeedsLibCWorkaround>k__BackingField
    static void _set_$PlatformNeedsLibCWorkaround$k__BackingField(bool value);
    // static private System.Boolean get_PlatformNeedsLibCWorkaround()
    // Offset: 0x4ECA81C
    static bool get_PlatformNeedsLibCWorkaround();
    // static public System.Net.NetworkInformation.IPGlobalProperties Create()
    // Offset: 0x4EC81F8
    static ::System::Net::NetworkInformation::IPGlobalProperties* Create();
  }; // System.Net.NetworkInformation.UnixIPGlobalPropertiesFactoryPal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround
// Il2CppName: get_PlatformNeedsLibCWorkaround
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*), "get_PlatformNeedsLibCWorkaround", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties* (*)()>(&System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
