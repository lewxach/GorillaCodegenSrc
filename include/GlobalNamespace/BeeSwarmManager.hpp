// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: XSceneRef
#include "GlobalNamespace/XSceneRef.hpp"
// Including type: AnimatedBee
#include "GlobalNamespace/AnimatedBee.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeePerchPoint
  class BeePerchPoint;
  // Forward declaring type: SRand
  struct SRand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeeSwarmManager
  class BeeSwarmManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeeSwarmManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeeSwarmManager*, "", "BeeSwarmManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: BeeSwarmManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BeeSwarmManager : public ::Photon::Pun::MonoBehaviourPun {
    public:
    public:
    // private XSceneRef[] flowerSections
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::XSceneRef> flowerSections;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::XSceneRef>) == 0x8);
    // private System.Int32 loopSizePerBee
    // Size: 0x4
    // Offset: 0x30
    int loopSizePerBee;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 numBees
    // Size: 0x4
    // Offset: 0x34
    int numBees;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.MeshRenderer beePrefab
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::MeshRenderer* beePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.AudioSource nearbyBeeBuzz
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioSource* nearbyBeeBuzz;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource generalBeeBuzz
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AudioSource* generalBeeBuzz;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.GameObject[] flowerSectionsResolved
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::GameObject*> flowerSectionsResolved;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private BeePerchPoint <BeeHive>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeePerchPoint* BeeHive;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeePerchPoint*) == 0x8);
    // private System.Single <BeeSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    float BeeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeMaxTravelTime>k__BackingField
    // Size: 0x4
    // Offset: 0x64
    float BeeMaxTravelTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeAcceleration>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    float BeeAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeJitterStrength>k__BackingField
    // Size: 0x4
    // Offset: 0x6C
    float BeeJitterStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeJitterDamping>k__BackingField
    // Size: 0x4
    // Offset: 0x70
    float BeeJitterDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeMaxJitterRadius>k__BackingField
    // Size: 0x4
    // Offset: 0x74
    float BeeMaxJitterRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeNearDestinationRadius>k__BackingField
    // Size: 0x4
    // Offset: 0x78
    float BeeNearDestinationRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <AvoidPointRadius>k__BackingField
    // Size: 0x4
    // Offset: 0x7C
    float AvoidPointRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeMinFlowerDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x80
    float BeeMinFlowerDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <BeeMaxFlowerDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x84
    float BeeMaxFlowerDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <GeneralBuzzRange>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    float GeneralBuzzRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: GeneralBuzzRange and: bees
    char __padding18[0x4] = {};
    // private System.Collections.Generic.List`1<AnimatedBee> bees
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>* bees;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*) == 0x8);
    // private UnityEngine.Transform playerCamera
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Transform* playerCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<BeePerchPoint> allPerchPoints
    // Size: 0x8
    // Offset: 0xA0
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* allPerchPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*) == 0x8);
    public:
    // Get static field: static public readonly System.Collections.Generic.List`1<UnityEngine.GameObject> avoidPoints
    static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _get_avoidPoints();
    // Set static field: static public readonly System.Collections.Generic.List`1<UnityEngine.GameObject> avoidPoints
    static void _set_avoidPoints(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);
    // Get instance field reference: private XSceneRef[] flowerSections
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::XSceneRef>& dyn_flowerSections();
    // Get instance field reference: private System.Int32 loopSizePerBee
    [[deprecated("Use field access instead!")]] int& dyn_loopSizePerBee();
    // Get instance field reference: private System.Int32 numBees
    [[deprecated("Use field access instead!")]] int& dyn_numBees();
    // Get instance field reference: private UnityEngine.MeshRenderer beePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_beePrefab();
    // Get instance field reference: private UnityEngine.AudioSource nearbyBeeBuzz
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_nearbyBeeBuzz();
    // Get instance field reference: private UnityEngine.AudioSource generalBeeBuzz
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_generalBeeBuzz();
    // Get instance field reference: private UnityEngine.GameObject[] flowerSectionsResolved
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_flowerSectionsResolved();
    // Get instance field reference: private BeePerchPoint <BeeHive>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeePerchPoint*& dyn_$BeeHive$k__BackingField();
    // Get instance field reference: private System.Single <BeeSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeSpeed$k__BackingField();
    // Get instance field reference: private System.Single <BeeMaxTravelTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeMaxTravelTime$k__BackingField();
    // Get instance field reference: private System.Single <BeeAcceleration>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeAcceleration$k__BackingField();
    // Get instance field reference: private System.Single <BeeJitterStrength>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeJitterStrength$k__BackingField();
    // Get instance field reference: private System.Single <BeeJitterDamping>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeJitterDamping$k__BackingField();
    // Get instance field reference: private System.Single <BeeMaxJitterRadius>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeMaxJitterRadius$k__BackingField();
    // Get instance field reference: private System.Single <BeeNearDestinationRadius>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeNearDestinationRadius$k__BackingField();
    // Get instance field reference: private System.Single <AvoidPointRadius>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$AvoidPointRadius$k__BackingField();
    // Get instance field reference: private System.Single <BeeMinFlowerDuration>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeMinFlowerDuration$k__BackingField();
    // Get instance field reference: private System.Single <BeeMaxFlowerDuration>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$BeeMaxFlowerDuration$k__BackingField();
    // Get instance field reference: private System.Single <GeneralBuzzRange>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$GeneralBuzzRange$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<AnimatedBee> bees
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*& dyn_bees();
    // Get instance field reference: private UnityEngine.Transform playerCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_playerCamera();
    // Get instance field reference: private System.Collections.Generic.List`1<BeePerchPoint> allPerchPoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*& dyn_allPerchPoints();
    // public BeePerchPoint get_BeeHive()
    // Offset: 0x2786F24
    ::GlobalNamespace::BeePerchPoint* get_BeeHive();
    // private System.Void set_BeeHive(BeePerchPoint value)
    // Offset: 0x2786F2C
    void set_BeeHive(::GlobalNamespace::BeePerchPoint* value);
    // public System.Single get_BeeSpeed()
    // Offset: 0x2786F34
    float get_BeeSpeed();
    // private System.Void set_BeeSpeed(System.Single value)
    // Offset: 0x2786F3C
    void set_BeeSpeed(float value);
    // public System.Single get_BeeMaxTravelTime()
    // Offset: 0x2786F44
    float get_BeeMaxTravelTime();
    // private System.Void set_BeeMaxTravelTime(System.Single value)
    // Offset: 0x2786F4C
    void set_BeeMaxTravelTime(float value);
    // public System.Single get_BeeAcceleration()
    // Offset: 0x2786F54
    float get_BeeAcceleration();
    // private System.Void set_BeeAcceleration(System.Single value)
    // Offset: 0x2786F5C
    void set_BeeAcceleration(float value);
    // public System.Single get_BeeJitterStrength()
    // Offset: 0x2786F64
    float get_BeeJitterStrength();
    // private System.Void set_BeeJitterStrength(System.Single value)
    // Offset: 0x2786F6C
    void set_BeeJitterStrength(float value);
    // public System.Single get_BeeJitterDamping()
    // Offset: 0x2786F74
    float get_BeeJitterDamping();
    // private System.Void set_BeeJitterDamping(System.Single value)
    // Offset: 0x2786F7C
    void set_BeeJitterDamping(float value);
    // public System.Single get_BeeMaxJitterRadius()
    // Offset: 0x2786F84
    float get_BeeMaxJitterRadius();
    // private System.Void set_BeeMaxJitterRadius(System.Single value)
    // Offset: 0x2786F8C
    void set_BeeMaxJitterRadius(float value);
    // public System.Single get_BeeNearDestinationRadius()
    // Offset: 0x2786F94
    float get_BeeNearDestinationRadius();
    // private System.Void set_BeeNearDestinationRadius(System.Single value)
    // Offset: 0x2786F9C
    void set_BeeNearDestinationRadius(float value);
    // public System.Single get_AvoidPointRadius()
    // Offset: 0x2786FA4
    float get_AvoidPointRadius();
    // private System.Void set_AvoidPointRadius(System.Single value)
    // Offset: 0x2786FAC
    void set_AvoidPointRadius(float value);
    // public System.Single get_BeeMinFlowerDuration()
    // Offset: 0x2786FB4
    float get_BeeMinFlowerDuration();
    // private System.Void set_BeeMinFlowerDuration(System.Single value)
    // Offset: 0x2786FBC
    void set_BeeMinFlowerDuration(float value);
    // public System.Single get_BeeMaxFlowerDuration()
    // Offset: 0x2786FC4
    float get_BeeMaxFlowerDuration();
    // private System.Void set_BeeMaxFlowerDuration(System.Single value)
    // Offset: 0x2786FCC
    void set_BeeMaxFlowerDuration(float value);
    // public System.Single get_GeneralBuzzRange()
    // Offset: 0x2786FD4
    float get_GeneralBuzzRange();
    // private System.Void set_GeneralBuzzRange(System.Single value)
    // Offset: 0x2786FDC
    void set_GeneralBuzzRange(float value);
    // private System.Void Awake()
    // Offset: 0x2786FE4
    void Awake();
    // private System.Void Start()
    // Offset: 0x27871C4
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x2787734
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x27877F4
    void Update();
    // private System.Void OnSeedChange()
    // Offset: 0x27873E8
    void OnSeedChange();
    // private System.Void PickPoints(System.Int32 n, System.Collections.Generic.List`1<BeePerchPoint> pickBuffer, System.Collections.Generic.List`1<BeePerchPoint> allPerchPoints, ref SRand rand, System.Collections.Generic.List`1<BeePerchPoint> resultBuffer)
    // Offset: 0x2787AD8
    void PickPoints(int n, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* pickBuffer, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* allPerchPoints, ByRef<::GlobalNamespace::SRand> rand, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>* resultBuffer);
    // static public System.Void RegisterAvoidPoint(UnityEngine.GameObject obj)
    // Offset: 0x2786CE8
    static void RegisterAvoidPoint(::UnityEngine::GameObject* obj);
    // static public System.Void UnregisterAvoidPoint(UnityEngine.GameObject obj)
    // Offset: 0x2786E68
    static void UnregisterAvoidPoint(::UnityEngine::GameObject* obj);
    // public System.Void .ctor()
    // Offset: 0x2787CD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeeSwarmManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeeSwarmManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeeSwarmManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2787D58
    static void _cctor();
  }; // BeeSwarmManager
  #pragma pack(pop)
  static check_size<sizeof(BeeSwarmManager), 160 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*)> __GlobalNamespace_BeeSwarmManagerSizeCheck;
  static_assert(sizeof(BeeSwarmManager) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeHive
// Il2CppName: get_BeeHive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeePerchPoint* (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeHive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeHive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeHive
// Il2CppName: set_BeeHive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(::GlobalNamespace::BeePerchPoint*)>(&GlobalNamespace::BeeSwarmManager::set_BeeHive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeePerchPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeHive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeSpeed
// Il2CppName: get_BeeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeSpeed
// Il2CppName: set_BeeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeMaxTravelTime
// Il2CppName: get_BeeMaxTravelTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeMaxTravelTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeMaxTravelTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeMaxTravelTime
// Il2CppName: set_BeeMaxTravelTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeMaxTravelTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeMaxTravelTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeAcceleration
// Il2CppName: get_BeeAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeAcceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeAcceleration
// Il2CppName: set_BeeAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeAcceleration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeJitterStrength
// Il2CppName: get_BeeJitterStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeJitterStrength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeJitterStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeJitterStrength
// Il2CppName: set_BeeJitterStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeJitterStrength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeJitterStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeJitterDamping
// Il2CppName: get_BeeJitterDamping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeJitterDamping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeJitterDamping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeJitterDamping
// Il2CppName: set_BeeJitterDamping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeJitterDamping)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeJitterDamping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeMaxJitterRadius
// Il2CppName: get_BeeMaxJitterRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeMaxJitterRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeMaxJitterRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeMaxJitterRadius
// Il2CppName: set_BeeMaxJitterRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeMaxJitterRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeMaxJitterRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeNearDestinationRadius
// Il2CppName: get_BeeNearDestinationRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeNearDestinationRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeNearDestinationRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeNearDestinationRadius
// Il2CppName: set_BeeNearDestinationRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeNearDestinationRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeNearDestinationRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_AvoidPointRadius
// Il2CppName: get_AvoidPointRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_AvoidPointRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_AvoidPointRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_AvoidPointRadius
// Il2CppName: set_AvoidPointRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_AvoidPointRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_AvoidPointRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeMinFlowerDuration
// Il2CppName: get_BeeMinFlowerDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeMinFlowerDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeMinFlowerDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeMinFlowerDuration
// Il2CppName: set_BeeMinFlowerDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeMinFlowerDuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeMinFlowerDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_BeeMaxFlowerDuration
// Il2CppName: get_BeeMaxFlowerDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_BeeMaxFlowerDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_BeeMaxFlowerDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_BeeMaxFlowerDuration
// Il2CppName: set_BeeMaxFlowerDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_BeeMaxFlowerDuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_BeeMaxFlowerDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::get_GeneralBuzzRange
// Il2CppName: get_GeneralBuzzRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::get_GeneralBuzzRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "get_GeneralBuzzRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::set_GeneralBuzzRange
// Il2CppName: set_GeneralBuzzRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(float)>(&GlobalNamespace::BeeSwarmManager::set_GeneralBuzzRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "set_GeneralBuzzRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::OnSeedChange
// Il2CppName: OnSeedChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)()>(&GlobalNamespace::BeeSwarmManager::OnSeedChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "OnSeedChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::PickPoints
// Il2CppName: PickPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeeSwarmManager::*)(int, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*, ByRef<::GlobalNamespace::SRand>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeePerchPoint*>*)>(&GlobalNamespace::BeeSwarmManager::PickPoints)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pickBuffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeePerchPoint")})->byval_arg;
    static auto* allPerchPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeePerchPoint")})->byval_arg;
    static auto* rand = &::il2cpp_utils::GetClassFromName("", "SRand")->this_arg;
    static auto* resultBuffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeePerchPoint")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "PickPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, pickBuffer, allPerchPoints, rand, resultBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::RegisterAvoidPoint
// Il2CppName: RegisterAvoidPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BeeSwarmManager::RegisterAvoidPoint)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "RegisterAvoidPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::UnregisterAvoidPoint
// Il2CppName: UnregisterAvoidPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BeeSwarmManager::UnregisterAvoidPoint)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), "UnregisterAvoidPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeeSwarmManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeeSwarmManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeeSwarmManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
