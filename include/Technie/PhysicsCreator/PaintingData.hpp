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
// Including type: Technie.PhysicsCreator.AutoHullPreset
#include "Technie/PhysicsCreator/AutoHullPreset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: HullData
  class HullData;
  // Forward declaring type: Hash160
  class Hash160;
  // Forward declaring type: VhacdParameters
  class VhacdParameters;
  // Forward declaring type: IHull
  class IHull;
  // Forward declaring type: HullType
  struct HullType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: PhysicMaterial
  class PhysicMaterial;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Technie::PhysicsCreator::Rigid
namespace Technie::PhysicsCreator::Rigid {
  // Forward declaring type: Hull
  class Hull;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: PaintingData
  class PaintingData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::PaintingData);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::PaintingData*, "Technie.PhysicsCreator", "PaintingData");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x5D
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.PaintingData
  // [TokenAttribute] Offset: FFFFFFFF
  class PaintingData : public ::UnityEngine::ScriptableObject/*, public ::Technie::PhysicsCreator::IEditorData*/ {
    public:
    public:
    // public Technie.PhysicsCreator.HullData hullData
    // Size: 0x8
    // Offset: 0x18
    ::Technie::PhysicsCreator::HullData* hullData;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::HullData*) == 0x8);
    // public UnityEngine.Mesh sourceMesh
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Mesh* sourceMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public Technie.PhysicsCreator.Hash160 sourceMeshHash
    // Size: 0x8
    // Offset: 0x28
    ::Technie::PhysicsCreator::Hash160* sourceMeshHash;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::Hash160*) == 0x8);
    // public System.Int32 activeHull
    // Size: 0x4
    // Offset: 0x30
    int activeHull;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single faceThickness
    // Size: 0x4
    // Offset: 0x34
    float faceThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Collections.Generic.List`1<Technie.PhysicsCreator.Rigid.Hull> hulls
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>* hulls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*) == 0x8);
    // public Technie.PhysicsCreator.AutoHullPreset autoHullPreset
    // Size: 0x4
    // Offset: 0x40
    ::Technie::PhysicsCreator::AutoHullPreset autoHullPreset;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::AutoHullPreset) == 0x4);
    // Padding between fields: autoHullPreset and: vhacdParams
    char __padding6[0x4] = {};
    // public Technie.PhysicsCreator.VhacdParameters vhacdParams
    // Size: 0x8
    // Offset: 0x48
    ::Technie::PhysicsCreator::VhacdParameters* vhacdParams;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::VhacdParameters*) == 0x8);
    // public System.Boolean hasLastVhacdTimings
    // Size: 0x1
    // Offset: 0x50
    bool hasLastVhacdTimings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLastVhacdTimings and: lastVhacdPreset
    char __padding8[0x3] = {};
    // public Technie.PhysicsCreator.AutoHullPreset lastVhacdPreset
    // Size: 0x4
    // Offset: 0x54
    ::Technie::PhysicsCreator::AutoHullPreset lastVhacdPreset;
    // Field size check
    static_assert(sizeof(::Technie::PhysicsCreator::AutoHullPreset) == 0x4);
    // public System.Single lastVhacdDurationSecs
    // Size: 0x4
    // Offset: 0x58
    float lastVhacdDurationSecs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean suppressMeshModificationWarning
    // Size: 0x1
    // Offset: 0x5C
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
    // Get instance field reference: public Technie.PhysicsCreator.HullData hullData
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::HullData*& dyn_hullData();
    // Get instance field reference: public UnityEngine.Mesh sourceMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_sourceMesh();
    // Get instance field reference: public Technie.PhysicsCreator.Hash160 sourceMeshHash
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::Hash160*& dyn_sourceMeshHash();
    // Get instance field reference: public System.Int32 activeHull
    [[deprecated("Use field access instead!")]] int& dyn_activeHull();
    // Get instance field reference: public System.Single faceThickness
    [[deprecated("Use field access instead!")]] float& dyn_faceThickness();
    // Get instance field reference: public System.Collections.Generic.List`1<Technie.PhysicsCreator.Rigid.Hull> hulls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*& dyn_hulls();
    // Get instance field reference: public Technie.PhysicsCreator.AutoHullPreset autoHullPreset
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::AutoHullPreset& dyn_autoHullPreset();
    // Get instance field reference: public Technie.PhysicsCreator.VhacdParameters vhacdParams
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::VhacdParameters*& dyn_vhacdParams();
    // Get instance field reference: public System.Boolean hasLastVhacdTimings
    [[deprecated("Use field access instead!")]] bool& dyn_hasLastVhacdTimings();
    // Get instance field reference: public Technie.PhysicsCreator.AutoHullPreset lastVhacdPreset
    [[deprecated("Use field access instead!")]] ::Technie::PhysicsCreator::AutoHullPreset& dyn_lastVhacdPreset();
    // Get instance field reference: public System.Single lastVhacdDurationSecs
    [[deprecated("Use field access instead!")]] float& dyn_lastVhacdDurationSecs();
    // Get instance field reference: public System.Boolean suppressMeshModificationWarning
    [[deprecated("Use field access instead!")]] bool& dyn_suppressMeshModificationWarning();
    // public System.Int32 get_TotalOutputColliders()
    // Offset: 0x502C918
    int get_TotalOutputColliders();
    // public Technie.PhysicsCreator.Hash160 get_CachedHash()
    // Offset: 0x502CA84
    ::Technie::PhysicsCreator::Hash160* get_CachedHash();
    // public System.Void set_CachedHash(Technie.PhysicsCreator.Hash160 value)
    // Offset: 0x502CA8C
    void set_CachedHash(::Technie::PhysicsCreator::Hash160* value);
    // public System.Boolean get_HasCachedData()
    // Offset: 0x502CA94
    bool get_HasCachedData();
    // public UnityEngine.Mesh get_SourceMesh()
    // Offset: 0x502CAE8
    ::UnityEngine::Mesh* get_SourceMesh();
    // public Technie.PhysicsCreator.IHull[] get_Hulls()
    // Offset: 0x502CAF0
    ::ArrayW<::Technie::PhysicsCreator::IHull*> get_Hulls();
    // public System.Boolean get_HasSuppressMeshModificationWarning()
    // Offset: 0x502CB40
    bool get_HasSuppressMeshModificationWarning();
    // public System.Void AddHull(Technie.PhysicsCreator.HullType type, UnityEngine.PhysicMaterial material, System.Boolean isChild, System.Boolean isTrigger)
    // Offset: 0x502CB48
    void AddHull(::Technie::PhysicsCreator::HullType type, ::UnityEngine::PhysicMaterial* material, bool isChild, bool isTrigger);
    // public System.Void RemoveHull(System.Int32 index)
    // Offset: 0x502CF1C
    void RemoveHull(int index);
    // public System.Void RemoveAllHulls()
    // Offset: 0x502CFCC
    void RemoveAllHulls();
    // public System.Boolean HasActiveHull()
    // Offset: 0x502D088
    bool HasActiveHull();
    // public Technie.PhysicsCreator.Rigid.Hull GetActiveHull()
    // Offset: 0x502D0E8
    ::Technie::PhysicsCreator::Rigid::Hull* GetActiveHull();
    // public System.Boolean ContainsMesh(UnityEngine.Mesh m)
    // Offset: 0x502D168
    bool ContainsMesh(::UnityEngine::Mesh* m);
    // public System.Boolean HasAutoHulls()
    // Offset: 0x502D3D0
    bool HasAutoHulls();
    // public System.Void SetAssetDirty()
    // Offset: 0x502D52C
    void SetAssetDirty();
    // public System.Void .ctor()
    // Offset: 0x502D530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PaintingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::PaintingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PaintingData*, creationType>()));
    }
  }; // Technie.PhysicsCreator.PaintingData
  #pragma pack(pop)
  static check_size<sizeof(PaintingData), 92 + sizeof(bool)> __Technie_PhysicsCreator_PaintingDataSizeCheck;
  static_assert(sizeof(PaintingData) == 0x5D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_TotalOutputColliders
// Il2CppName: get_TotalOutputColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_TotalOutputColliders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_TotalOutputColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_CachedHash
// Il2CppName: get_CachedHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Hash160* (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_CachedHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_CachedHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::set_CachedHash
// Il2CppName: set_CachedHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::PaintingData::*)(::Technie::PhysicsCreator::Hash160*)>(&Technie::PhysicsCreator::PaintingData::set_CachedHash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "Hash160")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "set_CachedHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_HasCachedData
// Il2CppName: get_HasCachedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_HasCachedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_HasCachedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_SourceMesh
// Il2CppName: get_SourceMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_SourceMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_SourceMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_Hulls
// Il2CppName: get_Hulls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Technie::PhysicsCreator::IHull*> (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_Hulls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_Hulls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::get_HasSuppressMeshModificationWarning
// Il2CppName: get_HasSuppressMeshModificationWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::get_HasSuppressMeshModificationWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "get_HasSuppressMeshModificationWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::AddHull
// Il2CppName: AddHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::PaintingData::*)(::Technie::PhysicsCreator::HullType, ::UnityEngine::PhysicMaterial*, bool, bool)>(&Technie::PhysicsCreator::PaintingData::AddHull)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "HullType")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicMaterial")->byval_arg;
    static auto* isChild = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isTrigger = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "AddHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, material, isChild, isTrigger});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::RemoveHull
// Il2CppName: RemoveHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::PaintingData::*)(int)>(&Technie::PhysicsCreator::PaintingData::RemoveHull)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "RemoveHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::RemoveAllHulls
// Il2CppName: RemoveAllHulls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::RemoveAllHulls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "RemoveAllHulls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::HasActiveHull
// Il2CppName: HasActiveHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::HasActiveHull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "HasActiveHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::GetActiveHull
// Il2CppName: GetActiveHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::Rigid::Hull* (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::GetActiveHull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "GetActiveHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::ContainsMesh
// Il2CppName: ContainsMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::PaintingData::*)(::UnityEngine::Mesh*)>(&Technie::PhysicsCreator::PaintingData::ContainsMesh)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "ContainsMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::HasAutoHulls
// Il2CppName: HasAutoHulls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::HasAutoHulls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "HasAutoHulls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::SetAssetDirty
// Il2CppName: SetAssetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::PaintingData::*)()>(&Technie::PhysicsCreator::PaintingData::SetAssetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::PaintingData*), "SetAssetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::PaintingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!