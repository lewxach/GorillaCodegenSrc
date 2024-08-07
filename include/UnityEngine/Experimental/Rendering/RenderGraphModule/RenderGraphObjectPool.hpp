// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphObjectPool
  class RenderGraphObjectPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphObjectPool");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderGraphObjectPool : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase
    class SharedObjectPoolBase;
    // Nested type: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>
    template<typename T>
    class SharedObjectPool_1;
    public:
    // private System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> m_ArrayPool
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int>, ::System::Collections::Generic::Stack_1<::Il2CppObject*>*>* m_ArrayPool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int>, ::System::Collections::Generic::Stack_1<::Il2CppObject*>*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> m_AllocatedArrays
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Il2CppObject*, ::System::ValueTuple_2<::System::Type*, int>>>* m_AllocatedArrays;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Il2CppObject*, ::System::ValueTuple_2<::System::Type*, int>>>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> m_AllocatedMaterialPropertyBlocks
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_AllocatedMaterialPropertyBlocks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> m_ArrayPool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int>, ::System::Collections::Generic::Stack_1<::Il2CppObject*>*>*& dyn_m_ArrayPool();
    // Get instance field reference: private System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> m_AllocatedArrays
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Il2CppObject*, ::System::ValueTuple_2<::System::Type*, int>>>*& dyn_m_AllocatedArrays();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> m_AllocatedMaterialPropertyBlocks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& dyn_m_AllocatedMaterialPropertyBlocks();
    // System.Void .ctor()
    // Offset: 0x5230DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderGraphObjectPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderGraphObjectPool*, creationType>()));
    }
    // public T[] GetTempArray(System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetTempArray(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetTempArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(size)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, size);
    }
    // System.Void ReleaseAllTempAlloc()
    // Offset: 0x52382B0
    void ReleaseAllTempAlloc();
    // T Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // System.Void Release(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Release(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, value);
    }
    // System.Void Cleanup()
    // Offset: 0x52315D0
    void Cleanup();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
  #pragma pack(pop)
  static check_size<sizeof(RenderGraphObjectPool), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*)> __UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPoolSizeCheck;
  static_assert(sizeof(RenderGraphObjectPool) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::GetTempArray
// Il2CppName: GetTempArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc
// Il2CppName: ReleaseAllTempAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::ReleaseAllTempAlloc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*), "ReleaseAllTempAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Release
// Il2CppName: Release
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
