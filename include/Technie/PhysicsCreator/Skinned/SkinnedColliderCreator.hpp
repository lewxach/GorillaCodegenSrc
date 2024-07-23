// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Technie.PhysicsCreator.ICreatorComponent
#include "Technie/PhysicsCreator/ICreatorComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Technie::PhysicsCreator::Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Forward declaring type: SkinnedColliderEditorData
  class SkinnedColliderEditorData;
  // Forward declaring type: BoneData
  class BoneData;
  // Forward declaring type: BoneHullData
  class BoneHullData;
}
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: IEditorData
  class IEditorData;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Forward declaring type: SkinnedColliderCreator
  class SkinnedColliderCreator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*, "Technie.PhysicsCreator.Skinned", "SkinnedColliderCreator");
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Skinned.SkinnedColliderCreator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class SkinnedColliderCreator : public ::UnityEngine::MonoBehaviour/*, public ::Technie::PhysicsCreator::ICreatorComponent*/ {
    public:
    public:
    // public UnityEngine.SkinnedMeshRenderer targetSkinnedRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SkinnedMeshRenderer* targetSkinnedRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // public Technie.PhysicsCreator.Skinned.SkinnedColliderEditorData editorData
    // Size: 0x8
    // Offset: 0x28
    ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData* editorData;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Technie::PhysicsCreator::ICreatorComponent
    operator ::Technie::PhysicsCreator::ICreatorComponent() noexcept {
      return *reinterpret_cast<::Technie::PhysicsCreator::ICreatorComponent*>(this);
    }
    // Get instance field reference: public UnityEngine.SkinnedMeshRenderer targetSkinnedRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::SkinnedMeshRenderer*& dyn_targetSkinnedRenderer();
    // Get instance field reference: public Technie.PhysicsCreator.Skinned.SkinnedColliderEditorData editorData
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*& dyn_editorData();
    // private System.Void OnDestroy()
    // Offset: 0x5038310
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x5038314
    void OnEnable();
    // public UnityEngine.GameObject GetGameObject()
    // Offset: 0x503837C
    ::UnityEngine::GameObject* GetGameObject();
    // public System.Boolean HasEditorData()
    // Offset: 0x5038384
    bool HasEditorData();
    // public Technie.PhysicsCreator.IEditorData GetEditorData()
    // Offset: 0x50383E4
    ::Technie::PhysicsCreator::IEditorData* GetEditorData();
    // public UnityEngine.Transform FindBone(Technie.PhysicsCreator.Skinned.BoneData boneData)
    // Offset: 0x50383EC
    ::UnityEngine::Transform* FindBone(::Technie::PhysicsCreator::Skinned::BoneData* boneData);
    // public UnityEngine.Transform FindBone(Technie.PhysicsCreator.Skinned.BoneHullData hullData)
    // Offset: 0x5038404
    ::UnityEngine::Transform* FindBone(::Technie::PhysicsCreator::Skinned::BoneHullData* hullData);
    // static public UnityEngine.Transform FindBone(UnityEngine.SkinnedMeshRenderer skinnedRenderer, System.String nameToFind)
    // Offset: 0x5037E0C
    static ::UnityEngine::Transform* FindBone(::UnityEngine::SkinnedMeshRenderer* skinnedRenderer, ::StringW nameToFind);
    // public System.Void .ctor()
    // Offset: 0x503841C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinnedColliderCreator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinnedColliderCreator*, creationType>()));
    }
  }; // Technie.PhysicsCreator.Skinned.SkinnedColliderCreator
  #pragma pack(pop)
  static check_size<sizeof(SkinnedColliderCreator), 40 + sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*)> __Technie_PhysicsCreator_Skinned_SkinnedColliderCreatorSizeCheck;
  static_assert(sizeof(SkinnedColliderCreator) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::HasEditorData
// Il2CppName: HasEditorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::HasEditorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "HasEditorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetEditorData
// Il2CppName: GetEditorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::IEditorData* (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::GetEditorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "GetEditorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone
// Il2CppName: FindBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  static const MethodInfo* get() {
    static auto* boneData = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "FindBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneData});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone
// Il2CppName: FindBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  static const MethodInfo* get() {
    static auto* hullData = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneHullData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "FindBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hullData});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone
// Il2CppName: FindBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::SkinnedMeshRenderer*, ::StringW)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::FindBone)> {
  static const MethodInfo* get() {
    static auto* skinnedRenderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinnedMeshRenderer")->byval_arg;
    static auto* nameToFind = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*), "FindBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinnedRenderer, nameToFind});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!