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
// Including type: Photon.Pun.IOnPhotonViewOwnerChange
#include "Photon/Pun/IOnPhotonViewOwnerChange.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ThrowableSetDressing
  class ThrowableSetDressing;
  // Forward declaring type: ZoneBasedObject
  class ZoneBasedObject;
  // Skipping declaration: ghostState because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WanderingGhost
  class WanderingGhost;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WanderingGhost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WanderingGhost*, "", "WanderingGhost");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x100
  #pragma pack(push, 1)
  // Autogenerated type: WanderingGhost
  // [TokenAttribute] Offset: FFFFFFFF
  class WanderingGhost : public ::Photon::Pun::MonoBehaviourPunCallbacks/*, public ::Photon::Pun::IPunObservable, public ::Photon::Pun::IOnPhotonViewOwnerChange*/ {
    public:
    // Nested type: ::GlobalNamespace::WanderingGhost::Waypoint
    struct Waypoint;
    // Nested type: ::GlobalNamespace::WanderingGhost::ghostState
    struct ghostState;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: WanderingGhost/Waypoint
    // [TokenAttribute] Offset: FFFFFFFF
    struct Waypoint/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean _visible
      // Size: 0x1
      // Offset: 0x0
      bool visible;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: visible and: transform
      char __padding0[0x7] = {};
      // public UnityEngine.Transform _transform
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Transform* transform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      public:
      // Creating value type constructor for type: Waypoint
      constexpr Waypoint(bool visible_ = {}, ::UnityEngine::Transform* transform_ = {}) noexcept : visible{visible_}, transform{transform_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean _visible
      [[deprecated("Use field access instead!")]] bool& dyn__visible();
      // Get instance field reference: public UnityEngine.Transform _transform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
      // public System.Void .ctor(System.Boolean visible, UnityEngine.Transform tr)
      // Offset: 0x274621C
      // ABORTED: conflicts with another method.  Waypoint(bool visible, ::UnityEngine::Transform* tr);
    }; // WanderingGhost/Waypoint
    #pragma pack(pop)
    static check_size<sizeof(WanderingGhost::Waypoint), 8 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_WanderingGhost_WaypointSizeCheck;
    static_assert(sizeof(WanderingGhost::Waypoint) == 0x10);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: WanderingGhost/ghostState
    // [TokenAttribute] Offset: FFFFFFFF
    struct ghostState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ghostState
      constexpr ghostState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public WanderingGhost/ghostState patrol
      static constexpr const int patrol = 0;
      // Get static field: static public WanderingGhost/ghostState patrol
      static ::GlobalNamespace::WanderingGhost::ghostState _get_patrol();
      // Set static field: static public WanderingGhost/ghostState patrol
      static void _set_patrol(::GlobalNamespace::WanderingGhost::ghostState value);
      // static field const value: static public WanderingGhost/ghostState idle
      static constexpr const int idle = 1;
      // Get static field: static public WanderingGhost/ghostState idle
      static ::GlobalNamespace::WanderingGhost::ghostState _get_idle();
      // Set static field: static public WanderingGhost/ghostState idle
      static void _set_idle(::GlobalNamespace::WanderingGhost::ghostState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // WanderingGhost/ghostState
    #pragma pack(pop)
    static check_size<sizeof(WanderingGhost::ghostState), 0 + sizeof(int)> __GlobalNamespace_WanderingGhost_ghostStateSizeCheck;
    static_assert(sizeof(WanderingGhost::ghostState) == 0x4);
    public:
    // public System.Single patrolSpeed
    // Size: 0x4
    // Offset: 0x28
    float patrolSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single idleStayDuration
    // Size: 0x4
    // Offset: 0x2C
    float idleStayDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sphereColliderRadius
    // Size: 0x4
    // Offset: 0x30
    float sphereColliderRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: sphereColliderRadius and: allFlowers
    char __padding2[0x4] = {};
    // public ThrowableSetDressing[] allFlowers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::ThrowableSetDressing*> allFlowers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ThrowableSetDressing*>) == 0x8);
    // public UnityEngine.Vector3 flowerDisabledPosition
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 flowerDisabledPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single flowerSpawnRadius
    // Size: 0x4
    // Offset: 0x4C
    float flowerSpawnRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single flowerSpawnDuration
    // Size: 0x4
    // Offset: 0x50
    float flowerSpawnDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.LayerMask flowerGroundMask
    // Size: 0x4
    // Offset: 0x54
    ::UnityEngine::LayerMask flowerGroundMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public UnityEngine.MeshRenderer mrenderer
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MeshRenderer* mrenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public UnityEngine.Material visibleMaterial
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Material* visibleMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material scryableMaterial
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Material* scryableMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.GameObject waypointsContainer
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* waypointsContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private ZoneBasedObject[] waypointRegions
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::GlobalNamespace::ZoneBasedObject*> waypointRegions;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ZoneBasedObject*>) == 0x8);
    // private ZoneBasedObject lastWaypointRegion
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::ZoneBasedObject* lastWaypointRegion;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ZoneBasedObject*) == 0x8);
    // private System.Collections.Generic.List`1<WanderingGhost/Waypoint> waypoints
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost::Waypoint>* waypoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost::Waypoint>*) == 0x8);
    // private WanderingGhost/Waypoint currentWaypoint
    // Size: 0x10
    // Offset: 0x90
    ::GlobalNamespace::WanderingGhost::Waypoint currentWaypoint;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::WanderingGhost::Waypoint) == 0x10);
    // public System.String debugForceWaypointRegion
    // Size: 0x8
    // Offset: 0xA0
    ::StringW debugForceWaypointRegion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public UnityEngine.AudioClip[] appearAudio
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<::UnityEngine::AudioClip*> appearAudio;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public System.Single idleVolume
    // Size: 0x4
    // Offset: 0xB8
    float idleVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: idleVolume and: patrolAudio
    char __padding19[0x4] = {};
    // public UnityEngine.AudioClip patrolAudio
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::AudioClip* patrolAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public System.Single patrolVolume
    // Size: 0x4
    // Offset: 0xC8
    float patrolVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private WanderingGhost/ghostState currentState
    // Size: 0x4
    // Offset: 0xCC
    ::GlobalNamespace::WanderingGhost::ghostState currentState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::WanderingGhost::ghostState) == 0x4);
    // private System.Single idlePassedTime
    // Size: 0x4
    // Offset: 0xD0
    float idlePassedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean idlSoundPlayed
    // Size: 0x1
    // Offset: 0xD4
    bool idlSoundPlayed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: idlSoundPlayed and: TriggerHauntedObjects
    char __padding24[0x3] = {};
    // public UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> TriggerHauntedObjects
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Events::UnityAction_1<::UnityEngine::GameObject*>* TriggerHauntedObjects;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_1<::UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.Vector3 hoverVelocity
    // Size: 0xC
    // Offset: 0xE0
    ::UnityEngine::Vector3 hoverVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single hoverRectifyForce
    // Size: 0x4
    // Offset: 0xEC
    float hoverRectifyForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hoverRandomForce
    // Size: 0x4
    // Offset: 0xF0
    float hoverRandomForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hoverDrag
    // Size: 0x4
    // Offset: 0xF4
    float hoverDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Collider[] hitColliders
    // Size: 0x8
    // Offset: 0xF8
    ::ArrayW<::UnityEngine::Collider*> hitColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Pun::IOnPhotonViewOwnerChange
    operator ::Photon::Pun::IOnPhotonViewOwnerChange() noexcept {
      return *reinterpret_cast<::Photon::Pun::IOnPhotonViewOwnerChange*>(this);
    }
    // static field const value: static private System.Int32 maxColliders
    static constexpr const int maxColliders = 10;
    // Get static field: static private System.Int32 maxColliders
    static int _get_maxColliders();
    // Set static field: static private System.Int32 maxColliders
    static void _set_maxColliders(int value);
    // Get instance field reference: public System.Single patrolSpeed
    [[deprecated("Use field access instead!")]] float& dyn_patrolSpeed();
    // Get instance field reference: public System.Single idleStayDuration
    [[deprecated("Use field access instead!")]] float& dyn_idleStayDuration();
    // Get instance field reference: public System.Single sphereColliderRadius
    [[deprecated("Use field access instead!")]] float& dyn_sphereColliderRadius();
    // Get instance field reference: public ThrowableSetDressing[] allFlowers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ThrowableSetDressing*>& dyn_allFlowers();
    // Get instance field reference: public UnityEngine.Vector3 flowerDisabledPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_flowerDisabledPosition();
    // Get instance field reference: public System.Single flowerSpawnRadius
    [[deprecated("Use field access instead!")]] float& dyn_flowerSpawnRadius();
    // Get instance field reference: public System.Single flowerSpawnDuration
    [[deprecated("Use field access instead!")]] float& dyn_flowerSpawnDuration();
    // Get instance field reference: public UnityEngine.LayerMask flowerGroundMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_flowerGroundMask();
    // Get instance field reference: public UnityEngine.MeshRenderer mrenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_mrenderer();
    // Get instance field reference: public UnityEngine.Material visibleMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_visibleMaterial();
    // Get instance field reference: public UnityEngine.Material scryableMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_scryableMaterial();
    // Get instance field reference: public UnityEngine.GameObject waypointsContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_waypointsContainer();
    // Get instance field reference: private ZoneBasedObject[] waypointRegions
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ZoneBasedObject*>& dyn_waypointRegions();
    // Get instance field reference: private ZoneBasedObject lastWaypointRegion
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ZoneBasedObject*& dyn_lastWaypointRegion();
    // Get instance field reference: private System.Collections.Generic.List`1<WanderingGhost/Waypoint> waypoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost::Waypoint>*& dyn_waypoints();
    // Get instance field reference: private WanderingGhost/Waypoint currentWaypoint
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::WanderingGhost::Waypoint& dyn_currentWaypoint();
    // Get instance field reference: public System.String debugForceWaypointRegion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_debugForceWaypointRegion();
    // Get instance field reference: private UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public UnityEngine.AudioClip[] appearAudio
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_appearAudio();
    // Get instance field reference: public System.Single idleVolume
    [[deprecated("Use field access instead!")]] float& dyn_idleVolume();
    // Get instance field reference: public UnityEngine.AudioClip patrolAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_patrolAudio();
    // Get instance field reference: public System.Single patrolVolume
    [[deprecated("Use field access instead!")]] float& dyn_patrolVolume();
    // Get instance field reference: private WanderingGhost/ghostState currentState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::WanderingGhost::ghostState& dyn_currentState();
    // Get instance field reference: private System.Single idlePassedTime
    [[deprecated("Use field access instead!")]] float& dyn_idlePassedTime();
    // Get instance field reference: private System.Boolean idlSoundPlayed
    [[deprecated("Use field access instead!")]] bool& dyn_idlSoundPlayed();
    // Get instance field reference: public UnityEngine.Events.UnityAction`1<UnityEngine.GameObject> TriggerHauntedObjects
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_1<::UnityEngine::GameObject*>*& dyn_TriggerHauntedObjects();
    // Get instance field reference: private UnityEngine.Vector3 hoverVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_hoverVelocity();
    // Get instance field reference: public System.Single hoverRectifyForce
    [[deprecated("Use field access instead!")]] float& dyn_hoverRectifyForce();
    // Get instance field reference: public System.Single hoverRandomForce
    [[deprecated("Use field access instead!")]] float& dyn_hoverRandomForce();
    // Get instance field reference: public System.Single hoverDrag
    [[deprecated("Use field access instead!")]] float& dyn_hoverDrag();
    // Get instance field reference: private UnityEngine.Collider[] hitColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_hitColliders();
    // private System.Void Start()
    // Offset: 0x27453B0
    void Start();
    // private System.Void DelayedStart()
    // Offset: 0x274549C
    void DelayedStart();
    // private System.Void LateUpdate()
    // Offset: 0x2745BD8
    void LateUpdate();
    // private System.Void PickNextWaypoint()
    // Offset: 0x2745500
    void PickNextWaypoint();
    // private System.Void Patrol()
    // Offset: 0x2746230
    void Patrol();
    // private System.Boolean MaybeHideGhost()
    // Offset: 0x2746544
    bool MaybeHideGhost();
    // private System.Void ChangeState(WanderingGhost/ghostState newState)
    // Offset: 0x2745A88
    void ChangeState(::GlobalNamespace::WanderingGhost::ghostState newState);
    // private System.Void UpdateState()
    // Offset: 0x2745DF8
    void UpdateState();
    // private System.Void HauntObjects()
    // Offset: 0x2746A84
    void HauntObjects();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2746C14
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // private System.Void Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange(Photon.Realtime.Player newOwner, Photon.Realtime.Player previousOwner)
    // Offset: 0x2746D3C
    void Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange(::Photon::Realtime::Player* newOwner, ::Photon::Realtime::Player* previousOwner);
    // private System.Void SpawnFlowerNearby()
    // Offset: 0x27466B4
    void SpawnFlowerNearby();
    // public System.Void .ctor()
    // Offset: 0x2746DC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WanderingGhost* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WanderingGhost::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WanderingGhost*, creationType>()));
    }
  }; // WanderingGhost
  #pragma pack(pop)
  static check_size<sizeof(WanderingGhost), 248 + sizeof(::ArrayW<::UnityEngine::Collider*>)> __GlobalNamespace_WanderingGhostSizeCheck;
  static_assert(sizeof(WanderingGhost) == 0x100);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WanderingGhost::ghostState, "", "WanderingGhost/ghostState");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WanderingGhost::Waypoint, "", "WanderingGhost/Waypoint");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::DelayedStart
// Il2CppName: DelayedStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::DelayedStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "DelayedStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::PickNextWaypoint
// Il2CppName: PickNextWaypoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::PickNextWaypoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "PickNextWaypoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::Patrol
// Il2CppName: Patrol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::Patrol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "Patrol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::MaybeHideGhost
// Il2CppName: MaybeHideGhost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::MaybeHideGhost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "MaybeHideGhost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::ChangeState
// Il2CppName: ChangeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)(::GlobalNamespace::WanderingGhost::ghostState)>(&GlobalNamespace::WanderingGhost::ChangeState)> {
  static const MethodInfo* get() {
    static auto* newState = &::il2cpp_utils::GetClassFromName("", "WanderingGhost/ghostState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "ChangeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::UpdateState
// Il2CppName: UpdateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::UpdateState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "UpdateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::HauntObjects
// Il2CppName: HauntObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::HauntObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "HauntObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::WanderingGhost::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
// Il2CppName: Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::WanderingGhost::Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange)> {
  static const MethodInfo* get() {
    static auto* newOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* previousOwner = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newOwner, previousOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::SpawnFlowerNearby
// Il2CppName: SpawnFlowerNearby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WanderingGhost::*)()>(&GlobalNamespace::WanderingGhost::SpawnFlowerNearby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WanderingGhost*), "SpawnFlowerNearby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WanderingGhost::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
