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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: DynamicStandbyThreshold
  class DynamicStandbyThreshold;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: DynamicStandbySettings
  class DynamicStandbySettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::DynamicStandbySettings);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::DynamicStandbySettings*, "PlayFab.MultiplayerModels", "DynamicStandbySettings");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.DynamicStandbySettings
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicStandbySettings : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.DynamicStandbyThreshold> DynamicFloorMultiplierThresholds
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>* DynamicFloorMultiplierThresholds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*) == 0x8);
    // public System.Boolean IsEnabled
    // Size: 0x1
    // Offset: 0x18
    bool IsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Nullable`1<System.Int32> RampDownSeconds
    // Size: 0xFFFFFFFF
    // Offset: 0x1C
    ::System::Nullable_1<int> RampDownSeconds;
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.DynamicStandbyThreshold> DynamicFloorMultiplierThresholds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DynamicStandbyThreshold*>*& dyn_DynamicFloorMultiplierThresholds();
    // Get instance field reference: public System.Boolean IsEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_IsEnabled();
    // Get instance field reference: public System.Nullable`1<System.Int32> RampDownSeconds
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_RampDownSeconds();
    // public System.Void .ctor()
    // Offset: 0x4B60E3C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicStandbySettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::DynamicStandbySettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicStandbySettings*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.DynamicStandbySettings
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::DynamicStandbySettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
