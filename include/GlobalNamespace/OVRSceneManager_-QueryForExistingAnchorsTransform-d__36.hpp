// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSceneManager
#include "GlobalNamespace/OVRSceneManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: OVRObjectPool/ListScope`1
#include "GlobalNamespace/OVRObjectPool_ListScope_1.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36, "", "OVRSceneManager/<QueryForExistingAnchorsTransform>d__36");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSceneManager/<QueryForExistingAnchorsTransform>d__36
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OVRSceneManager::$QueryForExistingAnchorsTransform$d__36/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // private OVRObjectPool/ListScope`1<OVRAnchor> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::GlobalNamespace::OVRObjectPool::ListScope_1<::GlobalNamespace::OVRAnchor> $$7__wrap1;
    // private OVRObjectPool/ListScope`1<System.Guid> <>7__wrap2
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::GlobalNamespace::OVRObjectPool::ListScope_1<::System::Guid> $$7__wrap2;
    // private OVRTask`1/Awaiter<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1;
    public:
    // Creating value type constructor for type: $QueryForExistingAnchorsTransform$d__36
    constexpr $QueryForExistingAnchorsTransform$d__36(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::OVRObjectPool::ListScope_1<::GlobalNamespace::OVRAnchor> $$7__wrap1_ = {}, ::GlobalNamespace::OVRObjectPool::ListScope_1<::System::Guid> $$7__wrap2_ = {}, typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$7__wrap1{$$7__wrap1_}, $$7__wrap2{$$7__wrap2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: private OVRObjectPool/ListScope`1<OVRAnchor> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRObjectPool::ListScope_1<::GlobalNamespace::OVRAnchor>& dyn_$$7__wrap1();
    // Get instance field reference: private OVRObjectPool/ListScope`1<System.Guid> <>7__wrap2
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRObjectPool::ListScope_1<::System::Guid>& dyn_$$7__wrap2();
    // Get instance field reference: private OVRTask`1/Awaiter<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] typename ::GlobalNamespace::OVRTask_1<bool>::Awaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x4921F0C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4922540
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OVRSceneManager/<QueryForExistingAnchorsTransform>d__36
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::*)()>(&GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneManager::$QueryForExistingAnchorsTransform$d__36), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
