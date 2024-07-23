// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.HitboxBuffer
#include "Fusion/HitboxBuffer.hpp"
// Including type: Fusion.IHitboxColliderContainer
#include "Fusion/IHitboxColliderContainer.hpp"
// Including type: Fusion.HitboxCollider
#include "Fusion/HitboxCollider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ILagCompensationBroadphase
  class ILagCompensationBroadphase;
  // Forward declaring type: RayNodeTraversalTest
  class RayNodeTraversalTest;
  // Forward declaring type: RadialNodeTraversalTest
  class RadialNodeTraversalTest;
  // Forward declaring type: AabbNodeTraversalTest
  class AabbNodeTraversalTest;
  // Forward declaring type: Mapper
  class Mapper;
  // Forward declaring type: HitboxRoot
  class HitboxRoot;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Fusion::LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: Query
  struct Query;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::HitboxBuffer::HitboxSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::HitboxBuffer::HitboxSnapshot*, "Fusion", "HitboxBuffer/HitboxSnapshot");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.HitboxBuffer/HitboxSnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  class HitboxBuffer::HitboxSnapshot : public ::Il2CppObject/*, public ::Fusion::IHitboxColliderContainer*/ {
    public:
    public:
    // readonly System.Int32 CollidersCapacity
    // Size: 0x4
    // Offset: 0x10
    int CollidersCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CollidersCapacity and: colliders
    char __padding0[0x4] = {};
    // private Fusion.HitboxCollider[] _colliders
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Fusion::HitboxCollider> colliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::HitboxCollider>) == 0x8);
    // private System.Int32 _collidersCount
    // Size: 0x4
    // Offset: 0x20
    int collidersCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _collidersTempCount
    // Size: 0x4
    // Offset: 0x24
    int collidersTempCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _collidersFreeHead
    // Size: 0x4
    // Offset: 0x28
    int collidersFreeHead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: collidersFreeHead and: broadphase
    char __padding4[0x4] = {};
    // Fusion.ILagCompensationBroadphase _broadphase
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::ILagCompensationBroadphase* broadphase;
    // Field size check
    static_assert(sizeof(::Fusion::ILagCompensationBroadphase*) == 0x8);
    // System.Int32 Tick
    // Size: 0x4
    // Offset: 0x38
    int Tick;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 DataTick
    // Size: 0x4
    // Offset: 0x3C
    int DataTick;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly Fusion.RayNodeTraversalTest _rayTraversalTest
    // Size: 0x8
    // Offset: 0x40
    ::Fusion::RayNodeTraversalTest* rayTraversalTest;
    // Field size check
    static_assert(sizeof(::Fusion::RayNodeTraversalTest*) == 0x8);
    // private readonly Fusion.RadialNodeTraversalTest _radialTraversalTest
    // Size: 0x8
    // Offset: 0x48
    ::Fusion::RadialNodeTraversalTest* radialTraversalTest;
    // Field size check
    static_assert(sizeof(::Fusion::RadialNodeTraversalTest*) == 0x8);
    // private readonly Fusion.AabbNodeTraversalTest _aabbTraversalTest
    // Size: 0x8
    // Offset: 0x50
    ::Fusion::AabbNodeTraversalTest* aabbTraversalTest;
    // Field size check
    static_assert(sizeof(::Fusion::AabbNodeTraversalTest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Fusion::IHitboxColliderContainer
    operator ::Fusion::IHitboxColliderContainer() noexcept {
      return *reinterpret_cast<::Fusion::IHitboxColliderContainer*>(this);
    }
    // Get instance field reference: readonly System.Int32 CollidersCapacity
    [[deprecated("Use field access instead!")]] int& dyn_CollidersCapacity();
    // Get instance field reference: private Fusion.HitboxCollider[] _colliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::HitboxCollider>& dyn__colliders();
    // Get instance field reference: private System.Int32 _collidersCount
    [[deprecated("Use field access instead!")]] int& dyn__collidersCount();
    // Get instance field reference: private System.Int32 _collidersTempCount
    [[deprecated("Use field access instead!")]] int& dyn__collidersTempCount();
    // Get instance field reference: private System.Int32 _collidersFreeHead
    [[deprecated("Use field access instead!")]] int& dyn__collidersFreeHead();
    // Get instance field reference: Fusion.ILagCompensationBroadphase _broadphase
    [[deprecated("Use field access instead!")]] ::Fusion::ILagCompensationBroadphase*& dyn__broadphase();
    // Get instance field reference: System.Int32 Tick
    [[deprecated("Use field access instead!")]] int& dyn_Tick();
    // Get instance field reference: System.Int32 DataTick
    [[deprecated("Use field access instead!")]] int& dyn_DataTick();
    // Get instance field reference: private readonly Fusion.RayNodeTraversalTest _rayTraversalTest
    [[deprecated("Use field access instead!")]] ::Fusion::RayNodeTraversalTest*& dyn__rayTraversalTest();
    // Get instance field reference: private readonly Fusion.RadialNodeTraversalTest _radialTraversalTest
    [[deprecated("Use field access instead!")]] ::Fusion::RadialNodeTraversalTest*& dyn__radialTraversalTest();
    // Get instance field reference: private readonly Fusion.AabbNodeTraversalTest _aabbTraversalTest
    [[deprecated("Use field access instead!")]] ::Fusion::AabbNodeTraversalTest*& dyn__aabbTraversalTest();
    // System.Int32 get_CollidersCount()
    // Offset: 0x2B40068
    int get_CollidersCount();
    // System.Void .ctor(Fusion.Mapper mapper, System.Collections.Generic.List`1<Fusion.HitboxRoot> initialObjects, System.Int32 hitboxCapacity, System.Single expansionFactor)
    // Offset: 0x2B41724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitboxBuffer::HitboxSnapshot* New_ctor(::Fusion::Mapper* mapper, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* initialObjects, int hitboxCapacity, float expansionFactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::HitboxBuffer::HitboxSnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitboxBuffer::HitboxSnapshot*, creationType>(mapper, initialObjects, hitboxCapacity, expansionFactor)));
    }
    // System.Void CopyFrom(System.Int32 tick, System.Int32 dataTick, Fusion.HitboxBuffer/HitboxSnapshot from)
    // Offset: 0x2B41A44
    void CopyFrom(int tick, int dataTick, ::Fusion::HitboxBuffer::HitboxSnapshot* from);
    // public Fusion.HitboxCollider GetNextCollider(out System.Int32 index)
    // Offset: 0x2B44308
    ::Fusion::HitboxCollider GetNextCollider(ByRef<int> index);
    // public Fusion.HitboxCollider GetNextTempCollider(out System.Int32 tmpIndex)
    // Offset: 0x2B443D0
    ::Fusion::HitboxCollider GetNextTempCollider(ByRef<int> tmpIndex);
    // public System.Void ReleaseTempColliders()
    // Offset: 0x2B442D8
    void ReleaseTempColliders();
    // public System.Void ReleaseCollider(System.Int32 index)
    // Offset: 0x2B44458
    void ReleaseCollider(int index);
    // public Fusion.HitboxCollider GetCollider(System.Int32 index)
    // Offset: 0x2B44554
    ::Fusion::HitboxCollider GetCollider(int index);
    // System.Void Add(Fusion.HitboxRoot h)
    // Offset: 0x2B41C20
    void Add(::Fusion::HitboxRoot* h);
    // System.Boolean Remove(Fusion.HitboxRoot hr)
    // Offset: 0x2B41CE0
    bool Remove(::Fusion::HitboxRoot* hr);
    // System.Void Update(Fusion.HitboxRoot h)
    // Offset: 0x2B44644
    void Update(::Fusion::HitboxRoot* h);
    // System.Void Optimize()
    // Offset: 0x2B41B7C
    void Optimize();
    // static System.Boolean NarrowPhaseRay(ref Fusion.HitboxCollider c, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single length, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, out System.Single distance)
    // Offset: 0x2B434D0
    static bool NarrowPhaseRay(ByRef<::Fusion::HitboxCollider> c, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float length, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ByRef<float> distance);
    // static System.Boolean NarrowPhaseSphere(ref Fusion.HitboxCollider c, UnityEngine.Vector3 origin, System.Single radius, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal)
    // Offset: 0x2B43730
    static bool NarrowPhaseSphere(ByRef<::Fusion::HitboxCollider> c, ::UnityEngine::Vector3 origin, float radius, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal);
    // static System.Boolean NarrowPhaseBox(ref Fusion.LagCompensationUtils/BoxNarrowData boxQueryNarrowData, ref Fusion.HitboxCollider c, System.Boolean computeDetailedInfo, out UnityEngine.Vector3 hitPoint, out UnityEngine.Vector3 hitNormal)
    // Offset: 0x2B438C0
    static bool NarrowPhaseBox(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxQueryNarrowData, ByRef<::Fusion::HitboxCollider> c, bool computeDetailedInfo, ByRef<::UnityEngine::Vector3> hitPoint, ByRef<::UnityEngine::Vector3> hitNormal);
    // public System.Void RaycastBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxRoot> broadphaseCandidates)
    // Offset: 0x2B43C3C
    void RaycastBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* broadphaseCandidates);
    // public System.Void OverlapSphereBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxRoot> broadphaseCandidates)
    // Offset: 0x2B440A8
    void OverlapSphereBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* broadphaseCandidates);
    // public System.Void OverlapBoxBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxRoot> broadphaseCandidates)
    // Offset: 0x2B441BC
    void OverlapBoxBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* broadphaseCandidates);
    // public System.Void ProcessBroadphaseRootCandidates(ref Fusion.LagCompensation.Query query, System.Boolean interpolateColliders, System.Collections.Generic.List`1<Fusion.HitboxRoot> rootCandidates, Fusion.IHitboxColliderContainer refContainer, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices)
    // Offset: 0x2B43D58
    void ProcessBroadphaseRootCandidates(ByRef<::Fusion::LagCompensation::Query> query, bool interpolateColliders, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* rootCandidates, ::Fusion::IHitboxColliderContainer* refContainer, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices);
    // System.Void DebugDraw(UnityEngine.Color color, System.Boolean renderBroadphase, System.Boolean renderColliders)
    // Offset: 0x2B41DD8
    void DebugDraw(::UnityEngine::Color color, bool renderBroadphase, bool renderColliders);
    // private System.Void DrawColliders(UnityEngine.Color color)
    // Offset: 0x2B44798
    void DrawColliders(::UnityEngine::Color color);
  }; // Fusion.HitboxBuffer/HitboxSnapshot
  #pragma pack(pop)
  static check_size<sizeof(HitboxBuffer::HitboxSnapshot), 80 + sizeof(::Fusion::AabbNodeTraversalTest*)> __Fusion_HitboxBuffer_HitboxSnapshotSizeCheck;
  static_assert(sizeof(HitboxBuffer::HitboxSnapshot) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::get_CollidersCount
// Il2CppName: get_CollidersCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::HitboxBuffer::HitboxSnapshot::*)()>(&Fusion::HitboxBuffer::HitboxSnapshot::get_CollidersCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "get_CollidersCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(int, int, ::Fusion::HitboxBuffer::HitboxSnapshot*)>(&Fusion::HitboxBuffer::HitboxSnapshot::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataTick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxBuffer/HitboxSnapshot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, dataTick, from});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::GetNextCollider
// Il2CppName: GetNextCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::HitboxCollider (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<int>)>(&Fusion::HitboxBuffer::HitboxSnapshot::GetNextCollider)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "GetNextCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::GetNextTempCollider
// Il2CppName: GetNextTempCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::HitboxCollider (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<int>)>(&Fusion::HitboxBuffer::HitboxSnapshot::GetNextTempCollider)> {
  static const MethodInfo* get() {
    static auto* tmpIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "GetNextTempCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tmpIndex});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::ReleaseTempColliders
// Il2CppName: ReleaseTempColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)()>(&Fusion::HitboxBuffer::HitboxSnapshot::ReleaseTempColliders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "ReleaseTempColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::ReleaseCollider
// Il2CppName: ReleaseCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(int)>(&Fusion::HitboxBuffer::HitboxSnapshot::ReleaseCollider)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "ReleaseCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::GetCollider
// Il2CppName: GetCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::HitboxCollider (Fusion::HitboxBuffer::HitboxSnapshot::*)(int)>(&Fusion::HitboxBuffer::HitboxSnapshot::GetCollider)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "GetCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::HitboxSnapshot::Add)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::HitboxSnapshot::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::HitboxSnapshot::Remove)> {
  static const MethodInfo* get() {
    static auto* hr = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hr});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::HitboxSnapshot::Update)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)()>(&Fusion::HitboxBuffer::HitboxSnapshot::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseRay
// Il2CppName: NarrowPhaseRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::HitboxCollider>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseRay)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxCollider")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "NarrowPhaseRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, origin, direction, length, point, normal, distance});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseSphere
// Il2CppName: NarrowPhaseSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::HitboxCollider>, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseSphere)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxCollider")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "NarrowPhaseSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, origin, radius, point, normal});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseBox
// Il2CppName: NarrowPhaseBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, ByRef<::Fusion::HitboxCollider>, bool, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&Fusion::HitboxBuffer::HitboxSnapshot::NarrowPhaseBox)> {
  static const MethodInfo* get() {
    static auto* boxQueryNarrowData = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxCollider")->this_arg;
    static auto* computeDetailedInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hitNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "NarrowPhaseBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boxQueryNarrowData, c, computeDetailedInfo, hitPoint, hitNormal});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::RaycastBroadphase
// Il2CppName: RaycastBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*)>(&Fusion::HitboxBuffer::HitboxSnapshot::RaycastBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* broadphaseCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "RaycastBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, broadphaseCandidates});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::OverlapSphereBroadphase
// Il2CppName: OverlapSphereBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*)>(&Fusion::HitboxBuffer::HitboxSnapshot::OverlapSphereBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* broadphaseCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "OverlapSphereBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, broadphaseCandidates});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::OverlapBoxBroadphase
// Il2CppName: OverlapBoxBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*)>(&Fusion::HitboxBuffer::HitboxSnapshot::OverlapBoxBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* broadphaseCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "OverlapBoxBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, broadphaseCandidates});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::ProcessBroadphaseRootCandidates
// Il2CppName: ProcessBroadphaseRootCandidates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(ByRef<::Fusion::LagCompensation::Query>, bool, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*, ::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*)>(&Fusion::HitboxBuffer::HitboxSnapshot::ProcessBroadphaseRootCandidates)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* interpolateColliders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rootCandidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    static auto* refContainer = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "ProcessBroadphaseRootCandidates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, interpolateColliders, rootCandidates, refContainer, processedColliderIndices});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::DebugDraw
// Il2CppName: DebugDraw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(::UnityEngine::Color, bool, bool)>(&Fusion::HitboxBuffer::HitboxSnapshot::DebugDraw)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* renderBroadphase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* renderColliders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "DebugDraw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, renderBroadphase, renderColliders});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::HitboxSnapshot::DrawColliders
// Il2CppName: DrawColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::HitboxSnapshot::*)(::UnityEngine::Color)>(&Fusion::HitboxBuffer::HitboxSnapshot::DrawColliders)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer::HitboxSnapshot*), "DrawColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};