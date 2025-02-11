// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.MeshNode
#include "Pathfinding/MeshNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: INavmeshHolder
  class INavmeshHolder;
  // Skipping declaration: Int3 because it is already included!
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: PathNode
  class PathNode;
  // Forward declaring type: PathHandler
  class PathHandler;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: TriangleMeshNode
  class TriangleMeshNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::TriangleMeshNode);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::TriangleMeshNode*, "Pathfinding", "TriangleMeshNode");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.TriangleMeshNode
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangleMeshNode : public ::Pathfinding::MeshNode {
    public:
    public:
    // public System.Int32 v0
    // Size: 0x4
    // Offset: 0x30
    int v0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 v1
    // Size: 0x4
    // Offset: 0x34
    int v1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 v2
    // Size: 0x4
    // Offset: 0x38
    int v2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::ArrayW<::Pathfinding::Connection>
    constexpr operator ::ArrayW<::Pathfinding::Connection>() const noexcept = delete;
    // Get static field: static protected Pathfinding.INavmeshHolder[] _navmeshHolders
    static ::ArrayW<::Pathfinding::INavmeshHolder*> _get__navmeshHolders();
    // Set static field: static protected Pathfinding.INavmeshHolder[] _navmeshHolders
    static void _set__navmeshHolders(::ArrayW<::Pathfinding::INavmeshHolder*> value);
    // Get static field: static protected readonly System.Object lockObject
    static ::Il2CppObject* _get_lockObject();
    // Set static field: static protected readonly System.Object lockObject
    static void _set_lockObject(::Il2CppObject* value);
    // Get instance field reference: public System.Int32 v0
    [[deprecated("Use field access instead!")]] int& dyn_v0();
    // Get instance field reference: public System.Int32 v1
    [[deprecated("Use field access instead!")]] int& dyn_v1();
    // Get instance field reference: public System.Int32 v2
    [[deprecated("Use field access instead!")]] int& dyn_v2();
    // static public Pathfinding.INavmeshHolder GetNavmeshHolder(System.UInt32 graphIndex)
    // Offset: 0x29DB5F0
    static ::Pathfinding::INavmeshHolder* GetNavmeshHolder(uint graphIndex);
    // static public System.Void SetNavmeshHolder(System.Int32 graphIndex, Pathfinding.INavmeshHolder graph)
    // Offset: 0x29D7B88
    static void SetNavmeshHolder(int graphIndex, ::Pathfinding::INavmeshHolder* graph);
    // public System.Void UpdatePositionFromVertices()
    // Offset: 0x29DB66C
    void UpdatePositionFromVertices();
    // public System.Int32 GetVertexIndex(System.Int32 i)
    // Offset: 0x29DB8D4
    int GetVertexIndex(int i);
    // public System.Int32 GetVertexArrayIndex(System.Int32 i)
    // Offset: 0x29DB8FC
    int GetVertexArrayIndex(int i);
    // public System.Void GetVertices(out Pathfinding.Int3 v0, out Pathfinding.Int3 v1, out Pathfinding.Int3 v2)
    // Offset: 0x29DB6F4
    void GetVertices(ByRef<::Pathfinding::Int3> v0, ByRef<::Pathfinding::Int3> v1, ByRef<::Pathfinding::Int3> v2);
    // public System.Void GetVerticesInGraphSpace(out Pathfinding.Int3 v0, out Pathfinding.Int3 v1, out Pathfinding.Int3 v2)
    // Offset: 0x29DBA14
    void GetVerticesInGraphSpace(ByRef<::Pathfinding::Int3> v0, ByRef<::Pathfinding::Int3> v1, ByRef<::Pathfinding::Int3> v2);
    // public Pathfinding.Int3 GetVertexInGraphSpace(System.Int32 i)
    // Offset: 0x29D72F8
    ::Pathfinding::Int3 GetVertexInGraphSpace(int i);
    // Pathfinding.Int3 ClosestPointOnNodeXZInGraphSpace(UnityEngine.Vector3 p)
    // Offset: 0x29DBE60
    ::Pathfinding::Int3 ClosestPointOnNodeXZInGraphSpace(::UnityEngine::Vector3 p);
    // public System.Int32 SharedEdge(Pathfinding.GraphNode other)
    // Offset: 0x29DC870
    int SharedEdge(::Pathfinding::GraphNode* other);
    // public System.Boolean GetPortal(Pathfinding.GraphNode toNode, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards, out System.Int32 aIndex, out System.Int32 bIndex)
    // Offset: 0x29DC8FC
    bool GetPortal(::Pathfinding::GraphNode* toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* right, bool backwards, ByRef<int> aIndex, ByRef<int> bIndex);
    // static private System.Void .cctor()
    // Offset: 0x29DD73C
    static void _cctor();
    // public System.Void .ctor(AstarPath astar)
    // Offset: 0x29DB5E8
    // Implemented from: Pathfinding.MeshNode
    // Base method: System.Void MeshNode::.ctor(AstarPath astar)
    // Base method: System.Void GraphNode::.ctor(AstarPath astar)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangleMeshNode* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::TriangleMeshNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangleMeshNode*, creationType>(astar)));
    }
    // public override Pathfinding.Int3 GetVertex(System.Int32 i)
    // Offset: 0x29DBC00
    // Implemented from: Pathfinding.MeshNode
    // Base method: Pathfinding.Int3 MeshNode::GetVertex(System.Int32 i)
    ::Pathfinding::Int3 GetVertex(int i);
    // public override System.Int32 GetVertexCount()
    // Offset: 0x29DBD1C
    // Implemented from: Pathfinding.MeshNode
    // Base method: System.Int32 MeshNode::GetVertexCount()
    int GetVertexCount();
    // public override UnityEngine.Vector3 ClosestPointOnNode(UnityEngine.Vector3 p)
    // Offset: 0x29DBD24
    // Implemented from: Pathfinding.GraphNode
    // Base method: UnityEngine.Vector3 GraphNode::ClosestPointOnNode(UnityEngine.Vector3 p)
    ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3 p);
    // public override UnityEngine.Vector3 ClosestPointOnNodeXZ(UnityEngine.Vector3 p)
    // Offset: 0x29DC234
    // Implemented from: Pathfinding.MeshNode
    // Base method: UnityEngine.Vector3 MeshNode::ClosestPointOnNodeXZ(UnityEngine.Vector3 p)
    ::UnityEngine::Vector3 ClosestPointOnNodeXZ(::UnityEngine::Vector3 p);
    // public override System.Boolean ContainsPoint(UnityEngine.Vector3 p)
    // Offset: 0x29DC370
    // Implemented from: Pathfinding.MeshNode
    // Base method: System.Boolean MeshNode::ContainsPoint(UnityEngine.Vector3 p)
    bool ContainsPoint(::UnityEngine::Vector3 p);
    // public override System.Boolean ContainsPointInGraphSpace(Pathfinding.Int3 p)
    // Offset: 0x29DC4A8
    // Implemented from: Pathfinding.MeshNode
    // Base method: System.Boolean MeshNode::ContainsPointInGraphSpace(Pathfinding.Int3 p)
    bool ContainsPointInGraphSpace(::Pathfinding::Int3 p);
    // public override System.Void UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29DC578
    // Implemented from: Pathfinding.MeshNode
    // Base method: System.Void MeshNode::UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void UpdateRecursiveG(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29DC664
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void Open(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Boolean GetPortal(Pathfinding.GraphNode toNode, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    // Offset: 0x29DC8D8
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::GetPortal(Pathfinding.GraphNode toNode, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    bool GetPortal(::Pathfinding::GraphNode* toNode, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* right, bool backwards);
    // public override System.Single SurfaceArea()
    // Offset: 0x29DD08C
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Single GraphNode::SurfaceArea()
    float SurfaceArea();
    // public override UnityEngine.Vector3 RandomPointOnSurface()
    // Offset: 0x29DD2C8
    // Implemented from: Pathfinding.GraphNode
    // Base method: UnityEngine.Vector3 GraphNode::RandomPointOnSurface()
    ::UnityEngine::Vector3 RandomPointOnSurface();
    // public override System.Void SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29DD640
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29DD6BC
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
  }; // Pathfinding.TriangleMeshNode
  #pragma pack(pop)
  static check_size<sizeof(TriangleMeshNode), 56 + sizeof(int)> __Pathfinding_TriangleMeshNodeSizeCheck;
  static_assert(sizeof(TriangleMeshNode) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetNavmeshHolder
// Il2CppName: GetNavmeshHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::INavmeshHolder* (*)(uint)>(&Pathfinding::TriangleMeshNode::GetNavmeshHolder)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetNavmeshHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::SetNavmeshHolder
// Il2CppName: SetNavmeshHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Pathfinding::INavmeshHolder*)>(&Pathfinding::TriangleMeshNode::SetNavmeshHolder)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "INavmeshHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "SetNavmeshHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::UpdatePositionFromVertices
// Il2CppName: UpdatePositionFromVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)()>(&Pathfinding::TriangleMeshNode::UpdatePositionFromVertices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "UpdatePositionFromVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertexIndex
// Il2CppName: GetVertexIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::TriangleMeshNode::*)(int)>(&Pathfinding::TriangleMeshNode::GetVertexIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertexIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertexArrayIndex
// Il2CppName: GetVertexArrayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::TriangleMeshNode::*)(int)>(&Pathfinding::TriangleMeshNode::GetVertexArrayIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertexArrayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertices
// Il2CppName: GetVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(ByRef<::Pathfinding::Int3>, ByRef<::Pathfinding::Int3>, ByRef<::Pathfinding::Int3>)>(&Pathfinding::TriangleMeshNode::GetVertices)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1, v2});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVerticesInGraphSpace
// Il2CppName: GetVerticesInGraphSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(ByRef<::Pathfinding::Int3>, ByRef<::Pathfinding::Int3>, ByRef<::Pathfinding::Int3>)>(&Pathfinding::TriangleMeshNode::GetVerticesInGraphSpace)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVerticesInGraphSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1, v2});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertexInGraphSpace
// Il2CppName: GetVertexInGraphSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::TriangleMeshNode::*)(int)>(&Pathfinding::TriangleMeshNode::GetVertexInGraphSpace)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertexInGraphSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZInGraphSpace
// Il2CppName: ClosestPointOnNodeXZInGraphSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZInGraphSpace)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "ClosestPointOnNodeXZInGraphSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::SharedEdge
// Il2CppName: SharedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*)>(&Pathfinding::TriangleMeshNode::SharedEdge)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "SharedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetPortal
// Il2CppName: GetPortal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool, ByRef<int>, ByRef<int>)>(&Pathfinding::TriangleMeshNode::GetPortal)> {
  static const MethodInfo* get() {
    static auto* toNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* left = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* right = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetPortal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toNode, left, right, backwards, aIndex, bIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::TriangleMeshNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertex
// Il2CppName: GetVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::TriangleMeshNode::*)(int)>(&Pathfinding::TriangleMeshNode::GetVertex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetVertexCount
// Il2CppName: GetVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::TriangleMeshNode::*)()>(&Pathfinding::TriangleMeshNode::GetVertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::ClosestPointOnNode
// Il2CppName: ClosestPointOnNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::TriangleMeshNode::ClosestPointOnNode)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "ClosestPointOnNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZ
// Il2CppName: ClosestPointOnNodeXZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::TriangleMeshNode::ClosestPointOnNodeXZ)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "ClosestPointOnNodeXZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::ContainsPoint
// Il2CppName: ContainsPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::TriangleMeshNode::*)(::UnityEngine::Vector3)>(&Pathfinding::TriangleMeshNode::ContainsPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "ContainsPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::ContainsPointInGraphSpace
// Il2CppName: ContainsPointInGraphSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::TriangleMeshNode::*)(::Pathfinding::Int3)>(&Pathfinding::TriangleMeshNode::ContainsPointInGraphSpace)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "ContainsPointInGraphSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::UpdateRecursiveG
// Il2CppName: UpdateRecursiveG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::TriangleMeshNode::UpdateRecursiveG)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "UpdateRecursiveG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::TriangleMeshNode::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::GetPortal
// Il2CppName: GetPortal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::TriangleMeshNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&Pathfinding::TriangleMeshNode::GetPortal)> {
  static const MethodInfo* get() {
    static auto* toNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* left = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* right = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "GetPortal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toNode, left, right, backwards});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::SurfaceArea
// Il2CppName: SurfaceArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::TriangleMeshNode::*)()>(&Pathfinding::TriangleMeshNode::SurfaceArea)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "SurfaceArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::RandomPointOnSurface
// Il2CppName: RandomPointOnSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::TriangleMeshNode::*)()>(&Pathfinding::TriangleMeshNode::RandomPointOnSurface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "RandomPointOnSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::SerializeNode
// Il2CppName: SerializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::TriangleMeshNode::SerializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "SerializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::TriangleMeshNode::DeserializeNode
// Il2CppName: DeserializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::TriangleMeshNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::TriangleMeshNode::DeserializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::TriangleMeshNode*), "DeserializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
