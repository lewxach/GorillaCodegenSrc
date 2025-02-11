// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: DTSweepBasin
  class DTSweepBasin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Poly2Tri::DTSweepBasin);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::DTSweepBasin*, "Pathfinding.Poly2Tri", "DTSweepBasin");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.DTSweepBasin
  // [TokenAttribute] Offset: FFFFFFFF
  class DTSweepBasin : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Poly2Tri.AdvancingFrontNode leftNode
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Poly2Tri::AdvancingFrontNode* leftNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public Pathfinding.Poly2Tri.AdvancingFrontNode bottomNode
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::Poly2Tri::AdvancingFrontNode* bottomNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public Pathfinding.Poly2Tri.AdvancingFrontNode rightNode
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::Poly2Tri::AdvancingFrontNode* rightNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public System.Double width
    // Size: 0x8
    // Offset: 0x28
    double width;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Boolean leftHighest
    // Size: 0x1
    // Offset: 0x30
    bool leftHighest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.Poly2Tri.AdvancingFrontNode leftNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::AdvancingFrontNode*& dyn_leftNode();
    // Get instance field reference: public Pathfinding.Poly2Tri.AdvancingFrontNode bottomNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::AdvancingFrontNode*& dyn_bottomNode();
    // Get instance field reference: public Pathfinding.Poly2Tri.AdvancingFrontNode rightNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::AdvancingFrontNode*& dyn_rightNode();
    // Get instance field reference: public System.Double width
    [[deprecated("Use field access instead!")]] double& dyn_width();
    // Get instance field reference: public System.Boolean leftHighest
    [[deprecated("Use field access instead!")]] bool& dyn_leftHighest();
    // public System.Void .ctor()
    // Offset: 0x49C75C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepBasin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Poly2Tri::DTSweepBasin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepBasin*, creationType>()));
    }
  }; // Pathfinding.Poly2Tri.DTSweepBasin
  #pragma pack(pop)
  static check_size<sizeof(DTSweepBasin), 48 + sizeof(bool)> __Pathfinding_Poly2Tri_DTSweepBasinSizeCheck;
  static_assert(sizeof(DTSweepBasin) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DTSweepBasin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
