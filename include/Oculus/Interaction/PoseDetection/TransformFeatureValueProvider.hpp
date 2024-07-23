// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeature
  struct TransformFeature;
  // Forward declaring type: TransformJointData
  class TransformJointData;
  // Forward declaring type: TransformConfig
  class TransformConfig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureValueProvider
  class TransformFeatureValueProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*, "Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureValueProvider : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties
    struct TransformProperties;
    // static public System.Single GetValue(Oculus.Interaction.PoseDetection.TransformFeature transformFeature, Oculus.Interaction.PoseDetection.TransformJointData transformJointData, Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F4650
    static float GetValue(::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ::Oculus::Interaction::PoseDetection::TransformJointData* transformJointData, ::Oculus::Interaction::PoseDetection::TransformConfig* transformConfig);
    // static public UnityEngine.Vector3 GetHandVectorForFeature(Oculus.Interaction.PoseDetection.TransformFeature transformFeature, in Oculus.Interaction.PoseDetection.TransformJointData transformJointData, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F52EC
    static ::UnityEngine::Vector3 GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformJointData*> transformJointData, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private UnityEngine.Vector3 GetHandVectorForFeature(Oculus.Interaction.PoseDetection.TransformFeature transformFeature, in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F6358
    static ::UnityEngine::Vector3 GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static public UnityEngine.Vector3 GetTargetVectorForFeature(Oculus.Interaction.PoseDetection.TransformFeature transformFeature, in Oculus.Interaction.PoseDetection.TransformJointData transformJointData, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F528C
    static ::UnityEngine::Vector3 GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformJointData*> transformJointData, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private UnityEngine.Vector3 GetTargetVectorForFeature(Oculus.Interaction.PoseDetection.TransformFeature transformFeature, in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F643C
    static ::UnityEngine::Vector3 GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature transformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetWristDownValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5818
    static float GetWristDownValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetWristUpValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5958
    static float GetWristUpValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetPalmDownValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5A98
    static float GetPalmDownValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetPalmUpValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5BD8
    static float GetPalmUpValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetPalmTowardsFaceValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5D18
    static float GetPalmTowardsFaceValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetPalmAwayFromFaceValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5E58
    static float GetPalmAwayFromFaceValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetFingersUpValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F5F98
    static float GetFingersUpValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetFingersDownValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F60D8
    static float GetFingersDownValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private System.Single GetPinchClearValue(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F6218
    static float GetPinchClearValue(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private UnityEngine.Vector3 GetVerticalVector(in UnityEngine.Pose centerEyePose, in UnityEngine.Vector3 trackingSystemUp, System.Boolean isUp, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F6568
    static ::UnityEngine::Vector3 GetVerticalVector(ByRef<::UnityEngine::Pose> centerEyePose, ByRef<::UnityEngine::Vector3> trackingSystemUp, bool isUp, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // static private UnityEngine.Vector3 OffsetVectorWithRotation(in Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties transformProps, in UnityEngine.Vector3 originalVector, in Oculus.Interaction.PoseDetection.TransformConfig transformConfig)
    // Offset: 0x47F6664
    static ::UnityEngine::Vector3 OffsetVectorWithRotation(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties> transformProps, ByRef<::UnityEngine::Vector3> originalVector, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*> transformConfig);
    // public System.Void .ctor()
    // Offset: 0x47F6858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureValueProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureValueProvider*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.TransformFeatureValueProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::TransformJointData*, ::Oculus::Interaction::PoseDetection::TransformConfig*)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetValue)> {
  static const MethodInfo* get() {
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* transformJointData = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformJointData")->byval_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformFeature, transformJointData, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature
// Il2CppName: GetHandVectorForFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformJointData*>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature)> {
  static const MethodInfo* get() {
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* transformJointData = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformJointData")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetHandVectorForFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformFeature, transformJointData, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature
// Il2CppName: GetHandVectorForFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetHandVectorForFeature)> {
  static const MethodInfo* get() {
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetHandVectorForFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformFeature, transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature
// Il2CppName: GetTargetVectorForFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformJointData*>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature)> {
  static const MethodInfo* get() {
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* transformJointData = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformJointData")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetTargetVectorForFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformFeature, transformJointData, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature
// Il2CppName: GetTargetVectorForFeature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Oculus::Interaction::PoseDetection::TransformFeature, ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetTargetVectorForFeature)> {
  static const MethodInfo* get() {
    static auto* transformFeature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetTargetVectorForFeature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformFeature, transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristDownValue
// Il2CppName: GetWristDownValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristDownValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetWristDownValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristUpValue
// Il2CppName: GetWristUpValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetWristUpValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetWristUpValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmDownValue
// Il2CppName: GetPalmDownValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmDownValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetPalmDownValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmUpValue
// Il2CppName: GetPalmUpValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmUpValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetPalmUpValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmTowardsFaceValue
// Il2CppName: GetPalmTowardsFaceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmTowardsFaceValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetPalmTowardsFaceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmAwayFromFaceValue
// Il2CppName: GetPalmAwayFromFaceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPalmAwayFromFaceValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetPalmAwayFromFaceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersUpValue
// Il2CppName: GetFingersUpValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersUpValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetFingersUpValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersDownValue
// Il2CppName: GetFingersDownValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetFingersDownValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetFingersDownValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPinchClearValue
// Il2CppName: GetPinchClearValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetPinchClearValue)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetPinchClearValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetVerticalVector
// Il2CppName: GetVerticalVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Vector3>, bool, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::GetVerticalVector)> {
  static const MethodInfo* get() {
    static auto* centerEyePose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* trackingSystemUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* isUp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "GetVerticalVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerEyePose, trackingSystemUp, isUp, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::OffsetVectorWithRotation
// Il2CppName: OffsetVectorWithRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(ByRef<::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::TransformProperties>, ByRef<::UnityEngine::Vector3>, ByRef<::Oculus::Interaction::PoseDetection::TransformConfig*>)>(&Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::OffsetVectorWithRotation)> {
  static const MethodInfo* get() {
    static auto* transformProps = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider/TransformProperties")->this_arg;
    static auto* originalVector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* transformConfig = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformConfig")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*), "OffsetVectorWithRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformProps, originalVector, transformConfig});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureValueProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!