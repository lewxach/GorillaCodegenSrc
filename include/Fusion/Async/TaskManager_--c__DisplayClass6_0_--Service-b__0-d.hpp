// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Async.TaskManager/<>c__DisplayClass6_0
#include "Fusion/Async/TaskManager_--c__DisplayClass6_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d, "Fusion.Async", "TaskManager/<>c__DisplayClass6_0/<<Service>b__0>d");
// Type namespace: Fusion.Async
namespace Fusion::Async {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Async.TaskManager/<>c__DisplayClass6_0/<<Service>b__0>d
  // [TokenAttribute] Offset: FFFFFFFF
  struct TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public Fusion.Async.TaskManager/<>c__DisplayClass6_0 <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Async::TaskManager::$$c__DisplayClass6_0* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::Async::TaskManager::$$c__DisplayClass6_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2;
    public:
    // Creating value type constructor for type: $$Service$b__0$d
    constexpr $$Service$b__0$d(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::Fusion::Async::TaskManager::$$c__DisplayClass6_0* $$4__this_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public Fusion.Async.TaskManager/<>c__DisplayClass6_0 <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::Async::TaskManager::$$c__DisplayClass6_0*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x2ADBC68
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2ADC098
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Fusion.Async.TaskManager/<>c__DisplayClass6_0/<<Service>b__0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::*)()>(&Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Async::TaskManager::$$c__DisplayClass6_0::$$Service$b__0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
