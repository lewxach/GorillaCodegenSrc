// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Connection
  struct Connection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Connection, "Pathfinding", "Connection");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xD
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Connection
  // [TokenAttribute] Offset: FFFFFFFF
  struct Connection/*, public ::System::ValueType*/ {
    public:
    public:
    // public Pathfinding.GraphNode node
    // Size: 0x8
    // Offset: 0x0
    ::Pathfinding::GraphNode* node;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public System.UInt32 cost
    // Size: 0x4
    // Offset: 0x8
    uint cost;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Byte shapeEdge
    // Size: 0x1
    // Offset: 0xC
    uint8_t shapeEdge;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Connection
    constexpr Connection(::Pathfinding::GraphNode* node_ = {}, uint cost_ = {}, uint8_t shapeEdge_ = {}) noexcept : node{node_}, cost{cost_}, shapeEdge{shapeEdge_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Byte NoSharedEdge
    static constexpr const uint8_t NoSharedEdge = 255u;
    // Get static field: static public System.Byte NoSharedEdge
    static uint8_t _get_NoSharedEdge();
    // Set static field: static public System.Byte NoSharedEdge
    static void _set_NoSharedEdge(uint8_t value);
    // Get instance field reference: public Pathfinding.GraphNode node
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_node();
    // Get instance field reference: public System.UInt32 cost
    [[deprecated("Use field access instead!")]] uint& dyn_cost();
    // Get instance field reference: public System.Byte shapeEdge
    [[deprecated("Use field access instead!")]] uint8_t& dyn_shapeEdge();
    // public System.Void .ctor(Pathfinding.GraphNode node, System.UInt32 cost, System.Byte shapeEdge)
    // Offset: 0x29B8848
    // ABORTED: conflicts with another method.  Connection(::Pathfinding::GraphNode* node, uint cost, uint8_t shapeEdge);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29B8878
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29B88A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Pathfinding.Connection
  #pragma pack(pop)
  static check_size<sizeof(Connection), 12 + sizeof(uint8_t)> __Pathfinding_ConnectionSizeCheck;
  static_assert(sizeof(Connection) == 0xD);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Connection::Connection
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Connection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Connection::*)()>(&Pathfinding::Connection::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Connection), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Connection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Connection::*)(::Il2CppObject*)>(&Pathfinding::Connection::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Connection), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};