// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.LagCompensationUtils
#include "Fusion/LagCompensationUtils.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.LagCompensationUtils/CustomPlane
#include "Fusion/LagCompensationUtils_CustomPlane.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensationUtils::CustomPlanesBox, "Fusion", "LagCompensationUtils/CustomPlanesBox");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x90
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.LagCompensationUtils/CustomPlanesBox
  // [TokenAttribute] Offset: FFFFFFFF
  struct LagCompensationUtils::CustomPlanesBox/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.LagCompensationUtils/CustomPlane P0
    // Size: 0x18
    // Offset: 0x0
    ::Fusion::LagCompensationUtils::CustomPlane P0;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    // public Fusion.LagCompensationUtils/CustomPlane P1
    // Size: 0x18
    // Offset: 0x18
    ::Fusion::LagCompensationUtils::CustomPlane P1;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    // public Fusion.LagCompensationUtils/CustomPlane P2
    // Size: 0x18
    // Offset: 0x30
    ::Fusion::LagCompensationUtils::CustomPlane P2;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    // public Fusion.LagCompensationUtils/CustomPlane P3
    // Size: 0x18
    // Offset: 0x48
    ::Fusion::LagCompensationUtils::CustomPlane P3;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    // public Fusion.LagCompensationUtils/CustomPlane P4
    // Size: 0x18
    // Offset: 0x60
    ::Fusion::LagCompensationUtils::CustomPlane P4;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    // public Fusion.LagCompensationUtils/CustomPlane P5
    // Size: 0x18
    // Offset: 0x78
    ::Fusion::LagCompensationUtils::CustomPlane P5;
    // Field size check
    static_assert(sizeof(::Fusion::LagCompensationUtils::CustomPlane) == 0x18);
    public:
    // Creating value type constructor for type: CustomPlanesBox
    constexpr CustomPlanesBox(::Fusion::LagCompensationUtils::CustomPlane P0_ = {}, ::Fusion::LagCompensationUtils::CustomPlane P1_ = {}, ::Fusion::LagCompensationUtils::CustomPlane P2_ = {}, ::Fusion::LagCompensationUtils::CustomPlane P3_ = {}, ::Fusion::LagCompensationUtils::CustomPlane P4_ = {}, ::Fusion::LagCompensationUtils::CustomPlane P5_ = {}) noexcept : P0{P0_}, P1{P1_}, P2{P2_}, P3{P3_}, P4{P4_}, P5{P5_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P0
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P0();
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P1
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P1();
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P2
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P2();
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P3
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P3();
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P4
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P4();
    // Get instance field reference: public Fusion.LagCompensationUtils/CustomPlane P5
    [[deprecated("Use field access instead!")]] ::Fusion::LagCompensationUtils::CustomPlane& dyn_P5();
  }; // Fusion.LagCompensationUtils/CustomPlanesBox
  #pragma pack(pop)
  static check_size<sizeof(LagCompensationUtils::CustomPlanesBox), 120 + sizeof(::Fusion::LagCompensationUtils::CustomPlane)> __Fusion_LagCompensationUtils_CustomPlanesBoxSizeCheck;
  static_assert(sizeof(LagCompensationUtils::CustomPlanesBox) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
