// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: Port
  class Port;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ServerDetails
  class ServerDetails;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ServerDetails);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ServerDetails*, "PlayFab.MultiplayerModels", "ServerDetails");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ServerDetails
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerDetails : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String IPV4Address
    // Size: 0x8
    // Offset: 0x10
    ::StringW IPV4Address;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* Ports;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*) == 0x8);
    // public System.String Region
    // Size: 0x8
    // Offset: 0x20
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String IPV4Address
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IPV4Address();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& dyn_Ports();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // public System.Void .ctor()
    // Offset: 0x4B6111C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerDetails* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ServerDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerDetails*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ServerDetails
  #pragma pack(pop)
  static check_size<sizeof(ServerDetails), 32 + sizeof(::StringW)> __PlayFab_MultiplayerModels_ServerDetailsSizeCheck;
  static_assert(sizeof(ServerDetails) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ServerDetails::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!