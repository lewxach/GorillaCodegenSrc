// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ResourceManagement.Profiling.ContentStatus
#include "UnityEngine/ResourceManagement/Profiling/ContentStatus.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BundleSource
#include "UnityEngine/ResourceManagement/Util/BundleSource.hpp"
// Including type: UnityEngine.ResourceManagement.Profiling.BundleOptions
#include "UnityEngine/ResourceManagement/Profiling/BundleOptions.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.Profiling
namespace UnityEngine::ResourceManagement::Profiling {
  // Forward declaring type: BundleFrameData
  struct BundleFrameData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::BundleFrameData, "UnityEngine.ResourceManagement.Profiling", "BundleFrameData");
// Type namespace: UnityEngine.ResourceManagement.Profiling
namespace UnityEngine::ResourceManagement::Profiling {
  // Size: 0x16
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Profiling.BundleFrameData
  // [TokenAttribute] Offset: FFFFFFFF
  struct BundleFrameData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 BundleCode
    // Size: 0x4
    // Offset: 0x0
    int BundleCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ReferenceCount
    // Size: 0x4
    // Offset: 0x4
    int ReferenceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single PercentComplete
    // Size: 0x4
    // Offset: 0x8
    float PercentComplete;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.ResourceManagement.Profiling.ContentStatus Status
    // Size: 0x4
    // Offset: 0xC
    ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Profiling::ContentStatus) == 0x4);
    // public UnityEngine.ResourceManagement.Util.BundleSource Source
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::ResourceManagement::Util::BundleSource Source;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::BundleSource) == 0x4);
    // public UnityEngine.ResourceManagement.Profiling.BundleOptions LoadingOptions
    // Size: 0x2
    // Offset: 0x14
    ::UnityEngine::ResourceManagement::Profiling::BundleOptions LoadingOptions;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Profiling::BundleOptions) == 0x2);
    public:
    // Creating value type constructor for type: BundleFrameData
    constexpr BundleFrameData(int BundleCode_ = {}, int ReferenceCount_ = {}, float PercentComplete_ = {}, ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status_ = {}, ::UnityEngine::ResourceManagement::Util::BundleSource Source_ = {}, ::UnityEngine::ResourceManagement::Profiling::BundleOptions LoadingOptions_ = {}) noexcept : BundleCode{BundleCode_}, ReferenceCount{ReferenceCount_}, PercentComplete{PercentComplete_}, Status{Status_}, Source{Source_}, LoadingOptions{LoadingOptions_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 BundleCode
    [[deprecated("Use field access instead!")]] int& dyn_BundleCode();
    // Get instance field reference: public System.Int32 ReferenceCount
    [[deprecated("Use field access instead!")]] int& dyn_ReferenceCount();
    // Get instance field reference: public System.Single PercentComplete
    [[deprecated("Use field access instead!")]] float& dyn_PercentComplete();
    // Get instance field reference: public UnityEngine.ResourceManagement.Profiling.ContentStatus Status
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Profiling::ContentStatus& dyn_Status();
    // Get instance field reference: public UnityEngine.ResourceManagement.Util.BundleSource Source
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::BundleSource& dyn_Source();
    // Get instance field reference: public UnityEngine.ResourceManagement.Profiling.BundleOptions LoadingOptions
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Profiling::BundleOptions& dyn_LoadingOptions();
  }; // UnityEngine.ResourceManagement.Profiling.BundleFrameData
  #pragma pack(pop)
  static check_size<sizeof(BundleFrameData), 20 + sizeof(::UnityEngine::ResourceManagement::Profiling::BundleOptions)> __UnityEngine_ResourceManagement_Profiling_BundleFrameDataSizeCheck;
  static_assert(sizeof(BundleFrameData) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"