// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.UIElements.Vertex
#include "UnityEngine/UIElements/Vertex.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeSlice`1<T>
  template<typename T>
  struct NativeSlice_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: OpacityIdAccelerator
  class OpacityIdAccelerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::OpacityIdAccelerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*, "UnityEngine.UIElements.UIR", "OpacityIdAccelerator");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.OpacityIdAccelerator
  // [TokenAttribute] Offset: FFFFFFFF
  class OpacityIdAccelerator : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::UIR::OpacityIdAccelerator::OpacityIdUpdateJob
    struct OpacityIdUpdateJob;
    public:
    // private Unity.Collections.NativeArray`1<Unity.Jobs.JobHandle> m_Jobs
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> m_Jobs;
    // private System.Int32 m_NextJobIndex
    // Size: 0x4
    // Offset: 0x20
    int m_NextJobIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Unity.Collections.NativeArray`1<Unity.Jobs.JobHandle> m_Jobs
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>& dyn_m_Jobs();
    // Get instance field reference: private System.Int32 m_NextJobIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_NextJobIndex();
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // public System.Void CreateJob(Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex> oldVerts, Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex> newVerts, UnityEngine.Color32 opacityData, System.Int32 vertexCount)
    // Offset: 0x55CDFA0
    void CreateJob(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> oldVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> newVerts, ::UnityEngine::Color32 opacityData, int vertexCount);
    // public System.Void CompleteJobs()
    // Offset: 0x55CE094
    void CompleteJobs();
    // protected System.Boolean get_disposed()
    // Offset: 0x55CE12C
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x55CE134
    void set_disposed(bool value);
    // public System.Void Dispose()
    // Offset: 0x55CE140
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x55CE1AC
    void Dispose(bool disposing);
    // public System.Void .ctor()
    // Offset: 0x55CE210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpacityIdAccelerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::OpacityIdAccelerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpacityIdAccelerator*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.OpacityIdAccelerator
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::CreateJob
// Il2CppName: CreateJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::UnityEngine::Color32, int)>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::CreateJob)> {
  static const MethodInfo* get() {
    static auto* oldVerts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeSlice`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Vertex")})->byval_arg;
    static auto* newVerts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeSlice`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Vertex")})->byval_arg;
    static auto* opacityData = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "CreateJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldVerts, newVerts, opacityData, vertexCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::CompleteJobs
// Il2CppName: CompleteJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)()>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::CompleteJobs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "CompleteJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)()>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)(bool)>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)()>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::OpacityIdAccelerator::*)(bool)>(&UnityEngine::UIElements::UIR::OpacityIdAccelerator::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::OpacityIdAccelerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::OpacityIdAccelerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
