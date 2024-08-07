// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Forward declaring type: RVOLayer
  struct RVOLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOLayer, "Pathfinding.RVO", "RVOLayer");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.RVOLayer
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RVOLayer/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RVOLayer
    constexpr RVOLayer(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.RVO.RVOLayer DefaultAgent
    static constexpr const int DefaultAgent = 1;
    // Get static field: static public Pathfinding.RVO.RVOLayer DefaultAgent
    static ::Pathfinding::RVO::RVOLayer _get_DefaultAgent();
    // Set static field: static public Pathfinding.RVO.RVOLayer DefaultAgent
    static void _set_DefaultAgent(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer DefaultObstacle
    static constexpr const int DefaultObstacle = 2;
    // Get static field: static public Pathfinding.RVO.RVOLayer DefaultObstacle
    static ::Pathfinding::RVO::RVOLayer _get_DefaultObstacle();
    // Set static field: static public Pathfinding.RVO.RVOLayer DefaultObstacle
    static void _set_DefaultObstacle(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer2
    static constexpr const int Layer2 = 4;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer2
    static ::Pathfinding::RVO::RVOLayer _get_Layer2();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer2
    static void _set_Layer2(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer3
    static constexpr const int Layer3 = 8;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer3
    static ::Pathfinding::RVO::RVOLayer _get_Layer3();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer3
    static void _set_Layer3(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer4
    static constexpr const int Layer4 = 16;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer4
    static ::Pathfinding::RVO::RVOLayer _get_Layer4();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer4
    static void _set_Layer4(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer5
    static constexpr const int Layer5 = 32;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer5
    static ::Pathfinding::RVO::RVOLayer _get_Layer5();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer5
    static void _set_Layer5(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer6
    static constexpr const int Layer6 = 64;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer6
    static ::Pathfinding::RVO::RVOLayer _get_Layer6();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer6
    static void _set_Layer6(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer7
    static constexpr const int Layer7 = 128;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer7
    static ::Pathfinding::RVO::RVOLayer _get_Layer7();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer7
    static void _set_Layer7(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer8
    static constexpr const int Layer8 = 256;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer8
    static ::Pathfinding::RVO::RVOLayer _get_Layer8();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer8
    static void _set_Layer8(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer9
    static constexpr const int Layer9 = 512;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer9
    static ::Pathfinding::RVO::RVOLayer _get_Layer9();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer9
    static void _set_Layer9(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer10
    static constexpr const int Layer10 = 1024;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer10
    static ::Pathfinding::RVO::RVOLayer _get_Layer10();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer10
    static void _set_Layer10(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer11
    static constexpr const int Layer11 = 2048;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer11
    static ::Pathfinding::RVO::RVOLayer _get_Layer11();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer11
    static void _set_Layer11(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer12
    static constexpr const int Layer12 = 4096;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer12
    static ::Pathfinding::RVO::RVOLayer _get_Layer12();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer12
    static void _set_Layer12(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer13
    static constexpr const int Layer13 = 8192;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer13
    static ::Pathfinding::RVO::RVOLayer _get_Layer13();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer13
    static void _set_Layer13(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer14
    static constexpr const int Layer14 = 16384;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer14
    static ::Pathfinding::RVO::RVOLayer _get_Layer14();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer14
    static void _set_Layer14(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer15
    static constexpr const int Layer15 = 32768;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer15
    static ::Pathfinding::RVO::RVOLayer _get_Layer15();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer15
    static void _set_Layer15(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer16
    static constexpr const int Layer16 = 65536;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer16
    static ::Pathfinding::RVO::RVOLayer _get_Layer16();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer16
    static void _set_Layer16(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer17
    static constexpr const int Layer17 = 131072;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer17
    static ::Pathfinding::RVO::RVOLayer _get_Layer17();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer17
    static void _set_Layer17(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer18
    static constexpr const int Layer18 = 262144;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer18
    static ::Pathfinding::RVO::RVOLayer _get_Layer18();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer18
    static void _set_Layer18(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer19
    static constexpr const int Layer19 = 524288;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer19
    static ::Pathfinding::RVO::RVOLayer _get_Layer19();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer19
    static void _set_Layer19(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer20
    static constexpr const int Layer20 = 1048576;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer20
    static ::Pathfinding::RVO::RVOLayer _get_Layer20();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer20
    static void _set_Layer20(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer21
    static constexpr const int Layer21 = 2097152;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer21
    static ::Pathfinding::RVO::RVOLayer _get_Layer21();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer21
    static void _set_Layer21(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer22
    static constexpr const int Layer22 = 4194304;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer22
    static ::Pathfinding::RVO::RVOLayer _get_Layer22();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer22
    static void _set_Layer22(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer23
    static constexpr const int Layer23 = 8388608;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer23
    static ::Pathfinding::RVO::RVOLayer _get_Layer23();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer23
    static void _set_Layer23(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer24
    static constexpr const int Layer24 = 16777216;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer24
    static ::Pathfinding::RVO::RVOLayer _get_Layer24();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer24
    static void _set_Layer24(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer25
    static constexpr const int Layer25 = 33554432;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer25
    static ::Pathfinding::RVO::RVOLayer _get_Layer25();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer25
    static void _set_Layer25(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer26
    static constexpr const int Layer26 = 67108864;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer26
    static ::Pathfinding::RVO::RVOLayer _get_Layer26();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer26
    static void _set_Layer26(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer27
    static constexpr const int Layer27 = 134217728;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer27
    static ::Pathfinding::RVO::RVOLayer _get_Layer27();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer27
    static void _set_Layer27(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer28
    static constexpr const int Layer28 = 268435456;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer28
    static ::Pathfinding::RVO::RVOLayer _get_Layer28();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer28
    static void _set_Layer28(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer29
    static constexpr const int Layer29 = 536870912;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer29
    static ::Pathfinding::RVO::RVOLayer _get_Layer29();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer29
    static void _set_Layer29(::Pathfinding::RVO::RVOLayer value);
    // static field const value: static public Pathfinding.RVO.RVOLayer Layer30
    static constexpr const int Layer30 = 1073741824;
    // Get static field: static public Pathfinding.RVO.RVOLayer Layer30
    static ::Pathfinding::RVO::RVOLayer _get_Layer30();
    // Set static field: static public Pathfinding.RVO.RVOLayer Layer30
    static void _set_Layer30(::Pathfinding::RVO::RVOLayer value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.RVO.RVOLayer
  #pragma pack(pop)
  static check_size<sizeof(RVOLayer), 0 + sizeof(int)> __Pathfinding_RVO_RVOLayerSizeCheck;
  static_assert(sizeof(RVOLayer) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
