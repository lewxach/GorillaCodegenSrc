// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.IPunOwnershipCallbacks
#include "Photon/Pun/IPunOwnershipCallbacks.hpp"
// Including type: Photon.Realtime.IInRoomCallbacks
#include "Photon/Realtime/IInRoomCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RequestableOwnershipGuard
  class RequestableOwnershipGuard;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RequestableOwnershipGaurdHandler
  class RequestableOwnershipGaurdHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RequestableOwnershipGaurdHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RequestableOwnershipGaurdHandler*, "", "RequestableOwnershipGaurdHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RequestableOwnershipGaurdHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestableOwnershipGaurdHandler : public ::Il2CppObject/*, public ::Photon::Pun::IPunOwnershipCallbacks, public ::Photon::Realtime::IInRoomCallbacks*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunOwnershipCallbacks
    operator ::Photon::Pun::IPunOwnershipCallbacks() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunOwnershipCallbacks*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Realtime::IInRoomCallbacks
    operator ::Photon::Realtime::IInRoomCallbacks() noexcept {
      return *reinterpret_cast<::Photon::Realtime::IInRoomCallbacks*>(this);
    }
    // Get static field: static private System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> gaurdedViews
    static ::System::Collections::Generic::HashSet_1<::Photon::Pun::PhotonView*>* _get_gaurdedViews();
    // Set static field: static private System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> gaurdedViews
    static void _set_gaurdedViews(::System::Collections::Generic::HashSet_1<::Photon::Pun::PhotonView*>* value);
    // Get static field: static private readonly RequestableOwnershipGaurdHandler callbackInstance
    static ::GlobalNamespace::RequestableOwnershipGaurdHandler* _get_callbackInstance();
    // Set static field: static private readonly RequestableOwnershipGaurdHandler callbackInstance
    static void _set_callbackInstance(::GlobalNamespace::RequestableOwnershipGaurdHandler* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonView,RequestableOwnershipGuard> guardingLookup
    static ::System::Collections::Generic::Dictionary_2<::Photon::Pun::PhotonView*, ::GlobalNamespace::RequestableOwnershipGuard*>* _get_guardingLookup();
    // Set static field: static private System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonView,RequestableOwnershipGuard> guardingLookup
    static void _set_guardingLookup(::System::Collections::Generic::Dictionary_2<::Photon::Pun::PhotonView*, ::GlobalNamespace::RequestableOwnershipGuard*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2891974
    static void _cctor();
    // static System.Void RegisterView(Photon.Pun.PhotonView view, RequestableOwnershipGuard guard)
    // Offset: 0x2891AD0
    static void RegisterView(::Photon::Pun::PhotonView* view, ::GlobalNamespace::RequestableOwnershipGuard* guard);
    // static System.Void RemoveView(Photon.Pun.PhotonView view)
    // Offset: 0x2891C1C
    static void RemoveView(::Photon::Pun::PhotonView* view);
    // static System.Void RegisterViews(Photon.Pun.PhotonView[] views, RequestableOwnershipGuard guard)
    // Offset: 0x2891D10
    static void RegisterViews(::ArrayW<::Photon::Pun::PhotonView*> views, ::GlobalNamespace::RequestableOwnershipGuard* guard);
    // static public System.Void RemoveViews(Photon.Pun.PhotonView[] views, RequestableOwnershipGuard guard)
    // Offset: 0x2891DC0
    static void RemoveViews(::ArrayW<::Photon::Pun::PhotonView*> views, ::GlobalNamespace::RequestableOwnershipGuard* guard);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered(Photon.Pun.PhotonView targetView, Photon.Realtime.Player previousOwner)
    // Offset: 0x2891E60
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* previousOwner);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest(Photon.Pun.PhotonView targetView, Photon.Realtime.Player requestingPlayer)
    // Offset: 0x2891FE4
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* requestingPlayer);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed(Photon.Pun.PhotonView targetView, Photon.Realtime.Player senderOfFailedRequest)
    // Offset: 0x2891FE8
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* senderOfFailedRequest);
    // public System.Void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    // Offset: 0x2891FEC
    void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);
    // public System.Void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0x2891FF0
    void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
    // public System.Void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    // Offset: 0x2891FF4
    void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);
    // public System.Void OnPlayerPropertiesUpdate(Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    // Offset: 0x2891FF8
    void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched(Photon.Realtime.Player newMasterClient)
    // Offset: 0x2891FFC
    void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);
    // public System.Void .ctor()
    // Offset: 0x2891AC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestableOwnershipGaurdHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RequestableOwnershipGaurdHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestableOwnershipGaurdHandler*, creationType>()));
    }
  }; // RequestableOwnershipGaurdHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RequestableOwnershipGaurdHandler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::RegisterView
// Il2CppName: RegisterView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*, ::GlobalNamespace::RequestableOwnershipGuard*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::RegisterView)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* guard = &::il2cpp_utils::GetClassFromName("", "RequestableOwnershipGuard")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "RegisterView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view, guard});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::RemoveView
// Il2CppName: RemoveView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::RemoveView)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "RemoveView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::RegisterViews
// Il2CppName: RegisterViews
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>, ::GlobalNamespace::RequestableOwnershipGuard*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::RegisterViews)> {
  static const MethodInfo* get() {
    static auto* views = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView"), 1)->byval_arg;
    static auto* guard = &::il2cpp_utils::GetClassFromName("", "RequestableOwnershipGuard")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "RegisterViews", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{views, guard});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::RemoveViews
// Il2CppName: RemoveViews
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>, ::GlobalNamespace::RequestableOwnershipGuard*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::RemoveViews)> {
  static const MethodInfo* get() {
    static auto* views = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView"), 1)->byval_arg;
    static auto* guard = &::il2cpp_utils::GetClassFromName("", "RequestableOwnershipGuard")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "RemoveViews", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{views, guard});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* previousOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, previousOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* requestingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, requestingPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* senderOfFailedRequest = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, senderOfFailedRequest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerEnteredRoom
// Il2CppName: OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::OnRoomPropertiesUpdate
// Il2CppName: OnRoomPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::ExitGames::Client::Photon::Hashtable*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::OnRoomPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* propertiesThatChanged = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "OnRoomPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertiesThatChanged});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerPropertiesUpdate
// Il2CppName: OnPlayerPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::OnPlayerPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* targetPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* changedProps = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "OnPlayerPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayer, changedProps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RequestableOwnershipGaurdHandler::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::RequestableOwnershipGaurdHandler::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  static const MethodInfo* get() {
    static auto* newMasterClient = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RequestableOwnershipGaurdHandler*), "Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMasterClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RequestableOwnershipGaurdHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!