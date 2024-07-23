// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.IPunOwnershipCallbacks
#include "Photon/Pun/IPunOwnershipCallbacks.hpp"
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
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OwnershipGaurdHandler
  class OwnershipGaurdHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OwnershipGaurdHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnershipGaurdHandler*, "", "OwnershipGaurdHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OwnershipGaurdHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OwnershipGaurdHandler : public ::Il2CppObject/*, public ::Photon::Pun::IPunOwnershipCallbacks*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunOwnershipCallbacks
    operator ::Photon::Pun::IPunOwnershipCallbacks() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunOwnershipCallbacks*>(this);
    }
    // Get static field: static private System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> gaurdedViews
    static ::System::Collections::Generic::HashSet_1<::Photon::Pun::PhotonView*>* _get_gaurdedViews();
    // Set static field: static private System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> gaurdedViews
    static void _set_gaurdedViews(::System::Collections::Generic::HashSet_1<::Photon::Pun::PhotonView*>* value);
    // Get static field: static private readonly OwnershipGaurdHandler callbackInstance
    static ::GlobalNamespace::OwnershipGaurdHandler* _get_callbackInstance();
    // Set static field: static private readonly OwnershipGaurdHandler callbackInstance
    static void _set_callbackInstance(::GlobalNamespace::OwnershipGaurdHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x275B29C
    static void _cctor();
    // static System.Void RegisterView(Photon.Pun.PhotonView view)
    // Offset: 0x275B3A0
    static void RegisterView(::Photon::Pun::PhotonView* view);
    // static System.Void RegisterViews(Photon.Pun.PhotonView[] photonViews)
    // Offset: 0x275B4A8
    static void RegisterViews(::ArrayW<::Photon::Pun::PhotonView*> photonViews);
    // static System.Void RemoveView(Photon.Pun.PhotonView view)
    // Offset: 0x275B548
    static void RemoveView(::Photon::Pun::PhotonView* view);
    // static System.Void RemoveViews(Photon.Pun.PhotonView[] photonViews)
    // Offset: 0x275B60C
    static void RemoveViews(::ArrayW<::Photon::Pun::PhotonView*> photonViews);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered(Photon.Pun.PhotonView targetView, Photon.Realtime.Player previousOwner)
    // Offset: 0x275B6AC
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* previousOwner);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest(Photon.Pun.PhotonView targetView, Photon.Realtime.Player requestingPlayer)
    // Offset: 0x275B7D0
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* requestingPlayer);
    // private System.Void Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed(Photon.Pun.PhotonView targetView, Photon.Realtime.Player senderOfFailedRequest)
    // Offset: 0x275B7D4
    void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* senderOfFailedRequest);
    // public System.Void .ctor()
    // Offset: 0x275B398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OwnershipGaurdHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OwnershipGaurdHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OwnershipGaurdHandler*, creationType>()));
    }
  }; // OwnershipGaurdHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OwnershipGaurdHandler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::RegisterView
// Il2CppName: RegisterView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&GlobalNamespace::OwnershipGaurdHandler::RegisterView)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "RegisterView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::RegisterViews
// Il2CppName: RegisterViews
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>)>(&GlobalNamespace::OwnershipGaurdHandler::RegisterViews)> {
  static const MethodInfo* get() {
    static auto* photonViews = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "RegisterViews", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonViews});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::RemoveView
// Il2CppName: RemoveView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&GlobalNamespace::OwnershipGaurdHandler::RemoveView)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "RemoveView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::RemoveViews
// Il2CppName: RemoveViews
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>)>(&GlobalNamespace::OwnershipGaurdHandler::RemoveViews)> {
  static const MethodInfo* get() {
    static auto* photonViews = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "RemoveViews", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonViews});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* previousOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, previousOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* requestingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, requestingPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed
// Il2CppName: Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnershipGaurdHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&GlobalNamespace::OwnershipGaurdHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed)> {
  static const MethodInfo* get() {
    static auto* targetView = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonView")->byval_arg;
    static auto* senderOfFailedRequest = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnershipGaurdHandler*), "Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetView, senderOfFailedRequest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnershipGaurdHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!