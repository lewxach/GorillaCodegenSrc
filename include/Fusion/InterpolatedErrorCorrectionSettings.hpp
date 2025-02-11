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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: InterpolatedErrorCorrectionSettings
  class InterpolatedErrorCorrectionSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::InterpolatedErrorCorrectionSettings);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::InterpolatedErrorCorrectionSettings*, "Fusion", "InterpolatedErrorCorrectionSettings");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.InterpolatedErrorCorrectionSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class InterpolatedErrorCorrectionSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Single MinRate
    // Size: 0x4
    // Offset: 0x10
    float MinRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxRate
    // Size: 0x4
    // Offset: 0x14
    float MaxRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PosBlendStart
    // Size: 0x4
    // Offset: 0x18
    float PosBlendStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PosBlendEnd
    // Size: 0x4
    // Offset: 0x1C
    float PosBlendEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PosMinCorrection
    // Size: 0x4
    // Offset: 0x20
    float PosMinCorrection;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PosTeleportDistance
    // Size: 0x4
    // Offset: 0x24
    float PosTeleportDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotBlendStart
    // Size: 0x4
    // Offset: 0x28
    float RotBlendStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotBlendEnd
    // Size: 0x4
    // Offset: 0x2C
    float RotBlendEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotTeleportRadians
    // Size: 0x4
    // Offset: 0x30
    float RotTeleportRadians;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single MinRate
    [[deprecated("Use field access instead!")]] float& dyn_MinRate();
    // Get instance field reference: public System.Single MaxRate
    [[deprecated("Use field access instead!")]] float& dyn_MaxRate();
    // Get instance field reference: public System.Single PosBlendStart
    [[deprecated("Use field access instead!")]] float& dyn_PosBlendStart();
    // Get instance field reference: public System.Single PosBlendEnd
    [[deprecated("Use field access instead!")]] float& dyn_PosBlendEnd();
    // Get instance field reference: public System.Single PosMinCorrection
    [[deprecated("Use field access instead!")]] float& dyn_PosMinCorrection();
    // Get instance field reference: public System.Single PosTeleportDistance
    [[deprecated("Use field access instead!")]] float& dyn_PosTeleportDistance();
    // Get instance field reference: public System.Single RotBlendStart
    [[deprecated("Use field access instead!")]] float& dyn_RotBlendStart();
    // Get instance field reference: public System.Single RotBlendEnd
    [[deprecated("Use field access instead!")]] float& dyn_RotBlendEnd();
    // Get instance field reference: public System.Single RotTeleportRadians
    [[deprecated("Use field access instead!")]] float& dyn_RotTeleportRadians();
    // public System.Void .ctor()
    // Offset: 0x2B48B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InterpolatedErrorCorrectionSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::InterpolatedErrorCorrectionSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InterpolatedErrorCorrectionSettings*, creationType>()));
    }
  }; // Fusion.InterpolatedErrorCorrectionSettings
  #pragma pack(pop)
  static check_size<sizeof(InterpolatedErrorCorrectionSettings), 48 + sizeof(float)> __Fusion_InterpolatedErrorCorrectionSettingsSizeCheck;
  static_assert(sizeof(InterpolatedErrorCorrectionSettings) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::InterpolatedErrorCorrectionSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
