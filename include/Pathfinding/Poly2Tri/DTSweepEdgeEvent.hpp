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
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: DTSweepEdgeEvent
  class DTSweepEdgeEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Poly2Tri::DTSweepEdgeEvent);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::DTSweepEdgeEvent*, "Pathfinding.Poly2Tri", "DTSweepEdgeEvent");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Poly2Tri.DTSweepEdgeEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DTSweepEdgeEvent : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Poly2Tri.DTSweepConstraint ConstrainedEdge
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Poly2Tri::DTSweepConstraint* ConstrainedEdge;
    // Field size check
    static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweepConstraint*) == 0x8);
    // public System.Boolean Right
    // Size: 0x1
    // Offset: 0x18
    bool Right;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pathfinding.Poly2Tri.DTSweepConstraint ConstrainedEdge
    [[deprecated("Use field access instead!")]] ::Pathfinding::Poly2Tri::DTSweepConstraint*& dyn_ConstrainedEdge();
    // Get instance field reference: public System.Boolean Right
    [[deprecated("Use field access instead!")]] bool& dyn_Right();
    // public System.Void .ctor()
    // Offset: 0x49C7788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepEdgeEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Poly2Tri::DTSweepEdgeEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepEdgeEvent*, creationType>()));
    }
  }; // Pathfinding.Poly2Tri.DTSweepEdgeEvent
  #pragma pack(pop)
  static check_size<sizeof(DTSweepEdgeEvent), 24 + sizeof(bool)> __Pathfinding_Poly2Tri_DTSweepEdgeEventSizeCheck;
  static_assert(sizeof(DTSweepEdgeEvent) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::DTSweepEdgeEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
