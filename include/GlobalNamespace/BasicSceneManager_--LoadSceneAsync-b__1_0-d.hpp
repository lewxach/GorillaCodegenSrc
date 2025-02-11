// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BasicSceneManager
#include "GlobalNamespace/BasicSceneManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d, "", "BasicSceneManager/<<LoadSceneAsync>b__1_0>d");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BasicSceneManager/<<LoadSceneAsync>b__1_0>d
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BasicSceneManager::$$LoadSceneAsync$b__1_0$d/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public OVRAnchor room
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::OVRAnchor room;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRAnchor) == 0x18);
    // public BasicSceneManager <>4__this
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BasicSceneManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicSceneManager*) == 0x8);
    // private UnityEngine.GameObject <roomObject>5__2
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* $roomObject$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<OVRAnchor> <children>5__3
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $children$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*) == 0x8);
    // private OVRTask`1/Awaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $$LoadSceneAsync$b__1_0$d
    constexpr $$LoadSceneAsync$b__1_0$d(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::OVRAnchor room_ = {}, ::GlobalNamespace::BasicSceneManager* $$4__this_ = {}, ::UnityEngine::GameObject* $roomObject$5__2_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* $children$5__3_ = {}, typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, room{room_}, $$4__this{$$4__this_}, $roomObject$5__2{$roomObject$5__2_}, $children$5__3{$children$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public OVRAnchor room
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRAnchor& dyn_room();
    // Get instance field reference: public BasicSceneManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicSceneManager*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.GameObject <roomObject>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_$roomObject$5__2();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRAnchor> <children>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& dyn_$children$5__3();
    // Get instance field reference: private OVRTask`1/Awaiter<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x293DAD0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x293DEC8
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BasicSceneManager/<<LoadSceneAsync>b__1_0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::*)()>(&GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSceneManager::$$LoadSceneAsync$b__1_0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
