// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPunCallbacks
#include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SlingshotProjectile
  class SlingshotProjectile;
}
// Forward declaring namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: WatchableIntSO
  class WatchableIntSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Collision
  class Collision;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: DisconnectCause
  struct DisconnectCause;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HitTargetNetworkState
  class HitTargetNetworkState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HitTargetNetworkState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HitTargetNetworkState*, "", "HitTargetNetworkState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: HitTargetNetworkState
  // [TokenAttribute] Offset: FFFFFFFF
  class HitTargetNetworkState : public ::Photon::Pun::MonoBehaviourPunCallbacks/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::GlobalNamespace::HitTargetNetworkState::$TestPressCheck$d__11
    class $TestPressCheck$d__11;
    public:
    // private GorillaTag.WatchableIntSO networkedScore
    // Size: 0x8
    // Offset: 0x28
    ::GorillaTag::WatchableIntSO* networkedScore;
    // Field size check
    static_assert(sizeof(::GorillaTag::WatchableIntSO*) == 0x8);
    // private System.Int32 hitCooldownTime
    // Size: 0x4
    // Offset: 0x30
    int hitCooldownTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean testPress
    // Size: 0x1
    // Offset: 0x34
    bool testPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: testPress and: audioClips
    char __padding2[0x3] = {};
    // private UnityEngine.AudioClip[] audioClips
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::AudioClip*> audioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioSource audioPlayer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioSource* audioPlayer;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single nextHittableTimestamp
    // Size: 0x4
    // Offset: 0x48
    float nextHittableTimestamp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: private GorillaTag.WatchableIntSO networkedScore
    [[deprecated("Use field access instead!")]] ::GorillaTag::WatchableIntSO*& dyn_networkedScore();
    // Get instance field reference: private System.Int32 hitCooldownTime
    [[deprecated("Use field access instead!")]] int& dyn_hitCooldownTime();
    // Get instance field reference: private System.Boolean testPress
    [[deprecated("Use field access instead!")]] bool& dyn_testPress();
    // Get instance field reference: private UnityEngine.AudioClip[] audioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_audioClips();
    // Get instance field reference: private UnityEngine.AudioSource audioPlayer
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioPlayer();
    // Get instance field reference: private System.Single nextHittableTimestamp
    [[deprecated("Use field access instead!")]] float& dyn_nextHittableTimestamp();
    // protected System.Void Awake()
    // Offset: 0x2968548
    void Awake();
    // private System.Void SetInitialState()
    // Offset: 0x29686E0
    void SetInitialState();
    // private System.Collections.IEnumerator TestPressCheck()
    // Offset: 0x29687F8
    ::System::Collections::IEnumerator* TestPressCheck();
    // private System.Void ProjectileHitReciever(SlingshotProjectile projectile, UnityEngine.Collision collision)
    // Offset: 0x296888C
    void ProjectileHitReciever(::GlobalNamespace::SlingshotProjectile* projectile, ::UnityEngine::Collision* collision);
    // public System.Void TargetHit()
    // Offset: 0x2968890
    void TargetHit();
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x29689EC
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void PlayAudio(System.Int32 oldScore, System.Int32 newScore)
    // Offset: 0x2968998
    void PlayAudio(int oldScore, int newScore);
    // public System.Void .ctor()
    // Offset: 0x2968B5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitTargetNetworkState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HitTargetNetworkState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitTargetNetworkState*, creationType>()));
    }
    // public override System.Void OnDisconnected(Photon.Realtime.DisconnectCause cause)
    // Offset: 0x2968748
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnDisconnected(Photon.Realtime.DisconnectCause cause)
    void OnDisconnected(::Photon::Realtime::DisconnectCause cause);
    // public override System.Void OnLeftRoom()
    // Offset: 0x2968758
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnLeftRoom()
    void OnLeftRoom();
    // public override System.Void OnEnable()
    // Offset: 0x2968774
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnEnable()
    void OnEnable();
  }; // HitTargetNetworkState
  #pragma pack(pop)
  static check_size<sizeof(HitTargetNetworkState), 72 + sizeof(float)> __GlobalNamespace_HitTargetNetworkStateSizeCheck;
  static_assert(sizeof(HitTargetNetworkState) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::SetInitialState
// Il2CppName: SetInitialState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::SetInitialState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "SetInitialState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::TestPressCheck
// Il2CppName: TestPressCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::TestPressCheck)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "TestPressCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::ProjectileHitReciever
// Il2CppName: ProjectileHitReciever
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&GlobalNamespace::HitTargetNetworkState::ProjectileHitReciever)> {
  static const MethodInfo* get() {
    static auto* projectile = &::il2cpp_utils::GetClassFromName("", "SlingshotProjectile")->byval_arg;
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "ProjectileHitReciever", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{projectile, collision});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::TargetHit
// Il2CppName: TargetHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::TargetHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "TargetHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::HitTargetNetworkState::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::PlayAudio
// Il2CppName: PlayAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)(int, int)>(&GlobalNamespace::HitTargetNetworkState::PlayAudio)> {
  static const MethodInfo* get() {
    static auto* oldScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "PlayAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldScore, newScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::OnDisconnected
// Il2CppName: OnDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)(::Photon::Realtime::DisconnectCause)>(&GlobalNamespace::HitTargetNetworkState::OnDisconnected)> {
  static const MethodInfo* get() {
    static auto* cause = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "DisconnectCause")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "OnDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::OnLeftRoom
// Il2CppName: OnLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::OnLeftRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "OnLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HitTargetNetworkState::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HitTargetNetworkState::*)()>(&GlobalNamespace::HitTargetNetworkState::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HitTargetNetworkState*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
