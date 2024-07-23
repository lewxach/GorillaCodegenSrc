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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensationUtils::RotationMatrix, "Fusion", "LagCompensationUtils/RotationMatrix");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.LagCompensationUtils/RotationMatrix
  // [TokenAttribute] Offset: FFFFFFFF
  struct LagCompensationUtils::RotationMatrix/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single M00
    // Size: 0x4
    // Offset: 0x0
    float M00;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M01
    // Size: 0x4
    // Offset: 0x4
    float M01;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M02
    // Size: 0x4
    // Offset: 0x8
    float M02;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M10
    // Size: 0x4
    // Offset: 0xC
    float M10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M11
    // Size: 0x4
    // Offset: 0x10
    float M11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M12
    // Size: 0x4
    // Offset: 0x14
    float M12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M20
    // Size: 0x4
    // Offset: 0x18
    float M20;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M21
    // Size: 0x4
    // Offset: 0x1C
    float M21;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single M22
    // Size: 0x4
    // Offset: 0x20
    float M22;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: RotationMatrix
    constexpr RotationMatrix(float M00_ = {}, float M01_ = {}, float M02_ = {}, float M10_ = {}, float M11_ = {}, float M12_ = {}, float M20_ = {}, float M21_ = {}, float M22_ = {}) noexcept : M00{M00_}, M01{M01_}, M02{M02_}, M10{M10_}, M11{M11_}, M12{M12_}, M20{M20_}, M21{M21_}, M22{M22_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single M00
    [[deprecated("Use field access instead!")]] float& dyn_M00();
    // Get instance field reference: public System.Single M01
    [[deprecated("Use field access instead!")]] float& dyn_M01();
    // Get instance field reference: public System.Single M02
    [[deprecated("Use field access instead!")]] float& dyn_M02();
    // Get instance field reference: public System.Single M10
    [[deprecated("Use field access instead!")]] float& dyn_M10();
    // Get instance field reference: public System.Single M11
    [[deprecated("Use field access instead!")]] float& dyn_M11();
    // Get instance field reference: public System.Single M12
    [[deprecated("Use field access instead!")]] float& dyn_M12();
    // Get instance field reference: public System.Single M20
    [[deprecated("Use field access instead!")]] float& dyn_M20();
    // Get instance field reference: public System.Single M21
    [[deprecated("Use field access instead!")]] float& dyn_M21();
    // Get instance field reference: public System.Single M22
    [[deprecated("Use field access instead!")]] float& dyn_M22();
  }; // Fusion.LagCompensationUtils/RotationMatrix
  #pragma pack(pop)
  static check_size<sizeof(LagCompensationUtils::RotationMatrix), 32 + sizeof(float)> __Fusion_LagCompensationUtils_RotationMatrixSizeCheck;
  static_assert(sizeof(LagCompensationUtils::RotationMatrix) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"