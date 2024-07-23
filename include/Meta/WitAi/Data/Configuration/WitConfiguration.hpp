// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Meta.WitAi.IWitRequestConfiguration
#include "Meta/WitAi/IWitRequestConfiguration.hpp"
// Including type: Meta.WitAi.Data.Info.WitAppInfo
#include "Meta/WitAi/Data/Info/WitAppInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfigurationAssetData
  class WitConfigurationAssetData;
}
// Forward declaring namespace: Meta::WitAi::Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitEndpointConfig
  class WitEndpointConfig;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: IWitRequestEndpointInfo
  class IWitRequestEndpointInfo;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfiguration
  class WitConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::Configuration::WitConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Configuration::WitConfiguration*, "Meta.WitAi.Data.Configuration", "WitConfiguration");
// Type namespace: Meta.WitAi.Data.Configuration
namespace Meta::WitAi::Data::Configuration {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.Configuration.WitConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class WitConfiguration : public ::UnityEngine::ScriptableObject/*, public ::Meta::WitAi::IWitRequestConfiguration*/ {
    public:
    public:
    // private System.String _clientAccessToken
    // Size: 0x8
    // Offset: 0x18
    ::StringW clientAccessToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Meta.WitAi.Data.Info.WitAppInfo _appInfo
    // Size: 0x68
    // Offset: 0x20
    ::Meta::WitAi::Data::Info::WitAppInfo appInfo;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Data::Info::WitAppInfo) == 0x68);
    // private Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] _configData
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*> configData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>) == 0x8);
    // private System.String _configurationId
    // Size: 0x8
    // Offset: 0x90
    ::StringW configurationId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 timeoutMS
    // Size: 0x4
    // Offset: 0x98
    int timeoutMS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: timeoutMS and: endpointConfiguration
    char __padding4[0x4] = {};
    // public Meta.WitAi.Configuration.WitEndpointConfig endpointConfiguration
    // Size: 0x8
    // Offset: 0xA0
    ::Meta::WitAi::Configuration::WitEndpointConfig* endpointConfiguration;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Configuration::WitEndpointConfig*) == 0x8);
    // public System.Boolean isDemoOnly
    // Size: 0x1
    // Offset: 0xA8
    bool isDemoOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean useConduit
    // Size: 0x1
    // Offset: 0xA9
    bool useConduit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useConduit and: manifestLocalPath
    char __padding7[0x6] = {};
    // private System.String _manifestLocalPath
    // Size: 0x8
    // Offset: 0xB0
    ::StringW manifestLocalPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> excludedAssemblies
    // Size: 0x8
    // Offset: 0xB8
    ::System::Collections::Generic::List_1<::StringW>* excludedAssemblies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Boolean relaxedResolution
    // Size: 0x1
    // Offset: 0xC0
    bool relaxedResolution;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::IWitRequestConfiguration
    operator ::Meta::WitAi::IWitRequestConfiguration() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IWitRequestConfiguration*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String INVALID_APP_ID_NO_CLIENT_TOKEN
    static constexpr const char* INVALID_APP_ID_NO_CLIENT_TOKEN = "App Info Not Set - No Client Token";
    // Get static field: static private System.String INVALID_APP_ID_NO_CLIENT_TOKEN
    static ::StringW _get_INVALID_APP_ID_NO_CLIENT_TOKEN();
    // Set static field: static private System.String INVALID_APP_ID_NO_CLIENT_TOKEN
    static void _set_INVALID_APP_ID_NO_CLIENT_TOKEN(::StringW value);
    // static field const value: static private System.String INVALID_APP_ID_WITH_CLIENT_TOKEN
    static constexpr const char* INVALID_APP_ID_WITH_CLIENT_TOKEN = "App Info Not Set - Has Client Token";
    // Get static field: static private System.String INVALID_APP_ID_WITH_CLIENT_TOKEN
    static ::StringW _get_INVALID_APP_ID_WITH_CLIENT_TOKEN();
    // Set static field: static private System.String INVALID_APP_ID_WITH_CLIENT_TOKEN
    static void _set_INVALID_APP_ID_WITH_CLIENT_TOKEN(::StringW value);
    // Get instance field reference: private System.String _clientAccessToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn__clientAccessToken();
    // Get instance field reference: private Meta.WitAi.Data.Info.WitAppInfo _appInfo
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::Info::WitAppInfo& dyn__appInfo();
    // Get instance field reference: private Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] _configData
    [[deprecated("Use field access instead!")]] ::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>& dyn__configData();
    // Get instance field reference: private System.String _configurationId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__configurationId();
    // Get instance field reference: public System.Int32 timeoutMS
    [[deprecated("Use field access instead!")]] int& dyn_timeoutMS();
    // Get instance field reference: public Meta.WitAi.Configuration.WitEndpointConfig endpointConfiguration
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Configuration::WitEndpointConfig*& dyn_endpointConfiguration();
    // Get instance field reference: public System.Boolean isDemoOnly
    [[deprecated("Use field access instead!")]] bool& dyn_isDemoOnly();
    // Get instance field reference: public System.Boolean useConduit
    [[deprecated("Use field access instead!")]] bool& dyn_useConduit();
    // Get instance field reference: private System.String _manifestLocalPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__manifestLocalPath();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> excludedAssemblies
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_excludedAssemblies();
    // Get instance field reference: public System.Boolean relaxedResolution
    [[deprecated("Use field access instead!")]] bool& dyn_relaxedResolution();
    // public System.String get_ManifestLocalPath()
    // Offset: 0x44680D8
    ::StringW get_ManifestLocalPath();
    // public System.Void ResetData()
    // Offset: 0x44680E0
    void ResetData();
    // public System.Void UpdateDataAssets()
    // Offset: 0x4468164
    void UpdateDataAssets();
    // public System.String GetLoggerAppId()
    // Offset: 0x44681D0
    ::StringW GetLoggerAppId();
    // public System.String GetConfigurationId()
    // Offset: 0x446825C
    ::StringW GetConfigurationId();
    // public System.String GetApplicationId()
    // Offset: 0x4468254
    ::StringW GetApplicationId();
    // public Meta.WitAi.Data.Info.WitAppInfo GetApplicationInfo()
    // Offset: 0x4468264
    ::Meta::WitAi::Data::Info::WitAppInfo GetApplicationInfo();
    // public Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] GetConfigData()
    // Offset: 0x4468274
    ::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*> GetConfigData();
    // public Meta.WitAi.IWitRequestEndpointInfo GetEndpointInfo()
    // Offset: 0x446831C
    ::Meta::WitAi::IWitRequestEndpointInfo* GetEndpointInfo();
    // public System.String GetClientAccessToken()
    // Offset: 0x4468324
    ::StringW GetClientAccessToken();
    // public System.Void .ctor()
    // Offset: 0x446832C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitConfiguration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Configuration::WitConfiguration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitConfiguration*, creationType>()));
    }
  }; // Meta.WitAi.Data.Configuration.WitConfiguration
  #pragma pack(pop)
  static check_size<sizeof(WitConfiguration), 192 + sizeof(bool)> __Meta_WitAi_Data_Configuration_WitConfigurationSizeCheck;
  static_assert(sizeof(WitConfiguration) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::get_ManifestLocalPath
// Il2CppName: get_ManifestLocalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::get_ManifestLocalPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "get_ManifestLocalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::ResetData
// Il2CppName: ResetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::ResetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "ResetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::UpdateDataAssets
// Il2CppName: UpdateDataAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::UpdateDataAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "UpdateDataAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetLoggerAppId
// Il2CppName: GetLoggerAppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetLoggerAppId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetLoggerAppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigurationId
// Il2CppName: GetConfigurationId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigurationId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetConfigurationId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationId
// Il2CppName: GetApplicationId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetApplicationId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationInfo
// Il2CppName: GetApplicationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Info::WitAppInfo (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetApplicationInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetApplicationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigData
// Il2CppName: GetConfigData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*> (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetConfigData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetConfigData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetEndpointInfo
// Il2CppName: GetEndpointInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::IWitRequestEndpointInfo* (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetEndpointInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetEndpointInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::GetClientAccessToken
// Il2CppName: GetClientAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Configuration::WitConfiguration::*)()>(&Meta::WitAi::Data::Configuration::WitConfiguration::GetClientAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfiguration*), "GetClientAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfiguration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!