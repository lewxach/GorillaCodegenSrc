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
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: LinkedPoolItem`1<T>
  template<typename T>
  class LinkedPoolItem_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: LinkedPool`1<T>
  template<typename T>
  class LinkedPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPool_1, "UnityEngine.UIElements.UIR", "LinkedPool`1");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.LinkedPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LinkedPool_1 : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Func`1<T> m_CreateFunc
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* m_CreateFunc;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // private readonly System.Action`1<T> m_ResetAction
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* m_ResetAction;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    // private readonly System.Int32 m_Limit
    // Size: 0x4
    // Offset: 0x0
    int m_Limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T m_PoolFirst
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T m_PoolFirst;
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`1<T> m_CreateFunc
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_m_CreateFunc() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::dyn_m_CreateFunc");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CreateFunc"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> m_ResetAction
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_m_ResetAction() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::dyn_m_ResetAction");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ResetAction"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 m_Limit
    [[deprecated("Use field access instead!")]] int& dyn_m_Limit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::dyn_m_Limit");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Limit"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T m_PoolFirst
    [[deprecated("Use field access instead!")]] T& dyn_m_PoolFirst() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::dyn_m_PoolFirst");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_PoolFirst"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <Count>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Count$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::dyn_$Count$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Count>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Func`1<T> createFunc, System.Action`1<T> resetAction, System.Int32 limit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedPool_1<T>* New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* resetAction, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedPool_1<T>*, creationType>(createFunc, resetAction, limit)));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Count(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::set_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public T Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Return(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Return(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::LinkedPool_1::Return");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Return", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
  }; // UnityEngine.UIElements.UIR.LinkedPool`1
  // Could not write size check! Type: UnityEngine.UIElements.UIR.LinkedPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
