// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationSectionGroup
#include "System/Configuration/ConfigurationSectionGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Configuration
namespace System::Net::Configuration {
  // Forward declaring type: AuthenticationModulesSection
  class AuthenticationModulesSection;
  // Forward declaring type: ConnectionManagementSection
  class ConnectionManagementSection;
  // Forward declaring type: DefaultProxySection
  class DefaultProxySection;
  // Forward declaring type: MailSettingsSectionGroup
  class MailSettingsSectionGroup;
  // Forward declaring type: RequestCachingSection
  class RequestCachingSection;
  // Forward declaring type: SettingsSection
  class SettingsSection;
  // Forward declaring type: WebRequestModulesSection
  class WebRequestModulesSection;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: Configuration
  class Configuration;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: NetSectionGroup
  class NetSectionGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::NetSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::NetSectionGroup*, "System.Net.Configuration", "NetSectionGroup");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.NetSectionGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F593D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSectionGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::NetSectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSectionGroup*, creationType>()));
    }
    // public System.Net.Configuration.AuthenticationModulesSection get_AuthenticationModules()
    // Offset: 0x4F59408
    ::System::Net::Configuration::AuthenticationModulesSection* get_AuthenticationModules();
    // public System.Net.Configuration.ConnectionManagementSection get_ConnectionManagement()
    // Offset: 0x4F59440
    ::System::Net::Configuration::ConnectionManagementSection* get_ConnectionManagement();
    // public System.Net.Configuration.DefaultProxySection get_DefaultProxy()
    // Offset: 0x4F59478
    ::System::Net::Configuration::DefaultProxySection* get_DefaultProxy();
    // public System.Net.Configuration.MailSettingsSectionGroup get_MailSettings()
    // Offset: 0x4F594B0
    ::System::Net::Configuration::MailSettingsSectionGroup* get_MailSettings();
    // public System.Net.Configuration.RequestCachingSection get_RequestCaching()
    // Offset: 0x4F594E8
    ::System::Net::Configuration::RequestCachingSection* get_RequestCaching();
    // public System.Net.Configuration.SettingsSection get_Settings()
    // Offset: 0x4F59520
    ::System::Net::Configuration::SettingsSection* get_Settings();
    // public System.Net.Configuration.WebRequestModulesSection get_WebRequestModules()
    // Offset: 0x4F59558
    ::System::Net::Configuration::WebRequestModulesSection* get_WebRequestModules();
    // static public System.Net.Configuration.NetSectionGroup GetSectionGroup(System.Configuration.Configuration config)
    // Offset: 0x4F59590
    static ::System::Net::Configuration::NetSectionGroup* GetSectionGroup(::System::Configuration::Configuration* config);
  }; // System.Net.Configuration.NetSectionGroup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_AuthenticationModules
// Il2CppName: get_AuthenticationModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::AuthenticationModulesSection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_AuthenticationModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_AuthenticationModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_ConnectionManagement
// Il2CppName: get_ConnectionManagement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::ConnectionManagementSection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_ConnectionManagement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_ConnectionManagement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_DefaultProxy
// Il2CppName: get_DefaultProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::DefaultProxySection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_DefaultProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_DefaultProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_MailSettings
// Il2CppName: get_MailSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::MailSettingsSectionGroup* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_MailSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_MailSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_RequestCaching
// Il2CppName: get_RequestCaching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::RequestCachingSection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_RequestCaching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_RequestCaching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SettingsSection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::get_WebRequestModules
// Il2CppName: get_WebRequestModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::WebRequestModulesSection* (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::get_WebRequestModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "get_WebRequestModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::NetSectionGroup::GetSectionGroup
// Il2CppName: GetSectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::NetSectionGroup* (*)(::System::Configuration::Configuration*)>(&System::Net::Configuration::NetSectionGroup::GetSectionGroup)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("System.Configuration", "Configuration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::NetSectionGroup*), "GetSectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
