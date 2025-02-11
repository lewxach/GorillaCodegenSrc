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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
  // Forward declaring type: LightmapData
  class LightmapData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PerSceneRenderData
  class PerSceneRenderData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PerSceneRenderData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerSceneRenderData*, "", "PerSceneRenderData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PerSceneRenderData
  // [TokenAttribute] Offset: FFFFFFFF
  class PerSceneRenderData : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PerSceneRenderData::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    public:
    // public UnityEngine.Renderer representativeRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* representativeRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // public System.String lightmapsResourcePath
    // Size: 0x8
    // Offset: 0x28
    ::StringW lightmapsResourcePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Texture2D singleLightmap
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture2D* singleLightmap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 lastLightmapIndex
    // Size: 0x4
    // Offset: 0x38
    int lastLightmapIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastLightmapIndex and: gO
    char __padding3[0x4] = {};
    // public UnityEngine.GameObject[] gO
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::GameObject*> gO;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.MeshRenderer[] mRenderers
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::MeshRenderer*> mRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshRenderer*>) == 0x8);
    // public System.Int32 mRendererIndex
    // Size: 0x4
    // Offset: 0x50
    int mRendererIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: mRendererIndex and: resourceRequests
    char __padding6[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceRequest> resourceRequests
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceRequest*>* resourceRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceRequest*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> lightmapsCache
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Texture2D*>* lightmapsCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Texture2D*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Renderer representativeRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_representativeRenderer();
    // Get instance field reference: public System.String lightmapsResourcePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_lightmapsResourcePath();
    // Get instance field reference: public UnityEngine.Texture2D singleLightmap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_singleLightmap();
    // Get instance field reference: private System.Int32 lastLightmapIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastLightmapIndex();
    // Get instance field reference: public UnityEngine.GameObject[] gO
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_gO();
    // Get instance field reference: public UnityEngine.MeshRenderer[] mRenderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MeshRenderer*>& dyn_mRenderers();
    // Get instance field reference: public System.Int32 mRendererIndex
    [[deprecated("Use field access instead!")]] int& dyn_mRendererIndex();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ResourceRequest> resourceRequests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ResourceRequest*>*& dyn_resourceRequests();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> lightmapsCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Texture2D*>*& dyn_lightmapsCache();
    // private System.Void RefreshRenderer()
    // Offset: 0x288F400
    void RefreshRenderer();
    // public System.String get_sceneName()
    // Offset: 0x288F588
    ::StringW get_sceneName();
    // public System.Int32 get_sceneIndex()
    // Offset: 0x288F554
    int get_sceneIndex();
    // private System.Void Awake()
    // Offset: 0x288F5BC
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x288F6AC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x288F704
    void OnDisable();
    // public System.Void AddMeshToList(UnityEngine.GameObject _gO, UnityEngine.MeshRenderer mR)
    // Offset: 0x288F75C
    void AddMeshToList(::UnityEngine::GameObject* _gO, ::UnityEngine::MeshRenderer* mR);
    // public System.Boolean CheckShouldRepopulate()
    // Offset: 0x288F7CC
    bool CheckShouldRepopulate();
    // private UnityEngine.Texture2D GetLightmap(System.String timeOfDay)
    // Offset: 0x288F7FC
    ::UnityEngine::Texture2D* GetLightmap(::StringW timeOfDay);
    // public System.Void PopulateLightmaps(System.String fromTimeOfDay, System.String toTimeOfDay, UnityEngine.LightmapData[] lightmaps)
    // Offset: 0x288FA3C
    void PopulateLightmaps(::StringW fromTimeOfDay, ::StringW toTimeOfDay, ::ArrayW<::UnityEngine::LightmapData*> lightmaps);
    // public System.Void ReleaseLightmap(System.String oldTimeOfDay)
    // Offset: 0x288FC68
    void ReleaseLightmap(::StringW oldTimeOfDay);
    // public System.Void .ctor()
    // Offset: 0x288FCE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerSceneRenderData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PerSceneRenderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerSceneRenderData*, creationType>()));
    }
  }; // PerSceneRenderData
  #pragma pack(pop)
  static check_size<sizeof(PerSceneRenderData), 96 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Texture2D*>*)> __GlobalNamespace_PerSceneRenderDataSizeCheck;
  static_assert(sizeof(PerSceneRenderData) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::RefreshRenderer
// Il2CppName: RefreshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::RefreshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "RefreshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::get_sceneName
// Il2CppName: get_sceneName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::get_sceneName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "get_sceneName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::get_sceneIndex
// Il2CppName: get_sceneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::get_sceneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "get_sceneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::AddMeshToList
// Il2CppName: AddMeshToList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)(::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*)>(&GlobalNamespace::PerSceneRenderData::AddMeshToList)> {
  static const MethodInfo* get() {
    static auto* _gO = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mR = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "AddMeshToList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_gO, mR});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::CheckShouldRepopulate
// Il2CppName: CheckShouldRepopulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PerSceneRenderData::*)()>(&GlobalNamespace::PerSceneRenderData::CheckShouldRepopulate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "CheckShouldRepopulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::GetLightmap
// Il2CppName: GetLightmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (GlobalNamespace::PerSceneRenderData::*)(::StringW)>(&GlobalNamespace::PerSceneRenderData::GetLightmap)> {
  static const MethodInfo* get() {
    static auto* timeOfDay = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "GetLightmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeOfDay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::PopulateLightmaps
// Il2CppName: PopulateLightmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)(::StringW, ::StringW, ::ArrayW<::UnityEngine::LightmapData*>)>(&GlobalNamespace::PerSceneRenderData::PopulateLightmaps)> {
  static const MethodInfo* get() {
    static auto* fromTimeOfDay = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toTimeOfDay = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lightmaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "PopulateLightmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromTimeOfDay, toTimeOfDay, lightmaps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::ReleaseLightmap
// Il2CppName: ReleaseLightmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PerSceneRenderData::*)(::StringW)>(&GlobalNamespace::PerSceneRenderData::ReleaseLightmap)> {
  static const MethodInfo* get() {
    static auto* oldTimeOfDay = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerSceneRenderData*), "ReleaseLightmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldTimeOfDay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerSceneRenderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
