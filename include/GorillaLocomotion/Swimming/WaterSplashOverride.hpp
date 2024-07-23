// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: WaterSplashOverride
  class WaterSplashOverride;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::WaterSplashOverride);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::WaterSplashOverride*, "GorillaLocomotion.Swimming", "WaterSplashOverride");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.WaterSplashOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class WaterSplashOverride : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean suppressWaterEffects
    // Size: 0x1
    // Offset: 0x20
    bool suppressWaterEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean playBigSplash
    // Size: 0x1
    // Offset: 0x21
    bool playBigSplash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean playDrippingEffect
    // Size: 0x1
    // Offset: 0x22
    bool playDrippingEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean scaleByPlayersScale
    // Size: 0x1
    // Offset: 0x23
    bool scaleByPlayersScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean overrideBoundingRadius
    // Size: 0x1
    // Offset: 0x24
    bool overrideBoundingRadius;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideBoundingRadius and: boundingRadiusOverride
    char __padding4[0x3] = {};
    // public System.Single boundingRadiusOverride
    // Size: 0x4
    // Offset: 0x28
    float boundingRadiusOverride;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean suppressWaterEffects
    [[deprecated("Use field access instead!")]] bool& dyn_suppressWaterEffects();
    // Get instance field reference: public System.Boolean playBigSplash
    [[deprecated("Use field access instead!")]] bool& dyn_playBigSplash();
    // Get instance field reference: public System.Boolean playDrippingEffect
    [[deprecated("Use field access instead!")]] bool& dyn_playDrippingEffect();
    // Get instance field reference: public System.Boolean scaleByPlayersScale
    [[deprecated("Use field access instead!")]] bool& dyn_scaleByPlayersScale();
    // Get instance field reference: public System.Boolean overrideBoundingRadius
    [[deprecated("Use field access instead!")]] bool& dyn_overrideBoundingRadius();
    // Get instance field reference: public System.Single boundingRadiusOverride
    [[deprecated("Use field access instead!")]] float& dyn_boundingRadiusOverride();
    // public System.Void .ctor()
    // Offset: 0x27E25D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaterSplashOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::WaterSplashOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaterSplashOverride*, creationType>()));
    }
  }; // GorillaLocomotion.Swimming.WaterSplashOverride
  #pragma pack(pop)
  static check_size<sizeof(WaterSplashOverride), 40 + sizeof(float)> __GorillaLocomotion_Swimming_WaterSplashOverrideSizeCheck;
  static_assert(sizeof(WaterSplashOverride) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::WaterSplashOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!