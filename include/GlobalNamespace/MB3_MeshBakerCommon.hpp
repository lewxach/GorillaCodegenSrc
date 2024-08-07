// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB3_MeshBakerRoot
#include "GlobalNamespace/MB3_MeshBakerRoot.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombiner
#include "DigitalOpus/MB/Core/MB3_MeshCombiner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB2_TextureBakeResults
  class MB2_TextureBakeResults;
  // Forward declaring type: MB3_TextureBaker
  class MB3_TextureBaker;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB3_MeshBakerCommon
  class MB3_MeshBakerCommon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_MeshBakerCommon);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBakerCommon*, "", "MB3_MeshBakerCommon");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MB3_MeshBakerCommon
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshBakerCommon : public ::GlobalNamespace::MB3_MeshBakerRoot {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: ::GlobalNamespace::MB3_MeshBakerCommon::$$c
    class $$c;
    public:
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> objsToMesh
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Boolean useObjsToMeshFromTexBaker
    // Size: 0x1
    // Offset: 0x38
    bool useObjsToMeshFromTexBaker;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean clearBuffersAfterBake
    // Size: 0x1
    // Offset: 0x39
    bool clearBuffersAfterBake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clearBuffersAfterBake and: bakeAssetsInPlaceFolderPath
    char __padding2[0x6] = {};
    // public System.String bakeAssetsInPlaceFolderPath
    // Size: 0x8
    // Offset: 0x40
    ::StringW bakeAssetsInPlaceFolderPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject resultPrefab
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* resultPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Boolean resultPrefabLeaveInstanceInSceneAfterBake
    // Size: 0x1
    // Offset: 0x50
    bool resultPrefabLeaveInstanceInSceneAfterBake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resultPrefabLeaveInstanceInSceneAfterBake and: parentSceneObject
    char __padding5[0x7] = {};
    // public UnityEngine.Transform parentSceneObject
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* parentSceneObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> objsToMesh
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_objsToMesh();
    // Get instance field reference: public System.Boolean useObjsToMeshFromTexBaker
    [[deprecated("Use field access instead!")]] bool& dyn_useObjsToMeshFromTexBaker();
    // Get instance field reference: public System.Boolean clearBuffersAfterBake
    [[deprecated("Use field access instead!")]] bool& dyn_clearBuffersAfterBake();
    // Get instance field reference: public System.String bakeAssetsInPlaceFolderPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_bakeAssetsInPlaceFolderPath();
    // Get instance field reference: public UnityEngine.GameObject resultPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_resultPrefab();
    // Get instance field reference: public System.Boolean resultPrefabLeaveInstanceInSceneAfterBake
    [[deprecated("Use field access instead!")]] bool& dyn_resultPrefabLeaveInstanceInSceneAfterBake();
    // Get instance field reference: public UnityEngine.Transform parentSceneObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_parentSceneObject();
    // public DigitalOpus.MB.Core.MB3_MeshCombiner get_meshCombiner()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner();
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> GetObjectsToCombineDirty()
    // Offset: 0x439F58C
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsToCombineDirty();
    // public System.Void EnableDisableSourceObjectRenderers(System.Boolean show)
    // Offset: 0x439FCFC
    void EnableDisableSourceObjectRenderers(bool show);
    // public System.Void ClearMesh()
    // Offset: 0x43A0004
    void ClearMesh();
    // public System.Void ClearMesh(DigitalOpus.MB.Core.MB2_EditorMethodsInterface editorMethods)
    // Offset: 0x43A0030
    void ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods);
    // public System.Void DestroyMesh()
    // Offset: 0x43A0068
    void DestroyMesh();
    // public System.Void DestroyMeshEditor(DigitalOpus.MB.Core.MB2_EditorMethodsInterface editorMethods)
    // Offset: 0x43A0094
    void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods);
    // public System.Int32 GetNumObjectsInCombined()
    // Offset: 0x43A00CC
    int GetNumObjectsInCombined();
    // public System.Int32 GetNumVerticesFor(UnityEngine.GameObject go)
    // Offset: 0x43A00F8
    int GetNumVerticesFor(::UnityEngine::GameObject* go);
    // public MB3_TextureBaker GetTextureBaker()
    // Offset: 0x43A0130
    ::GlobalNamespace::MB3_TextureBaker* GetTextureBaker();
    // public System.Boolean AddDeleteGameObjects(UnityEngine.GameObject[] gos, UnityEngine.GameObject[] deleteGOs, System.Boolean disableRendererInSource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*> gos, ::ArrayW<::UnityEngine::GameObject*> deleteGOs, bool disableRendererInSource);
    // public System.Boolean AddDeleteGameObjectsByID(UnityEngine.GameObject[] gos, System.Int32[] deleteGOinstanceIDs, System.Boolean disableRendererInSource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*> gos, ::ArrayW<int> deleteGOinstanceIDs, bool disableRendererInSource);
    // public System.Void Apply(DigitalOpus.MB.Core.MB3_MeshCombiner/GenerateUV2Delegate uv2GenerationMethod)
    // Offset: 0x43A0244
    void Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate* uv2GenerationMethod);
    // public System.Void Apply(System.Boolean triangles, System.Boolean vertices, System.Boolean normals, System.Boolean tangents, System.Boolean uvs, System.Boolean uv2, System.Boolean uv3, System.Boolean uv4, System.Boolean colors, System.Boolean bones, System.Boolean blendShapesFlag, DigitalOpus.MB.Core.MB3_MeshCombiner/GenerateUV2Delegate uv2GenerationMethod)
    // Offset: 0x43A03D4
    void Apply(bool triangles, bool vertices, bool normals, bool tangents, bool uvs, bool uv2, bool uv3, bool uv4, bool colors, bool bones, bool blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate* uv2GenerationMethod);
    // public System.Boolean CombinedMeshContains(UnityEngine.GameObject go)
    // Offset: 0x43A0604
    bool CombinedMeshContains(::UnityEngine::GameObject* go);
    // public System.Void UpdateGameObjects(UnityEngine.GameObject[] gos)
    // Offset: 0x43A063C
    void UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*> gos);
    // public System.Void UpdateGameObjects(UnityEngine.GameObject[] gos, System.Boolean updateBounds)
    // Offset: 0x43A0738
    void UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*> gos, bool updateBounds);
    // public System.Void UpdateGameObjects(UnityEngine.GameObject[] gos, System.Boolean recalcBounds, System.Boolean updateVertices, System.Boolean updateNormals, System.Boolean updateTangents, System.Boolean updateUV, System.Boolean updateUV1, System.Boolean updateUV2, System.Boolean updateColors, System.Boolean updateSkinningInfo)
    // Offset: 0x43A0834
    void UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*> gos, bool recalcBounds, bool updateVertices, bool updateNormals, bool updateTangents, bool updateUV, bool updateUV1, bool updateUV2, bool updateColors, bool updateSkinningInfo);
    // public System.Boolean UpdateGameObjects(UnityEngine.GameObject[] gos, System.Boolean recalcBounds, System.Boolean updateVertices, System.Boolean updateNormals, System.Boolean updateTangents, System.Boolean updateUV, System.Boolean updateUV2, System.Boolean updateUV3, System.Boolean updateUV4, System.Boolean updateUV5, System.Boolean updateUV6, System.Boolean updateUV7, System.Boolean updateUV8, System.Boolean updateColors, System.Boolean updateSkinningInfo)
    // Offset: 0x43A0958
    bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*> gos, bool recalcBounds, bool updateVertices, bool updateNormals, bool updateTangents, bool updateUV, bool updateUV2, bool updateUV3, bool updateUV4, bool updateUV5, bool updateUV6, bool updateUV7, bool updateUV8, bool updateColors, bool updateSkinningInfo);
    // public System.Void UpdateSkinnedMeshApproximateBounds()
    // Offset: 0x43A0ACC
    void UpdateSkinnedMeshApproximateBounds();
    // public System.Void UpdateSkinnedMeshApproximateBoundsFromBones()
    // Offset: 0x43A0B1C
    void UpdateSkinnedMeshApproximateBoundsFromBones();
    // public System.Void UpdateSkinnedMeshApproximateBoundsFromBounds()
    // Offset: 0x43A0B6C
    void UpdateSkinnedMeshApproximateBoundsFromBounds();
    // protected System.Boolean _ValidateForUpdateSkinnedMeshBounds()
    // Offset: 0x43A0BBC
    bool _ValidateForUpdateSkinnedMeshBounds();
    // public override MB2_TextureBakeResults get_textureBakeResults()
    // Offset: 0x439F528
    // Implemented from: MB3_MeshBakerRoot
    // Base method: MB2_TextureBakeResults MB3_MeshBakerRoot::get_textureBakeResults()
    ::GlobalNamespace::MB2_TextureBakeResults* get_textureBakeResults();
    // public override System.Void set_textureBakeResults(MB2_TextureBakeResults value)
    // Offset: 0x439F554
    // Implemented from: MB3_MeshBakerRoot
    // Base method: System.Void MB3_MeshBakerRoot::set_textureBakeResults(MB2_TextureBakeResults value)
    void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults* value);
    // public override System.Collections.Generic.List`1<UnityEngine.GameObject> GetObjectsToCombine()
    // Offset: 0x439F780
    // Implemented from: MB3_MeshBakerRoot
    // Base method: System.Collections.Generic.List`1<UnityEngine.GameObject> MB3_MeshBakerRoot::GetObjectsToCombine()
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsToCombine();
    // public override System.Void PurgeNullsFromObjectsToCombine()
    // Offset: 0x439F9C4
    // Implemented from: MB3_MeshBakerRoot
    // Base method: System.Void MB3_MeshBakerRoot::PurgeNullsFromObjectsToCombine()
    void PurgeNullsFromObjectsToCombine();
    // protected System.Void .ctor()
    // Offset: 0x439F518
    // Implemented from: MB3_MeshBakerRoot
    // Base method: System.Void MB3_MeshBakerRoot::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerCommon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_MeshBakerCommon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerCommon*, creationType>()));
    }
  }; // MB3_MeshBakerCommon
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBakerCommon), 88 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_MB3_MeshBakerCommonSizeCheck;
  static_assert(sizeof(MB3_MeshBakerCommon) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::get_meshCombiner
// Il2CppName: get_meshCombiner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombiner* (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::get_meshCombiner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "get_meshCombiner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombineDirty
// Il2CppName: GetObjectsToCombineDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombineDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "GetObjectsToCombineDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::EnableDisableSourceObjectRenderers
// Il2CppName: EnableDisableSourceObjectRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(bool)>(&GlobalNamespace::MB3_MeshBakerCommon::EnableDisableSourceObjectRenderers)> {
  static const MethodInfo* get() {
    static auto* show = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "EnableDisableSourceObjectRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{show});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::ClearMesh
// Il2CppName: ClearMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::ClearMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "ClearMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::ClearMesh
// Il2CppName: ClearMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&GlobalNamespace::MB3_MeshBakerCommon::ClearMesh)> {
  static const MethodInfo* get() {
    static auto* editorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "ClearMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorMethods});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::DestroyMesh
// Il2CppName: DestroyMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::DestroyMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "DestroyMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::DestroyMeshEditor
// Il2CppName: DestroyMeshEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&GlobalNamespace::MB3_MeshBakerCommon::DestroyMeshEditor)> {
  static const MethodInfo* get() {
    static auto* editorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "DestroyMeshEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editorMethods});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::GetNumObjectsInCombined
// Il2CppName: GetNumObjectsInCombined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::GetNumObjectsInCombined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "GetNumObjectsInCombined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::GetNumVerticesFor
// Il2CppName: GetNumVerticesFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MB3_MeshBakerCommon::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::MB3_MeshBakerCommon::GetNumVerticesFor)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "GetNumVerticesFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::GetTextureBaker
// Il2CppName: GetTextureBaker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MB3_TextureBaker* (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::GetTextureBaker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "GetTextureBaker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjects
// Il2CppName: AddDeleteGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* deleteGOs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* disableRendererInSource = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "AddDeleteGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, deleteGOs, disableRendererInSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjectsByID
// Il2CppName: AddDeleteGameObjectsByID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int>, bool)>(&GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjectsByID)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* deleteGOinstanceIDs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* disableRendererInSource = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "AddDeleteGameObjectsByID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, deleteGOinstanceIDs, disableRendererInSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*)>(&GlobalNamespace::MB3_MeshBakerCommon::Apply)> {
  static const MethodInfo* get() {
    static auto* uv2GenerationMethod = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombiner/GenerateUV2Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uv2GenerationMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner::GenerateUV2Delegate*)>(&GlobalNamespace::MB3_MeshBakerCommon::Apply)> {
  static const MethodInfo* get() {
    static auto* triangles = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* vertices = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* normals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tangents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uvs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uv2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uv3 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uv4 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* colors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bones = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* blendShapesFlag = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uv2GenerationMethod = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombiner/GenerateUV2Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::CombinedMeshContains
// Il2CppName: CombinedMeshContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerCommon::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::MB3_MeshBakerCommon::CombinedMeshContains)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "CombinedMeshContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects
// Il2CppName: UpdateGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>)>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects
// Il2CppName: UpdateGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool)>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* updateBounds = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, updateBounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects
// Il2CppName: UpdateGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* recalcBounds = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateVertices = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNormals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateTangents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV1 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateColors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateSkinningInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV1, updateUV2, updateColors, updateSkinningInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects
// Il2CppName: UpdateGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* recalcBounds = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateVertices = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNormals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateTangents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV3 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV4 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV5 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV6 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV7 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateUV8 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateColors = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateSkinningInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBounds
// Il2CppName: UpdateSkinnedMeshApproximateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateSkinnedMeshApproximateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBones
// Il2CppName: UpdateSkinnedMeshApproximateBoundsFromBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateSkinnedMeshApproximateBoundsFromBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBounds
// Il2CppName: UpdateSkinnedMeshApproximateBoundsFromBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "UpdateSkinnedMeshApproximateBoundsFromBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::_ValidateForUpdateSkinnedMeshBounds
// Il2CppName: _ValidateForUpdateSkinnedMeshBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::_ValidateForUpdateSkinnedMeshBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "_ValidateForUpdateSkinnedMeshBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::get_textureBakeResults
// Il2CppName: get_textureBakeResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MB2_TextureBakeResults* (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::get_textureBakeResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "get_textureBakeResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::set_textureBakeResults
// Il2CppName: set_textureBakeResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&GlobalNamespace::MB3_MeshBakerCommon::set_textureBakeResults)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MB2_TextureBakeResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "set_textureBakeResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombine
// Il2CppName: GetObjectsToCombine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "GetObjectsToCombine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::PurgeNullsFromObjectsToCombine
// Il2CppName: PurgeNullsFromObjectsToCombine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerCommon::*)()>(&GlobalNamespace::MB3_MeshBakerCommon::PurgeNullsFromObjectsToCombine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerCommon*), "PurgeNullsFromObjectsToCombine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerCommon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
