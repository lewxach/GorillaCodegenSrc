// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib
#include "Cinemachine/ClipperLib.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::EdgeSide, "Cinemachine", "ClipperLib/EdgeSide");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ClipperLib/EdgeSide
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipperLib::EdgeSide/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EdgeSide
    constexpr EdgeSide(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Cinemachine.ClipperLib/EdgeSide esLeft
    static constexpr const int esLeft = 0;
    // Get static field: static public Cinemachine.ClipperLib/EdgeSide esLeft
    static ::Cinemachine::ClipperLib::EdgeSide _get_esLeft();
    // Set static field: static public Cinemachine.ClipperLib/EdgeSide esLeft
    static void _set_esLeft(::Cinemachine::ClipperLib::EdgeSide value);
    // static field const value: static public Cinemachine.ClipperLib/EdgeSide esRight
    static constexpr const int esRight = 1;
    // Get static field: static public Cinemachine.ClipperLib/EdgeSide esRight
    static ::Cinemachine::ClipperLib::EdgeSide _get_esRight();
    // Set static field: static public Cinemachine.ClipperLib/EdgeSide esRight
    static void _set_esRight(::Cinemachine::ClipperLib::EdgeSide value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Cinemachine.ClipperLib/EdgeSide
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::EdgeSide), 0 + sizeof(int)> __Cinemachine_ClipperLib_EdgeSideSizeCheck;
  static_assert(sizeof(ClipperLib::EdgeSide) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
