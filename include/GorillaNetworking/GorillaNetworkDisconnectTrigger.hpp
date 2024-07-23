// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: PhotonNetworkController
  class PhotonNetworkController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaNetworkDisconnectTrigger
  class GorillaNetworkDisconnectTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::GorillaNetworkDisconnectTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::GorillaNetworkDisconnectTrigger*, "GorillaNetworking", "GorillaNetworkDisconnectTrigger");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.GorillaNetworkDisconnectTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaNetworkDisconnectTrigger : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    public:
    // public GorillaNetworking.PhotonNetworkController photonNetworkController
    // Size: 0x8
    // Offset: 0x28
    ::GorillaNetworking::PhotonNetworkController* photonNetworkController;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::PhotonNetworkController*) == 0x8);
    // public UnityEngine.GameObject offlineVRRig
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* offlineVRRig;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject makeSureThisIsEnabled
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* makeSureThisIsEnabled;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject[] makeSureTheseAreEnabled
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::GameObject*> makeSureTheseAreEnabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.String componentTypeToRemove
    // Size: 0x8
    // Offset: 0x48
    ::StringW componentTypeToRemove;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject componentTarget
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* componentTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: public GorillaNetworking.PhotonNetworkController photonNetworkController
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::PhotonNetworkController*& dyn_photonNetworkController();
    // Get instance field reference: public UnityEngine.GameObject offlineVRRig
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_offlineVRRig();
    // Get instance field reference: public UnityEngine.GameObject makeSureThisIsEnabled
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_makeSureThisIsEnabled();
    // Get instance field reference: public UnityEngine.GameObject[] makeSureTheseAreEnabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureTheseAreEnabled();
    // Get instance field reference: public System.String componentTypeToRemove
    [[deprecated("Use field access instead!")]] ::StringW& dyn_componentTypeToRemove();
    // Get instance field reference: public UnityEngine.GameObject componentTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_componentTarget();
    // public override System.Void OnBoxTriggered()
    // Offset: 0x2853288
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::OnBoxTriggered()
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x28534C4
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaNetworkDisconnectTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaNetworkDisconnectTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaNetworkDisconnectTrigger*, creationType>()));
    }
  }; // GorillaNetworking.GorillaNetworkDisconnectTrigger
  #pragma pack(pop)
  static check_size<sizeof(GorillaNetworkDisconnectTrigger), 80 + sizeof(::UnityEngine::GameObject*)> __GorillaNetworking_GorillaNetworkDisconnectTriggerSizeCheck;
  static_assert(sizeof(GorillaNetworkDisconnectTrigger) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkDisconnectTrigger::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaNetworkDisconnectTrigger::*)()>(&GorillaNetworking::GorillaNetworkDisconnectTrigger::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaNetworkDisconnectTrigger*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaNetworkDisconnectTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!