// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VisualEffectAsset
  class VisualEffectAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXBatchedEffectInfo
  struct VFXBatchedEffectInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXBatchedEffectInfo, "UnityEngine.VFX", "VFXBatchedEffectInfo");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.VFX.VFXBatchedEffectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  struct VFXBatchedEffectInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.VFX.VisualEffectAsset vfxAsset
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::VFX::VisualEffectAsset* vfxAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::VFX::VisualEffectAsset*) == 0x8);
    // public System.UInt32 activeBatchCount
    // Size: 0x4
    // Offset: 0x8
    uint activeBatchCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 inactiveBatchCount
    // Size: 0x4
    // Offset: 0xC
    uint inactiveBatchCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 activeInstanceCount
    // Size: 0x4
    // Offset: 0x10
    uint activeInstanceCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 unbatchedInstanceCount
    // Size: 0x4
    // Offset: 0x14
    uint unbatchedInstanceCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 totalInstanceCapacity
    // Size: 0x4
    // Offset: 0x18
    uint totalInstanceCapacity;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 maxInstancePerBatchCapacity
    // Size: 0x4
    // Offset: 0x1C
    uint maxInstancePerBatchCapacity;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt64 totalGPUSizeInBytes
    // Size: 0x8
    // Offset: 0x20
    uint64_t totalGPUSizeInBytes;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 totalCPUSizeInBytes
    // Size: 0x8
    // Offset: 0x28
    uint64_t totalCPUSizeInBytes;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VFXBatchedEffectInfo
    constexpr VFXBatchedEffectInfo(::UnityEngine::VFX::VisualEffectAsset* vfxAsset_ = {}, uint activeBatchCount_ = {}, uint inactiveBatchCount_ = {}, uint activeInstanceCount_ = {}, uint unbatchedInstanceCount_ = {}, uint totalInstanceCapacity_ = {}, uint maxInstancePerBatchCapacity_ = {}, uint64_t totalGPUSizeInBytes_ = {}, uint64_t totalCPUSizeInBytes_ = {}) noexcept : vfxAsset{vfxAsset_}, activeBatchCount{activeBatchCount_}, inactiveBatchCount{inactiveBatchCount_}, activeInstanceCount{activeInstanceCount_}, unbatchedInstanceCount{unbatchedInstanceCount_}, totalInstanceCapacity{totalInstanceCapacity_}, maxInstancePerBatchCapacity{maxInstancePerBatchCapacity_}, totalGPUSizeInBytes{totalGPUSizeInBytes_}, totalCPUSizeInBytes{totalCPUSizeInBytes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.VFX.VisualEffectAsset vfxAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::VFX::VisualEffectAsset*& dyn_vfxAsset();
    // Get instance field reference: public System.UInt32 activeBatchCount
    [[deprecated("Use field access instead!")]] uint& dyn_activeBatchCount();
    // Get instance field reference: public System.UInt32 inactiveBatchCount
    [[deprecated("Use field access instead!")]] uint& dyn_inactiveBatchCount();
    // Get instance field reference: public System.UInt32 activeInstanceCount
    [[deprecated("Use field access instead!")]] uint& dyn_activeInstanceCount();
    // Get instance field reference: public System.UInt32 unbatchedInstanceCount
    [[deprecated("Use field access instead!")]] uint& dyn_unbatchedInstanceCount();
    // Get instance field reference: public System.UInt32 totalInstanceCapacity
    [[deprecated("Use field access instead!")]] uint& dyn_totalInstanceCapacity();
    // Get instance field reference: public System.UInt32 maxInstancePerBatchCapacity
    [[deprecated("Use field access instead!")]] uint& dyn_maxInstancePerBatchCapacity();
    // Get instance field reference: public System.UInt64 totalGPUSizeInBytes
    [[deprecated("Use field access instead!")]] uint64_t& dyn_totalGPUSizeInBytes();
    // Get instance field reference: public System.UInt64 totalCPUSizeInBytes
    [[deprecated("Use field access instead!")]] uint64_t& dyn_totalCPUSizeInBytes();
  }; // UnityEngine.VFX.VFXBatchedEffectInfo
  #pragma pack(pop)
  static check_size<sizeof(VFXBatchedEffectInfo), 40 + sizeof(uint64_t)> __UnityEngine_VFX_VFXBatchedEffectInfoSizeCheck;
  static_assert(sizeof(VFXBatchedEffectInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"