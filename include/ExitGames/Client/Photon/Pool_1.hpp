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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Pool`1<T>
  template<typename T>
  class Pool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ExitGames::Client::Photon::Pool_1, "ExitGames.Client.Photon", "Pool`1");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // WARNING Size may be invalid!
  // Autogenerated type: ExitGames.Client.Photon.Pool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Pool_1 : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Func`1<T> createFunction
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* createFunction;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<T> pool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Queue_1<T>* pool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<T>*) == 0x8);
    // private readonly System.Action`1<T> resetFunction
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* resetFunction;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`1<T> createFunction
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_createFunction() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::dyn_createFunction");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "createFunction"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Queue`1<T> pool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<T>*& dyn_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::dyn_pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Queue_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> resetFunction
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_resetFunction() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::dyn_resetFunction");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resetFunction"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Func`1<T> createFunction, System.Action`1<T> resetFunction, System.Int32 poolCapacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pool_1<T>* New_ctor(::System::Func_1<T>* createFunction, ::System::Action_1<T>* resetFunction, int poolCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pool_1<T>*, creationType>(createFunction, resetFunction, poolCapacity)));
    }
    // public System.Void .ctor(System.Func`1<T> createFunction, System.Int32 poolCapacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pool_1<T>* New_ctor(::System::Func_1<T>* createFunction, int poolCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pool_1<T>*, creationType>(createFunction, poolCapacity)));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void CreatePoolItems(System.Int32 numItems)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CreatePoolItems(int numItems) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::CreatePoolItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreatePoolItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numItems)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, numItems);
    }
    // public System.Void Push(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Push(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::Push");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Push", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Release(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::Pop");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Pop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T Acquire()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Acquire() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Pool_1::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
  }; // ExitGames.Client.Photon.Pool`1
  // Could not write size check! Type: ExitGames.Client.Photon.Pool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
