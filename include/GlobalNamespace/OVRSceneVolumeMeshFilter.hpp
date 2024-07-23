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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshFilter
  class MeshFilter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneVolumeMeshFilter
  class OVRSceneVolumeMeshFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolumeMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolumeMeshFilter*, "", "OVRSceneVolumeMeshFilter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneVolumeMeshFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class OVRSceneVolumeMeshFilter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRSceneVolumeMeshFilter::GetTriangleMeshCountsJob
    struct GetTriangleMeshCountsJob;
    // Nested type: ::GlobalNamespace::OVRSceneVolumeMeshFilter::GetTriangleMeshJob
    struct GetTriangleMeshJob;
    // Nested type: ::GlobalNamespace::OVRSceneVolumeMeshFilter::PopulateMeshDataJob
    struct PopulateMeshDataJob;
    // Nested type: ::GlobalNamespace::OVRSceneVolumeMeshFilter::BakeMeshJob
    struct BakeMeshJob;
    // Nested type: ::GlobalNamespace::OVRSceneVolumeMeshFilter::$CreateVolumeMesh$d__7
    class $CreateVolumeMesh$d__7;
    public:
    // private System.Boolean <IsCompleted>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IsCompleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsCompleted and: mesh
    char __padding0[0x7] = {};
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <IsCompleted>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsCompleted$k__BackingField();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x4927530
    bool get_IsCompleted();
    // private System.Void set_IsCompleted(System.Boolean value)
    // Offset: 0x4927538
    void set_IsCompleted(bool value);
    // private System.Void Start()
    // Offset: 0x4927544
    void Start();
    // private System.Collections.IEnumerator CreateVolumeMesh()
    // Offset: 0x4927630
    ::System::Collections::IEnumerator* CreateVolumeMesh();
    // static private System.Boolean IsJobDone(Unity.Jobs.JobHandle job)
    // Offset: 0x49276C4
    static bool IsJobDone(::Unity::Jobs::JobHandle job);
    // public System.Void .ctor()
    // Offset: 0x4927700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneVolumeMeshFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneVolumeMeshFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneVolumeMeshFilter*, creationType>()));
    }
  }; // OVRSceneVolumeMeshFilter
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneVolumeMeshFilter), 48 + sizeof(::UnityEngine::MeshFilter*)> __GlobalNamespace_OVRSceneVolumeMeshFilterSizeCheck;
  static_assert(sizeof(OVRSceneVolumeMeshFilter) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted
// Il2CppName: set_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolumeMeshFilter::*)(bool)>(&GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter*), "set_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh
// Il2CppName: CreateVolumeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter*), "CreateVolumeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone
// Il2CppName: IsJobDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Jobs::JobHandle)>(&GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone)> {
  static const MethodInfo* get() {
    static auto* job = &::il2cpp_utils::GetClassFromName("Unity.Jobs", "JobHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolumeMeshFilter*), "IsJobDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{job});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolumeMeshFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!