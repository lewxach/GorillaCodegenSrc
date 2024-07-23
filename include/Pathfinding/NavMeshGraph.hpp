// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.NavmeshBase
#include "Pathfinding/NavmeshBase.hpp"
// Including type: Pathfinding.IUpdatableGraph
#include "Pathfinding/IUpdatableGraph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphUpdateThreading
  struct GraphUpdateThreading;
  // Forward declaring type: GraphUpdateObject
  class GraphUpdateObject;
  // Skipping declaration: INavmeshHolder because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Forward declaring type: GraphTransform
  class GraphTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavMeshGraph
  class NavMeshGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::NavMeshGraph);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NavMeshGraph*, "Pathfinding", "NavMeshGraph");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x164
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.NavMeshGraph
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  // [JsonOptInAttribute] Offset: FFFFFFFF
  class NavMeshGraph : public ::Pathfinding::NavmeshBase/*, public ::Pathfinding::IUpdatableGraph*/ {
    public:
    // Nested type: ::Pathfinding::NavMeshGraph::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: ::Pathfinding::NavMeshGraph::$ScanInternal$d__20
    class $ScanInternal$d__20;
    public:
    // public UnityEngine.Mesh sourceMesh
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::Mesh* sourceMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x138
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotation
    // Size: 0xC
    // Offset: 0x144
    ::UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x150
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean recalculateNormals
    // Size: 0x1
    // Offset: 0x154
    bool recalculateNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recalculateNormals and: cachedSourceMeshBoundsMin
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 cachedSourceMeshBoundsMin
    // Size: 0xC
    // Offset: 0x158
    ::UnityEngine::Vector3 cachedSourceMeshBoundsMin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Pathfinding::IUpdatableGraph
    operator ::Pathfinding::IUpdatableGraph() noexcept {
      return *reinterpret_cast<::Pathfinding::IUpdatableGraph*>(this);
    }
    // Get instance field reference: public UnityEngine.Mesh sourceMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_sourceMesh();
    // Get instance field reference: public UnityEngine.Vector3 offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public UnityEngine.Vector3 rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotation();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public System.Boolean recalculateNormals
    [[deprecated("Use field access instead!")]] bool& dyn_recalculateNormals();
    // Get instance field reference: private UnityEngine.Vector3 cachedSourceMeshBoundsMin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_cachedSourceMeshBoundsMin();
    // private Pathfinding.GraphUpdateThreading Pathfinding.IUpdatableGraph.CanUpdateAsync(Pathfinding.GraphUpdateObject o)
    // Offset: 0x29D6788
    ::Pathfinding::GraphUpdateThreading Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject* o);
    // private System.Void Pathfinding.IUpdatableGraph.UpdateAreaInit(Pathfinding.GraphUpdateObject o)
    // Offset: 0x29D6790
    void Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject* o);
    // private System.Void Pathfinding.IUpdatableGraph.UpdateAreaPost(Pathfinding.GraphUpdateObject o)
    // Offset: 0x29D6794
    void Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject* o);
    // private System.Void Pathfinding.IUpdatableGraph.UpdateArea(Pathfinding.GraphUpdateObject o)
    // Offset: 0x29D6798
    void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject* o);
    // static public System.Void UpdateArea(Pathfinding.GraphUpdateObject o, Pathfinding.INavmeshHolder graph)
    // Offset: 0x29D67A8
    static void UpdateArea(::Pathfinding::GraphUpdateObject* o, ::Pathfinding::INavmeshHolder* graph);
    // protected override System.Boolean get_RecalculateNormals()
    // Offset: 0x29D644C
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: System.Boolean NavmeshBase::get_RecalculateNormals()
    bool get_RecalculateNormals();
    // public override System.Single get_TileWorldSizeX()
    // Offset: 0x29D6454
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: System.Single NavmeshBase::get_TileWorldSizeX()
    float get_TileWorldSizeX();
    // public override System.Single get_TileWorldSizeZ()
    // Offset: 0x29D645C
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: System.Single NavmeshBase::get_TileWorldSizeZ()
    float get_TileWorldSizeZ();
    // protected override System.Single get_MaxTileConnectionEdgeDistance()
    // Offset: 0x29D6464
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: System.Single NavmeshBase::get_MaxTileConnectionEdgeDistance()
    float get_MaxTileConnectionEdgeDistance();
    // public override Pathfinding.Util.GraphTransform CalculateTransform()
    // Offset: 0x29D646C
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: Pathfinding.Util.GraphTransform NavmeshBase::CalculateTransform()
    ::Pathfinding::Util::GraphTransform* CalculateTransform();
    // protected override System.Collections.Generic.IEnumerable`1<Pathfinding.Progress> ScanInternal()
    // Offset: 0x29D6C7C
    // Implemented from: Pathfinding.NavGraph
    // Base method: System.Collections.Generic.IEnumerable`1<Pathfinding.Progress> NavGraph::ScanInternal()
    ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal();
    // protected override System.Void DeserializeSettingsCompatibility(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29D6D2C
    // Implemented from: Pathfinding.NavGraph
    // Base method: System.Void NavGraph::DeserializeSettingsCompatibility(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public System.Void .ctor()
    // Offset: 0x29D6E40
    // Implemented from: Pathfinding.NavmeshBase
    // Base method: System.Void NavmeshBase::.ctor()
    // Base method: System.Void NavGraph::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavMeshGraph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::NavMeshGraph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavMeshGraph*, creationType>()));
    }
  }; // Pathfinding.NavMeshGraph
  #pragma pack(pop)
  static check_size<sizeof(NavMeshGraph), 344 + sizeof(::UnityEngine::Vector3)> __Pathfinding_NavMeshGraphSizeCheck;
  static_assert(sizeof(NavMeshGraph) == 0x164);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync
// Il2CppName: Pathfinding.IUpdatableGraph.CanUpdateAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphUpdateThreading (Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphUpdateObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "Pathfinding.IUpdatableGraph.CanUpdateAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit
// Il2CppName: Pathfinding.IUpdatableGraph.UpdateAreaInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphUpdateObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "Pathfinding.IUpdatableGraph.UpdateAreaInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost
// Il2CppName: Pathfinding.IUpdatableGraph.UpdateAreaPost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphUpdateObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "Pathfinding.IUpdatableGraph.UpdateAreaPost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateArea
// Il2CppName: Pathfinding.IUpdatableGraph.UpdateArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavMeshGraph::*)(::Pathfinding::GraphUpdateObject*)>(&Pathfinding::NavMeshGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphUpdateObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "Pathfinding.IUpdatableGraph.UpdateArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::UpdateArea
// Il2CppName: UpdateArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Pathfinding::GraphUpdateObject*, ::Pathfinding::INavmeshHolder*)>(&Pathfinding::NavMeshGraph::UpdateArea)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphUpdateObject")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "INavmeshHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "UpdateArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::get_RecalculateNormals
// Il2CppName: get_RecalculateNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::get_RecalculateNormals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "get_RecalculateNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::get_TileWorldSizeX
// Il2CppName: get_TileWorldSizeX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::get_TileWorldSizeX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "get_TileWorldSizeX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::get_TileWorldSizeZ
// Il2CppName: get_TileWorldSizeZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::get_TileWorldSizeZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "get_TileWorldSizeZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::get_MaxTileConnectionEdgeDistance
// Il2CppName: get_MaxTileConnectionEdgeDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::get_MaxTileConnectionEdgeDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "get_MaxTileConnectionEdgeDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::CalculateTransform
// Il2CppName: CalculateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Util::GraphTransform* (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::CalculateTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "CalculateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::ScanInternal
// Il2CppName: ScanInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (Pathfinding::NavMeshGraph::*)()>(&Pathfinding::NavMeshGraph::ScanInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "ScanInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::DeserializeSettingsCompatibility
// Il2CppName: DeserializeSettingsCompatibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::NavMeshGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::NavMeshGraph::DeserializeSettingsCompatibility)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NavMeshGraph*), "DeserializeSettingsCompatibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::NavMeshGraph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!