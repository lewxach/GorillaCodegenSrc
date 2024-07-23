// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Technie.PhysicsCreator.IEditorData
#include "Technie/PhysicsCreator/IEditorData.hpp"
// Including type: Technie.PhysicsCreator.Skinned.ColliderType
#include "Technie/PhysicsCreator/Skinned/ColliderType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Technie::PhysicsCreator::Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Forward declaring type: SkinnedColliderRuntimeData
  class SkinnedColliderRuntimeData;
  // Forward declaring type: BoneData
  class BoneData;
  // Forward declaring type: BoneHullData
  class BoneHullData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PhysicMaterial
  class PhysicMaterial;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: Hash160
  class Hash160;
  // Forward declaring type: IHull
  class IHull;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Forward declaring type: SkinnedColliderEditorData
  class SkinnedColliderEditorData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*, "Technie.PhysicsCreator.Skinned", "SkinnedColliderEditorData");
// Type namespace: Technie.PhysicsCreator.Skinned
namespace Technie::PhysicsCreator::Skinned {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Skinned.SkinnedColliderEditorData
  // [TokenAttribute] Offset: FFFFFFFF
  class SkinnedColliderEditorData : public ::UnityEngine::ScriptableObject/*, public ::Technie::PhysicsCreator::IEditorData*/ {
    public:
    public:
    // public Technie.PhysicsCreator.Skinned.SkinnedColliderRuntimeData runtimeData
    // Size: 0x8
    // Offset: 0x18
    ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData* runtimeData;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*) == 0x8);
    // public System.Single defaultMass
    // Size: 0x4
    // Offset: 0x20
    float defaultMass;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultLinearDrag
    // Size: 0x4
    // Offset: 0x24
    float defaultLinearDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultAngularDrag
    // Size: 0x4
    // Offset: 0x28
    float defaultAngularDrag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultLinearDamping
    // Size: 0x4
    // Offset: 0x2C
    float defaultLinearDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultAngularDamping
    // Size: 0x4
    // Offset: 0x30
    float defaultAngularDamping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultAngularDamping and: defaultMaterial
    char __padding5[0x4] = {};
    // public UnityEngine.PhysicMaterial defaultMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::PhysicMaterial* defaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::PhysicMaterial*) == 0x8);
    // public Technie.PhysicsCreator.Skinned.ColliderType defaultColliderType
    // Size: 0x4
    // Offset: 0x40
    ::Technie::PhysicsCreator::Skinned::ColliderType defaultColliderType;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Skinned::ColliderType) == 0x4);
    // Padding between fields: defaultColliderType and: boneData
    char __padding7[0x4] = {};
    // public System.Collections.Generic.List`1<Technie.PhysicsCreator.Skinned.BoneData> boneData
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>* boneData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*) == 0x8);
    // public System.Collections.Generic.List`1<Technie.PhysicsCreator.Skinned.BoneHullData> boneHullData
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>* boneHullData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*) == 0x8);
    // private System.Int32 selectedBoneIndex
    // Size: 0x4
    // Offset: 0x58
    int selectedBoneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 selectedHullIndex
    // Size: 0x4
    // Offset: 0x5C
    int selectedHullIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastModifiedFrame
    // Size: 0x4
    // Offset: 0x60
    int lastModifiedFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastModifiedFrame and: sourceMesh
    char __padding12[0x4] = {};
    // public UnityEngine.Mesh sourceMesh
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Mesh* sourceMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public Technie.PhysicsCreator.Hash160 sourceMeshHash
    // Size: 0x8
    // Offset: 0x70
    ::Technie::PhysicsCreator::Hash160* sourceMeshHash;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Hash160*) == 0x8);
    // public System.Boolean suppressMeshModificationWarning
    // Size: 0x1
    // Offset: 0x78
    bool suppressMeshModificationWarning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Technie::PhysicsCreator::IEditorData
    operator ::Technie::PhysicsCreator::IEditorData() noexcept {
      return *reinterpret_cast<::Technie::PhysicsCreator::IEditorData*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 INVALID_INDEX
    static constexpr const int INVALID_INDEX = -1;
    // Get static field: static public System.Int32 INVALID_INDEX
    static int _get_INVALID_INDEX();
    // Set static field: static public System.Int32 INVALID_INDEX
    static void _set_INVALID_INDEX(int value);
    // Get instance field reference: public Technie.PhysicsCreator.Skinned.SkinnedColliderRuntimeData runtimeData
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*& dyn_runtimeData();
    // Get instance field reference: public System.Single defaultMass
    [[deprecated("Use field access instead!")]] float& dyn_defaultMass();
    // Get instance field reference: public System.Single defaultLinearDrag
    [[deprecated("Use field access instead!")]] float& dyn_defaultLinearDrag();
    // Get instance field reference: public System.Single defaultAngularDrag
    [[deprecated("Use field access instead!")]] float& dyn_defaultAngularDrag();
    // Get instance field reference: public System.Single defaultLinearDamping
    [[deprecated("Use field access instead!")]] float& dyn_defaultLinearDamping();
    // Get instance field reference: public System.Single defaultAngularDamping
    [[deprecated("Use field access instead!")]] float& dyn_defaultAngularDamping();
    // Get instance field reference: public UnityEngine.PhysicMaterial defaultMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::PhysicMaterial*& dyn_defaultMaterial();
    // Get instance field reference: public Technie.PhysicsCreator.Skinned.ColliderType defaultColliderType
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Skinned::ColliderType& dyn_defaultColliderType();
    // Get instance field reference: public System.Collections.Generic.List`1<Technie.PhysicsCreator.Skinned.BoneData> boneData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*& dyn_boneData();
    // Get instance field reference: public System.Collections.Generic.List`1<Technie.PhysicsCreator.Skinned.BoneHullData> boneHullData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*& dyn_boneHullData();
    // Get instance field reference: private System.Int32 selectedBoneIndex
    [[deprecated("Use field access instead!")]] int& dyn_selectedBoneIndex();
    // Get instance field reference: private System.Int32 selectedHullIndex
    [[deprecated("Use field access instead!")]] int& dyn_selectedHullIndex();
    // Get instance field reference: private System.Int32 lastModifiedFrame
    [[deprecated("Use field access instead!")]] int& dyn_lastModifiedFrame();
    // Get instance field reference: public UnityEngine.Mesh sourceMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_sourceMesh();
    // Get instance field reference: public Technie.PhysicsCreator.Hash160 sourceMeshHash
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Hash160*& dyn_sourceMeshHash();
    // Get instance field reference: public System.Boolean suppressMeshModificationWarning
    [[deprecated("Use field access instead!")]] bool& dyn_suppressMeshModificationWarning();
    // public Technie.PhysicsCreator.Hash160 get_CachedHash()
    // Offset: 0x5038534
    ::Technie::PhysicsCreator::Hash160* get_CachedHash();
    // public System.Void set_CachedHash(Technie.PhysicsCreator.Hash160 value)
    // Offset: 0x503853C
    void set_CachedHash(::Technie::PhysicsCreator::Hash160* value);
    // public System.Boolean get_HasCachedData()
    // Offset: 0x5038544
    bool get_HasCachedData();
    // public UnityEngine.Mesh get_SourceMesh()
    // Offset: 0x5038598
    ::UnityEngine::Mesh* get_SourceMesh();
    // public Technie.PhysicsCreator.IHull[] get_Hulls()
    // Offset: 0x50385A0
    ::ArrayW<::Technie::PhysicsCreator::IHull*> get_Hulls();
    // public System.Boolean get_HasSuppressMeshModificationWarning()
    // Offset: 0x50385F0
    bool get_HasSuppressMeshModificationWarning();
    // public System.Void SetSelection(Technie.PhysicsCreator.Skinned.BoneData bone)
    // Offset: 0x50385F8
    void SetSelection(::Technie::PhysicsCreator::Skinned::BoneData* bone);
    // public System.Void SetSelection(Technie.PhysicsCreator.Skinned.BoneHullData hull)
    // Offset: 0x5038698
    void SetSelection(::Technie::PhysicsCreator::Skinned::BoneHullData* hull);
    // public System.Void ClearSelection()
    // Offset: 0x5038734
    void ClearSelection();
    // public Technie.PhysicsCreator.Skinned.BoneData GetSelectedBone()
    // Offset: 0x5038740
    ::Technie::PhysicsCreator::Skinned::BoneData* GetSelectedBone();
    // public Technie.PhysicsCreator.Skinned.BoneHullData GetSelectedHull()
    // Offset: 0x50387C0
    ::Technie::PhysicsCreator::Skinned::BoneHullData* GetSelectedHull();
    // public Technie.PhysicsCreator.Skinned.BoneData GetBoneData(UnityEngine.Transform bone)
    // Offset: 0x5038840
    ::Technie::PhysicsCreator::Skinned::BoneData* GetBoneData(::UnityEngine::Transform* bone);
    // public Technie.PhysicsCreator.Skinned.BoneData GetBoneData(System.String boneName)
    // Offset: 0x50388E0
    ::Technie::PhysicsCreator::Skinned::BoneData* GetBoneData(::StringW boneName);
    // public Technie.PhysicsCreator.Skinned.BoneHullData[] GetBoneHullData(UnityEngine.Transform bone)
    // Offset: 0x5038A3C
    ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> GetBoneHullData(::UnityEngine::Transform* bone);
    // public Technie.PhysicsCreator.Skinned.BoneHullData[] GetBoneHullData(System.String boneName)
    // Offset: 0x5038AF4
    ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> GetBoneHullData(::StringW boneName);
    // public System.Void SetAssetDirty()
    // Offset: 0x5038D44
    void SetAssetDirty();
    // public System.Void MarkDirty()
    // Offset: 0x5038694
    void MarkDirty();
    // public System.Int32 GetLastModifiedFrame()
    // Offset: 0x5038D48
    int GetLastModifiedFrame();
    // public System.Void Add(Technie.PhysicsCreator.Skinned.BoneData data)
    // Offset: 0x5038D50
    void Add(::Technie::PhysicsCreator::Skinned::BoneData* data);
    // public System.Void Remove(Technie.PhysicsCreator.Skinned.BoneData data)
    // Offset: 0x5038DFC
    void Remove(::Technie::PhysicsCreator::Skinned::BoneData* data);
    // public System.Void Add(Technie.PhysicsCreator.Skinned.BoneHullData data)
    // Offset: 0x5038E54
    void Add(::Technie::PhysicsCreator::Skinned::BoneHullData* data);
    // public System.Void Remove(Technie.PhysicsCreator.Skinned.BoneHullData data)
    // Offset: 0x5038F00
    void Remove(::Technie::PhysicsCreator::Skinned::BoneHullData* data);
    // public System.Void .ctor()
    // Offset: 0x5038F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinnedColliderEditorData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinnedColliderEditorData*, creationType>()));
    }
  }; // Technie.PhysicsCreator.Skinned.SkinnedColliderEditorData
  #pragma pack(pop)
  static check_size<sizeof(SkinnedColliderEditorData), 120 + sizeof(bool)> __Technie_PhysicsCreator_Skinned_SkinnedColliderEditorDataSizeCheck;
  static_assert(sizeof(SkinnedColliderEditorData) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_CachedHash
// Il2CppName: get_CachedHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Hash160* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_CachedHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "get_CachedHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::set_CachedHash
// Il2CppName: set_CachedHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Hash160*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::set_CachedHash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "Hash160")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "set_CachedHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasCachedData
// Il2CppName: get_HasCachedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasCachedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "get_HasCachedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_SourceMesh
// Il2CppName: get_SourceMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_SourceMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "get_SourceMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_Hulls
// Il2CppName: get_Hulls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Technie::PhysicsCreator::IHull*> (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_Hulls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "get_Hulls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasSuppressMeshModificationWarning
// Il2CppName: get_HasSuppressMeshModificationWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::get_HasSuppressMeshModificationWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "get_HasSuppressMeshModificationWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection
// Il2CppName: SetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "SetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection
// Il2CppName: SetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetSelection)> {
  static const MethodInfo* get() {
    static auto* hull = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneHullData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "SetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hull});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::ClearSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedBone
// Il2CppName: GetSelectedBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetSelectedBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedHull
// Il2CppName: GetSelectedHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Skinned::BoneHullData* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetSelectedHull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetSelectedHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData
// Il2CppName: GetBoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::UnityEngine::Transform*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetBoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData
// Il2CppName: GetBoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Skinned::BoneData* (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::StringW)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneData)> {
  static const MethodInfo* get() {
    static auto* boneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetBoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneName});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData
// Il2CppName: GetBoneHullData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::UnityEngine::Transform*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetBoneHullData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData
// Il2CppName: GetBoneHullData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::StringW)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetBoneHullData)> {
  static const MethodInfo* get() {
    static auto* boneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetBoneHullData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneName});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetAssetDirty
// Il2CppName: SetAssetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::SetAssetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "SetAssetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::MarkDirty
// Il2CppName: MarkDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::MarkDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "MarkDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetLastModifiedFrame
// Il2CppName: GetLastModifiedFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)()>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::GetLastModifiedFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "GetLastModifiedFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Add)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneHullData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::*)(::Technie::PhysicsCreator::Skinned::BoneHullData*)>(&Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::Remove)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Skinned", "BoneHullData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!