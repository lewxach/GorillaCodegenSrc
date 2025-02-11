// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.ContinentCode
#include "PlayFab/ClientModels/ContinentCode.hpp"
// Including type: PlayFab.ClientModels.CountryCode
#include "PlayFab/ClientModels/CountryCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LocationModel
  class LocationModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LocationModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LocationModel*, "PlayFab.ClientModels", "LocationModel");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.LocationModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LocationModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String City
    // Size: 0x8
    // Offset: 0x10
    ::StringW City;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.ContinentCode> ContinentCode
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode> ContinentCode;
    // public System.Nullable`1<PlayFab.ClientModels.CountryCode> CountryCode
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::PlayFab::ClientModels::CountryCode> CountryCode;
    // public System.Nullable`1<System.Double> Latitude
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<double> Latitude;
    // public System.Nullable`1<System.Double> Longitude
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<double> Longitude;
    public:
    // Get instance field reference: public System.String City
    [[deprecated("Use field access instead!")]] ::StringW& dyn_City();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.ContinentCode> ContinentCode
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode>& dyn_ContinentCode();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.CountryCode> CountryCode
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::CountryCode>& dyn_CountryCode();
    // Get instance field reference: public System.Nullable`1<System.Double> Latitude
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<double>& dyn_Latitude();
    // Get instance field reference: public System.Nullable`1<System.Double> Longitude
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<double>& dyn_Longitude();
    // public System.Void .ctor()
    // Offset: 0x4B6E99C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocationModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LocationModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocationModel*, creationType>()));
    }
  }; // PlayFab.ClientModels.LocationModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LocationModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
