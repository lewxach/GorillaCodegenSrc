// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
  // Forward declaring type: PhysicsScene2D
  struct PhysicsScene2D;
  // Forward declaring type: SimulationMode2D
  struct SimulationMode2D;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Collider2D
  class Collider2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Physics2D
  class Physics2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Physics2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Physics2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class Physics2D : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* _get_m_LastDisabledRigidbody2D();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static void _set_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* value);
    // static public UnityEngine.PhysicsScene2D get_defaultPhysicsScene()
    // Offset: 0x5525404
    static ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();
    // static public System.Boolean get_queriesHitTriggers()
    // Offset: 0x552540C
    static bool get_queriesHitTriggers();
    // static public System.Boolean get_autoSyncTransforms()
    // Offset: 0x5525434
    static bool get_autoSyncTransforms();
    // static public UnityEngine.SimulationMode2D get_simulationMode()
    // Offset: 0x552545C
    static ::UnityEngine::SimulationMode2D get_simulationMode();
    // static public System.Void set_simulationMode(UnityEngine.SimulationMode2D value)
    // Offset: 0x5525484
    static void set_simulationMode(::UnityEngine::SimulationMode2D value);
    // static public System.Single get_linearSleepTolerance()
    // Offset: 0x55254C0
    static float get_linearSleepTolerance();
    // static public System.Single get_angularSleepTolerance()
    // Offset: 0x55254E8
    static float get_angularSleepTolerance();
    // static public System.Boolean Simulate(System.Single step)
    // Offset: 0x5525510
    static bool Simulate(float step);
    // static System.Boolean Simulate_Internal(UnityEngine.PhysicsScene2D physicsScene, System.Single step)
    // Offset: 0x5524530
    static bool Simulate_Internal(::UnityEngine::PhysicsScene2D physicsScene, float step);
    // static public System.Void SyncTransforms()
    // Offset: 0x55255BC
    static void SyncTransforms();
    // static public UnityEngine.RaycastHit2D Linecast(UnityEngine.Vector2 start, UnityEngine.Vector2 end, System.Int32 layerMask)
    // Offset: 0x55255E4
    static ::UnityEngine::RaycastHit2D Linecast(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, int layerMask);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction)
    // Offset: 0x55256E4
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance)
    // Offset: 0x55257A4
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x552586C
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth)
    // Offset: 0x552597C
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x5525A8C
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth, float maxDepth);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x5525BA4
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x5525C60
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results, System.Single distance)
    // Offset: 0x5525D24
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, float distance);
    // static public UnityEngine.RaycastHit2D CircleCast(UnityEngine.Vector2 origin, System.Single radius, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x5525DE8
    static ::UnityEngine::RaycastHit2D CircleCast(::UnityEngine::Vector2 origin, float radius, ::UnityEngine::Vector2 direction, float distance, int layerMask);
    // static public UnityEngine.RaycastHit2D GetRayIntersection(UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x5525F00
    static ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float distance, int layerMask);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray)
    // Offset: 0x5525FB8
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance)
    // Offset: 0x55260D4
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float distance);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x5526148
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float distance, int layerMask);
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x5526024
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float distance, int layerMask);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x5526234
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x55262B0
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance, System.Int32 layerMask)
    // Offset: 0x5526334
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance, int layerMask);
    // static public System.Int32 OverlapPoint(UnityEngine.Vector2 point, UnityEngine.ContactFilter2D contactFilter, UnityEngine.Collider2D[] results)
    // Offset: 0x55263BC
    static int OverlapPoint(::UnityEngine::Vector2 point, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::Collider2D*> results);
    // static public System.Int32 OverlapCircle(UnityEngine.Vector2 point, System.Single radius, UnityEngine.ContactFilter2D contactFilter, UnityEngine.Collider2D[] results)
    // Offset: 0x5526458
    static int OverlapCircle(::UnityEngine::Vector2 point, float radius, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::Collider2D*> results);
    // static private System.Void .cctor()
    // Offset: 0x5526504
    static void _cctor();
    // static private System.Boolean Simulate_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, System.Single step)
    // Offset: 0x5525570
    static bool Simulate_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, float step);
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x55261C8
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> direction, float distance, int layerMask);
  }; // UnityEngine.Physics2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_defaultPhysicsScene
// Il2CppName: get_defaultPhysicsScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PhysicsScene2D (*)()>(&UnityEngine::Physics2D::get_defaultPhysicsScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_defaultPhysicsScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_queriesHitTriggers
// Il2CppName: get_queriesHitTriggers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Physics2D::get_queriesHitTriggers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_queriesHitTriggers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_autoSyncTransforms
// Il2CppName: get_autoSyncTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Physics2D::get_autoSyncTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_autoSyncTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_simulationMode
// Il2CppName: get_simulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SimulationMode2D (*)()>(&UnityEngine::Physics2D::get_simulationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_simulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::set_simulationMode
// Il2CppName: set_simulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SimulationMode2D)>(&UnityEngine::Physics2D::set_simulationMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "SimulationMode2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "set_simulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_linearSleepTolerance
// Il2CppName: get_linearSleepTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Physics2D::get_linearSleepTolerance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_linearSleepTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_angularSleepTolerance
// Il2CppName: get_angularSleepTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Physics2D::get_angularSleepTolerance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_angularSleepTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Simulate
// Il2CppName: Simulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&UnityEngine::Physics2D::Simulate)> {
  static const MethodInfo* get() {
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Simulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{step});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Simulate_Internal
// Il2CppName: Simulate_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D, float)>(&UnityEngine::Physics2D::Simulate_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Simulate_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, step});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::SyncTransforms
// Il2CppName: SyncTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Physics2D::SyncTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "SyncTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Linecast
// Il2CppName: Linecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, int)>(&UnityEngine::Physics2D::Linecast)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Linecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask, minDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int, float, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask, minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")})->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::CircleCast
// Il2CppName: CircleCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, float, ::UnityEngine::Vector2, float, int)>(&UnityEngine::Physics2D::CircleCast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "CircleCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, radius, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersection
// Il2CppName: GetRayIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Ray, float, int)>(&UnityEngine::Physics2D::GetRayIntersection)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll_Internal
// Il2CppName: GetRayIntersectionAll_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::OverlapPoint
// Il2CppName: OverlapPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&UnityEngine::Physics2D::OverlapPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Collider2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "OverlapPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::OverlapCircle
// Il2CppName: OverlapCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, float, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::Collider2D*>)>(&UnityEngine::Physics2D::OverlapCircle)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Collider2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "OverlapCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, radius, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Physics2D::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Simulate_Internal_Injected
// Il2CppName: Simulate_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::PhysicsScene2D>, float)>(&UnityEngine::Physics2D::Simulate_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Simulate_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, step});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected
// Il2CppName: GetRayIntersectionAll_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(ByRef<::UnityEngine::PhysicsScene2D>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask});
  }
};
