// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.LensFlareCommonSRP
#include "UnityEngine/Rendering/LensFlareCommonSRP.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP::$$c__DisplayClass39_2, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass39_2");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass39_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LensFlareCommonSRP::$$c__DisplayClass39_2/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single position
    // Size: 0x4
    // Offset: 0x0
    float position;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single globalCos0
    // Size: 0x4
    // Offset: 0x4
    float globalCos0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single globalSin0
    // Size: 0x4
    // Offset: 0x8
    float globalSin0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single combinedScale
    // Size: 0x4
    // Offset: 0xC
    float combinedScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single usedAspectRatio
    // Size: 0x4
    // Offset: 0x10
    float usedAspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: $$c__DisplayClass39_2
    constexpr $$c__DisplayClass39_2(float position_ = {}, float globalCos0_ = {}, float globalSin0_ = {}, float combinedScale_ = {}, float usedAspectRatio_ = {}) noexcept : position{position_}, globalCos0{globalCos0_}, globalSin0{globalSin0_}, combinedScale{combinedScale_}, usedAspectRatio{usedAspectRatio_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single position
    [[deprecated("Use field access instead!")]] float& dyn_position();
    // Get instance field reference: public System.Single globalCos0
    [[deprecated("Use field access instead!")]] float& dyn_globalCos0();
    // Get instance field reference: public System.Single globalSin0
    [[deprecated("Use field access instead!")]] float& dyn_globalSin0();
    // Get instance field reference: public System.Single combinedScale
    [[deprecated("Use field access instead!")]] float& dyn_combinedScale();
    // Get instance field reference: public System.Single usedAspectRatio
    [[deprecated("Use field access instead!")]] float& dyn_usedAspectRatio();
  }; // UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass39_2
  #pragma pack(pop)
  static check_size<sizeof(LensFlareCommonSRP::$$c__DisplayClass39_2), 16 + sizeof(float)> __UnityEngine_Rendering_LensFlareCommonSRP_$$c__DisplayClass39_2SizeCheck;
  static_assert(sizeof(LensFlareCommonSRP::$$c__DisplayClass39_2) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"