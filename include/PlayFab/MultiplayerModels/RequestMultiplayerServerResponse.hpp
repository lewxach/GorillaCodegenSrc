// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
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
  // Forward declaring type: ConnectedPlayer
  class ConnectedPlayer;
  // Forward declaring type: Port
  class Port;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: RequestMultiplayerServerResponse
  class RequestMultiplayerServerResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse*, "PlayFab.MultiplayerModels", "RequestMultiplayerServerResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.RequestMultiplayerServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestMultiplayerServerResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.ConnectedPlayer> ConnectedPlayers
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>* ConnectedPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*) == 0x8);
    // public System.String FQDN
    // Size: 0x8
    // Offset: 0x28
    ::StringW FQDN;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String IPV4Address
    // Size: 0x8
    // Offset: 0x30
    ::StringW IPV4Address;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> LastStateTransitionTime
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<::System::DateTime> LastStateTransitionTime;
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* Ports;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*) == 0x8);
    // public System.String Region
    // Size: 0x8
    // Offset: 0x50
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ServerId
    // Size: 0x8
    // Offset: 0x58
    ::StringW ServerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SessionId
    // Size: 0x8
    // Offset: 0x60
    ::StringW SessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String State
    // Size: 0x8
    // Offset: 0x68
    ::StringW State;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String VmId
    // Size: 0x8
    // Offset: 0x70
    ::StringW VmId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.ConnectedPlayer> ConnectedPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*& dyn_ConnectedPlayers();
    // Get instance field reference: public System.String FQDN
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FQDN();
    // Get instance field reference: public System.String IPV4Address
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IPV4Address();
    // Get instance field reference: public System.Nullable`1<System.DateTime> LastStateTransitionTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_LastStateTransitionTime();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.Port> Ports
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& dyn_Ports();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // Get instance field reference: public System.String ServerId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ServerId();
    // Get instance field reference: public System.String SessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SessionId();
    // Get instance field reference: public System.String State
    [[deprecated("Use field access instead!")]] ::StringW& dyn_State();
    // Get instance field reference: public System.String VmId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VmId();
    // public System.Void .ctor()
    // Offset: 0x4B61104
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestMultiplayerServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestMultiplayerServerResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.RequestMultiplayerServerResponse
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::RequestMultiplayerServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
