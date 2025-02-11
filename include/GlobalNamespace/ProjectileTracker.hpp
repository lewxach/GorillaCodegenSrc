// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ProjectileTracker
  class ProjectileTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProjectileTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProjectileTracker*, "", "ProjectileTracker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ProjectileTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class ProjectileTracker : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ProjectileTracker::ProjectileInfo
    struct ProjectileInfo;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: ProjectileTracker/ProjectileInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct ProjectileInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Double timeLaunched
      // Size: 0x8
      // Offset: 0x0
      double timeLaunched;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public UnityEngine.Vector3 shotVelocity
      // Size: 0xC
      // Offset: 0x8
      ::UnityEngine::Vector3 shotVelocity;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Vector3 launchOrigin
      // Size: 0xC
      // Offset: 0x14
      ::UnityEngine::Vector3 launchOrigin;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public System.Int32 projectileCount
      // Size: 0x4
      // Offset: 0x20
      int projectileCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Single scale
      // Size: 0x4
      // Offset: 0x24
      float scale;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: ProjectileInfo
      constexpr ProjectileInfo(double timeLaunched_ = {}, ::UnityEngine::Vector3 shotVelocity_ = {}, ::UnityEngine::Vector3 launchOrigin_ = {}, int projectileCount_ = {}, float scale_ = {}) noexcept : timeLaunched{timeLaunched_}, shotVelocity{shotVelocity_}, launchOrigin{launchOrigin_}, projectileCount{projectileCount_}, scale{scale_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Double timeLaunched
      [[deprecated("Use field access instead!")]] double& dyn_timeLaunched();
      // Get instance field reference: public UnityEngine.Vector3 shotVelocity
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_shotVelocity();
      // Get instance field reference: public UnityEngine.Vector3 launchOrigin
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_launchOrigin();
      // Get instance field reference: public System.Int32 projectileCount
      [[deprecated("Use field access instead!")]] int& dyn_projectileCount();
      // Get instance field reference: public System.Single scale
      [[deprecated("Use field access instead!")]] float& dyn_scale();
      // public System.Void .ctor(System.Double newTime, UnityEngine.Vector3 newVel, UnityEngine.Vector3 origin, System.Int32 newCount, System.Single newScale)
      // Offset: 0x27712A0
      // ABORTED: conflicts with another method.  ProjectileInfo(double newTime, ::UnityEngine::Vector3 newVel, ::UnityEngine::Vector3 origin, int newCount, float newScale);
    }; // ProjectileTracker/ProjectileInfo
    #pragma pack(pop)
    static check_size<sizeof(ProjectileTracker::ProjectileInfo), 36 + sizeof(float)> __GlobalNamespace_ProjectileTracker_ProjectileInfoSizeCheck;
    static_assert(sizeof(ProjectileTracker::ProjectileInfo) == 0x28);
    // Get static field: static private System.Int32 localPlayerProjectileCounter
    static int _get_localPlayerProjectileCounter();
    // Set static field: static private System.Int32 localPlayerProjectileCounter
    static void _set_localPlayerProjectileCounter(int value);
    // Get static field: static public System.Int32 maxProjectilesToKeepTrackOfPerPlayer
    static int _get_maxProjectilesToKeepTrackOfPerPlayer();
    // Set static field: static public System.Int32 maxProjectilesToKeepTrackOfPerPlayer
    static void _set_maxProjectilesToKeepTrackOfPerPlayer(int value);
    // Get static field: static public System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,System.Collections.Generic.List`1<ProjectileTracker/ProjectileInfo>> playerProjectiles
    static ::System::Collections::Generic::Dictionary_2<::Photon::Realtime::Player*, ::System::Collections::Generic::List_1<::GlobalNamespace::ProjectileTracker::ProjectileInfo>*>* _get_playerProjectiles();
    // Set static field: static public System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,System.Collections.Generic.List`1<ProjectileTracker/ProjectileInfo>> playerProjectiles
    static void _set_playerProjectiles(::System::Collections::Generic::Dictionary_2<::Photon::Realtime::Player*, ::System::Collections::Generic::List_1<::GlobalNamespace::ProjectileTracker::ProjectileInfo>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2770B5C
    static void _cctor();
    // static private System.Void ClearProjectiles()
    // Offset: 0x2770CD0
    static void ClearProjectiles();
    // static System.Int32 IncrementLocalPlayerProjectileCount()
    // Offset: 0x2770EB4
    static int IncrementLocalPlayerProjectileCount();
    // static public System.Void AddPlayerProjectile(Photon.Realtime.Player player, System.Double timeShot, UnityEngine.Vector3 initialVelocity, UnityEngine.Vector3 initialPosition, System.Int32 projectileCount, System.Single scale)
    // Offset: 0x2770F14
    static void AddPlayerProjectile(::Photon::Realtime::Player* player, double timeShot, ::UnityEngine::Vector3 initialVelocity, ::UnityEngine::Vector3 initialPosition, int projectileCount, float scale);
    // static public System.Int32 FindIndexOfProjectile(System.Collections.Generic.List`1<ProjectileTracker/ProjectileInfo> list, System.Int32 projectileNum)
    // Offset: 0x27712BC
    static int FindIndexOfProjectile(::System::Collections::Generic::List_1<::GlobalNamespace::ProjectileTracker::ProjectileInfo>* list, int projectileNum);
    // static public System.Boolean IsHitPlausible(UnityEngine.Vector3 hitLocation, Photon.Pun.PhotonMessageInfo info, Photon.Realtime.Player hitPlayer, System.Int32 projectileCount)
    // Offset: 0x27713B0
    static bool IsHitPlausible(::UnityEngine::Vector3 hitLocation, ::Photon::Pun::PhotonMessageInfo info, ::Photon::Realtime::Player* hitPlayer, int projectileCount);
  }; // ProjectileTracker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProjectileTracker::ProjectileInfo, "", "ProjectileTracker/ProjectileInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ProjectileTracker::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::ClearProjectiles
// Il2CppName: ClearProjectiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ProjectileTracker::ClearProjectiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), "ClearProjectiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::IncrementLocalPlayerProjectileCount
// Il2CppName: IncrementLocalPlayerProjectileCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::ProjectileTracker::IncrementLocalPlayerProjectileCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), "IncrementLocalPlayerProjectileCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::AddPlayerProjectile
// Il2CppName: AddPlayerProjectile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, double, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int, float)>(&GlobalNamespace::ProjectileTracker::AddPlayerProjectile)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* timeShot = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* initialVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* initialPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* projectileCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), "AddPlayerProjectile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, timeShot, initialVelocity, initialPosition, projectileCount, scale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::FindIndexOfProjectile
// Il2CppName: FindIndexOfProjectile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Collections::Generic::List_1<::GlobalNamespace::ProjectileTracker::ProjectileInfo>*, int)>(&GlobalNamespace::ProjectileTracker::FindIndexOfProjectile)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ProjectileTracker/ProjectileInfo")})->byval_arg;
    static auto* projectileNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), "FindIndexOfProjectile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list, projectileNum});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProjectileTracker::IsHitPlausible
// Il2CppName: IsHitPlausible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo, ::Photon::Realtime::Player*, int)>(&GlobalNamespace::ProjectileTracker::IsHitPlausible)> {
  static const MethodInfo* get() {
    static auto* hitLocation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    static auto* hitPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* projectileCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProjectileTracker*), "IsHitPlausible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitLocation, info, hitPlayer, projectileCount});
  }
};
