// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Photon.Realtime.IMatchmakingCallbacks
#include "Photon/Realtime/IMatchmakingCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: LoadBalancingClient
  class LoadBalancingClient;
  // Forward declaring type: FriendInfo
  class FriendInfo;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: MatchMakingCallbacksContainer
  class MatchMakingCallbacksContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::MatchMakingCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::MatchMakingCallbacksContainer*, "Photon.Realtime", "MatchMakingCallbacksContainer");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Realtime.MatchMakingCallbacksContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchMakingCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IMatchmakingCallbacks*>/*, public ::Photon::Realtime::IMatchmakingCallbacks*/ {
    public:
    public:
    // private readonly Photon.Realtime.LoadBalancingClient client
    // Size: 0x8
    // Offset: 0x28
    ::Photon::Realtime::LoadBalancingClient* client;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::LoadBalancingClient*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Realtime::IMatchmakingCallbacks
    operator ::Photon::Realtime::IMatchmakingCallbacks() noexcept {
      return *reinterpret_cast<::Photon::Realtime::IMatchmakingCallbacks*>(this);
    }
    // Creating conversion operator: operator ::Photon::Realtime::LoadBalancingClient*
    constexpr operator ::Photon::Realtime::LoadBalancingClient*() const noexcept {
      return client;
    }
    // Get instance field reference: private readonly Photon.Realtime.LoadBalancingClient client
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::LoadBalancingClient*& dyn_client();
    // public System.Void .ctor(Photon.Realtime.LoadBalancingClient client)
    // Offset: 0x4A1448C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchMakingCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::MatchMakingCallbacksContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchMakingCallbacksContainer*, creationType>(client)));
    }
    // public System.Void OnCreatedRoom()
    // Offset: 0x4A19538
    void OnCreatedRoom();
    // public System.Void OnJoinedRoom()
    // Offset: 0x4A196F4
    void OnJoinedRoom();
    // public System.Void OnCreateRoomFailed(System.Int16 returnCode, System.String message)
    // Offset: 0x4A1A118
    void OnCreateRoomFailed(int16_t returnCode, ::StringW message);
    // public System.Void OnJoinRandomFailed(System.Int16 returnCode, System.String message)
    // Offset: 0x4A1A2E4
    void OnJoinRandomFailed(int16_t returnCode, ::StringW message);
    // public System.Void OnJoinRoomFailed(System.Int16 returnCode, System.String message)
    // Offset: 0x4A19F4C
    void OnJoinRoomFailed(int16_t returnCode, ::StringW message);
    // public System.Void OnLeftRoom()
    // Offset: 0x4A1DD78
    void OnLeftRoom();
    // public System.Void OnPreLeavingRoom()
    // Offset: 0x4A15C54
    void OnPreLeavingRoom();
    // public System.Void OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo> friendList)
    // Offset: 0x4A1D000
    void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);
  }; // Photon.Realtime.MatchMakingCallbacksContainer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnCreatedRoom
// Il2CppName: OnCreatedRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)()>(&Photon::Realtime::MatchMakingCallbacksContainer::OnCreatedRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnCreatedRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnJoinedRoom
// Il2CppName: OnJoinedRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)()>(&Photon::Realtime::MatchMakingCallbacksContainer::OnJoinedRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnJoinedRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnCreateRoomFailed
// Il2CppName: OnCreateRoomFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)(int16_t, ::StringW)>(&Photon::Realtime::MatchMakingCallbacksContainer::OnCreateRoomFailed)> {
  static const MethodInfo* get() {
    static auto* returnCode = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnCreateRoomFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnCode, message});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnJoinRandomFailed
// Il2CppName: OnJoinRandomFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)(int16_t, ::StringW)>(&Photon::Realtime::MatchMakingCallbacksContainer::OnJoinRandomFailed)> {
  static const MethodInfo* get() {
    static auto* returnCode = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnJoinRandomFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnCode, message});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnJoinRoomFailed
// Il2CppName: OnJoinRoomFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)(int16_t, ::StringW)>(&Photon::Realtime::MatchMakingCallbacksContainer::OnJoinRoomFailed)> {
  static const MethodInfo* get() {
    static auto* returnCode = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnJoinRoomFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnCode, message});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnLeftRoom
// Il2CppName: OnLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)()>(&Photon::Realtime::MatchMakingCallbacksContainer::OnLeftRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnPreLeavingRoom
// Il2CppName: OnPreLeavingRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)()>(&Photon::Realtime::MatchMakingCallbacksContainer::OnPreLeavingRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnPreLeavingRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::MatchMakingCallbacksContainer::OnFriendListUpdate
// Il2CppName: OnFriendListUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::MatchMakingCallbacksContainer::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&Photon::Realtime::MatchMakingCallbacksContainer::OnFriendListUpdate)> {
  static const MethodInfo* get() {
    static auto* friendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Photon.Realtime", "FriendInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::MatchMakingCallbacksContainer*), "OnFriendListUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{friendList});
  }
};