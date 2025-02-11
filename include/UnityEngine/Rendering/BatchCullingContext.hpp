// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.Rendering.CullingSplit
#include "UnityEngine/Rendering/CullingSplit.hpp"
// Including type: UnityEngine.Rendering.LODParameters
#include "UnityEngine/Rendering/LODParameters.hpp"
// Including type: UnityEngine.Rendering.BatchCullingViewType
#include "UnityEngine/Rendering/BatchCullingViewType.hpp"
// Including type: UnityEngine.Rendering.BatchCullingProjectionType
#include "UnityEngine/Rendering/BatchCullingProjectionType.hpp"
// Including type: UnityEngine.Rendering.BatchCullingFlags
#include "UnityEngine/Rendering/BatchCullingFlags.hpp"
// Including type: UnityEngine.Rendering.BatchPackedCullingViewID
#include "UnityEngine/Rendering/BatchPackedCullingViewID.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingContext
  struct BatchCullingContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchCullingContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct BatchCullingContext/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly Unity.Collections.NativeArray`1<UnityEngine.Plane> cullingPlanes
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes;
    // public readonly Unity.Collections.NativeArray`1<UnityEngine.Rendering.CullingSplit> cullingSplits
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits;
    // public readonly UnityEngine.Rendering.LODParameters lodParameters
    // Size: 0x1C
    // Offset: 0x20
    ::UnityEngine::Rendering::LODParameters lodParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::LODParameters) == 0x1C);
    // public readonly UnityEngine.Matrix4x4 localToWorldMatrix
    // Size: 0x40
    // Offset: 0x3C
    ::UnityEngine::Matrix4x4 localToWorldMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public readonly UnityEngine.Rendering.BatchCullingViewType viewType
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::Rendering::BatchCullingViewType viewType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BatchCullingViewType) == 0x4);
    // public readonly UnityEngine.Rendering.BatchCullingProjectionType projectionType
    // Size: 0x4
    // Offset: 0x80
    ::UnityEngine::Rendering::BatchCullingProjectionType projectionType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BatchCullingProjectionType) == 0x4);
    // public readonly UnityEngine.Rendering.BatchCullingFlags cullingFlags
    // Size: 0x4
    // Offset: 0x84
    ::UnityEngine::Rendering::BatchCullingFlags cullingFlags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BatchCullingFlags) == 0x4);
    // public readonly UnityEngine.Rendering.BatchPackedCullingViewID viewID
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Rendering::BatchPackedCullingViewID viewID;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BatchPackedCullingViewID) == 0x8);
    // public readonly System.UInt32 cullingLayerMask
    // Size: 0x4
    // Offset: 0x90
    uint cullingLayerMask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt64 sceneCullingMask
    // Size: 0x8
    // Offset: 0x98
    uint64_t sceneCullingMask;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Byte isOrthographic
    // Size: 0x1
    // Offset: 0xA0
    uint8_t isOrthographic;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public readonly System.Int32 receiverPlaneOffset
    // Size: 0x4
    // Offset: 0xA4
    int receiverPlaneOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 receiverPlaneCount
    // Size: 0x4
    // Offset: 0xA8
    int receiverPlaneCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BatchCullingContext
    constexpr BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> cullingSplits_ = {}, ::UnityEngine::Rendering::LODParameters lodParameters_ = {}, ::UnityEngine::Matrix4x4 localToWorldMatrix_ = {}, ::UnityEngine::Rendering::BatchCullingViewType viewType_ = {}, ::UnityEngine::Rendering::BatchCullingProjectionType projectionType_ = {}, ::UnityEngine::Rendering::BatchCullingFlags cullingFlags_ = {}, ::UnityEngine::Rendering::BatchPackedCullingViewID viewID_ = {}, uint cullingLayerMask_ = {}, uint64_t sceneCullingMask_ = {}, uint8_t isOrthographic_ = {}, int receiverPlaneOffset_ = {}, int receiverPlaneCount_ = {}) noexcept : cullingPlanes{cullingPlanes_}, cullingSplits{cullingSplits_}, lodParameters{lodParameters_}, localToWorldMatrix{localToWorldMatrix_}, viewType{viewType_}, projectionType{projectionType_}, cullingFlags{cullingFlags_}, viewID{viewID_}, cullingLayerMask{cullingLayerMask_}, sceneCullingMask{sceneCullingMask_}, isOrthographic{isOrthographic_}, receiverPlaneOffset{receiverPlaneOffset_}, receiverPlaneCount{receiverPlaneCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly Unity.Collections.NativeArray`1<UnityEngine.Plane> cullingPlanes
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>& dyn_cullingPlanes();
    // Get instance field reference: public readonly Unity.Collections.NativeArray`1<UnityEngine.Rendering.CullingSplit> cullingSplits
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>& dyn_cullingSplits();
    // Get instance field reference: public readonly UnityEngine.Rendering.LODParameters lodParameters
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::LODParameters& dyn_lodParameters();
    // Get instance field reference: public readonly UnityEngine.Matrix4x4 localToWorldMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_localToWorldMatrix();
    // Get instance field reference: public readonly UnityEngine.Rendering.BatchCullingViewType viewType
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BatchCullingViewType& dyn_viewType();
    // Get instance field reference: public readonly UnityEngine.Rendering.BatchCullingProjectionType projectionType
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BatchCullingProjectionType& dyn_projectionType();
    // Get instance field reference: public readonly UnityEngine.Rendering.BatchCullingFlags cullingFlags
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BatchCullingFlags& dyn_cullingFlags();
    // Get instance field reference: public readonly UnityEngine.Rendering.BatchPackedCullingViewID viewID
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BatchPackedCullingViewID& dyn_viewID();
    // Get instance field reference: public readonly System.UInt32 cullingLayerMask
    [[deprecated("Use field access instead!")]] uint& dyn_cullingLayerMask();
    // Get instance field reference: public readonly System.UInt64 sceneCullingMask
    [[deprecated("Use field access instead!")]] uint64_t& dyn_sceneCullingMask();
    // Get instance field reference: public readonly System.Byte isOrthographic
    [[deprecated("Use field access instead!")]] uint8_t& dyn_isOrthographic();
    // Get instance field reference: public readonly System.Int32 receiverPlaneOffset
    [[deprecated("Use field access instead!")]] int& dyn_receiverPlaneOffset();
    // Get instance field reference: public readonly System.Int32 receiverPlaneCount
    [[deprecated("Use field access instead!")]] int& dyn_receiverPlaneCount();
    // System.Void .ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane> inCullingPlanes, Unity.Collections.NativeArray`1<UnityEngine.Rendering.CullingSplit> inCullingSplits, UnityEngine.Rendering.LODParameters inLodParameters, UnityEngine.Matrix4x4 inLocalToWorldMatrix, UnityEngine.Rendering.BatchCullingViewType inViewType, UnityEngine.Rendering.BatchCullingProjectionType inProjectionType, UnityEngine.Rendering.BatchCullingFlags inBatchCullingFlags, System.UInt64 inViewID, System.UInt32 inCullingLayerMask, System.UInt64 inSceneCullingMask, System.Int32 inReceiverPlaneOffset, System.Int32 inReceiverPlaneCount)
    // Offset: 0x54EF8B4
    BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit> inCullingSplits, ::UnityEngine::Rendering::LODParameters inLodParameters, ::UnityEngine::Matrix4x4 inLocalToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType inProjectionType, ::UnityEngine::Rendering::BatchCullingFlags inBatchCullingFlags, uint64_t inViewID, uint inCullingLayerMask, uint64_t inSceneCullingMask, int inReceiverPlaneOffset, int inReceiverPlaneCount);
  }; // UnityEngine.Rendering.BatchCullingContext
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchCullingContext::BatchCullingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
