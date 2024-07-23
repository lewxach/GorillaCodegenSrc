// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.Sockets.SocketAsyncOperation
#include "System/Net/Sockets/SocketAsyncOperation.hpp"
// Including type: System.Net.Sockets.IPPacketInformation
#include "System/Net/Sockets/IPPacketInformation.hpp"
// Including type: System.Net.Sockets.TransmitFileOptions
#include "System/Net/Sockets/TransmitFileOptions.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: System.Net.Sockets.SocketFlags
#include "System/Net/Sockets/SocketFlags.hpp"
// Including type: System.Memory`1
#include "System/Memory_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketAsyncResult
  class SocketAsyncResult;
  // Forward declaring type: SendPacketsElement
  class SendPacketsElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketAsyncEventArgs
  class SocketAsyncEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncEventArgs*, "System.Net.Sockets", "SocketAsyncEventArgs");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Sockets.SocketAsyncEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketAsyncEventArgs : public ::System::EventArgs/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Int32 in_progress
    // Size: 0x4
    // Offset: 0x14
    int in_progress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.EndPoint remote_ep
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::EndPoint* remote_ep;
    // Field size check
    static_assert(sizeof(::System::Net::EndPoint*) == 0x8);
    // private System.Net.Sockets.Socket current_socket
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Sockets::Socket* current_socket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // System.Net.Sockets.SocketAsyncResult socket_async_result
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Sockets::SocketAsyncResult* socket_async_result;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketAsyncResult*) == 0x8);
    // private System.Exception <ConnectByNameError>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Exception* ConnectByNameError;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::Sockets::Socket* AcceptSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Int32 <BytesTransferred>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int BytesTransferred;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <DisconnectReuseSocket>k__BackingField
    // Size: 0x1
    // Offset: 0x44
    bool DisconnectReuseSocket;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Net.Sockets.SocketAsyncOperation <LastOperation>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    ::System::Net::Sockets::SocketAsyncOperation LastOperation;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketAsyncOperation) == 0x4);
    // private System.Net.Sockets.IPPacketInformation <ReceiveMessageFromPacketInfo>k__BackingField
    // Size: 0xC
    // Offset: 0x50
    ::System::Net::Sockets::IPPacketInformation ReceiveMessageFromPacketInfo;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::IPPacketInformation) == 0xC);
    // private System.Net.Sockets.SendPacketsElement[] <SendPacketsElements>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::System::Net::Sockets::SendPacketsElement*> SendPacketsElements;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::Sockets::SendPacketsElement*>) == 0x8);
    // private System.Net.Sockets.TransmitFileOptions <SendPacketsFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    ::System::Net::Sockets::TransmitFileOptions SendPacketsFlags;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::TransmitFileOptions) == 0x4);
    // private System.Int32 <SendPacketsSendSize>k__BackingField
    // Size: 0x4
    // Offset: 0x6C
    int SendPacketsSendSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.Sockets.SocketError <SocketError>k__BackingField
    // Size: 0x4
    // Offset: 0x70
    ::System::Net::Sockets::SocketError SocketError;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketError) == 0x4);
    // private System.Net.Sockets.SocketFlags <SocketFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x74
    ::System::Net::Sockets::SocketFlags SocketFlags;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketFlags) == 0x4);
    // private System.Object <UserToken>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* UserToken;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    // Size: 0x8
    // Offset: 0x80
    ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* Completed;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*) == 0x8);
    // private System.Memory`1<System.Byte> _buffer
    // Size: 0xFFFFFFFF
    // Offset: 0x88
    ::System::Memory_1<uint8_t> buffer;
    // private System.Int32 _offset
    // Size: 0x4
    // Offset: 0x98
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x9C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _bufferIsExplicitArray
    // Size: 0x1
    // Offset: 0xA0
    bool bufferIsExplicitArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> _bufferList
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* bufferList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*) == 0x8);
    // private System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> _bufferListInternal
    // Size: 0x8
    // Offset: 0xB0
    ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* bufferListInternal;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: System.Int32 in_progress
    [[deprecated("Use field access instead!")]] int& dyn_in_progress();
    // Get instance field reference: private System.Net.EndPoint remote_ep
    [[deprecated("Use field access instead!")]] ::System::Net::EndPoint*& dyn_remote_ep();
    // Get instance field reference: private System.Net.Sockets.Socket current_socket
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_current_socket();
    // Get instance field reference: System.Net.Sockets.SocketAsyncResult socket_async_result
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketAsyncResult*& dyn_socket_async_result();
    // Get instance field reference: private System.Exception <ConnectByNameError>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_$ConnectByNameError$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_$AcceptSocket$k__BackingField();
    // Get instance field reference: private System.Int32 <BytesTransferred>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$BytesTransferred$k__BackingField();
    // Get instance field reference: private System.Boolean <DisconnectReuseSocket>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DisconnectReuseSocket$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.SocketAsyncOperation <LastOperation>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketAsyncOperation& dyn_$LastOperation$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.IPPacketInformation <ReceiveMessageFromPacketInfo>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::IPPacketInformation& dyn_$ReceiveMessageFromPacketInfo$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.SendPacketsElement[] <SendPacketsElements>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::Sockets::SendPacketsElement*>& dyn_$SendPacketsElements$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.TransmitFileOptions <SendPacketsFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::TransmitFileOptions& dyn_$SendPacketsFlags$k__BackingField();
    // Get instance field reference: private System.Int32 <SendPacketsSendSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$SendPacketsSendSize$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.SocketError <SocketError>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketError& dyn_$SocketError$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.SocketFlags <SocketFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketFlags& dyn_$SocketFlags$k__BackingField();
    // Get instance field reference: private System.Object <UserToken>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$UserToken$k__BackingField();
    // Get instance field reference: private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*& dyn_Completed();
    // Get instance field reference: private System.Memory`1<System.Byte> _buffer
    [[deprecated("Use field access instead!")]] ::System::Memory_1<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int32 _offset
    [[deprecated("Use field access instead!")]] int& dyn__offset();
    // Get instance field reference: private System.Int32 _count
    [[deprecated("Use field access instead!")]] int& dyn__count();
    // Get instance field reference: private System.Boolean _bufferIsExplicitArray
    [[deprecated("Use field access instead!")]] bool& dyn__bufferIsExplicitArray();
    // Get instance field reference: private System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> _bufferList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& dyn__bufferList();
    // Get instance field reference: private System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> _bufferListInternal
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& dyn__bufferListInternal();
    // public System.Net.Sockets.Socket get_AcceptSocket()
    // Offset: 0x4EDEC38
    ::System::Net::Sockets::Socket* get_AcceptSocket();
    // public System.Void set_AcceptSocket(System.Net.Sockets.Socket value)
    // Offset: 0x4EDEC40
    void set_AcceptSocket(::System::Net::Sockets::Socket* value);
    // public System.Int32 get_BytesTransferred()
    // Offset: 0x4EDEC48
    int get_BytesTransferred();
    // private System.Void set_BytesTransferred(System.Int32 value)
    // Offset: 0x4EDEC50
    void set_BytesTransferred(int value);
    // private System.Void set_LastOperation(System.Net.Sockets.SocketAsyncOperation value)
    // Offset: 0x4EDEC58
    void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value);
    // public System.Void set_RemoteEndPoint(System.Net.EndPoint value)
    // Offset: 0x4EDEC60
    void set_RemoteEndPoint(::System::Net::EndPoint* value);
    // public System.Void set_SendPacketsSendSize(System.Int32 value)
    // Offset: 0x4EDEC68
    void set_SendPacketsSendSize(int value);
    // public System.Net.Sockets.SocketError get_SocketError()
    // Offset: 0x4EDEC70
    ::System::Net::Sockets::SocketError get_SocketError();
    // public System.Void set_SocketError(System.Net.Sockets.SocketError value)
    // Offset: 0x4EDEC78
    void set_SocketError(::System::Net::Sockets::SocketError value);
    // public System.Void set_SocketFlags(System.Net.Sockets.SocketFlags value)
    // Offset: 0x4EDEC80
    void set_SocketFlags(::System::Net::Sockets::SocketFlags value);
    // public System.Object get_UserToken()
    // Offset: 0x4EDEC88
    ::Il2CppObject* get_UserToken();
    // public System.Void set_UserToken(System.Object value)
    // Offset: 0x4EDEC90
    void set_UserToken(::Il2CppObject* value);
    // public System.Void add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x4EDEC98
    void add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // public System.Void remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x4EDED48
    void remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // public System.Void .ctor()
    // Offset: 0x4EDEDF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketAsyncEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncEventArgs*, creationType>()));
    }
    // System.Void .ctor(System.Boolean flowExecutionContext)
    // Offset: 0x4ED7EE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncEventArgs* New_ctor(bool flowExecutionContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketAsyncEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncEventArgs*, creationType>(flowExecutionContext)));
    }
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4EDEEB4
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x4EDEEC8
    void Dispose();
    // System.Void SetBytesTransferred(System.Int32 value)
    // Offset: 0x4EDB880
    void SetBytesTransferred(int value);
    // System.Net.Sockets.Socket get_CurrentSocket()
    // Offset: 0x4EDEF2C
    ::System::Net::Sockets::Socket* get_CurrentSocket();
    // System.Void SetCurrentSocket(System.Net.Sockets.Socket socket)
    // Offset: 0x4EDEF34
    void SetCurrentSocket(::System::Net::Sockets::Socket* socket);
    // System.Void SetLastOperation(System.Net.Sockets.SocketAsyncOperation op)
    // Offset: 0x4EDEF3C
    void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op);
    // System.Void Complete_internal()
    // Offset: 0x4EDEFFC
    void Complete_internal();
    // protected System.Void OnCompleted(System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x4EDF024
    void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* e);
    // public System.Memory`1<System.Byte> get_MemoryBuffer()
    // Offset: 0x4EDF04C
    ::System::Memory_1<uint8_t> get_MemoryBuffer();
    // public System.Int32 get_Offset()
    // Offset: 0x4EDF058
    int get_Offset();
    // public System.Int32 get_Count()
    // Offset: 0x4EDF060
    int get_Count();
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> get_BufferList()
    // Offset: 0x4EDF068
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* get_BufferList();
    // public System.Void SetBuffer(System.Memory`1<System.Byte> buffer)
    // Offset: 0x4EDF070
    void SetBuffer(::System::Memory_1<uint8_t> buffer);
    // protected override System.Void Finalize()
    // Offset: 0x4EDEEA4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Net.Sockets.SocketAsyncEventArgs
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket
// Il2CppName: get_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket
// Il2CppName: set_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred
// Il2CppName: get_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred
// Il2CppName: set_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation
// Il2CppName: set_LastOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_LastOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint
// Il2CppName: set_RemoteEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::EndPoint*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "EndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_RemoteEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize
// Il2CppName: set_SendPacketsSendSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SendPacketsSendSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_SocketError
// Il2CppName: get_SocketError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_SocketError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_SocketError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SocketError
// Il2CppName: set_SocketError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SocketError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags
// Il2CppName: set_SocketFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SocketFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_UserToken
// Il2CppName: get_UserToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_UserToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_UserToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_UserToken
// Il2CppName: set_UserToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::Il2CppObject*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_UserToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_UserToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::add_Completed
// Il2CppName: add_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&System::Net::Sockets::SocketAsyncEventArgs::add_Completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "add_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::remove_Completed
// Il2CppName: remove_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&System::Net::Sockets::SocketAsyncEventArgs::remove_Completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "remove_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred
// Il2CppName: SetBytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "SetBytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket
// Il2CppName: get_CurrentSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_CurrentSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket
// Il2CppName: SetCurrentSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "SetCurrentSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation
// Il2CppName: SetLastOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "SetLastOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Complete_internal
// Il2CppName: Complete_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Complete_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Complete_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer
// Il2CppName: get_MemoryBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Memory_1<uint8_t> (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_MemoryBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_Offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_BufferList
// Il2CppName: get_BufferList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_BufferList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_BufferList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::SetBuffer
// Il2CppName: SetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Memory_1<uint8_t>)>(&System::Net::Sockets::SocketAsyncEventArgs::SetBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Memory`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "SetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};