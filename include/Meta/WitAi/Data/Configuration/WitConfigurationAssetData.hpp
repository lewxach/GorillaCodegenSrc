// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: IWitRequestConfiguration
  class IWitRequestConfiguration;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfigurationAssetData
  class WitConfigurationAssetData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*, "Meta.WitAi.Data.Configuration", "WitConfigurationAssetData");
// Type namespace: Meta.WitAi.Data.Configuration
namespace Meta::WitAi::Data::Configuration {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.Configuration.WitConfigurationAssetData
  // [TokenAttribute] Offset: FFFFFFFF
  class WitConfigurationAssetData : public ::UnityEngine::ScriptableObject {
    public:
    // public System.Void Refresh(Meta.WitAi.IWitRequestConfiguration configuration)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Refresh(::Meta::WitAi::IWitRequestConfiguration* configuration);
    // protected System.Void .ctor()
    // Offset: 0x4451314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitConfigurationAssetData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Configuration::WitConfigurationAssetData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitConfigurationAssetData*, creationType>()));
    }
  }; // Meta.WitAi.Data.Configuration.WitConfigurationAssetData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfigurationAssetData::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Configuration::WitConfigurationAssetData::*)(::Meta::WitAi::IWitRequestConfiguration*)>(&Meta::WitAi::Data::Configuration::WitConfigurationAssetData::Refresh)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "IWitRequestConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Configuration::WitConfigurationAssetData*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Configuration::WitConfigurationAssetData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!