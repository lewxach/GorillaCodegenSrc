// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UniqueQueue`1<T>
  template<typename T>
  class UniqueQueue_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::UniqueQueue_1, "", "UniqueQueue`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UniqueQueue`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class UniqueQueue_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    public:
    // private System.Collections.Generic.HashSet`1<T> queuedItems
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::HashSet_1<T>* queuedItems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<T>*) == 0x8);
    // private System.Collections.Generic.Queue`1<T> queue
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Queue_1<T>* queue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.HashSet`1<T> queuedItems
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<T>*& dyn_queuedItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::dyn_queuedItems");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "queuedItems"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::HashSet_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Queue`1<T> queue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<T>*& dyn_queue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::dyn_queue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "queue"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Queue_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueQueue_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueQueue_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueQueue_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueQueue_1<T>*, creationType>(capacity)));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Enqueue(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Enqueue(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public T Dequeue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::Dequeue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean TryDequeue(out T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryDequeue(ByRef<T> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::TryDequeue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryDequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(item));
    }
    // public T Peek()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Peek() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::Peek");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Peek", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::UniqueQueue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UniqueQueue_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::UniqueQueue_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // UniqueQueue`1
  // Could not write size check! Type: UniqueQueue`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"