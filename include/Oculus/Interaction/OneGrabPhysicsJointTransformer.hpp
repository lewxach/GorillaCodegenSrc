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
  // Forward declaring type: ConfigurableJoint
  class ConfigurableJoint;
  // Forward declaring type: Joint
  class Joint;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: OneGrabPhysicsJointTransformer
  class OneGrabPhysicsJointTransformer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::OneGrabPhysicsJointTransformer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::OneGrabPhysicsJointTransformer*, "Oculus.Interaction", "OneGrabPhysicsJointTransformer");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.OneGrabPhysicsJointTransformer
  // [TokenAttribute] Offset: FFFFFFFF
  class OneGrabPhysicsJointTransformer : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::ITransformer*/ {
    public:
    // Nested type: ::Oculus::Interaction::OneGrabPhysicsJointTransformer::$$c
    class $$c;
    public:
    // private UnityEngine.ConfigurableJoint _customJoint
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ConfigurableJoint* customJoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::ConfigurableJoint*) == 0x8);
    // private System.Boolean _isKinematicGrab
    // Size: 0x1
    // Offset: 0x28
    bool isKinematicGrab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isKinematicGrab and: joint
    char __padding1[0x7] = {};
    // private UnityEngine.Joint _joint
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Joint* joint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Joint*) == 0x8);
    // private UnityEngine.Rigidbody _grabbingRigidbody
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rigidbody* grabbingRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private Oculus.Interaction.IGrabbable _grabbable
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::IGrabbable* grabbable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IGrabbable*) == 0x8);
    // private UnityEngine.Vector3 _targetPosition
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 targetPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _targetRotation
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Quaternion targetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ITransformer
    operator ::Oculus::Interaction::ITransformer() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ITransformer*>(this);
    }
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody> _cachedGrabbingRigidbodies
    static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* _get__cachedGrabbingRigidbodies();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody> _cachedGrabbingRigidbodies
    static void _set__cachedGrabbingRigidbodies(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* value);
    // Get instance field reference: private UnityEngine.ConfigurableJoint _customJoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::ConfigurableJoint*& dyn__customJoint();
    // Get instance field reference: private System.Boolean _isKinematicGrab
    [[deprecated("Use field access instead!")]] bool& dyn__isKinematicGrab();
    // Get instance field reference: private UnityEngine.Joint _joint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Joint*& dyn__joint();
    // Get instance field reference: private UnityEngine.Rigidbody _grabbingRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn__grabbingRigidbody();
    // Get instance field reference: private Oculus.Interaction.IGrabbable _grabbable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IGrabbable*& dyn__grabbable();
    // Get instance field reference: private UnityEngine.Vector3 _targetPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__targetPosition();
    // Get instance field reference: private UnityEngine.Quaternion _targetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__targetRotation();
    // public System.Boolean get_IsKinematicGrab()
    // Offset: 0x478B380
    bool get_IsKinematicGrab();
    // public System.Void set_IsKinematicGrab(System.Boolean value)
    // Offset: 0x478B388
    void set_IsKinematicGrab(bool value);
    // private System.Void OnValidate()
    // Offset: 0x478B394
    void OnValidate();
    // public System.Void Initialize(Oculus.Interaction.IGrabbable grabbable)
    // Offset: 0x478BB30
    void Initialize(::Oculus::Interaction::IGrabbable* grabbable);
    // public System.Void BeginTransform()
    // Offset: 0x478BB38
    void BeginTransform();
    // public System.Void UpdateTransform()
    // Offset: 0x478C104
    void UpdateTransform();
    // private System.Void FixedUpdate()
    // Offset: 0x478C244
    void FixedUpdate();
    // public System.Void EndTransform()
    // Offset: 0x478C2F0
    void EndTransform();
    // private UnityEngine.Joint AddJoint(UnityEngine.Rigidbody rigidbody)
    // Offset: 0x478BF78
    ::UnityEngine::Joint* AddJoint(::UnityEngine::Rigidbody* rigidbody);
    // private System.Void RemoveCurrentJoint()
    // Offset: 0x478C308
    void RemoveCurrentJoint();
    // private UnityEngine.Rigidbody GetGrabRigidbody()
    // Offset: 0x478BD28
    ::UnityEngine::Rigidbody* GetGrabRigidbody();
    // private System.Void RemoveCurrentGrabRigidbody()
    // Offset: 0x478C398
    void RemoveCurrentGrabRigidbody();
    // private UnityEngine.Rigidbody CreateRigidBody()
    // Offset: 0x478C4D8
    ::UnityEngine::Rigidbody* CreateRigidBody();
    // private UnityEngine.Joint CreateDefaultJoint()
    // Offset: 0x478C450
    ::UnityEngine::Joint* CreateDefaultJoint();
    // protected UnityEngine.GameObject CreateJointHolder()
    // Offset: 0x478B540
    ::UnityEngine::GameObject* CreateJointHolder();
    // static private UnityEngine.ConfigurableJoint CloneJoint(UnityEngine.ConfigurableJoint joint, UnityEngine.GameObject destination)
    // Offset: 0x478B634
    static ::UnityEngine::ConfigurableJoint* CloneJoint(::UnityEngine::ConfigurableJoint* joint, ::UnityEngine::GameObject* destination);
    // public System.Void InjectOptionalCustomJoint(UnityEngine.ConfigurableJoint customJoint)
    // Offset: 0x478C5C8
    void InjectOptionalCustomJoint(::UnityEngine::ConfigurableJoint* customJoint);
    // public System.Void .ctor()
    // Offset: 0x478C5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneGrabPhysicsJointTransformer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::OneGrabPhysicsJointTransformer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneGrabPhysicsJointTransformer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x478C5E0
    static void _cctor();
  }; // Oculus.Interaction.OneGrabPhysicsJointTransformer
  #pragma pack(pop)
  static check_size<sizeof(OneGrabPhysicsJointTransformer), 84 + sizeof(::UnityEngine::Quaternion)> __Oculus_Interaction_OneGrabPhysicsJointTransformerSizeCheck;
  static_assert(sizeof(OneGrabPhysicsJointTransformer) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::get_IsKinematicGrab
// Il2CppName: get_IsKinematicGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::get_IsKinematicGrab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "get_IsKinematicGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::set_IsKinematicGrab
// Il2CppName: set_IsKinematicGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(bool)>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::set_IsKinematicGrab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "set_IsKinematicGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::Initialize)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IGrabbable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::BeginTransform
// Il2CppName: BeginTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::BeginTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "BeginTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::UpdateTransform
// Il2CppName: UpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::UpdateTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "UpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::EndTransform
// Il2CppName: EndTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::EndTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "EndTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::AddJoint
// Il2CppName: AddJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Joint* (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::UnityEngine::Rigidbody*)>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::AddJoint)> {
  static const MethodInfo* get() {
    static auto* rigidbody = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "AddJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rigidbody});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentJoint
// Il2CppName: RemoveCurrentJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentJoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "RemoveCurrentJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::GetGrabRigidbody
// Il2CppName: GetGrabRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::GetGrabRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "GetGrabRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentGrabRigidbody
// Il2CppName: RemoveCurrentGrabRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentGrabRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "RemoveCurrentGrabRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateRigidBody
// Il2CppName: CreateRigidBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateRigidBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "CreateRigidBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateDefaultJoint
// Il2CppName: CreateDefaultJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Joint* (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateDefaultJoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "CreateDefaultJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateJointHolder
// Il2CppName: CreateJointHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateJointHolder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "CreateJointHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::CloneJoint
// Il2CppName: CloneJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ConfigurableJoint* (*)(::UnityEngine::ConfigurableJoint*, ::UnityEngine::GameObject*)>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::CloneJoint)> {
  static const MethodInfo* get() {
    static auto* joint = &::il2cpp_utils::GetClassFromName("UnityEngine", "ConfigurableJoint")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "CloneJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joint, destination});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalCustomJoint
// Il2CppName: InjectOptionalCustomJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::UnityEngine::ConfigurableJoint*)>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalCustomJoint)> {
  static const MethodInfo* get() {
    static auto* customJoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "ConfigurableJoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), "InjectOptionalCustomJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{customJoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabPhysicsJointTransformer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::OneGrabPhysicsJointTransformer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabPhysicsJointTransformer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
