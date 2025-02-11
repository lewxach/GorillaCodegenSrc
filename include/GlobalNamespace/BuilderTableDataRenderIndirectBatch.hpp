// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: Unity.Collections.NativeList`1
#include "Unity/Collections/NativeList_1.hpp"
// Including type: BuilderTableMeshInstances
#include "GlobalNamespace/BuilderTableMeshInstances.hpp"
// Including type: UnityEngine.GraphicsBuffer/IndirectDrawIndexedArgs
#include "UnityEngine/GraphicsBuffer_IndirectDrawIndexedArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: GraphicsBuffer because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BuilderTableDataRenderIndirectBatch
  class BuilderTableDataRenderIndirectBatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BuilderTableDataRenderIndirectBatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*, "", "BuilderTableDataRenderIndirectBatch");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BuilderTableDataRenderIndirectBatch
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderTableDataRenderIndirectBatch : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 totalInstances
    // Size: 0x4
    // Offset: 0x10
    int totalInstances;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4> instanceObjectToWorld
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> instanceObjectToWorld;
    // public Unity.Collections.NativeArray`1<System.Int32> instanceTexIndex
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::Unity::Collections::NativeArray_1<int> instanceTexIndex;
    // public Unity.Collections.NativeArray`1<System.Single> instanceTint
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::Unity::Collections::NativeArray_1<float> instanceTint;
    // public Unity.Collections.NativeArray`1<System.Int32> instanceLodLevel
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::Unity::Collections::NativeArray_1<int> instanceLodLevel;
    // public Unity.Collections.NativeArray`1<System.Int32> instanceLodLevelDirty
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::Unity::Collections::NativeArray_1<int> instanceLodLevelDirty;
    // public Unity.Collections.NativeList`1<BuilderTableMeshInstances> renderMeshes
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances> renderMeshes;
    // public UnityEngine.GraphicsBuffer commandBuf
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GraphicsBuffer* commandBuf;
    // Field size check
    static_assert(sizeof(::UnityEngine::GraphicsBuffer*) == 0x8);
    // public UnityEngine.GraphicsBuffer matrixBuf
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GraphicsBuffer* matrixBuf;
    // Field size check
    static_assert(sizeof(::UnityEngine::GraphicsBuffer*) == 0x8);
    // public UnityEngine.GraphicsBuffer texIndexBuf
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GraphicsBuffer* texIndexBuf;
    // Field size check
    static_assert(sizeof(::UnityEngine::GraphicsBuffer*) == 0x8);
    // public UnityEngine.GraphicsBuffer tintBuf
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::GraphicsBuffer* tintBuf;
    // Field size check
    static_assert(sizeof(::UnityEngine::GraphicsBuffer*) == 0x8);
    // public Unity.Collections.NativeArray`1<UnityEngine.GraphicsBuffer/IndirectDrawIndexedArgs> commandData
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    ::Unity::Collections::NativeArray_1<::UnityEngine::GraphicsBuffer::IndirectDrawIndexedArgs> commandData;
    // public System.Int32 commandCount
    // Size: 0x4
    // Offset: 0xA0
    int commandCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 totalInstances
    [[deprecated("Use field access instead!")]] int& dyn_totalInstances();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4> instanceObjectToWorld
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>& dyn_instanceObjectToWorld();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> instanceTexIndex
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_instanceTexIndex();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Single> instanceTint
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<float>& dyn_instanceTint();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> instanceLodLevel
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_instanceLodLevel();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> instanceLodLevelDirty
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_instanceLodLevelDirty();
    // Get instance field reference: public Unity.Collections.NativeList`1<BuilderTableMeshInstances> renderMeshes
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>& dyn_renderMeshes();
    // Get instance field reference: public UnityEngine.GraphicsBuffer commandBuf
    [[deprecated("Use field access instead!")]] ::UnityEngine::GraphicsBuffer*& dyn_commandBuf();
    // Get instance field reference: public UnityEngine.GraphicsBuffer matrixBuf
    [[deprecated("Use field access instead!")]] ::UnityEngine::GraphicsBuffer*& dyn_matrixBuf();
    // Get instance field reference: public UnityEngine.GraphicsBuffer texIndexBuf
    [[deprecated("Use field access instead!")]] ::UnityEngine::GraphicsBuffer*& dyn_texIndexBuf();
    // Get instance field reference: public UnityEngine.GraphicsBuffer tintBuf
    [[deprecated("Use field access instead!")]] ::UnityEngine::GraphicsBuffer*& dyn_tintBuf();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.GraphicsBuffer/IndirectDrawIndexedArgs> commandData
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::GraphicsBuffer::IndirectDrawIndexedArgs>& dyn_commandData();
    // Get instance field reference: public System.Int32 commandCount
    [[deprecated("Use field access instead!")]] int& dyn_commandCount();
    // public System.Void .ctor()
    // Offset: 0x26E9DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderTableDataRenderIndirectBatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuilderTableDataRenderIndirectBatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderTableDataRenderIndirectBatch*, creationType>()));
    }
  }; // BuilderTableDataRenderIndirectBatch
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BuilderTableDataRenderIndirectBatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
