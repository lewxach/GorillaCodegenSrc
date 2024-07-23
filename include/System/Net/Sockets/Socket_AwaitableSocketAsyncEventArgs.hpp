// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
// Including type: System.Net.Sockets.SocketAsyncEventArgs
#include "System/Net/Sockets/SocketAsyncEventArgs.hpp"
// Including type: System.Threading.Tasks.Sources.IValueTaskSource
#include "System/Threading/Tasks/Sources/IValueTaskSource.hpp"
// Including type: System.Threading.Tasks.Sources.IValueTaskSource`1
#include "System/Threading/Tasks/Sources/IValueTaskSource_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Skipping declaration: SocketError because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ValueTask`1<TResult>
  template<typename TResult>
  struct ValueTask_1;
  // Forward declaring type: ValueTask
  struct ValueTask;
}
// Forward declaring namespace: System::Threading::Tasks::Sources
namespace System::Threading::Tasks::Sources {
  // Skipping declaration: ValueTaskSourceStatus because it is already included!
  // Skipping declaration: ValueTaskSourceOnCompletedFlags because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*, "System.Net.Sockets", "Socket/AwaitableSocketAsyncEventArgs");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class Socket::AwaitableSocketAsyncEventArgs : public ::System::Net::Sockets::SocketAsyncEventArgs/*, public ::System::Threading::Tasks::Sources::IValueTaskSource, public ::System::Threading::Tasks::Sources::IValueTaskSource_1<int>*/ {
    public:
    // Nested type: ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::$$c
    class $$c;
    public:
    // private System.Action`1<System.Object> _continuation
    // Size: 0x8
    // Offset: 0xB8
    ::System::Action_1<::Il2CppObject*>* continuation;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Il2CppObject*>*) == 0x8);
    // private System.Threading.ExecutionContext _executionContext
    // Size: 0x8
    // Offset: 0xC0
    ::System::Threading::ExecutionContext* executionContext;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // private System.Object _scheduler
    // Size: 0x8
    // Offset: 0xC8
    ::Il2CppObject* scheduler;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int16 _token
    // Size: 0x2
    // Offset: 0xD0
    int16_t token;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // private System.Boolean <WrapExceptionsInIOExceptions>k__BackingField
    // Size: 0x1
    // Offset: 0xD2
    bool WrapExceptionsInIOExceptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Threading::Tasks::Sources::IValueTaskSource
    operator ::System::Threading::Tasks::Sources::IValueTaskSource() noexcept {
      return *reinterpret_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(this);
    }
    // Creating interface conversion operator: operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<int>
    operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<int>() noexcept {
      return *reinterpret_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<int>*>(this);
    }
    // Get static field: static readonly System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs Reserved
    static ::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs* _get_Reserved();
    // Set static field: static readonly System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs Reserved
    static void _set_Reserved(::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs* value);
    // Get static field: static private readonly System.Action`1<System.Object> s_completedSentinel
    static ::System::Action_1<::Il2CppObject*>* _get_s_completedSentinel();
    // Set static field: static private readonly System.Action`1<System.Object> s_completedSentinel
    static void _set_s_completedSentinel(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Action`1<System.Object> s_availableSentinel
    static ::System::Action_1<::Il2CppObject*>* _get_s_availableSentinel();
    // Set static field: static private readonly System.Action`1<System.Object> s_availableSentinel
    static void _set_s_availableSentinel(::System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: private System.Action`1<System.Object> _continuation
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Il2CppObject*>*& dyn__continuation();
    // Get instance field reference: private System.Threading.ExecutionContext _executionContext
    [[deprecated("Use field access instead!")]] ::System::Threading::ExecutionContext*& dyn__executionContext();
    // Get instance field reference: private System.Object _scheduler
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__scheduler();
    // Get instance field reference: private System.Int16 _token
    [[deprecated("Use field access instead!")]] int16_t& dyn__token();
    // Get instance field reference: private System.Boolean <WrapExceptionsInIOExceptions>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$WrapExceptionsInIOExceptions$k__BackingField();
    // public System.Boolean get_WrapExceptionsInIOExceptions()
    // Offset: 0x4ED7F7C
    bool get_WrapExceptionsInIOExceptions();
    // public System.Void set_WrapExceptionsInIOExceptions(System.Boolean value)
    // Offset: 0x4ED7F84
    void set_WrapExceptionsInIOExceptions(bool value);
    // public System.Boolean Reserve()
    // Offset: 0x4ED7F90
    bool Reserve();
    // private System.Void Release()
    // Offset: 0x4ED800C
    void Release();
    // public System.Threading.Tasks.ValueTask`1<System.Int32> ReceiveAsync(System.Net.Sockets.Socket socket)
    // Offset: 0x4ED85A8
    ::System::Threading::Tasks::ValueTask_1<int> ReceiveAsync(::System::Net::Sockets::Socket* socket);
    // public System.Threading.Tasks.ValueTask SendAsyncForNetworkStream(System.Net.Sockets.Socket socket)
    // Offset: 0x4ED87F4
    ::System::Threading::Tasks::ValueTask SendAsyncForNetworkStream(::System::Net::Sockets::Socket* socket);
    // public System.Threading.Tasks.Sources.ValueTaskSourceStatus GetStatus(System.Int16 token)
    // Offset: 0x4ED8900
    ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);
    // public System.Void OnCompleted(System.Action`1<System.Object> continuation, System.Object state, System.Int16 token, System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags flags)
    // Offset: 0x4ED89E0
    void OnCompleted(::System::Action_1<::Il2CppObject*>* continuation, ::Il2CppObject* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);
    // private System.Void InvokeContinuation(System.Action`1<System.Object> continuation, System.Object state, System.Boolean forceAsync)
    // Offset: 0x4ED82B8
    void InvokeContinuation(::System::Action_1<::Il2CppObject*>* continuation, ::Il2CppObject* state, bool forceAsync);
    // public System.Int32 GetResult(System.Int16 token)
    // Offset: 0x4ED8C7C
    int GetResult(int16_t token);
    // private System.Void System.Threading.Tasks.Sources.IValueTaskSource.GetResult(System.Int16 token)
    // Offset: 0x4ED8CE8
    void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);
    // private System.Void ThrowIncorrectTokenException()
    // Offset: 0x4ED8994
    void ThrowIncorrectTokenException();
    // private System.Void ThrowMultipleContinuationsException()
    // Offset: 0x4ED8C30
    void ThrowMultipleContinuationsException();
    // private System.Void ThrowException(System.Net.Sockets.SocketError error)
    // Offset: 0x4ED8CC4
    void ThrowException(::System::Net::Sockets::SocketError error);
    // private System.Exception CreateException(System.Net.Sockets.SocketError error)
    // Offset: 0x4ED8708
    ::System::Exception* CreateException(::System::Net::Sockets::SocketError error);
    // static private System.Void .cctor()
    // Offset: 0x4ED8D30
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4ED7E74
    // Implemented from: System.Net.Sockets.SocketAsyncEventArgs
    // Base method: System.Void SocketAsyncEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Socket::AwaitableSocketAsyncEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Socket::AwaitableSocketAsyncEventArgs*, creationType>()));
    }
    // protected override System.Void OnCompleted(System.Net.Sockets.SocketAsyncEventArgs _)
    // Offset: 0x4ED8088
    // Implemented from: System.Net.Sockets.SocketAsyncEventArgs
    // Base method: System.Void SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs _)
    void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* _);
  }; // System.Net.Sockets.Socket/AwaitableSocketAsyncEventArgs
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions
// Il2CppName: get_WrapExceptionsInIOExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "get_WrapExceptionsInIOExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions
// Il2CppName: set_WrapExceptionsInIOExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(bool)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "set_WrapExceptionsInIOExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::Reserve
// Il2CppName: Reserve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::Reserve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "Reserve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ReceiveAsync
// Il2CppName: ReceiveAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int> (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ReceiveAsync)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "ReceiveAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream
// Il2CppName: SendAsyncForNetworkStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "SendAsyncForNetworkStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::GetStatus
// Il2CppName: GetStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::GetStatus)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "GetStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks.Sources", "ValueTaskSourceOnCompletedFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation, state, token, flags});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::InvokeContinuation
// Il2CppName: InvokeContinuation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, bool)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::InvokeContinuation)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* forceAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "InvokeContinuation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation, state, forceAsync});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::GetResult)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult
// Il2CppName: System.Threading.Tasks.Sources.IValueTaskSource.GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException
// Il2CppName: ThrowIncorrectTokenException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "ThrowIncorrectTokenException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException
// Il2CppName: ThrowMultipleContinuationsException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "ThrowMultipleContinuationsException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowException
// Il2CppName: ThrowException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::ThrowException)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "ThrowException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::CreateException
// Il2CppName: CreateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::CreateException)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "CreateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::AwaitableSocketAsyncEventArgs*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};