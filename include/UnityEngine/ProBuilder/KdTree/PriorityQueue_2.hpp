// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.ItemPriority`2
#include "UnityEngine/ProBuilder/KdTree/ItemPriority_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: PriorityQueue`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  class PriorityQueue_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.PriorityQueue`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TItem, typename TPriority>
  class PriorityQueue_2 : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*) == 0x8);
    // private UnityEngine.ProBuilder.KdTree.ItemPriority`2<TItem,TPriority>[] queue
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>> queue;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>) == 0x8);
    // private System.Int32 capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*& dyn_priorityMath() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_priorityMath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "priorityMath"))->offset;
      return *reinterpret_cast<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.ItemPriority`2<TItem,TPriority>[] queue
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>& dyn_queue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_queue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "queue"))->offset;
      return *reinterpret_cast<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 capacity
    [[deprecated("Use field access instead!")]] int& dyn_capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_capacity");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 capacity, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PriorityQueue_2<TItem, TPriority>* New_ctor(int capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PriorityQueue_2<TItem, TPriority>*, creationType>(capacity, priorityMath)));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void ExpandCapacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ExpandCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::ExpandCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExpandCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Enqueue(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enqueue(TItem item, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::Enqueue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item, priority);
    }
    // public TItem Dequeue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TItem Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::Dequeue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TItem, false>(this, ___internal__method);
    }
    // private System.Void ReorderItem(System.Int32 index, System.Int32 direction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReorderItem(int index, int direction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::ReorderItem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReorderItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(direction)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, direction);
    }
    // public TPriority GetHighestPriority()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TPriority GetHighestPriority() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::PriorityQueue_2::GetHighestPriority");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHighestPriority", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TPriority, false>(this, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.KdTree.PriorityQueue`2
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.PriorityQueue`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
