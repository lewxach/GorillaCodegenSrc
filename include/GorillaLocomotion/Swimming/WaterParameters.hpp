// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: WaterParameters
  class WaterParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::WaterParameters);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::WaterParameters*, "GorillaLocomotion.Swimming", "WaterParameters");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x8D
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.WaterParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class WaterParameters : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Boolean playSplashEffect
    // Size: 0x1
    // Offset: 0x18
    bool playSplashEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playSplashEffect and: splashEffect
    char __padding0[0x7] = {};
    // public UnityEngine.GameObject splashEffect
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* splashEffect;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single splashEffectScale
    // Size: 0x4
    // Offset: 0x28
    float splashEffectScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean sendSplashEffectRPCs
    // Size: 0x1
    // Offset: 0x2C
    bool sendSplashEffectRPCs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sendSplashEffectRPCs and: splashSpeedRequirement
    char __padding3[0x3] = {};
    // public System.Single splashSpeedRequirement
    // Size: 0x4
    // Offset: 0x30
    float splashSpeedRequirement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single bigSplashSpeedRequirement
    // Size: 0x4
    // Offset: 0x34
    float bigSplashSpeedRequirement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Gradient splashColorBySpeedGradient
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Gradient* splashColorBySpeedGradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // public System.Boolean playRippleEffect
    // Size: 0x1
    // Offset: 0x40
    bool playRippleEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playRippleEffect and: rippleEffect
    char __padding7[0x7] = {};
    // public UnityEngine.GameObject rippleEffect
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* rippleEffect;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single rippleEffectScale
    // Size: 0x4
    // Offset: 0x50
    float rippleEffectScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultDistanceBetweenRipples
    // Size: 0x4
    // Offset: 0x54
    float defaultDistanceBetweenRipples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minDistanceBetweenRipples
    // Size: 0x4
    // Offset: 0x58
    float minDistanceBetweenRipples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minTimeBetweenRipples
    // Size: 0x4
    // Offset: 0x5C
    float minTimeBetweenRipples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color rippleSpriteColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color rippleSpriteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Boolean playDripEffect
    // Size: 0x1
    // Offset: 0x70
    bool playDripEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playDripEffect and: postExitDripDuration
    char __padding14[0x3] = {};
    // public System.Single postExitDripDuration
    // Size: 0x4
    // Offset: 0x74
    float postExitDripDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perDripTimeDelay
    // Size: 0x4
    // Offset: 0x78
    float perDripTimeDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perDripTimeRandRange
    // Size: 0x4
    // Offset: 0x7C
    float perDripTimeRandRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perDripDefaultRadius
    // Size: 0x4
    // Offset: 0x80
    float perDripDefaultRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single perDripRadiusRandRange
    // Size: 0x4
    // Offset: 0x84
    float perDripRadiusRandRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single recomputeSurfaceForColliderDist
    // Size: 0x4
    // Offset: 0x88
    float recomputeSurfaceForColliderDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean allowBubblesInVolume
    // Size: 0x1
    // Offset: 0x8C
    bool allowBubblesInVolume;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean playSplashEffect
    [[deprecated("Use field access instead!")]] bool& dyn_playSplashEffect();
    // Get instance field reference: public UnityEngine.GameObject splashEffect
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_splashEffect();
    // Get instance field reference: public System.Single splashEffectScale
    [[deprecated("Use field access instead!")]] float& dyn_splashEffectScale();
    // Get instance field reference: public System.Boolean sendSplashEffectRPCs
    [[deprecated("Use field access instead!")]] bool& dyn_sendSplashEffectRPCs();
    // Get instance field reference: public System.Single splashSpeedRequirement
    [[deprecated("Use field access instead!")]] float& dyn_splashSpeedRequirement();
    // Get instance field reference: public System.Single bigSplashSpeedRequirement
    [[deprecated("Use field access instead!")]] float& dyn_bigSplashSpeedRequirement();
    // Get instance field reference: public UnityEngine.Gradient splashColorBySpeedGradient
    [[deprecated("Use field access instead!")]] ::UnityEngine::Gradient*& dyn_splashColorBySpeedGradient();
    // Get instance field reference: public System.Boolean playRippleEffect
    [[deprecated("Use field access instead!")]] bool& dyn_playRippleEffect();
    // Get instance field reference: public UnityEngine.GameObject rippleEffect
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_rippleEffect();
    // Get instance field reference: public System.Single rippleEffectScale
    [[deprecated("Use field access instead!")]] float& dyn_rippleEffectScale();
    // Get instance field reference: public System.Single defaultDistanceBetweenRipples
    [[deprecated("Use field access instead!")]] float& dyn_defaultDistanceBetweenRipples();
    // Get instance field reference: public System.Single minDistanceBetweenRipples
    [[deprecated("Use field access instead!")]] float& dyn_minDistanceBetweenRipples();
    // Get instance field reference: public System.Single minTimeBetweenRipples
    [[deprecated("Use field access instead!")]] float& dyn_minTimeBetweenRipples();
    // Get instance field reference: public UnityEngine.Color rippleSpriteColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_rippleSpriteColor();
    // Get instance field reference: public System.Boolean playDripEffect
    [[deprecated("Use field access instead!")]] bool& dyn_playDripEffect();
    // Get instance field reference: public System.Single postExitDripDuration
    [[deprecated("Use field access instead!")]] float& dyn_postExitDripDuration();
    // Get instance field reference: public System.Single perDripTimeDelay
    [[deprecated("Use field access instead!")]] float& dyn_perDripTimeDelay();
    // Get instance field reference: public System.Single perDripTimeRandRange
    [[deprecated("Use field access instead!")]] float& dyn_perDripTimeRandRange();
    // Get instance field reference: public System.Single perDripDefaultRadius
    [[deprecated("Use field access instead!")]] float& dyn_perDripDefaultRadius();
    // Get instance field reference: public System.Single perDripRadiusRandRange
    [[deprecated("Use field access instead!")]] float& dyn_perDripRadiusRandRange();
    // Get instance field reference: public System.Single recomputeSurfaceForColliderDist
    [[deprecated("Use field access instead!")]] float& dyn_recomputeSurfaceForColliderDist();
    // Get instance field reference: public System.Boolean allowBubblesInVolume
    [[deprecated("Use field access instead!")]] bool& dyn_allowBubblesInVolume();
    // public System.Void .ctor()
    // Offset: 0x27E2584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaterParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::WaterParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaterParameters*, creationType>()));
    }
  }; // GorillaLocomotion.Swimming.WaterParameters
  #pragma pack(pop)
  static check_size<sizeof(WaterParameters), 140 + sizeof(bool)> __GorillaLocomotion_Swimming_WaterParametersSizeCheck;
  static_assert(sizeof(WaterParameters) == 0x8D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::WaterParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!