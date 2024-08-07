// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1, "System.Net", "HttpWebRequest/<RunWithTimeoutWorker>d__241`1");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.HttpWebRequest/<RunWithTimeoutWorker>d__241`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct HttpWebRequest::$RunWithTimeoutWorker$d__241_1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder;
    // public System.Threading.Tasks.Task`1<T> workerTask
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Tasks::Task_1<T>* workerTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<T>*) == 0x8);
    // public System.Int32 timeout
    // Size: 0x4
    // Offset: 0x0
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Threading.CancellationTokenSource cts
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationTokenSource* cts;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // public System.Action abort
    // Size: 0x8
    // Offset: 0x0
    ::System::Action* abort;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Func`1<System.Boolean> aborted
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<bool>* aborted;
    // Field size check
    static_assert(sizeof(::System::Func_1<bool>*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $RunWithTimeoutWorker$d__241_1
    constexpr $RunWithTimeoutWorker$d__241_1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, ::System::Threading::Tasks::Task_1<T>* workerTask_ = {}, int timeout_ = {}, ::System::Threading::CancellationTokenSource* cts_ = {}, ::System::Action* abort_ = {}, ::System::Func_1<bool>* aborted_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, workerTask{workerTask_}, timeout{timeout_}, cts{cts_}, abort{abort_}, aborted{aborted_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>& dyn_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.Tasks.Task`1<T> workerTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<T>*& dyn_workerTask() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_workerTask");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "workerTask"))->offset;
      return *reinterpret_cast<::System::Threading::Tasks::Task_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 timeout
    [[deprecated("Use field access instead!")]] int& dyn_timeout() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_timeout");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "timeout"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.CancellationTokenSource cts
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn_cts() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_cts");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cts"))->offset;
      return *reinterpret_cast<::System::Threading::CancellationTokenSource**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action abort
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_abort() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_abort");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "abort"))->offset;
      return *reinterpret_cast<::System::Action**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<System.Boolean> aborted
    [[deprecated("Use field access instead!")]] ::System::Func_1<bool>*& dyn_aborted() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_aborted");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "aborted"))->offset;
      return *reinterpret_cast<::System::Func_1<bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter& dyn_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::dyn_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::Net::HttpWebRequest::$RunWithTimeoutWorker$d__241_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stateMachine);
    }
  }; // System.Net.HttpWebRequest/<RunWithTimeoutWorker>d__241`1
  // Could not write size check! Type: System.Net.HttpWebRequest/<RunWithTimeoutWorker>d__241`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
