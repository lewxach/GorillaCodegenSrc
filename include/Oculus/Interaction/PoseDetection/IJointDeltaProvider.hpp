// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandJointId
  struct HandJointId;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: JointDeltaConfig
  class JointDeltaConfig;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: IJointDeltaProvider
  class IJointDeltaProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::IJointDeltaProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*, "Oculus.Interaction.PoseDetection", "IJointDeltaProvider");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.IJointDeltaProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IJointDeltaProvider {
    public:
    // public System.Boolean GetPositionDelta(Oculus.Interaction.Input.HandJointId joint, out UnityEngine.Vector3 delta)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetPositionDelta(::Oculus::Interaction::Input::HandJointId joint, ByRef<::UnityEngine::Vector3> delta);
    // public System.Boolean GetRotationDelta(Oculus.Interaction.Input.HandJointId joint, out UnityEngine.Quaternion delta)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetRotationDelta(::Oculus::Interaction::Input::HandJointId joint, ByRef<::UnityEngine::Quaternion> delta);
    // public System.Void RegisterConfig(Oculus.Interaction.PoseDetection.JointDeltaConfig config)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig* config);
    // public System.Void UnRegisterConfig(Oculus.Interaction.PoseDetection.JointDeltaConfig config)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig* config);
  }; // Oculus.Interaction.PoseDetection.IJointDeltaProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetPositionDelta
// Il2CppName: GetPositionDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ByRef<::UnityEngine::Vector3>)>(&Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetPositionDelta)> {
  static const MethodInfo* get() {
    static auto* joint = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::IJointDeltaProvider*), "GetPositionDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joint, delta});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetRotationDelta
// Il2CppName: GetRotationDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ByRef<::UnityEngine::Quaternion>)>(&Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetRotationDelta)> {
  static const MethodInfo* get() {
    static auto* joint = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandJointId")->byval_arg;
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::IJointDeltaProvider*), "GetRotationDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joint, delta});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::IJointDeltaProvider::RegisterConfig
// Il2CppName: RegisterConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&Oculus::Interaction::PoseDetection::IJointDeltaProvider::RegisterConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "JointDeltaConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::IJointDeltaProvider*), "RegisterConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::IJointDeltaProvider::UnRegisterConfig
// Il2CppName: UnRegisterConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&Oculus::Interaction::PoseDetection::IJointDeltaProvider::UnRegisterConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "JointDeltaConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::IJointDeltaProvider*), "UnRegisterConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
