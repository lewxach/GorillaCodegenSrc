// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.ClipperLib.IntPoint
#include "Pathfinding/ClipperLib/IntPoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::ClipperLib
namespace Pathfinding::ClipperLib {
  // Forward declaring type: TEdge
  class TEdge;
}
// Completed forward declares
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Forward declaring type: IntersectNode
  class IntersectNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::ClipperLib::IntersectNode);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ClipperLib::IntersectNode*, "Pathfinding.ClipperLib", "IntersectNode");
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ClipperLib.IntersectNode
  // [TokenAttribute] Offset: FFFFFFFF
  class IntersectNode : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.ClipperLib.TEdge Edge1
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::ClipperLib::TEdge* Edge1;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::TEdge*) == 0x8);
    // public Pathfinding.ClipperLib.TEdge Edge2
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::ClipperLib::TEdge* Edge2;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::TEdge*) == 0x8);
    // public Pathfinding.ClipperLib.IntPoint Pt
    // Size: 0x10
    // Offset: 0x20
    ::Pathfinding::ClipperLib::IntPoint Pt;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::IntPoint) == 0x10);
    // public Pathfinding.ClipperLib.IntersectNode Next
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::ClipperLib::IntersectNode* Next;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::IntersectNode*) == 0x8);
    public:
    // Get instance field reference: public Pathfinding.ClipperLib.TEdge Edge1
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::TEdge*& dyn_Edge1();
    // Get instance field reference: public Pathfinding.ClipperLib.TEdge Edge2
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::TEdge*& dyn_Edge2();
    // Get instance field reference: public Pathfinding.ClipperLib.IntPoint Pt
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::IntPoint& dyn_Pt();
    // Get instance field reference: public Pathfinding.ClipperLib.IntersectNode Next
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::IntersectNode*& dyn_Next();
    // public System.Void .ctor()
    // Offset: 0x4994BB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntersectNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::ClipperLib::IntersectNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntersectNode*, creationType>()));
    }
  }; // Pathfinding.ClipperLib.IntersectNode
  #pragma pack(pop)
  static check_size<sizeof(IntersectNode), 48 + sizeof(::Pathfinding::ClipperLib::IntersectNode*)> __Pathfinding_ClipperLib_IntersectNodeSizeCheck;
  static_assert(sizeof(IntersectNode) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ClipperLib::IntersectNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
