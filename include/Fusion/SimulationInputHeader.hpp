// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationInputHeader
  struct SimulationInputHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationInputHeader, "Fusion", "SimulationInputHeader");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationInputHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationInputHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.Tick Tick
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::Tick Tick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // public System.Single InterpAlpha
    // Size: 0x4
    // Offset: 0x4
    float InterpAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Fusion.Tick InterpFrom
    // Size: 0x4
    // Offset: 0x8
    ::Fusion::Tick InterpFrom;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // public Fusion.Tick InterpTo
    // Size: 0x4
    // Offset: 0xC
    ::Fusion::Tick InterpTo;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    public:
    // Creating value type constructor for type: SimulationInputHeader
    constexpr SimulationInputHeader(::Fusion::Tick Tick_ = {}, float InterpAlpha_ = {}, ::Fusion::Tick InterpFrom_ = {}, ::Fusion::Tick InterpTo_ = {}) noexcept : Tick{Tick_}, InterpAlpha{InterpAlpha_}, InterpFrom{InterpFrom_}, InterpTo{InterpTo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 WORD_COUNT
    static constexpr const int WORD_COUNT = 4;
    // Get static field: static public System.Int32 WORD_COUNT
    static int _get_WORD_COUNT();
    // Set static field: static public System.Int32 WORD_COUNT
    static void _set_WORD_COUNT(int value);
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 16;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.Tick Tick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_Tick();
    // Get instance field reference: public System.Single InterpAlpha
    [[deprecated("Use field access instead!")]] float& dyn_InterpAlpha();
    // Get instance field reference: public Fusion.Tick InterpFrom
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_InterpFrom();
    // Get instance field reference: public Fusion.Tick InterpTo
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn_InterpTo();
  }; // Fusion.SimulationInputHeader
  #pragma pack(pop)
  static check_size<sizeof(SimulationInputHeader), 12 + sizeof(::Fusion::Tick)> __Fusion_SimulationInputHeaderSizeCheck;
  static_assert(sizeof(SimulationInputHeader) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
