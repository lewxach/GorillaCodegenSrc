// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/IRenderGraphResourcePool.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Skipping declaration: ResourceLogInfo because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: RenderGraphLogger
  class RenderGraphLogger;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: SortedList`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class SortedList_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphResourcePool`1<Type>
  template<typename Type>
  class RenderGraphResourcePool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphResourcePool`1");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename Type>
  class RenderGraphResourcePool_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool {
    public:
    // Nested type: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ResourceLogInfo<Type>
    struct ResourceLogInfo;
    // Nested type: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c<Type>
    class $$c;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct ResourceLogInfo : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
      public:
      using declaring_type = RenderGraphResourcePool_1<Type>*;
      static constexpr std::string_view NESTED_NAME = "ResourceLogInfo";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.String name
      // Size: 0x8
      // Offset: 0x0
      ::StringW name;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.Int64 size
      // Size: 0x8
      // Offset: 0x0
      int64_t size;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      public:
      // Creating value type constructor for type: ResourceLogInfo
      constexpr ResourceLogInfo(::StringW name_ = {}, int64_t size_ = {}) noexcept : name{name_}, size{size_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.String name
      [[deprecated("Use field access instead!")]] ::StringW& dyn_name() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ResourceLogInfo::dyn_name");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "name"))->offset;
        return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int64 size
      [[deprecated("Use field access instead!")]] int64_t& dyn_size() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ResourceLogInfo::dyn_size");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "size"))->offset;
        return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
    // Could not write size check! Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = RenderGraphResourcePool_1<Type>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c<Type> <>9
      static typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename RenderGraphResourcePool_1<Type>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c<Type> <>9
      static void _set_$$9(typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename RenderGraphResourcePool_1<Type>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Comparison`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type>> <>9__17_0
      static ::System::Comparison_1<typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ResourceLogInfo>* _get_$$9__17_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::_get_$$9__17_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Comparison_1<typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ResourceLogInfo>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename RenderGraphResourcePool_1<Type>::$$c*>::get(), "<>9__17_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Comparison`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type>> <>9__17_0
      static void _set_$$9__17_0(::System::Comparison_1<typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ResourceLogInfo>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::_set_$$9__17_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename RenderGraphResourcePool_1<Type>::$$c*>::get(), "<>9__17_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename RenderGraphResourcePool_1<Type>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename RenderGraphResourcePool_1<Type>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename RenderGraphResourcePool_1<Type>::$$c*, creationType>()));
      }
      // System.Int32 <LogResources>b__17_0(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type> a, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type> b)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int $LogResources$b__17_0(typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ResourceLogInfo a, typename ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ResourceLogInfo b) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::$$c::<LogResources>b__17_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<LogResources>b__17_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, a, b);
      }
    }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c
    // Could not write size check! Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c is generic, or has no fields that are valid for size checks!
    public:
    // protected System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.SortedList`2<System.Int32,System.ValueTuple`2<Type,System.Int32>>> m_ResourcePool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::SortedList_2<int, ::System::ValueTuple_2<Type, int>>*>* m_ResourcePool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::SortedList_2<int, ::System::ValueTuple_2<Type, int>>*>*) == 0x8);
    // protected System.Collections.Generic.List`1<System.Int32> m_RemoveList
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<int>* m_RemoveList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,Type>> m_FrameAllocatedResources
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int, Type>>* m_FrameAllocatedResources;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<int, Type>>*) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static protected System.Int32 s_CurrentFrameIndex
    static int _get_s_CurrentFrameIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::_get_s_CurrentFrameIndex");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphResourcePool_1<Type>*>::get(), "s_CurrentFrameIndex"));
    }
    // Autogenerated static field setter
    // Set static field: static protected System.Int32 s_CurrentFrameIndex
    static void _set_s_CurrentFrameIndex(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::_set_s_CurrentFrameIndex");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphResourcePool_1<Type>*>::get(), "s_CurrentFrameIndex", value));
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.SortedList`2<System.Int32,System.ValueTuple`2<Type,System.Int32>>> m_ResourcePool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::SortedList_2<int, ::System::ValueTuple_2<Type, int>>*>*& dyn_m_ResourcePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::dyn_m_ResourcePool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ResourcePool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::SortedList_2<int, ::System::ValueTuple_2<Type, int>>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Collections.Generic.List`1<System.Int32> m_RemoveList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_m_RemoveList() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::dyn_m_RemoveList");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_RemoveList"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,Type>> m_FrameAllocatedResources
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<int, Type>>*& dyn_m_FrameAllocatedResources() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::dyn_m_FrameAllocatedResources");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_FrameAllocatedResources"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<int, Type>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void ReleaseInternalResource(Type res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReleaseInternalResource(Type res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ReleaseInternalResource");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, res);
    }
    // protected System.String GetResourceName(Type res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetResourceName(Type res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::GetResourceName");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, res);
    }
    // protected System.Int64 GetResourceSize(Type res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t GetResourceSize(Type res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::GetResourceSize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int64_t, false>(this, ___internal__method, res);
    }
    // protected System.String GetResourceTypeName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetResourceTypeName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::GetResourceTypeName");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // protected System.Int32 GetSortIndex(Type res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetSortIndex(Type res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::GetSortIndex");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, res);
    }
    // public System.Void ReleaseResource(System.Int32 hash, Type resource, System.Int32 currentFrameIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReleaseResource(int hash, Type resource, int currentFrameIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ReleaseResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReleaseResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hash), ::il2cpp_utils::ExtractType(resource), ::il2cpp_utils::ExtractType(currentFrameIndex)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, hash, resource, currentFrameIndex);
    }
    // public System.Boolean TryGetResource(System.Int32 hashCode, out Type resource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetResource(int hashCode, ByRef<Type> resource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::TryGetResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hashCode), ::il2cpp_utils::ExtractIndependentType<Type&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, hashCode, byref(resource));
    }
    // public System.Void RegisterFrameAllocation(System.Int32 hash, Type value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterFrameAllocation(int hash, Type value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::RegisterFrameAllocation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterFrameAllocation", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hash), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, hash, value);
    }
    // public System.Void UnregisterFrameAllocation(System.Int32 hash, Type value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterFrameAllocation(int hash, Type value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::UnregisterFrameAllocation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UnregisterFrameAllocation", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hash), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, hash, value);
    }
    // static protected System.Boolean ShouldReleaseResource(System.Int32 lastUsedFrameIndex, System.Int32 currentFrameIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool ShouldReleaseResource(int lastUsedFrameIndex, int currentFrameIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::ShouldReleaseResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphResourcePool_1<Type>*>::get(), "ShouldReleaseResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(lastUsedFrameIndex), ::il2cpp_utils::ExtractType(currentFrameIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, lastUsedFrameIndex, currentFrameIndex);
    }
    // public override System.Void Cleanup()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
    // Base method: System.Void IRenderGraphResourcePool::Cleanup()
    void Cleanup() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::Cleanup");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Void CheckFrameAllocation(System.Boolean onException, System.Int32 frameIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
    // Base method: System.Void IRenderGraphResourcePool::CheckFrameAllocation(System.Boolean onException, System.Int32 frameIndex)
    void CheckFrameAllocation(bool onException, int frameIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::CheckFrameAllocation");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, onException, frameIndex);
    }
    // public override System.Void LogResources(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
    // Base method: System.Void IRenderGraphResourcePool::LogResources(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    void LogResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::LogResources");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, logger);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
    // Base method: System.Void IRenderGraphResourcePool::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderGraphResourcePool_1<Type>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderGraphResourcePool_1<Type>*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1
  // Could not write size check! Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
