// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObjectPoolEvents
  class ObjectPoolEvents;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ObjectPool_1, "", "ObjectPool`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ObjectPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectPool_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.Stack`1<T> pool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Stack_1<T>* pool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<T>*) == 0x8);
    // public System.Int32 maxInstances
    // Size: 0x4
    // Offset: 0x0
    int maxInstances;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Stack`1<T> pool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<T>*& dyn_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::dyn_pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Stack_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 maxInstances
    [[deprecated("Use field access instead!")]] int& dyn_maxInstances() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::dyn_maxInstances");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "maxInstances"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 amount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_1<T>* New_ctor(int amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_1<T>*, creationType>(amount)));
    }
    // public T Take()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Take() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::Take");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Take", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Return(T instance)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Return(T instance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectPool_1::Return");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Return", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(instance)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, instance);
    }
  }; // ObjectPool`1
  // Could not write size check! Type: ObjectPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"