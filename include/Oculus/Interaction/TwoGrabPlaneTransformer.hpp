// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.ITransformer
#include "Oculus/Interaction/ITransformer.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IGrabbable
  class IGrabbable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: TwoGrabPlaneTransformer
  class TwoGrabPlaneTransformer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::TwoGrabPlaneTransformer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::TwoGrabPlaneTransformer*, "Oculus.Interaction", "TwoGrabPlaneTransformer");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.TwoGrabPlaneTransformer
  // [TokenAttribute] Offset: FFFFFFFF
  class TwoGrabPlaneTransformer : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::ITransformer*/ {
    public:
    // Nested type: ::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints
    class TwoGrabPlaneConstraints;
    public:
    // private UnityEngine.Transform _planeTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* planeTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _capturePosition
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 capturePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _initialLocalScale
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 initialLocalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _initialDistance
    // Size: 0x4
    // Offset: 0x40
    float initialDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _initialScale
    // Size: 0x4
    // Offset: 0x44
    float initialScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _activeScale
    // Size: 0x4
    // Offset: 0x48
    float activeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Pose _previousGrabA
    // Size: 0x1C
    // Offset: 0x4C
    ::UnityEngine::Pose previousGrabA;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose _previousGrabB
    // Size: 0x1C
    // Offset: 0x68
    ::UnityEngine::Pose previousGrabB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // Padding between fields: previousGrabB and: constraints
    char __padding7[0x4] = {};
    // private Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints _constraints
    // Size: 0x8
    // Offset: 0x88
    ::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints* constraints;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints*) == 0x8);
    // private Oculus.Interaction.IGrabbable _grabbable
    // Size: 0x8
    // Offset: 0x90
    ::Oculus::Interaction::IGrabbable* grabbable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IGrabbable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ITransformer
    operator ::Oculus::Interaction::ITransformer() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ITransformer*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform _planeTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__planeTransform();
    // Get instance field reference: private UnityEngine.Vector3 _capturePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__capturePosition();
    // Get instance field reference: private UnityEngine.Vector3 _initialLocalScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__initialLocalScale();
    // Get instance field reference: private System.Single _initialDistance
    [[deprecated("Use field access instead!")]] float& dyn__initialDistance();
    // Get instance field reference: private System.Single _initialScale
    [[deprecated("Use field access instead!")]] float& dyn__initialScale();
    // Get instance field reference: private System.Single _activeScale
    [[deprecated("Use field access instead!")]] float& dyn__activeScale();
    // Get instance field reference: private UnityEngine.Pose _previousGrabA
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__previousGrabA();
    // Get instance field reference: private UnityEngine.Pose _previousGrabB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__previousGrabB();
    // Get instance field reference: private Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints _constraints
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints*& dyn__constraints();
    // Get instance field reference: private Oculus.Interaction.IGrabbable _grabbable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IGrabbable*& dyn__grabbable();
    // public Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints get_Constraints()
    // Offset: 0x47A6AB0
    ::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints* get_Constraints();
    // public System.Void set_Constraints(Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints value)
    // Offset: 0x47A6AB8
    void set_Constraints(::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints* value);
    // public System.Void Initialize(Oculus.Interaction.IGrabbable grabbable)
    // Offset: 0x47A6AC0
    void Initialize(::Oculus::Interaction::IGrabbable* grabbable);
    // public System.Void BeginTransform()
    // Offset: 0x47A6AC8
    void BeginTransform();
    // public System.Void UpdateTransform()
    // Offset: 0x47A6E74
    void UpdateTransform();
    // public System.Void EndTransform()
    // Offset: 0x47A7794
    void EndTransform();
    // public System.Void InjectOptionalPlaneTransform(UnityEngine.Transform planeTransform)
    // Offset: 0x47A7798
    void InjectOptionalPlaneTransform(::UnityEngine::Transform* planeTransform);
    // public System.Void InjectOptionalConstraints(Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints constraints)
    // Offset: 0x47A77A0
    void InjectOptionalConstraints(::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints* constraints);
    // public System.Void .ctor()
    // Offset: 0x47A77A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwoGrabPlaneTransformer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::TwoGrabPlaneTransformer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwoGrabPlaneTransformer*, creationType>()));
    }
  }; // Oculus.Interaction.TwoGrabPlaneTransformer
  #pragma pack(pop)
  static check_size<sizeof(TwoGrabPlaneTransformer), 144 + sizeof(::Oculus::Interaction::IGrabbable*)> __Oculus_Interaction_TwoGrabPlaneTransformerSizeCheck;
  static_assert(sizeof(TwoGrabPlaneTransformer) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::get_Constraints
// Il2CppName: get_Constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints* (Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&Oculus::Interaction::TwoGrabPlaneTransformer::get_Constraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "get_Constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::set_Constraints
// Il2CppName: set_Constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints*)>(&Oculus::Interaction::TwoGrabPlaneTransformer::set_Constraints)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "TwoGrabPlaneTransformer/TwoGrabPlaneConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "set_Constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&Oculus::Interaction::TwoGrabPlaneTransformer::Initialize)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IGrabbable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::BeginTransform
// Il2CppName: BeginTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&Oculus::Interaction::TwoGrabPlaneTransformer::BeginTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "BeginTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::UpdateTransform
// Il2CppName: UpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&Oculus::Interaction::TwoGrabPlaneTransformer::UpdateTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "UpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::EndTransform
// Il2CppName: EndTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)()>(&Oculus::Interaction::TwoGrabPlaneTransformer::EndTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "EndTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalPlaneTransform
// Il2CppName: InjectOptionalPlaneTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalPlaneTransform)> {
  static const MethodInfo* get() {
    static auto* planeTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "InjectOptionalPlaneTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeTransform});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalConstraints
// Il2CppName: InjectOptionalConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TwoGrabPlaneTransformer::*)(::Oculus::Interaction::TwoGrabPlaneTransformer::TwoGrabPlaneConstraints*)>(&Oculus::Interaction::TwoGrabPlaneTransformer::InjectOptionalConstraints)> {
  static const MethodInfo* get() {
    static auto* constraints = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "TwoGrabPlaneTransformer/TwoGrabPlaneConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TwoGrabPlaneTransformer*), "InjectOptionalConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraints});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TwoGrabPlaneTransformer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
