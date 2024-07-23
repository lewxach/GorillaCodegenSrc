// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointDeltaProvider
#include "Oculus/Interaction/PoseDetection/JointDeltaProvider.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointDeltaProvider::PoseData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointDeltaProvider::PoseData*, "Oculus.Interaction.PoseDetection", "JointDeltaProvider/PoseData");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData
  // [TokenAttribute] Offset: FFFFFFFF
  class JointDeltaProvider::PoseData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean IsValid
    // Size: 0x1
    // Offset: 0x10
    bool IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsValid and: Pose
    char __padding0[0x3] = {};
    // public UnityEngine.Pose Pose
    // Size: 0x1C
    // Offset: 0x14
    ::UnityEngine::Pose Pose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    public:
    // Get instance field reference: public System.Boolean IsValid
    [[deprecated("Use field access instead!")]] bool& dyn_IsValid();
    // Get instance field reference: public UnityEngine.Pose Pose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_Pose();
    // public System.Void .ctor()
    // Offset: 0x47ED22C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointDeltaProvider::PoseData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointDeltaProvider::PoseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointDeltaProvider::PoseData*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData
  #pragma pack(pop)
  static check_size<sizeof(JointDeltaProvider::PoseData), 20 + sizeof(::UnityEngine::Pose)> __Oculus_Interaction_PoseDetection_JointDeltaProvider_PoseDataSizeCheck;
  static_assert(sizeof(JointDeltaProvider::PoseData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDeltaProvider::PoseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!