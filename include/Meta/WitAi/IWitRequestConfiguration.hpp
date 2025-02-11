// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Info
namespace Meta::WitAi::Data::Info {
  // Forward declaring type: WitAppInfo
  struct WitAppInfo;
}
// Forward declaring namespace: Meta::WitAi::Data::Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfigurationAssetData
  class WitConfigurationAssetData;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: IWitRequestEndpointInfo
  class IWitRequestEndpointInfo;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: IWitRequestConfiguration
  class IWitRequestConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::IWitRequestConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::IWitRequestConfiguration*, "Meta.WitAi", "IWitRequestConfiguration");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.IWitRequestConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class IWitRequestConfiguration {
    public:
    // public System.String GetConfigurationId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetConfigurationId();
    // public System.String GetApplicationId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetApplicationId();
    // public Meta.WitAi.Data.Info.WitAppInfo GetApplicationInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Data::Info::WitAppInfo GetApplicationInfo();
    // public Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] GetConfigData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*> GetConfigData();
    // public Meta.WitAi.IWitRequestEndpointInfo GetEndpointInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::IWitRequestEndpointInfo* GetEndpointInfo();
    // public System.String GetClientAccessToken()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetClientAccessToken();
    // public System.Void UpdateDataAssets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateDataAssets();
  }; // Meta.WitAi.IWitRequestConfiguration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetConfigurationId
// Il2CppName: GetConfigurationId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetConfigurationId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetConfigurationId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetApplicationId
// Il2CppName: GetApplicationId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetApplicationId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetApplicationId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetApplicationInfo
// Il2CppName: GetApplicationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Info::WitAppInfo (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetApplicationInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetApplicationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetConfigData
// Il2CppName: GetConfigData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*> (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetConfigData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetConfigData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetEndpointInfo
// Il2CppName: GetEndpointInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::IWitRequestEndpointInfo* (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetEndpointInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetEndpointInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::GetClientAccessToken
// Il2CppName: GetClientAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::GetClientAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "GetClientAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::IWitRequestConfiguration::UpdateDataAssets
// Il2CppName: UpdateDataAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::IWitRequestConfiguration::*)()>(&Meta::WitAi::IWitRequestConfiguration::UpdateDataAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::IWitRequestConfiguration*), "UpdateDataAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
