// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebSockets.WebSocketHandle
#include "System/Net/WebSockets/WebSocketHandle.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net::WebSockets
namespace System::Net::WebSockets {
  // Forward declaring type: ClientWebSocketOptions
  class ClientWebSocketOptions;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30, "System.Net.WebSockets", "WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebSockets.WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder;
    // public System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.String expectedSecWebSocketAccept
    // Size: 0x8
    // Offset: 0x30
    ::StringW expectedSecWebSocketAccept;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Net.WebSockets.ClientWebSocketOptions options
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::WebSockets::ClientWebSocketOptions* options;
    // Field size check
    static_assert(sizeof(::System::Net::WebSockets::ClientWebSocketOptions*) == 0x8);
    // private System.Boolean <foundUpgrade>5__2
    // Size: 0x1
    // Offset: 0x40
    bool $foundUpgrade$5__2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <foundConnection>5__3
    // Size: 0x1
    // Offset: 0x41
    bool $foundConnection$5__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <foundSecWebSocketAccept>5__4
    // Size: 0x1
    // Offset: 0x42
    bool $foundSecWebSocketAccept$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.String <subprotocol>5__5
    // Size: 0x8
    // Offset: 0x48
    ::StringW $subprotocol$5__5;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::StringW>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $ParseAndValidateConnectResponseAsync$d__30
    constexpr $ParseAndValidateConnectResponseAsync$d__30(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder_ = {}, ::System::IO::Stream* stream_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::StringW expectedSecWebSocketAccept_ = {}, ::System::Net::WebSockets::ClientWebSocketOptions* options_ = {}, bool $foundUpgrade$5__2_ = {}, bool $foundConnection$5__3_ = {}, bool $foundSecWebSocketAccept$5__4_ = {}, ::StringW $subprotocol$5__5_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::StringW>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, stream{stream_}, cancellationToken{cancellationToken_}, expectedSecWebSocketAccept{expectedSecWebSocketAccept_}, options{options_}, $foundUpgrade$5__2{$foundUpgrade$5__2_}, $foundConnection$5__3{$foundConnection$5__3_}, $foundSecWebSocketAccept$5__4{$foundSecWebSocketAccept$5__4_}, $subprotocol$5__5{$subprotocol$5__5_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& dyn_$$t__builder();
    // Get instance field reference: public System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.String expectedSecWebSocketAccept
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expectedSecWebSocketAccept();
    // Get instance field reference: public System.Net.WebSockets.ClientWebSocketOptions options
    [[deprecated("Use field access instead!")]] ::System::Net::WebSockets::ClientWebSocketOptions*& dyn_options();
    // Get instance field reference: private System.Boolean <foundUpgrade>5__2
    [[deprecated("Use field access instead!")]] bool& dyn_$foundUpgrade$5__2();
    // Get instance field reference: private System.Boolean <foundConnection>5__3
    [[deprecated("Use field access instead!")]] bool& dyn_$foundConnection$5__3();
    // Get instance field reference: private System.Boolean <foundSecWebSocketAccept>5__4
    [[deprecated("Use field access instead!")]] bool& dyn_$foundSecWebSocketAccept$5__4();
    // Get instance field reference: private System.String <subprotocol>5__5
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$subprotocol$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::StringW>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x4EEACF8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x4EEB670
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebSockets.WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::*)()>(&System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::WebSocketHandle::$ParseAndValidateConnectResponseAsync$d__30), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
