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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2, "", "BasicSceneManager/<CreateSceneAnchors>d__2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BasicSceneManager/<CreateSceneAnchors>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BasicSceneManager::$CreateSceneAnchors$d__2/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public UnityEngine.GameObject roomGameObject
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* roomGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Collections.Generic.List`1<OVRAnchor> anchors
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $CreateSceneAnchors$d__2
    constexpr $CreateSceneAnchors$d__2(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::UnityEngine::GameObject* roomGameObject_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, roomGameObject{roomGameObject_}, anchors{anchors_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public UnityEngine.GameObject roomGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_roomGameObject();
    // Get instance field reference: public System.Collections.Generic.List`1<OVRAnchor> anchors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& dyn_anchors();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x293E3D8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x293E664
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BasicSceneManager/<CreateSceneAnchors>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::*)()>(&GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicSceneManager::$CreateSceneAnchors$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
