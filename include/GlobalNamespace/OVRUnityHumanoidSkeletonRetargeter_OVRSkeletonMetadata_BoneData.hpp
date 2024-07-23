// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata
#include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform OriginalJoint
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* OriginalJoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 FromPosition
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 FromPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 ToPosition
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 ToPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Transform JointPairStart
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* JointPairStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform JointPairEnd
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* JointPairEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Quaternion JointPairOrientation
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Quaternion JointPairOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Nullable`1<UnityEngine.Quaternion> CorrectionQuaternion
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Nullable_1<::UnityEngine::Quaternion> CorrectionQuaternion;
    // public UnityEngine.Transform ParentTransform
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* ParentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Boolean DegenerateJoint
    // Size: 0x1
    // Offset: 0x70
    bool DegenerateJoint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform OriginalJoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_OriginalJoint();
    // Get instance field reference: public UnityEngine.Vector3 FromPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_FromPosition();
    // Get instance field reference: public UnityEngine.Vector3 ToPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_ToPosition();
    // Get instance field reference: public UnityEngine.Transform JointPairStart
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_JointPairStart();
    // Get instance field reference: public UnityEngine.Transform JointPairEnd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_JointPairEnd();
    // Get instance field reference: public UnityEngine.Quaternion JointPairOrientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_JointPairOrientation();
    // Get instance field reference: public System.Nullable`1<UnityEngine.Quaternion> CorrectionQuaternion
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::UnityEngine::Quaternion>& dyn_CorrectionQuaternion();
    // Get instance field reference: public UnityEngine.Transform ParentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_ParentTransform();
    // Get instance field reference: public System.Boolean DegenerateJoint
    [[deprecated("Use field access instead!")]] bool& dyn_DegenerateJoint();
    // public System.Void .ctor()
    // Offset: 0x48CB870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData*, creationType>()));
    }
    // public System.Void .ctor(OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData otherBoneData)
    // Offset: 0x48CABE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData* New_ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData* otherBoneData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData*, creationType>(otherBoneData)));
    }
  }; // OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter::OVRSkeletonMetadata::BoneData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!