// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState.hpp"
// Including type: Oculus.Interaction.PoseDetection.FeatureConfigBase`1
#include "Oculus/Interaction/PoseDetection/FeatureConfigBase_1.hpp"
// Including type: Oculus.Interaction.Input.HandJointId
#include "Oculus/Interaction/Input/HandJointId.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState_RelativeTo.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState_WorldAxis.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState_HandAxis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/JointRotationFeatureConfig");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class JointRotationActiveState::JointRotationFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::Input::HandJointId> {
    public:
    public:
    // private Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo _relativeTo
    // Size: 0x4
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::RelativeTo relativeTo;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState::RelativeTo) == 0x4);
    // private Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis _worldAxis
    // Size: 0x4
    // Offset: 0x24
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::WorldAxis worldAxis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState::WorldAxis) == 0x4);
    // private Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis _handAxis
    // Size: 0x4
    // Offset: 0x28
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::HandAxis handAxis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState::HandAxis) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo _relativeTo
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::JointRotationActiveState::RelativeTo& dyn__relativeTo();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis _worldAxis
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::JointRotationActiveState::WorldAxis& dyn__worldAxis();
    // Get instance field reference: private Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis _handAxis
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::JointRotationActiveState::HandAxis& dyn__handAxis();
    // public Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo get_RelativeTo()
    // Offset: 0x47EF438
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::RelativeTo get_RelativeTo();
    // public Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis get_WorldAxis()
    // Offset: 0x47EF440
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::WorldAxis get_WorldAxis();
    // public Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis get_HandAxis()
    // Offset: 0x47EF448
    ::Oculus::Interaction::PoseDetection::JointRotationActiveState::HandAxis get_HandAxis();
    // public System.Void .ctor()
    // Offset: 0x47EF450
    // Implemented from: Oculus.Interaction.PoseDetection.FeatureConfigBase`1
    // Base method: System.Void FeatureConfigBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointRotationActiveState::JointRotationFeatureConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointRotationActiveState::JointRotationFeatureConfig*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_RelativeTo
// Il2CppName: get_RelativeTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::JointRotationActiveState::RelativeTo (Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_RelativeTo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*), "get_RelativeTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_WorldAxis
// Il2CppName: get_WorldAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::JointRotationActiveState::WorldAxis (Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_WorldAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*), "get_WorldAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_HandAxis
// Il2CppName: get_HandAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PoseDetection::JointRotationActiveState::HandAxis (Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::get_HandAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*), "get_HandAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!