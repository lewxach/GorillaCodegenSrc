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
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Forward declaring type: OutPt
  class OutPt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::ClipperLib::OutPt);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ClipperLib::OutPt*, "Pathfinding.ClipperLib", "OutPt");
// Type namespace: Pathfinding.ClipperLib
namespace Pathfinding::ClipperLib {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ClipperLib.OutPt
  // [TokenAttribute] Offset: FFFFFFFF
  class OutPt : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Idx
    // Size: 0x4
    // Offset: 0x10
    int Idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Idx and: Pt
    char __padding0[0x4] = {};
    // public Pathfinding.ClipperLib.IntPoint Pt
    // Size: 0x10
    // Offset: 0x18
    ::Pathfinding::ClipperLib::IntPoint Pt;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::IntPoint) == 0x10);
    // public Pathfinding.ClipperLib.OutPt Next
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::ClipperLib::OutPt* Next;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::OutPt*) == 0x8);
    // public Pathfinding.ClipperLib.OutPt Prev
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::ClipperLib::OutPt* Prev;
    // Field size check
    static_assert(sizeof(::Pathfinding::ClipperLib::OutPt*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Idx
    [[deprecated("Use field access instead!")]] int& dyn_Idx();
    // Get instance field reference: public Pathfinding.ClipperLib.IntPoint Pt
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::IntPoint& dyn_Pt();
    // Get instance field reference: public Pathfinding.ClipperLib.OutPt Next
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::OutPt*& dyn_Next();
    // Get instance field reference: public Pathfinding.ClipperLib.OutPt Prev
    [[deprecated("Use field access instead!")]] ::Pathfinding::ClipperLib::OutPt*& dyn_Prev();
    // public System.Void .ctor()
    // Offset: 0x4994BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutPt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::ClipperLib::OutPt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutPt*, creationType>()));
    }
  }; // Pathfinding.ClipperLib.OutPt
  #pragma pack(pop)
  static check_size<sizeof(OutPt), 48 + sizeof(::Pathfinding::ClipperLib::OutPt*)> __Pathfinding_ClipperLib_OutPtSizeCheck;
  static_assert(sizeof(OutPt) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ClipperLib::OutPt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!