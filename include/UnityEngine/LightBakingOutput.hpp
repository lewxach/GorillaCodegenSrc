// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LightmapBakeType
#include "UnityEngine/LightmapBakeType.hpp"
// Including type: UnityEngine.MixedLightingMode
#include "UnityEngine/MixedLightingMode.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightBakingOutput
  struct LightBakingOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightBakingOutput, "UnityEngine", "LightBakingOutput");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LightBakingOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct LightBakingOutput/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 probeOcclusionLightIndex
    // Size: 0x4
    // Offset: 0x0
    int probeOcclusionLightIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 occlusionMaskChannel
    // Size: 0x4
    // Offset: 0x4
    int occlusionMaskChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.LightmapBakeType lightmapBakeType
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::LightmapBakeType lightmapBakeType;
    // Field size check
    static_assert(sizeof(::UnityEngine::LightmapBakeType) == 0x4);
    // public UnityEngine.MixedLightingMode mixedLightingMode
    // Size: 0x4
    // Offset: 0xC
    ::UnityEngine::MixedLightingMode mixedLightingMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::MixedLightingMode) == 0x4);
    // public System.Boolean isBaked
    // Size: 0x1
    // Offset: 0x10
    bool isBaked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: LightBakingOutput
    constexpr LightBakingOutput(int probeOcclusionLightIndex_ = {}, int occlusionMaskChannel_ = {}, ::UnityEngine::LightmapBakeType lightmapBakeType_ = {}, ::UnityEngine::MixedLightingMode mixedLightingMode_ = {}, bool isBaked_ = {}) noexcept : probeOcclusionLightIndex{probeOcclusionLightIndex_}, occlusionMaskChannel{occlusionMaskChannel_}, lightmapBakeType{lightmapBakeType_}, mixedLightingMode{mixedLightingMode_}, isBaked{isBaked_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 probeOcclusionLightIndex
    [[deprecated("Use field access instead!")]] int& dyn_probeOcclusionLightIndex();
    // Get instance field reference: public System.Int32 occlusionMaskChannel
    [[deprecated("Use field access instead!")]] int& dyn_occlusionMaskChannel();
    // Get instance field reference: public UnityEngine.LightmapBakeType lightmapBakeType
    [[deprecated("Use field access instead!")]] ::UnityEngine::LightmapBakeType& dyn_lightmapBakeType();
    // Get instance field reference: public UnityEngine.MixedLightingMode mixedLightingMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::MixedLightingMode& dyn_mixedLightingMode();
    // Get instance field reference: public System.Boolean isBaked
    [[deprecated("Use field access instead!")]] bool& dyn_isBaked();
  }; // UnityEngine.LightBakingOutput
  #pragma pack(pop)
  static check_size<sizeof(LightBakingOutput), 16 + sizeof(bool)> __UnityEngine_LightBakingOutputSizeCheck;
  static_assert(sizeof(LightBakingOutput) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"