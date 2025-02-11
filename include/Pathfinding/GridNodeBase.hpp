// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GraphNode
#include "Pathfinding/GraphNode.hpp"
// Including type: Pathfinding.Connection
#include "Pathfinding/Connection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: PathNode
  class PathNode;
  // Forward declaring type: PathHandler
  class PathHandler;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridNodeBase
  class GridNodeBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GridNodeBase);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridNodeBase*, "Pathfinding", "GridNodeBase");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GridNodeBase
  // [TokenAttribute] Offset: FFFFFFFF
  class GridNodeBase : public ::Pathfinding::GraphNode {
    public:
    public:
    // protected System.Int32 nodeInGridIndex
    // Size: 0x4
    // Offset: 0x28
    int nodeInGridIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.UInt16 gridFlags
    // Size: 0x2
    // Offset: 0x2C
    uint16_t gridFlags;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: gridFlags and: connections
    char __padding1[0x2] = {};
    // public Pathfinding.Connection[] connections
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Pathfinding::Connection> connections;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::Connection>) == 0x8);
    public:
    // static field const value: static private System.Int32 GridFlagsWalkableErosionOffset
    static constexpr const int GridFlagsWalkableErosionOffset = 8;
    // Get static field: static private System.Int32 GridFlagsWalkableErosionOffset
    static int _get_GridFlagsWalkableErosionOffset();
    // Set static field: static private System.Int32 GridFlagsWalkableErosionOffset
    static void _set_GridFlagsWalkableErosionOffset(int value);
    // static field const value: static private System.Int32 GridFlagsWalkableErosionMask
    static constexpr const int GridFlagsWalkableErosionMask = 256;
    // Get static field: static private System.Int32 GridFlagsWalkableErosionMask
    static int _get_GridFlagsWalkableErosionMask();
    // Set static field: static private System.Int32 GridFlagsWalkableErosionMask
    static void _set_GridFlagsWalkableErosionMask(int value);
    // static field const value: static private System.Int32 GridFlagsWalkableTmpOffset
    static constexpr const int GridFlagsWalkableTmpOffset = 9;
    // Get static field: static private System.Int32 GridFlagsWalkableTmpOffset
    static int _get_GridFlagsWalkableTmpOffset();
    // Set static field: static private System.Int32 GridFlagsWalkableTmpOffset
    static void _set_GridFlagsWalkableTmpOffset(int value);
    // static field const value: static private System.Int32 GridFlagsWalkableTmpMask
    static constexpr const int GridFlagsWalkableTmpMask = 512;
    // Get static field: static private System.Int32 GridFlagsWalkableTmpMask
    static int _get_GridFlagsWalkableTmpMask();
    // Set static field: static private System.Int32 GridFlagsWalkableTmpMask
    static void _set_GridFlagsWalkableTmpMask(int value);
    // static field const value: static protected System.Int32 NodeInGridIndexLayerOffset
    static constexpr const int NodeInGridIndexLayerOffset = 24;
    // Get static field: static protected System.Int32 NodeInGridIndexLayerOffset
    static int _get_NodeInGridIndexLayerOffset();
    // Set static field: static protected System.Int32 NodeInGridIndexLayerOffset
    static void _set_NodeInGridIndexLayerOffset(int value);
    // static field const value: static protected System.Int32 NodeInGridIndexMask
    static constexpr const int NodeInGridIndexMask = 16777215;
    // Get static field: static protected System.Int32 NodeInGridIndexMask
    static int _get_NodeInGridIndexMask();
    // Set static field: static protected System.Int32 NodeInGridIndexMask
    static void _set_NodeInGridIndexMask(int value);
    // Get instance field reference: protected System.Int32 nodeInGridIndex
    [[deprecated("Use field access instead!")]] int& dyn_nodeInGridIndex();
    // Get instance field reference: protected System.UInt16 gridFlags
    [[deprecated("Use field access instead!")]] uint16_t& dyn_gridFlags();
    // Get instance field reference: public Pathfinding.Connection[] connections
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::Connection>& dyn_connections();
    // public System.Int32 get_NodeInGridIndex()
    // Offset: 0x29D8578
    int get_NodeInGridIndex();
    // public System.Void set_NodeInGridIndex(System.Int32 value)
    // Offset: 0x29D9F74
    void set_NodeInGridIndex(int value);
    // public System.Int32 get_XCoordinateInGrid()
    // Offset: 0x29D9F84
    int get_XCoordinateInGrid();
    // public System.Int32 get_ZCoordinateInGrid()
    // Offset: 0x29DA00C
    int get_ZCoordinateInGrid();
    // public System.Boolean get_WalkableErosion()
    // Offset: 0x29DA090
    bool get_WalkableErosion();
    // public System.Void set_WalkableErosion(System.Boolean value)
    // Offset: 0x29DA09C
    void set_WalkableErosion(bool value);
    // public System.Boolean get_TmpWalkable()
    // Offset: 0x29DA0CC
    bool get_TmpWalkable();
    // public System.Void set_TmpWalkable(System.Boolean value)
    // Offset: 0x29DA0D8
    void set_TmpWalkable(bool value);
    // public System.Boolean get_HasConnectionsToAllEightNeighbours()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasConnectionsToAllEightNeighbours();
    // public UnityEngine.Vector2 NormalizePoint(UnityEngine.Vector3 worldPoint)
    // Offset: 0x29DA27C
    ::UnityEngine::Vector2 NormalizePoint(::UnityEngine::Vector3 worldPoint);
    // public UnityEngine.Vector3 UnNormalizePoint(UnityEngine.Vector2 normalizedPointOnSurface)
    // Offset: 0x29DA354
    ::UnityEngine::Vector3 UnNormalizePoint(::UnityEngine::Vector2 normalizedPointOnSurface);
    // public Pathfinding.GridNodeBase GetNeighbourAlongDirection(System.Int32 direction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int direction);
    // public System.Boolean HasConnectionInDirection(System.Int32 direction)
    // Offset: 0x29DA4C8
    bool HasConnectionInDirection(int direction);
    // public System.Void ClearCustomConnections(System.Boolean alsoReverse)
    // Offset: 0x29DA588
    void ClearCustomConnections(bool alsoReverse);
    // protected System.Void .ctor(AstarPath astar)
    // Offset: 0x29D7F08
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::.ctor(AstarPath astar)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridNodeBase* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GridNodeBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridNodeBase*, creationType>(astar)));
    }
    // public override System.Single SurfaceArea()
    // Offset: 0x29DA108
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Single GraphNode::SurfaceArea()
    float SurfaceArea();
    // public override UnityEngine.Vector3 RandomPointOnSurface()
    // Offset: 0x29DA184
    // Implemented from: Pathfinding.GraphNode
    // Base method: UnityEngine.Vector3 GraphNode::RandomPointOnSurface()
    ::UnityEngine::Vector3 RandomPointOnSurface();
    // public override System.Int32 GetGizmoHashCode()
    // Offset: 0x29DA438
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Int32 GraphNode::GetGizmoHashCode()
    int GetGizmoHashCode();
    // public override System.Boolean ContainsConnection(Pathfinding.GraphNode node)
    // Offset: 0x29DA4EC
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::ContainsConnection(Pathfinding.GraphNode node)
    bool ContainsConnection(::Pathfinding::GraphNode* node);
    // public override System.Void ClearConnections(System.Boolean alsoReverse)
    // Offset: 0x29D8670
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::ClearConnections(System.Boolean alsoReverse)
    void ClearConnections(bool alsoReverse);
    // public override System.Void GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    // Offset: 0x29D8794
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>* action);
    // public override System.Void UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29D92C0
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void UpdateRecursiveG(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29D9634
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void Open(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    // Offset: 0x29D9A68
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    void AddConnection(::Pathfinding::GraphNode* node, uint cost);
    // public override System.Void RemoveConnection(Pathfinding.GraphNode node)
    // Offset: 0x29D9D28
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::RemoveConnection(Pathfinding.GraphNode node)
    void RemoveConnection(::Pathfinding::GraphNode* node);
    // public override System.Void SerializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29DA668
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29DA760
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext* ctx);
  }; // Pathfinding.GridNodeBase
  #pragma pack(pop)
  static check_size<sizeof(GridNodeBase), 48 + sizeof(::ArrayW<::Pathfinding::Connection>)> __Pathfinding_GridNodeBaseSizeCheck;
  static_assert(sizeof(GridNodeBase) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_NodeInGridIndex
// Il2CppName: get_NodeInGridIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_NodeInGridIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_NodeInGridIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::set_NodeInGridIndex
// Il2CppName: set_NodeInGridIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(int)>(&Pathfinding::GridNodeBase::set_NodeInGridIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "set_NodeInGridIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_XCoordinateInGrid
// Il2CppName: get_XCoordinateInGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_XCoordinateInGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_XCoordinateInGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_ZCoordinateInGrid
// Il2CppName: get_ZCoordinateInGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_ZCoordinateInGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_ZCoordinateInGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_WalkableErosion
// Il2CppName: get_WalkableErosion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_WalkableErosion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_WalkableErosion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::set_WalkableErosion
// Il2CppName: set_WalkableErosion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(bool)>(&Pathfinding::GridNodeBase::set_WalkableErosion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "set_WalkableErosion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_TmpWalkable
// Il2CppName: get_TmpWalkable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_TmpWalkable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_TmpWalkable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::set_TmpWalkable
// Il2CppName: set_TmpWalkable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(bool)>(&Pathfinding::GridNodeBase::set_TmpWalkable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "set_TmpWalkable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::get_HasConnectionsToAllEightNeighbours
// Il2CppName: get_HasConnectionsToAllEightNeighbours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::get_HasConnectionsToAllEightNeighbours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "get_HasConnectionsToAllEightNeighbours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::NormalizePoint
// Il2CppName: NormalizePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Pathfinding::GridNodeBase::*)(::UnityEngine::Vector3)>(&Pathfinding::GridNodeBase::NormalizePoint)> {
  static const MethodInfo* get() {
    static auto* worldPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "NormalizePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPoint});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::UnNormalizePoint
// Il2CppName: UnNormalizePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::GridNodeBase::*)(::UnityEngine::Vector2)>(&Pathfinding::GridNodeBase::UnNormalizePoint)> {
  static const MethodInfo* get() {
    static auto* normalizedPointOnSurface = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "UnNormalizePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedPointOnSurface});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::GetNeighbourAlongDirection
// Il2CppName: GetNeighbourAlongDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GridNodeBase* (Pathfinding::GridNodeBase::*)(int)>(&Pathfinding::GridNodeBase::GetNeighbourAlongDirection)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "GetNeighbourAlongDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::HasConnectionInDirection
// Il2CppName: HasConnectionInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNodeBase::*)(int)>(&Pathfinding::GridNodeBase::HasConnectionInDirection)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "HasConnectionInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::ClearCustomConnections
// Il2CppName: ClearCustomConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(bool)>(&Pathfinding::GridNodeBase::ClearCustomConnections)> {
  static const MethodInfo* get() {
    static auto* alsoReverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "ClearCustomConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alsoReverse});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::SurfaceArea
// Il2CppName: SurfaceArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::SurfaceArea)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "SurfaceArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::RandomPointOnSurface
// Il2CppName: RandomPointOnSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::RandomPointOnSurface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "RandomPointOnSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::GetGizmoHashCode
// Il2CppName: GetGizmoHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::GridNodeBase::*)()>(&Pathfinding::GridNodeBase::GetGizmoHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "GetGizmoHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::ContainsConnection
// Il2CppName: ContainsConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GridNodeBase::ContainsConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "ContainsConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::ClearConnections
// Il2CppName: ClearConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(bool)>(&Pathfinding::GridNodeBase::ClearConnections)> {
  static const MethodInfo* get() {
    static auto* alsoReverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "ClearConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alsoReverse});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::GetConnections
// Il2CppName: GetConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::GridNodeBase::GetConnections)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "GetConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::UpdateRecursiveG
// Il2CppName: UpdateRecursiveG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::GridNodeBase::UpdateRecursiveG)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "UpdateRecursiveG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::GridNodeBase::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::AddConnection
// Il2CppName: AddConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*, uint)>(&Pathfinding::GridNodeBase::AddConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* cost = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "AddConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, cost});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GridNodeBase::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::SerializeReferences
// Il2CppName: SerializeReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::GridNodeBase::SerializeReferences)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "SerializeReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridNodeBase::DeserializeReferences
// Il2CppName: DeserializeReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridNodeBase::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::GridNodeBase::DeserializeReferences)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridNodeBase*), "DeserializeReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
