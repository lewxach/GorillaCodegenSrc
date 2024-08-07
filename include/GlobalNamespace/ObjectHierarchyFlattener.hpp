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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlattenerCrumb
  class FlattenerCrumb;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObjectHierarchyFlattener
  class ObjectHierarchyFlattener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObjectHierarchyFlattener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectHierarchyFlattener*, "", "ObjectHierarchyFlattener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ObjectHierarchyFlattener
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectHierarchyFlattener : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject originalParentGO
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* originalParentGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Transform originalParentTransform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* originalParentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 originalLocalPosition
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 originalLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion originalLocalRotation
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Quaternion originalLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 originalScale
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 originalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean trackTransformOfParent
    // Size: 0x1
    // Offset: 0x58
    bool trackTransformOfParent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean maintainRelativeScale
    // Size: 0x1
    // Offset: 0x59
    bool maintainRelativeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: maintainRelativeScale and: crumb
    char __padding6[0x6] = {};
    // private FlattenerCrumb crumb
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::FlattenerCrumb* crumb;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlattenerCrumb*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject originalParentGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_originalParentGO();
    // Get instance field reference: private UnityEngine.Transform originalParentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_originalParentTransform();
    // Get instance field reference: private UnityEngine.Vector3 originalLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_originalLocalPosition();
    // Get instance field reference: private UnityEngine.Quaternion originalLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_originalLocalRotation();
    // Get instance field reference: private UnityEngine.Vector3 originalScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_originalScale();
    // Get instance field reference: public System.Boolean trackTransformOfParent
    [[deprecated("Use field access instead!")]] bool& dyn_trackTransformOfParent();
    // Get instance field reference: public System.Boolean maintainRelativeScale
    [[deprecated("Use field access instead!")]] bool& dyn_maintainRelativeScale();
    // Get instance field reference: private FlattenerCrumb crumb
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlattenerCrumb*& dyn_crumb();
    // private System.Void ResetTransform()
    // Offset: 0x288E810
    void ResetTransform();
    // public System.Void InvokeLateUpdate()
    // Offset: 0x288E920
    void InvokeLateUpdate();
    // private System.Void OnEnable()
    // Offset: 0x288EC60
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x288EF70
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x288EFEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHierarchyFlattener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectHierarchyFlattener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHierarchyFlattener*, creationType>()));
    }
  }; // ObjectHierarchyFlattener
  #pragma pack(pop)
  static check_size<sizeof(ObjectHierarchyFlattener), 96 + sizeof(::GlobalNamespace::FlattenerCrumb*)> __GlobalNamespace_ObjectHierarchyFlattenerSizeCheck;
  static_assert(sizeof(ObjectHierarchyFlattener) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectHierarchyFlattener::ResetTransform
// Il2CppName: ResetTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectHierarchyFlattener::*)()>(&GlobalNamespace::ObjectHierarchyFlattener::ResetTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectHierarchyFlattener*), "ResetTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectHierarchyFlattener::InvokeLateUpdate
// Il2CppName: InvokeLateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectHierarchyFlattener::*)()>(&GlobalNamespace::ObjectHierarchyFlattener::InvokeLateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectHierarchyFlattener*), "InvokeLateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectHierarchyFlattener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectHierarchyFlattener::*)()>(&GlobalNamespace::ObjectHierarchyFlattener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectHierarchyFlattener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectHierarchyFlattener::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObjectHierarchyFlattener::*)()>(&GlobalNamespace::ObjectHierarchyFlattener::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectHierarchyFlattener*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectHierarchyFlattener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
