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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: NNInfoInternal
  struct NNInfoInternal;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NNInfo
  struct NNInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::NNInfo, "Pathfinding", "NNInfo");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.NNInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct NNInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly Pathfinding.GraphNode node
    // Size: 0x8
    // Offset: 0x0
    ::Pathfinding::GraphNode* node;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public readonly UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x8
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: NNInfo
    constexpr NNInfo(::Pathfinding::GraphNode* node_ = {}, ::UnityEngine::Vector3 position_ = {}) noexcept : node{node_}, position{position_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly Pathfinding.GraphNode node
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_node();
    // Get instance field reference: public readonly UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // public UnityEngine.Vector3 get_clampedPosition()
    // Offset: 0x2999100
    ::UnityEngine::Vector3 get_clampedPosition();
    // public System.Void .ctor(Pathfinding.NNInfoInternal internalInfo)
    // Offset: 0x299910C
    NNInfo(::Pathfinding::NNInfoInternal internalInfo);
    // static public UnityEngine.Vector3 op_Explicit(Pathfinding.NNInfo ob)
    // Offset: 0x299915C
    explicit operator ::UnityEngine::Vector3();
    // static public Pathfinding.GraphNode op_Explicit(Pathfinding.NNInfo ob)
    // Offset: 0x2999168
    explicit operator ::Pathfinding::GraphNode*();
  }; // Pathfinding.NNInfo
  #pragma pack(pop)
  static check_size<sizeof(NNInfo), 8 + sizeof(::UnityEngine::Vector3)> __Pathfinding_NNInfoSizeCheck;
  static_assert(sizeof(NNInfo) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::NNInfo::get_clampedPosition
// Il2CppName: get_clampedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::NNInfo::*)()>(&Pathfinding::NNInfo::get_clampedPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::NNInfo), "get_clampedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::NNInfo::NNInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::NNInfo::operator ::UnityEngine::Vector3
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::NNInfo::operator ::Pathfinding::GraphNode*
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!