// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GridNodeBase
#include "Pathfinding/GridNodeBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: LayerGridGraph
  class LayerGridGraph;
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
  // Forward declaring type: LevelGridNode
  class LevelGridNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::LevelGridNode);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::LevelGridNode*, "Pathfinding", "LevelGridNode");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.LevelGridNode
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelGridNode : public ::Pathfinding::GridNodeBase {
    public:
    public:
    // public System.UInt64 gridConnections
    // Size: 0x8
    // Offset: 0x38
    uint64_t gridConnections;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return gridConnections;
    }
    // Get static field: static private Pathfinding.LayerGridGraph[] _gridGraphs
    static ::ArrayW<::Pathfinding::LayerGridGraph*> _get__gridGraphs();
    // Set static field: static private Pathfinding.LayerGridGraph[] _gridGraphs
    static void _set__gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*> value);
    // Get static field: static protected Pathfinding.LayerGridGraph[] gridGraphs
    static ::ArrayW<::Pathfinding::LayerGridGraph*> _get_gridGraphs();
    // Set static field: static protected Pathfinding.LayerGridGraph[] gridGraphs
    static void _set_gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*> value);
    // static field const value: static public System.Int32 NoConnection
    static constexpr const int NoConnection = 255;
    // Get static field: static public System.Int32 NoConnection
    static int _get_NoConnection();
    // Set static field: static public System.Int32 NoConnection
    static void _set_NoConnection(int value);
    // static field const value: static public System.Int32 ConnectionMask
    static constexpr const int ConnectionMask = 255;
    // Get static field: static public System.Int32 ConnectionMask
    static int _get_ConnectionMask();
    // Set static field: static public System.Int32 ConnectionMask
    static void _set_ConnectionMask(int value);
    // static field const value: static private System.Int32 ConnectionStride
    static constexpr const int ConnectionStride = 8;
    // Get static field: static private System.Int32 ConnectionStride
    static int _get_ConnectionStride();
    // Set static field: static private System.Int32 ConnectionStride
    static void _set_ConnectionStride(int value);
    // static field const value: static public System.Int32 MaxLayerCount
    static constexpr const int MaxLayerCount = 255;
    // Get static field: static public System.Int32 MaxLayerCount
    static int _get_MaxLayerCount();
    // Set static field: static public System.Int32 MaxLayerCount
    static void _set_MaxLayerCount(int value);
    // Get instance field reference: public System.UInt64 gridConnections
    [[deprecated("Use field access instead!")]] uint64_t& dyn_gridConnections();
    // static public Pathfinding.LayerGridGraph GetGridGraph(System.UInt32 graphIndex)
    // Offset: 0x29CCF20
    static ::Pathfinding::LayerGridGraph* GetGridGraph(uint graphIndex);
    // static public System.Void SetGridGraph(System.Int32 graphIndex, Pathfinding.LayerGridGraph graph)
    // Offset: 0x29C9328
    static void SetGridGraph(int graphIndex, ::Pathfinding::LayerGridGraph* graph);
    // public System.Void ResetAllGridConnections()
    // Offset: 0x29CBD40
    void ResetAllGridConnections();
    // public System.Boolean HasAnyGridConnections()
    // Offset: 0x29CCDC8
    bool HasAnyGridConnections();
    // public System.Int32 get_LayerCoordinateInGrid()
    // Offset: 0x29CB8A4
    int get_LayerCoordinateInGrid();
    // public System.Void set_LayerCoordinateInGrid(System.Int32 value)
    // Offset: 0x29CB6B4
    void set_LayerCoordinateInGrid(int value);
    // public System.Void SetPosition(Pathfinding.Int3 position)
    // Offset: 0x29CCFA4
    void SetPosition(::Pathfinding::Int3 position);
    // public System.Boolean GetConnection(System.Int32 i)
    // Offset: 0x29CD3B0
    bool GetConnection(int i);
    // public System.Void SetConnectionValue(System.Int32 dir, System.Int32 value)
    // Offset: 0x29CBDBC
    void SetConnectionValue(int dir, int value);
    // public System.Int32 GetConnectionValue(System.Int32 dir)
    // Offset: 0x29CD0DC
    int GetConnectionValue(int dir);
    // protected System.Void RemoveGridConnection(Pathfinding.LevelGridNode node)
    // Offset: 0x29CD4A8
    void RemoveGridConnection(::Pathfinding::LevelGridNode* node);
    // static private System.Void .cctor()
    // Offset: 0x29CE17C
    static void _cctor();
    // public System.Void .ctor(AstarPath astar)
    // Offset: 0x29CB6AC
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::.ctor(AstarPath astar)
    // Base method: System.Void GraphNode::.ctor(AstarPath astar)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelGridNode* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::LevelGridNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelGridNode*, creationType>(astar)));
    }
    // public override System.Boolean get_HasConnectionsToAllEightNeighbours()
    // Offset: 0x29CCF9C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Boolean GridNodeBase::get_HasConnectionsToAllEightNeighbours()
    bool get_HasConnectionsToAllEightNeighbours();
    // public override System.Int32 GetGizmoHashCode()
    // Offset: 0x29CCFB0
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Int32 GridNodeBase::GetGizmoHashCode()
    int GetGizmoHashCode();
    // public override Pathfinding.GridNodeBase GetNeighbourAlongDirection(System.Int32 direction)
    // Offset: 0x29CCFDC
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: Pathfinding.GridNodeBase GridNodeBase::GetNeighbourAlongDirection(System.Int32 direction)
    ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int direction);
    // public override System.Void ClearConnections(System.Boolean alsoReverse)
    // Offset: 0x29CD0F0
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::ClearConnections(System.Boolean alsoReverse)
    void ClearConnections(bool alsoReverse);
    // public override System.Void GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    // Offset: 0x29CD26C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::GetConnections(System.Action`1<Pathfinding.GraphNode> action)
    void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>* action);
    // public override System.Boolean HasConnectionInDirection(System.Int32 direction)
    // Offset: 0x29CD3CC
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Boolean GridNodeBase::HasConnectionInDirection(System.Int32 direction)
    bool HasConnectionInDirection(int direction);
    // public override System.Void AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    // Offset: 0x29CD3E8
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::AddConnection(Pathfinding.GraphNode node, System.UInt32 cost)
    void AddConnection(::Pathfinding::GraphNode* node, uint cost);
    // public override System.Void RemoveConnection(Pathfinding.GraphNode node)
    // Offset: 0x29CD5D0
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::RemoveConnection(Pathfinding.GraphNode node)
    void RemoveConnection(::Pathfinding::GraphNode* node);
    // public override System.Boolean GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    // Offset: 0x29CD690
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Boolean GraphNode::GetPortal(Pathfinding.GraphNode other, System.Collections.Generic.List`1<UnityEngine.Vector3> left, System.Collections.Generic.List`1<UnityEngine.Vector3> right, System.Boolean backwards)
    bool GetPortal(::Pathfinding::GraphNode* other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* right, bool backwards);
    // public override System.Void UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29CDA3C
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::UpdateRecursiveG(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void UpdateRecursiveG(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override System.Void Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    // Offset: 0x29CDC04
    // Implemented from: Pathfinding.GridNodeBase
    // Base method: System.Void GridNodeBase::Open(Pathfinding.Path path, Pathfinding.PathNode pathNode, Pathfinding.PathHandler handler)
    void Open(::Pathfinding::Path* path, ::Pathfinding::PathNode* pathNode, ::Pathfinding::PathHandler* handler);
    // public override UnityEngine.Vector3 ClosestPointOnNode(UnityEngine.Vector3 p)
    // Offset: 0x29CDEBC
    // Implemented from: Pathfinding.GraphNode
    // Base method: UnityEngine.Vector3 GraphNode::ClosestPointOnNode(UnityEngine.Vector3 p)
    ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3 p);
    // public override System.Void SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29CE004
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
    // public override System.Void DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    // Offset: 0x29CE078
    // Implemented from: Pathfinding.GraphNode
    // Base method: System.Void GraphNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext ctx)
    void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext* ctx);
  }; // Pathfinding.LevelGridNode
  #pragma pack(pop)
  static check_size<sizeof(LevelGridNode), 56 + sizeof(uint64_t)> __Pathfinding_LevelGridNodeSizeCheck;
  static_assert(sizeof(LevelGridNode) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetGridGraph
// Il2CppName: GetGridGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::LayerGridGraph* (*)(uint)>(&Pathfinding::LevelGridNode::GetGridGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetGridGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::SetGridGraph
// Il2CppName: SetGridGraph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Pathfinding::LayerGridGraph*)>(&Pathfinding::LevelGridNode::SetGridGraph)> {
  static const MethodInfo* get() {
    static auto* graphIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "LayerGridGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "SetGridGraph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphIndex, graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::ResetAllGridConnections
// Il2CppName: ResetAllGridConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)()>(&Pathfinding::LevelGridNode::ResetAllGridConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "ResetAllGridConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::HasAnyGridConnections
// Il2CppName: HasAnyGridConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::LevelGridNode::*)()>(&Pathfinding::LevelGridNode::HasAnyGridConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "HasAnyGridConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::get_LayerCoordinateInGrid
// Il2CppName: get_LayerCoordinateInGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::LevelGridNode::*)()>(&Pathfinding::LevelGridNode::get_LayerCoordinateInGrid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "get_LayerCoordinateInGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::set_LayerCoordinateInGrid
// Il2CppName: set_LayerCoordinateInGrid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(int)>(&Pathfinding::LevelGridNode::set_LayerCoordinateInGrid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "set_LayerCoordinateInGrid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::Int3)>(&Pathfinding::LevelGridNode::SetPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetConnection
// Il2CppName: GetConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::LevelGridNode::*)(int)>(&Pathfinding::LevelGridNode::GetConnection)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::SetConnectionValue
// Il2CppName: SetConnectionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(int, int)>(&Pathfinding::LevelGridNode::SetConnectionValue)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "SetConnectionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetConnectionValue
// Il2CppName: GetConnectionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::LevelGridNode::*)(int)>(&Pathfinding::LevelGridNode::GetConnectionValue)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetConnectionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::RemoveGridConnection
// Il2CppName: RemoveGridConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::LevelGridNode*)>(&Pathfinding::LevelGridNode::RemoveGridConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "LevelGridNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "RemoveGridConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::LevelGridNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::get_HasConnectionsToAllEightNeighbours
// Il2CppName: get_HasConnectionsToAllEightNeighbours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::LevelGridNode::*)()>(&Pathfinding::LevelGridNode::get_HasConnectionsToAllEightNeighbours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "get_HasConnectionsToAllEightNeighbours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetGizmoHashCode
// Il2CppName: GetGizmoHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::LevelGridNode::*)()>(&Pathfinding::LevelGridNode::GetGizmoHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetGizmoHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetNeighbourAlongDirection
// Il2CppName: GetNeighbourAlongDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GridNodeBase* (Pathfinding::LevelGridNode::*)(int)>(&Pathfinding::LevelGridNode::GetNeighbourAlongDirection)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetNeighbourAlongDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::ClearConnections
// Il2CppName: ClearConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(bool)>(&Pathfinding::LevelGridNode::ClearConnections)> {
  static const MethodInfo* get() {
    static auto* alsoReverse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "ClearConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alsoReverse});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetConnections
// Il2CppName: GetConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&Pathfinding::LevelGridNode::GetConnections)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::HasConnectionInDirection
// Il2CppName: HasConnectionInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::LevelGridNode::*)(int)>(&Pathfinding::LevelGridNode::HasConnectionInDirection)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "HasConnectionInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::AddConnection
// Il2CppName: AddConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*, uint)>(&Pathfinding::LevelGridNode::AddConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* cost = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "AddConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, cost});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*)>(&Pathfinding::LevelGridNode::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::GetPortal
// Il2CppName: GetPortal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::LevelGridNode::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&Pathfinding::LevelGridNode::GetPortal)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* left = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* right = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* backwards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "GetPortal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, left, right, backwards});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::UpdateRecursiveG
// Il2CppName: UpdateRecursiveG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::LevelGridNode::UpdateRecursiveG)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "UpdateRecursiveG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::Path*, ::Pathfinding::PathNode*, ::Pathfinding::PathHandler*)>(&Pathfinding::LevelGridNode::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    static auto* pathNode = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, pathNode, handler});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::ClosestPointOnNode
// Il2CppName: ClosestPointOnNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::LevelGridNode::*)(::UnityEngine::Vector3)>(&Pathfinding::LevelGridNode::ClosestPointOnNode)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "ClosestPointOnNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::SerializeNode
// Il2CppName: SerializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::LevelGridNode::SerializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "SerializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Pathfinding::LevelGridNode::DeserializeNode
// Il2CppName: DeserializeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::LevelGridNode::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&Pathfinding::LevelGridNode::DeserializeNode)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Pathfinding.Serialization", "GraphSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::LevelGridNode*), "DeserializeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};