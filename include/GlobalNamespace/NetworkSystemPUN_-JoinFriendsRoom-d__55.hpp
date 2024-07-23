// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystemPUN
#include "GlobalNamespace/NetworkSystemPUN.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: NetJoinResult
#include "GlobalNamespace/NetJoinResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Dictionary`2 because it is already included!
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: SharedGroupDataRecord
  class SharedGroupDataRecord;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55, "", "NetworkSystemPUN/<JoinFriendsRoom>d__55");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkSystemPUN/<JoinFriendsRoom>d__55
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetworkSystemPUN::$JoinFriendsRoom$d__55/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public NetworkSystemPUN <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NetworkSystemPUN* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN*) == 0x8);
    // public System.String keyToFollow
    // Size: 0x8
    // Offset: 0x28
    ::StringW keyToFollow;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userID
    // Size: 0x8
    // Offset: 0x30
    ::StringW userID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private NetworkSystemPUN/<>c__DisplayClass55_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::NetworkSystemPUN::$$c__DisplayClass55_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN::$$c__DisplayClass55_0*) == 0x8);
    // public System.String shufflerToFollow
    // Size: 0x8
    // Offset: 0x40
    ::StringW shufflerToFollow;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 actorIDToFollow
    // Size: 0x4
    // Offset: 0x48
    int actorIDToFollow;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <foundFriend>5__2
    // Size: 0x1
    // Offset: 0x4C
    bool $foundFriend$5__2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single <searchStartTime>5__3
    // Size: 0x4
    // Offset: 0x50
    float $searchStartTime$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <timeToSpendSearching>5__4
    // Size: 0x4
    // Offset: 0x54
    float $timeToSpendSearching$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord> <dummyData>5__5
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>* $dummyData$5__5;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>*) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x60
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.String,PlayFab.ClientModels.SharedGroupDataRecord> <>7__wrap5
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    typename ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>::Enumerator $$7__wrap5;
    // private System.String <roomID>5__7
    // Size: 0x8
    // Offset: 0x90
    ::StringW $roomID$5__7;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <regionIndex>5__8
    // Size: 0x4
    // Offset: 0x98
    int $regionIndex$5__8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.Tasks.Task`1<NetJoinResult> <ConnectToRoomTask>5__9
    // Size: 0x8
    // Offset: 0xA0
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* $ConnectToRoomTask$5__9;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0xA8
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetJoinResult> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0xB0
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult> $$u__3;
    public:
    // Creating value type constructor for type: $JoinFriendsRoom$d__55
    constexpr $JoinFriendsRoom$d__55(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::NetworkSystemPUN* $$4__this_ = {}, ::StringW keyToFollow_ = {}, ::StringW userID_ = {}, ::GlobalNamespace::NetworkSystemPUN::$$c__DisplayClass55_0* $$8__1_ = {}, ::StringW shufflerToFollow_ = {}, int actorIDToFollow_ = {}, bool $foundFriend$5__2_ = {}, float $searchStartTime$5__3_ = {}, float $timeToSpendSearching$5__4_ = {}, ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>* $dummyData$5__5_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}, typename ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>::Enumerator $$7__wrap5_ = {}, ::StringW $roomID$5__7_ = {}, int $regionIndex$5__8_ = {}, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* $ConnectToRoomTask$5__9_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, keyToFollow{keyToFollow_}, userID{userID_}, $$8__1{$$8__1_}, shufflerToFollow{shufflerToFollow_}, actorIDToFollow{actorIDToFollow_}, $foundFriend$5__2{$foundFriend$5__2_}, $searchStartTime$5__3{$searchStartTime$5__3_}, $timeToSpendSearching$5__4{$timeToSpendSearching$5__4_}, $dummyData$5__5{$dummyData$5__5_}, $$u__1{$$u__1_}, $$7__wrap5{$$7__wrap5_}, $roomID$5__7{$roomID$5__7_}, $regionIndex$5__8{$regionIndex$5__8_}, $ConnectToRoomTask$5__9{$ConnectToRoomTask$5__9_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public NetworkSystemPUN <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkSystemPUN*& dyn_$$4__this();
    // Get instance field reference: public System.String keyToFollow
    [[deprecated("Use field access instead!")]] ::StringW& dyn_keyToFollow();
    // Get instance field reference: public System.String userID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userID();
    // Get instance field reference: private NetworkSystemPUN/<>c__DisplayClass55_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkSystemPUN::$$c__DisplayClass55_0*& dyn_$$8__1();
    // Get instance field reference: public System.String shufflerToFollow
    [[deprecated("Use field access instead!")]] ::StringW& dyn_shufflerToFollow();
    // Get instance field reference: public System.Int32 actorIDToFollow
    [[deprecated("Use field access instead!")]] int& dyn_actorIDToFollow();
    // Get instance field reference: private System.Boolean <foundFriend>5__2
    [[deprecated("Use field access instead!")]] bool& dyn_$foundFriend$5__2();
    // Get instance field reference: private System.Single <searchStartTime>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$searchStartTime$5__3();
    // Get instance field reference: private System.Single <timeToSpendSearching>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$timeToSpendSearching$5__4();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord> <dummyData>5__5
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>*& dyn_$dummyData$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<System.String,PlayFab.ClientModels.SharedGroupDataRecord> <>7__wrap5
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::SharedGroupDataRecord*>::Enumerator& dyn_$$7__wrap5();
    // Get instance field reference: private System.String <roomID>5__7
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$roomID$5__7();
    // Get instance field reference: private System.Int32 <regionIndex>5__8
    [[deprecated("Use field access instead!")]] int& dyn_$regionIndex$5__8();
    // Get instance field reference: private System.Threading.Tasks.Task`1<NetJoinResult> <ConnectToRoomTask>5__9
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*& dyn_$ConnectToRoomTask$5__9();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<NetJoinResult> <>u__3
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x2917C18
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2918A0C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkSystemPUN/<JoinFriendsRoom>d__55
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::*)()>(&GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$JoinFriendsRoom$d__55), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};