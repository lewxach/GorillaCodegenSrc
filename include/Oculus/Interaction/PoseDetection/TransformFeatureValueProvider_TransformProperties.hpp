// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider
#include "Oculus/Interaction/PoseDetection/TransformFeatureValueProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
// Including type: Oculus.Interaction.Input.Handedness
#include "Oculus/Interaction/Input/Handedness.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties, "Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x54
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties
  // [TokenAttribute] Offset: FFFFFFFF
  struct TransformFeatureValueProvider::TransformProperties/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.Pose CenterEyePose
    // Size: 0x1C
    // Offset: 0x0
    ::UnityEngine::Pose CenterEyePose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // public readonly UnityEngine.Pose WristPose
    // Size: 0x1C
    // Offset: 0x1C
    ::UnityEngine::Pose WristPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // public readonly Oculus.Interaction.Input.Handedness Handedness
    // Size: 0x4
    // Offset: 0x38
    ::Oculus::Interaction::Input::Handedness Handedness;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::Handedness) == 0x4);
    // public readonly UnityEngine.Vector3 TrackingSystemUp
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 TrackingSystemUp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public readonly UnityEngine.Vector3 TrackingSystemForward
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 TrackingSystemForward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: TransformProperties
    constexpr TransformProperties(::UnityEngine::Pose CenterEyePose_ = {}, ::UnityEngine::Pose WristPose_ = {}, ::Oculus::Interaction::Input::Handedness Handedness_ = {}, ::UnityEngine::Vector3 TrackingSystemUp_ = {}, ::UnityEngine::Vector3 TrackingSystemForward_ = {}) noexcept : CenterEyePose{CenterEyePose_}, WristPose{WristPose_}, Handedness{Handedness_}, TrackingSystemUp{TrackingSystemUp_}, TrackingSystemForward{TrackingSystemForward_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.Pose CenterEyePose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_CenterEyePose();
    // Get instance field reference: public readonly UnityEngine.Pose WristPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_WristPose();
    // Get instance field reference: public readonly Oculus.Interaction.Input.Handedness Handedness
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::Handedness& dyn_Handedness();
    // Get instance field reference: public readonly UnityEngine.Vector3 TrackingSystemUp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_TrackingSystemUp();
    // Get instance field reference: public readonly UnityEngine.Vector3 TrackingSystemForward
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_TrackingSystemForward();
    // public System.Void .ctor(UnityEngine.Pose centerEyePos, UnityEngine.Pose wristPose, Oculus.Interaction.Input.Handedness handedness, UnityEngine.Vector3 trackingSystemUp, UnityEngine.Vector3 trackingSystemForward)
    // Offset: 0x47F57D8
    // ABORTED: conflicts with another method.  TransformProperties(::UnityEngine::Pose centerEyePos, ::UnityEngine::Pose wristPose, ::Oculus::Interaction::Input::Handedness handedness, ::UnityEngine::Vector3 trackingSystemUp, ::UnityEngine::Vector3 trackingSystemForward);
  }; // Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureValueProvider::TransformProperties), 72 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_PoseDetection_TransformFeatureValueProvider_TransformPropertiesSizeCheck;
  static_assert(sizeof(TransformFeatureValueProvider::TransformProperties) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties::TransformProperties
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!