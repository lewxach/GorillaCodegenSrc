// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformRecognizerActiveState
  class TransformRecognizerActiveState;
  // Forward declaring type: TransformFeature
  struct TransformFeature;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: TransformFeatureVectorDebugParentVisual
  class TransformFeatureVectorDebugParentVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*, "Oculus.Interaction.PoseDetection.Debug", "TransformFeatureVectorDebugParentVisual");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.TransformFeatureVectorDebugParentVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureVectorDebugParentVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.PoseDetection.TransformRecognizerActiveState _transformRecognizerActiveState
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState* transformRecognizerActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*) == 0x8);
    // private UnityEngine.GameObject _vectorVisualPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* vectorVisualPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private Oculus.Interaction.PoseDetection.TransformRecognizerActiveState _transformRecognizerActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*& dyn__transformRecognizerActiveState();
    // Get instance field reference: private UnityEngine.GameObject _vectorVisualPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__vectorVisualPrefab();
    // public System.Void GetTransformFeatureVectorAndWristPos(Oculus.Interaction.PoseDetection.TransformFeature feature, System.Boolean isHandVector, ref System.Nullable`1<UnityEngine.Vector3> featureVec, ref System.Nullable`1<UnityEngine.Vector3> wristPos)
    // Offset: 0x47FDB78
    void GetTransformFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformFeature feature, bool isHandVector, ByRef<::System::Nullable_1<::UnityEngine::Vector3>> featureVec, ByRef<::System::Nullable_1<::UnityEngine::Vector3>> wristPos);
    // protected System.Void Awake()
    // Offset: 0x47FDB94
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47FDB98
    void Start();
    // private System.Void CreateVectorDebugView(Oculus.Interaction.PoseDetection.TransformFeature feature, System.Boolean trackingHandVector)
    // Offset: 0x47FDEB0
    void CreateVectorDebugView(::Oculus::Interaction::PoseDetection::TransformFeature feature, bool trackingHandVector);
    // public System.Void .ctor()
    // Offset: 0x47FE11C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureVectorDebugParentVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureVectorDebugParentVisual*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.TransformFeatureVectorDebugParentVisual
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureVectorDebugParentVisual), 40 + sizeof(::UnityEngine::GameObject*)> __Oculus_Interaction_PoseDetection_Debug_TransformFeatureVectorDebugParentVisualSizeCheck;
  static_assert(sizeof(TransformFeatureVectorDebugParentVisual) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::GetTransformFeatureVectorAndWristPos
// Il2CppName: GetTransformFeatureVectorAndWristPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::*)(::Oculus::Interaction::PoseDetection::TransformFeature, bool, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>)>(&Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::GetTransformFeatureVectorAndWristPos)> {
  static const MethodInfo* get() {
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* isHandVector = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* featureVec = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    static auto* wristPos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*), "GetTransformFeatureVectorAndWristPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{feature, isHandVector, featureVec, wristPos});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::CreateVectorDebugView
// Il2CppName: CreateVectorDebugView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::*)(::Oculus::Interaction::PoseDetection::TransformFeature, bool)>(&Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::CreateVectorDebugView)> {
  static const MethodInfo* get() {
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    static auto* trackingHandVector = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*), "CreateVectorDebugView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{feature, trackingHandVector});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
