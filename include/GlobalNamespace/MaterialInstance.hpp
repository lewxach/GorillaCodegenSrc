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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MaterialInstance
  class MaterialInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialInstance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialInstance*, "", "MaterialInstance");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MaterialInstance
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class MaterialInstance : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Renderer cachedRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* cachedRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Material[] defaultMaterials
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Material*> defaultMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.Material[] instanceMaterials
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Material*> instanceMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.Material[] cachedSharedMaterials
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Material*> cachedSharedMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private System.Boolean initialized
    // Size: 0x1
    // Offset: 0x40
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean materialsInstanced
    // Size: 0x1
    // Offset: 0x41
    bool materialsInstanced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean cacheSharedMaterialsFromRenderer
    // Size: 0x1
    // Offset: 0x42
    bool cacheSharedMaterialsFromRenderer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cacheSharedMaterialsFromRenderer and: materialOwners
    char __padding6[0x5] = {};
    // private readonly System.Collections.Generic.HashSet`1<UnityEngine.Object> materialOwners
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>* materialOwners;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*) == 0x8);
    public:
    // static field const value: static private System.String instancePostfix
    static constexpr const char* instancePostfix = " (Instance)";
    // Get static field: static private System.String instancePostfix
    static ::StringW _get_instancePostfix();
    // Set static field: static private System.String instancePostfix
    static void _set_instancePostfix(::StringW value);
    // Get instance field reference: private UnityEngine.Renderer cachedRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_cachedRenderer();
    // Get instance field reference: private UnityEngine.Material[] defaultMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_defaultMaterials();
    // Get instance field reference: private UnityEngine.Material[] instanceMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_instanceMaterials();
    // Get instance field reference: private UnityEngine.Material[] cachedSharedMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_cachedSharedMaterials();
    // Get instance field reference: private System.Boolean initialized
    [[deprecated("Use field access instead!")]] bool& dyn_initialized();
    // Get instance field reference: private System.Boolean materialsInstanced
    [[deprecated("Use field access instead!")]] bool& dyn_materialsInstanced();
    // Get instance field reference: private System.Boolean cacheSharedMaterialsFromRenderer
    [[deprecated("Use field access instead!")]] bool& dyn_cacheSharedMaterialsFromRenderer();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<UnityEngine.Object> materialOwners
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*& dyn_materialOwners();
    // public UnityEngine.Material AcquireMaterial(UnityEngine.Object owner, System.Boolean instance)
    // Offset: 0x274EC24
    ::UnityEngine::Material* AcquireMaterial(::UnityEngine::Object* owner, bool instance);
    // public UnityEngine.Material[] AcquireMaterials(UnityEngine.Object owner, System.Boolean instance)
    // Offset: 0x274ED84
    ::ArrayW<::UnityEngine::Material*> AcquireMaterials(::UnityEngine::Object* owner, bool instance);
    // public System.Void ReleaseMaterial(UnityEngine.Object owner, System.Boolean autoDestroy)
    // Offset: 0x274EE60
    void ReleaseMaterial(::UnityEngine::Object* owner, bool autoDestroy);
    // public UnityEngine.Material get_Material()
    // Offset: 0x274F070
    ::UnityEngine::Material* get_Material();
    // public UnityEngine.Material[] get_Materials()
    // Offset: 0x274F07C
    ::ArrayW<::UnityEngine::Material*> get_Materials();
    // public System.Boolean get_CacheSharedMaterialsFromRenderer()
    // Offset: 0x274F088
    bool get_CacheSharedMaterialsFromRenderer();
    // public System.Void set_CacheSharedMaterialsFromRenderer(System.Boolean value)
    // Offset: 0x274F090
    void set_CacheSharedMaterialsFromRenderer(bool value);
    // private UnityEngine.Renderer get_CachedRenderer()
    // Offset: 0x274F0F0
    ::UnityEngine::Renderer* get_CachedRenderer();
    // private UnityEngine.Material[] get_CachedRendererSharedMaterials()
    // Offset: 0x274F1C4
    ::ArrayW<::UnityEngine::Material*> get_CachedRendererSharedMaterials();
    // private System.Void set_CachedRendererSharedMaterials(UnityEngine.Material[] value)
    // Offset: 0x274F224
    void set_CachedRendererSharedMaterials(::ArrayW<::UnityEngine::Material*> value);
    // private System.Void Awake()
    // Offset: 0x274F26C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x274F334
    void OnDestroy();
    // private System.Void RestoreRenderer()
    // Offset: 0x274EFD8
    void RestoreRenderer();
    // private System.Void Initialize()
    // Offset: 0x274F270
    void Initialize();
    // private System.Void AcquireInstances()
    // Offset: 0x274ECEC
    void AcquireInstances();
    // private System.Void CreateInstances()
    // Offset: 0x274F600
    void CreateInstances();
    // static private System.Boolean MaterialsMatch(UnityEngine.Material[] a, UnityEngine.Material[] b)
    // Offset: 0x274F444
    static bool MaterialsMatch(::ArrayW<::UnityEngine::Material*> a, ::ArrayW<::UnityEngine::Material*> b);
    // static private UnityEngine.Material[] InstanceMaterials(UnityEngine.Material[] source)
    // Offset: 0x274F6B8
    static ::ArrayW<::UnityEngine::Material*> InstanceMaterials(::ArrayW<::UnityEngine::Material*> source);
    // static private System.Void DestroyMaterials(UnityEngine.Material[] materials)
    // Offset: 0x274F338
    static void DestroyMaterials(::ArrayW<::UnityEngine::Material*> materials);
    // static private System.Boolean IsInstanceMaterial(UnityEngine.Material material)
    // Offset: 0x274F934
    static bool IsInstanceMaterial(::UnityEngine::Material* material);
    // static private System.Boolean HasValidMaterial(UnityEngine.Material[] materials)
    // Offset: 0x274F390
    static bool HasValidMaterial(::ArrayW<::UnityEngine::Material*> materials);
    // static private System.Void DestroySafe(UnityEngine.Object toDestroy)
    // Offset: 0x274EF20
    static void DestroySafe(::UnityEngine::Object* toDestroy);
    // public System.Void .ctor()
    // Offset: 0x274F9DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialInstance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialInstance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialInstance*, creationType>()));
    }
  }; // MaterialInstance
  #pragma pack(pop)
  static check_size<sizeof(MaterialInstance), 72 + sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*)> __GlobalNamespace_MaterialInstanceSizeCheck;
  static_assert(sizeof(MaterialInstance) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::AcquireMaterial
// Il2CppName: AcquireMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&GlobalNamespace::MaterialInstance::AcquireMaterial)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "AcquireMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner, instance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::AcquireMaterials
// Il2CppName: AcquireMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&GlobalNamespace::MaterialInstance::AcquireMaterials)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "AcquireMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner, instance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::ReleaseMaterial
// Il2CppName: ReleaseMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)(::UnityEngine::Object*, bool)>(&GlobalNamespace::MaterialInstance::ReleaseMaterial)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* autoDestroy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "ReleaseMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner, autoDestroy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::get_Material
// Il2CppName: get_Material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::get_Material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "get_Material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::get_Materials
// Il2CppName: get_Materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::get_Materials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "get_Materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::get_CacheSharedMaterialsFromRenderer
// Il2CppName: get_CacheSharedMaterialsFromRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::get_CacheSharedMaterialsFromRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "get_CacheSharedMaterialsFromRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::set_CacheSharedMaterialsFromRenderer
// Il2CppName: set_CacheSharedMaterialsFromRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)(bool)>(&GlobalNamespace::MaterialInstance::set_CacheSharedMaterialsFromRenderer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "set_CacheSharedMaterialsFromRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::get_CachedRenderer
// Il2CppName: get_CachedRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::get_CachedRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "get_CachedRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::get_CachedRendererSharedMaterials
// Il2CppName: get_CachedRendererSharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::get_CachedRendererSharedMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "get_CachedRendererSharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::set_CachedRendererSharedMaterials
// Il2CppName: set_CachedRendererSharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)(::ArrayW<::UnityEngine::Material*>)>(&GlobalNamespace::MaterialInstance::set_CachedRendererSharedMaterials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "set_CachedRendererSharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::RestoreRenderer
// Il2CppName: RestoreRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::RestoreRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "RestoreRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::AcquireInstances
// Il2CppName: AcquireInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::AcquireInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "AcquireInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::CreateInstances
// Il2CppName: CreateInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialInstance::*)()>(&GlobalNamespace::MaterialInstance::CreateInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "CreateInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::MaterialsMatch
// Il2CppName: MaterialsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Material*>, ::ArrayW<::UnityEngine::Material*>)>(&GlobalNamespace::MaterialInstance::MaterialsMatch)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "MaterialsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::InstanceMaterials
// Il2CppName: InstanceMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (*)(::ArrayW<::UnityEngine::Material*>)>(&GlobalNamespace::MaterialInstance::InstanceMaterials)> {
  static const MethodInfo* get() {
    static auto* source = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "InstanceMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::DestroyMaterials
// Il2CppName: DestroyMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Material*>)>(&GlobalNamespace::MaterialInstance::DestroyMaterials)> {
  static const MethodInfo* get() {
    static auto* materials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "DestroyMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materials});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::IsInstanceMaterial
// Il2CppName: IsInstanceMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Material*)>(&GlobalNamespace::MaterialInstance::IsInstanceMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "IsInstanceMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::HasValidMaterial
// Il2CppName: HasValidMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Material*>)>(&GlobalNamespace::MaterialInstance::HasValidMaterial)> {
  static const MethodInfo* get() {
    static auto* materials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "HasValidMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materials});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::DestroySafe
// Il2CppName: DestroySafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&GlobalNamespace::MaterialInstance::DestroySafe)> {
  static const MethodInfo* get() {
    static auto* toDestroy = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialInstance*), "DestroySafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toDestroy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialInstance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!