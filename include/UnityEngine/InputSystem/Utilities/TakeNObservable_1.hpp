// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IObservable`1
#include "System/IObservable_1.hpp"
// Including type: System.IObserver`1
#include "System/IObserver_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: Take because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: TakeNObservable`1<TValue>
  template<typename TValue>
  class TakeNObservable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::TakeNObservable_1, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.TakeNObservable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class TakeNObservable_1 : public ::Il2CppObject/*, public ::System::IObservable_1<TValue>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take<TValue>
    class Take;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.InputSystem.Utilities.TakeNObservable`1/Take
    // [TokenAttribute] Offset: FFFFFFFF
    class Take : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::IObserver_1<TValue>*/ {
      public:
      using declaring_type = TakeNObservable_1<TValue>*;
      static constexpr std::string_view NESTED_NAME = "Take";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private System.IObserver`1<TValue> m_Observer
      // Size: 0x8
      // Offset: 0x0
      ::System::IObserver_1<TValue>* m_Observer;
      // Field size check
      static_assert(sizeof(::System::IObserver_1<TValue>*) == 0x8);
      // private System.Int32 m_Remaining
      // Size: 0x4
      // Offset: 0x0
      int m_Remaining;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating interface conversion operator: operator ::System::IObserver_1<TValue>
      operator ::System::IObserver_1<TValue>() noexcept {
        return *reinterpret_cast<::System::IObserver_1<TValue>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.IObserver`1<TValue> m_Observer
      [[deprecated("Use field access instead!")]] ::System::IObserver_1<TValue>*& dyn_m_Observer() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::dyn_m_Observer");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Observer"))->offset;
        return *reinterpret_cast<::System::IObserver_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 m_Remaining
      [[deprecated("Use field access instead!")]] int& dyn_m_Remaining() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::dyn_m_Remaining");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Remaining"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(UnityEngine.InputSystem.Utilities.TakeNObservable`1<TValue> observable, System.IObserver`1<TValue> observer)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TakeNObservable_1<TValue>::Take* New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TakeNObservable_1<TValue>::Take*, creationType>(observable, observer)));
      }
      // public System.Void OnCompleted()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnCompleted() {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::OnCompleted");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Take*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // public System.Void OnError(System.Exception error)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnError(::System::Exception* error) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::OnError");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Take*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, error);
      }
      // public System.Void OnNext(TValue evt)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void OnNext(TValue evt) {
        static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Take::OnNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Take*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, evt);
      }
    }; // UnityEngine.InputSystem.Utilities.TakeNObservable`1/Take
    // Could not write size check! Type: UnityEngine.InputSystem.Utilities.TakeNObservable`1/Take is generic, or has no fields that are valid for size checks!
    public:
    // private System.IObservable`1<TValue> m_Source
    // Size: 0x8
    // Offset: 0x0
    ::System::IObservable_1<TValue>* m_Source;
    // Field size check
    static_assert(sizeof(::System::IObservable_1<TValue>*) == 0x8);
    // private System.Int32 m_Count
    // Size: 0x4
    // Offset: 0x0
    int m_Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IObservable_1<TValue>
    operator ::System::IObservable_1<TValue>() noexcept {
      return *reinterpret_cast<::System::IObservable_1<TValue>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.IObservable`1<TValue> m_Source
    [[deprecated("Use field access instead!")]] ::System::IObservable_1<TValue>*& dyn_m_Source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::dyn_m_Source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Source"))->offset;
      return *reinterpret_cast<::System::IObservable_1<TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 m_Count
    [[deprecated("Use field access instead!")]] int& dyn_m_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::dyn_m_Count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.IObservable`1<TValue> source, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TakeNObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>* source, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TakeNObservable_1<TValue>*, creationType>(source, count)));
    }
    // public System.IDisposable Subscribe(System.IObserver`1<TValue> observer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>* observer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::TakeNObservable_1::Subscribe");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal__method, observer);
    }
  }; // UnityEngine.InputSystem.Utilities.TakeNObservable`1
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.TakeNObservable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
