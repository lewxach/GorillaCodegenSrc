// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IWeightedAnimationJob
#include "UnityEngine/Animations/Rigging/IWeightedAnimationJob.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadWriteTransformHandle
#include "UnityEngine/Animations/Rigging/ReadWriteTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadOnlyTransformHandle
#include "UnityEngine/Animations/Rigging/ReadOnlyTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.AffineTransform
#include "UnityEngine/Animations/Rigging/AffineTransform.hpp"
// Including type: UnityEngine.Animations.Rigging.CacheIndex
#include "UnityEngine/Animations/Rigging/CacheIndex.hpp"
// Including type: UnityEngine.Animations.Rigging.Vector3Property
#include "UnityEngine/Animations/Rigging/Vector3Property.hpp"
// Including type: UnityEngine.Animations.Rigging.FloatProperty
#include "UnityEngine/Animations/Rigging/FloatProperty.hpp"
// Including type: UnityEngine.Animations.Rigging.AnimationJobCache
#include "UnityEngine/Animations/Rigging/AnimationJobCache.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Skipping declaration: AnimationStream because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: OverrideTransformJob
  struct OverrideTransformJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::OverrideTransformJob, "UnityEngine.Animations.Rigging", "OverrideTransformJob");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.OverrideTransformJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct OverrideTransformJob/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IWeightedAnimationJob*/ {
    public:
    // Nested type: ::UnityEngine::Animations::Rigging::OverrideTransformJob::Space
    struct Space;
    public:
    // public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle) == 0xC);
    // public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle source
    // Size: 0x15
    // Offset: 0xC
    ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle) == 0x15);
    // public UnityEngine.Animations.Rigging.AffineTransform sourceInvLocalBindTx
    // Size: 0x1C
    // Offset: 0x24
    ::UnityEngine::Animations::Rigging::AffineTransform sourceInvLocalBindTx;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::AffineTransform) == 0x1C);
    // public UnityEngine.Quaternion sourceToWorldRot
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Quaternion sourceToWorldRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion sourceToLocalRot
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Quaternion sourceToLocalRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion sourceToPivotRot
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Quaternion sourceToPivotRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Animations.Rigging.CacheIndex spaceIdx
    // Size: 0x4
    // Offset: 0x70
    ::UnityEngine::Animations::Rigging::CacheIndex spaceIdx;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::CacheIndex) == 0x4);
    // public UnityEngine.Animations.Rigging.CacheIndex sourceToCurrSpaceRotIdx
    // Size: 0x4
    // Offset: 0x74
    ::UnityEngine::Animations::Rigging::CacheIndex sourceToCurrSpaceRotIdx;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::CacheIndex) == 0x4);
    // public UnityEngine.Animations.Rigging.Vector3Property position
    // Size: 0x30
    // Offset: 0x78
    ::UnityEngine::Animations::Rigging::Vector3Property position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Property) == 0x30);
    // public UnityEngine.Animations.Rigging.Vector3Property rotation
    // Size: 0x30
    // Offset: 0xA8
    ::UnityEngine::Animations::Rigging::Vector3Property rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Property) == 0x30);
    // public UnityEngine.Animations.Rigging.FloatProperty positionWeight
    // Size: 0x10
    // Offset: 0xD8
    ::UnityEngine::Animations::Rigging::FloatProperty positionWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    // public UnityEngine.Animations.Rigging.FloatProperty rotationWeight
    // Size: 0x10
    // Offset: 0xE8
    ::UnityEngine::Animations::Rigging::FloatProperty rotationWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    // public UnityEngine.Animations.Rigging.AnimationJobCache cache
    // Size: 0xFFFFFFFF
    // Offset: 0xF8
    ::UnityEngine::Animations::Rigging::AnimationJobCache cache;
    // private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    // Size: 0x10
    // Offset: 0x108
    ::UnityEngine::Animations::Rigging::FloatProperty jobWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    public:
    // Creating value type constructor for type: OverrideTransformJob
    constexpr OverrideTransformJob(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven_ = {}, ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle source_ = {}, ::UnityEngine::Animations::Rigging::AffineTransform sourceInvLocalBindTx_ = {}, ::UnityEngine::Quaternion sourceToWorldRot_ = {}, ::UnityEngine::Quaternion sourceToLocalRot_ = {}, ::UnityEngine::Quaternion sourceToPivotRot_ = {}, ::UnityEngine::Animations::Rigging::CacheIndex spaceIdx_ = {}, ::UnityEngine::Animations::Rigging::CacheIndex sourceToCurrSpaceRotIdx_ = {}, ::UnityEngine::Animations::Rigging::Vector3Property position_ = {}, ::UnityEngine::Animations::Rigging::Vector3Property rotation_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty positionWeight_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty rotationWeight_ = {}, ::UnityEngine::Animations::Rigging::AnimationJobCache cache_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty jobWeight_ = {}) noexcept : driven{driven_}, source{source_}, sourceInvLocalBindTx{sourceInvLocalBindTx_}, sourceToWorldRot{sourceToWorldRot_}, sourceToLocalRot{sourceToLocalRot_}, sourceToPivotRot{sourceToPivotRot_}, spaceIdx{spaceIdx_}, sourceToCurrSpaceRotIdx{sourceToCurrSpaceRotIdx_}, position{position_}, rotation{rotation_}, positionWeight{positionWeight_}, rotationWeight{rotationWeight_}, cache{cache_}, jobWeight{jobWeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob
    operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IWeightedAnimationJob*>(this);
    }
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle& dyn_driven();
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle source
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle& dyn_source();
    // Get instance field reference: public UnityEngine.Animations.Rigging.AffineTransform sourceInvLocalBindTx
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::AffineTransform& dyn_sourceInvLocalBindTx();
    // Get instance field reference: public UnityEngine.Quaternion sourceToWorldRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_sourceToWorldRot();
    // Get instance field reference: public UnityEngine.Quaternion sourceToLocalRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_sourceToLocalRot();
    // Get instance field reference: public UnityEngine.Quaternion sourceToPivotRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_sourceToPivotRot();
    // Get instance field reference: public UnityEngine.Animations.Rigging.CacheIndex spaceIdx
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::CacheIndex& dyn_spaceIdx();
    // Get instance field reference: public UnityEngine.Animations.Rigging.CacheIndex sourceToCurrSpaceRotIdx
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::CacheIndex& dyn_sourceToCurrSpaceRotIdx();
    // Get instance field reference: public UnityEngine.Animations.Rigging.Vector3Property position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Property& dyn_position();
    // Get instance field reference: public UnityEngine.Animations.Rigging.Vector3Property rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Property& dyn_rotation();
    // Get instance field reference: public UnityEngine.Animations.Rigging.FloatProperty positionWeight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_positionWeight();
    // Get instance field reference: public UnityEngine.Animations.Rigging.FloatProperty rotationWeight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_rotationWeight();
    // Get instance field reference: public UnityEngine.Animations.Rigging.AnimationJobCache cache
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::AnimationJobCache& dyn_cache();
    // Get instance field reference: private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_$jobWeight$k__BackingField();
    // public UnityEngine.Animations.Rigging.FloatProperty get_jobWeight()
    // Offset: 0x5070260
    ::UnityEngine::Animations::Rigging::FloatProperty get_jobWeight();
    // public System.Void set_jobWeight(UnityEngine.Animations.Rigging.FloatProperty value)
    // Offset: 0x507026C
    void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty value);
    // public System.Void ProcessRootMotion(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x5070274
    void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void ProcessAnimation(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x5070278
    void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream);
    // System.Void UpdateSpace(System.Int32 space)
    // Offset: 0x5070C80
    void UpdateSpace(int space);
  }; // UnityEngine.Animations.Rigging.OverrideTransformJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformJob::get_jobWeight
// Il2CppName: get_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::FloatProperty (UnityEngine::Animations::Rigging::OverrideTransformJob::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformJob::get_jobWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformJob), "get_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformJob::set_jobWeight
// Il2CppName: set_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformJob::*)(::UnityEngine::Animations::Rigging::FloatProperty)>(&UnityEngine::Animations::Rigging::OverrideTransformJob::set_jobWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "FloatProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformJob), "set_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformJob::ProcessRootMotion
// Il2CppName: ProcessRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::OverrideTransformJob::ProcessRootMotion)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformJob), "ProcessRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformJob::ProcessAnimation
// Il2CppName: ProcessAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::OverrideTransformJob::ProcessAnimation)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformJob), "ProcessAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformJob::UpdateSpace
// Il2CppName: UpdateSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformJob::*)(int)>(&UnityEngine::Animations::Rigging::OverrideTransformJob::UpdateSpace)> {
  static const MethodInfo* get() {
    static auto* space = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformJob), "UpdateSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{space});
  }
};
