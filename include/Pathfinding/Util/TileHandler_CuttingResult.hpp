// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Util.TileHandler
#include "Pathfinding/Util/TileHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Pathfinding.Int3
#include "Pathfinding/Int3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::TileHandler::CuttingResult, "Pathfinding.Util", "TileHandler/CuttingResult");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Util.TileHandler/CuttingResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct TileHandler::CuttingResult/*, public ::System::ValueType*/ {
    public:
    public:
    // public Pathfinding.Int3[] verts
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Pathfinding::Int3> verts;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::Int3>) == 0x8);
    // public System.Int32[] tris
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<int> tris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating value type constructor for type: CuttingResult
    constexpr CuttingResult(::ArrayW<::Pathfinding::Int3> verts_ = ::ArrayW<::Pathfinding::Int3>(static_cast<void*>(nullptr)), ::ArrayW<int> tris_ = ::ArrayW<int>(static_cast<void*>(nullptr))) noexcept : verts{verts_}, tris{tris_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Pathfinding.Int3[] verts
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::Int3>& dyn_verts();
    // Get instance field reference: public System.Int32[] tris
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_tris();
  }; // Pathfinding.Util.TileHandler/CuttingResult
  #pragma pack(pop)
  static check_size<sizeof(TileHandler::CuttingResult), 8 + sizeof(::ArrayW<int>)> __Pathfinding_Util_TileHandler_CuttingResultSizeCheck;
  static_assert(sizeof(TileHandler::CuttingResult) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
