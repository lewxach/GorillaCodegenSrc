// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Sockets.Stun.StunServers
#include "Fusion/Sockets/Stun/StunServers.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::Stun::StunServers::$BuildIP$d__6, "Fusion.Sockets.Stun", "StunServers/<BuildIP>d__6");
// Type namespace: Fusion.Sockets.Stun
namespace Fusion::Sockets::Stun {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.Sockets.Stun.StunServers/<BuildIP>d__6
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct StunServers::$BuildIP$d__6/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers::StunServer*> $$t__builder;
    // public System.String stunServerAddr
    // Size: 0x8
    // Offset: 0x20
    ::StringW stunServerAddr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.UInt16 <port>5__2
    // Size: 0x2
    // Offset: 0x28
    uint16_t $port$5__2;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private Fusion.Sockets.Stun.StunServers/StunServer <stunServer>5__3
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::Sockets::Stun::StunServers::StunServer* $stunServer$5__3;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::Stun::StunServers::StunServer*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> $$u__1;
    public:
    // Creating value type constructor for type: $BuildIP$d__6
    constexpr $BuildIP$d__6(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers::StunServer*> $$t__builder_ = {}, ::StringW stunServerAddr_ = {}, uint16_t $port$5__2_ = {}, ::Fusion::Sockets::Stun::StunServers::StunServer* $stunServer$5__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, stunServerAddr{stunServerAddr_}, $port$5__2{$port$5__2_}, $stunServer$5__3{$stunServer$5__3_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunServers::StunServer*>& dyn_$$t__builder();
    // Get instance field reference: public System.String stunServerAddr
    [[deprecated("Use field access instead!")]] ::StringW& dyn_stunServerAddr();
    // Get instance field reference: private System.UInt16 <port>5__2
    [[deprecated("Use field access instead!")]] uint16_t& dyn_$port$5__2();
    // Get instance field reference: private Fusion.Sockets.Stun.StunServers/StunServer <stunServer>5__3
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::Stun::StunServers::StunServer*& dyn_$stunServer$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2B9BC74
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2B9C3CC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Fusion.Sockets.Stun.StunServers/<BuildIP>d__6
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::*)()>(&Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunServers::$BuildIP$d__6), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Fusion::Sockets::Stun::StunServers::$BuildIP$d__6::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunServers::$BuildIP$d__6), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
