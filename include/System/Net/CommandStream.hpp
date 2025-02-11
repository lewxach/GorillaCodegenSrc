// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkStreamWrapper
#include "System/Net/NetworkStreamWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ResponseDescription
  class ResponseDescription;
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
  // Forward declaring type: FtpStatusCode
  struct FtpStatusCode;
  // Forward declaring type: ReceiveState
  class ReceiveState;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CommandStream
  class CommandStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CommandStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CommandStream*, "System.Net", "CommandStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CommandStream
  // [TokenAttribute] Offset: FFFFFFFF
  class CommandStream : public ::System::Net::NetworkStreamWrapper {
    public:
    // Nested type: ::System::Net::CommandStream::PipelineInstruction
    struct PipelineInstruction;
    // Nested type: ::System::Net::CommandStream::PipelineEntryFlags
    struct PipelineEntryFlags;
    // Nested type: ::System::Net::CommandStream::PipelineEntry
    class PipelineEntry;
    public:
    // private System.Boolean _recoverableFailure
    // Size: 0x1
    // Offset: 0x38
    bool recoverableFailure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recoverableFailure and: request
    char __padding0[0x7] = {};
    // protected System.Net.WebRequest _request
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::WebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequest*) == 0x8);
    // protected System.Boolean _isAsync
    // Size: 0x1
    // Offset: 0x48
    bool isAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _aborted
    // Size: 0x1
    // Offset: 0x49
    bool aborted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: aborted and: commands
    char __padding3[0x6] = {};
    // protected System.Net.CommandStream/PipelineEntry[] _commands
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Net::CommandStream::PipelineEntry*> commands;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::CommandStream::PipelineEntry*>) == 0x8);
    // protected System.Int32 _index
    // Size: 0x4
    // Offset: 0x58
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _doRead
    // Size: 0x1
    // Offset: 0x5C
    bool doRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _doSend
    // Size: 0x1
    // Offset: 0x5D
    bool doSend;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doSend and: currentResponseDescription
    char __padding7[0x2] = {};
    // private System.Net.ResponseDescription _currentResponseDescription
    // Size: 0x8
    // Offset: 0x60
    ::System::Net::ResponseDescription* currentResponseDescription;
    // Field size check
    static_assert(sizeof(::System::Net::ResponseDescription*) == 0x8);
    // protected System.String _abortReason
    // Size: 0x8
    // Offset: 0x68
    ::StringW abortReason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _buffer
    // Size: 0x8
    // Offset: 0x70
    ::StringW buffer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x78
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Decoder _decoder
    // Size: 0x8
    // Offset: 0x80
    ::System::Text::Decoder* decoder;
    // Field size check
    static_assert(sizeof(::System::Text::Decoder*) == 0x8);
    public:
    // Get static field: static private readonly System.AsyncCallback s_writeCallbackDelegate
    static ::System::AsyncCallback* _get_s_writeCallbackDelegate();
    // Set static field: static private readonly System.AsyncCallback s_writeCallbackDelegate
    static void _set_s_writeCallbackDelegate(::System::AsyncCallback* value);
    // Get static field: static private readonly System.AsyncCallback s_readCallbackDelegate
    static ::System::AsyncCallback* _get_s_readCallbackDelegate();
    // Set static field: static private readonly System.AsyncCallback s_readCallbackDelegate
    static void _set_s_readCallbackDelegate(::System::AsyncCallback* value);
    // static field const value: static private System.Int32 WaitingForPipeline
    static constexpr const int WaitingForPipeline = 1;
    // Get static field: static private System.Int32 WaitingForPipeline
    static int _get_WaitingForPipeline();
    // Set static field: static private System.Int32 WaitingForPipeline
    static void _set_WaitingForPipeline(int value);
    // static field const value: static private System.Int32 CompletedPipeline
    static constexpr const int CompletedPipeline = 2;
    // Get static field: static private System.Int32 CompletedPipeline
    static int _get_CompletedPipeline();
    // Set static field: static private System.Int32 CompletedPipeline
    static void _set_CompletedPipeline(int value);
    // Get instance field reference: private System.Boolean _recoverableFailure
    [[deprecated("Use field access instead!")]] bool& dyn__recoverableFailure();
    // Get instance field reference: protected System.Net.WebRequest _request
    [[deprecated("Use field access instead!")]] ::System::Net::WebRequest*& dyn__request();
    // Get instance field reference: protected System.Boolean _isAsync
    [[deprecated("Use field access instead!")]] bool& dyn__isAsync();
    // Get instance field reference: private System.Boolean _aborted
    [[deprecated("Use field access instead!")]] bool& dyn__aborted();
    // Get instance field reference: protected System.Net.CommandStream/PipelineEntry[] _commands
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::CommandStream::PipelineEntry*>& dyn__commands();
    // Get instance field reference: protected System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // Get instance field reference: private System.Boolean _doRead
    [[deprecated("Use field access instead!")]] bool& dyn__doRead();
    // Get instance field reference: private System.Boolean _doSend
    [[deprecated("Use field access instead!")]] bool& dyn__doSend();
    // Get instance field reference: private System.Net.ResponseDescription _currentResponseDescription
    [[deprecated("Use field access instead!")]] ::System::Net::ResponseDescription*& dyn__currentResponseDescription();
    // Get instance field reference: protected System.String _abortReason
    [[deprecated("Use field access instead!")]] ::StringW& dyn__abortReason();
    // Get instance field reference: private System.String _buffer
    [[deprecated("Use field access instead!")]] ::StringW& dyn__buffer();
    // Get instance field reference: private System.Text.Encoding _encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn__encoding();
    // Get instance field reference: private System.Text.Decoder _decoder
    [[deprecated("Use field access instead!")]] ::System::Text::Decoder*& dyn__decoder();
    // System.Void Abort(System.Exception e)
    // Offset: 0x4FAFDC0
    void Abort(::System::Exception* e);
    // protected System.Void InvokeRequestCallback(System.Object obj)
    // Offset: 0x4FB003C
    void InvokeRequestCallback(::Il2CppObject* obj);
    // System.Boolean get_RecoverableFailure()
    // Offset: 0x4FB00B0
    bool get_RecoverableFailure();
    // protected System.Void MarkAsRecoverableFailure()
    // Offset: 0x4FB00B8
    void MarkAsRecoverableFailure();
    // System.IO.Stream SubmitRequest(System.Net.WebRequest request, System.Boolean isAsync, System.Boolean readInitalResponseOnConnect)
    // Offset: 0x4FB00D0
    ::System::IO::Stream* SubmitRequest(::System::Net::WebRequest* request, bool isAsync, bool readInitalResponseOnConnect);
    // protected System.Void ClearState()
    // Offset: 0x4FB06E8
    void ClearState();
    // protected System.Net.CommandStream/PipelineEntry[] BuildCommandsList(System.Net.WebRequest request)
    // Offset: 0x4FB06F8
    ::ArrayW<::System::Net::CommandStream::PipelineEntry*> BuildCommandsList(::System::Net::WebRequest* request);
    // protected System.Exception GenerateException(System.String message, System.Net.WebExceptionStatus status, System.Exception innerException)
    // Offset: 0x4FB0700
    ::System::Exception* GenerateException(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Exception* innerException);
    // protected System.Exception GenerateException(System.Net.FtpStatusCode code, System.String statusDescription, System.Exception innerException)
    // Offset: 0x4FB0778
    ::System::Exception* GenerateException(::System::Net::FtpStatusCode code, ::StringW statusDescription, ::System::Exception* innerException);
    // protected System.Void InitCommandPipeline(System.Net.WebRequest request, System.Net.CommandStream/PipelineEntry[] commands, System.Boolean isAsync)
    // Offset: 0x4FB0150
    void InitCommandPipeline(::System::Net::WebRequest* request, ::ArrayW<::System::Net::CommandStream::PipelineEntry*> commands, bool isAsync);
    // System.Void CheckContinuePipeline()
    // Offset: 0x4FB0838
    void CheckContinuePipeline();
    // protected System.IO.Stream ContinueCommandPipeline()
    // Offset: 0x4FB020C
    ::System::IO::Stream* ContinueCommandPipeline();
    // private System.Boolean PostSendCommandProcessing(ref System.IO.Stream stream)
    // Offset: 0x4FB08FC
    bool PostSendCommandProcessing(ByRef<::System::IO::Stream*> stream);
    // private System.Boolean PostReadCommandProcessing(ref System.IO.Stream stream)
    // Offset: 0x4FB0D80
    bool PostReadCommandProcessing(ByRef<::System::IO::Stream*> stream);
    // protected System.Net.CommandStream/PipelineInstruction PipelineCallback(System.Net.CommandStream/PipelineEntry entry, System.Net.ResponseDescription response, System.Boolean timeout, ref System.IO.Stream stream)
    // Offset: 0x4FB0FB8
    ::System::Net::CommandStream::PipelineInstruction PipelineCallback(::System::Net::CommandStream::PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout, ByRef<::System::IO::Stream*> stream);
    // static private System.Void ReadCallback(System.IAsyncResult asyncResult)
    // Offset: 0x4FB0FC0
    static void ReadCallback(::System::IAsyncResult* asyncResult);
    // static private System.Void WriteCallback(System.IAsyncResult asyncResult)
    // Offset: 0x4FB1810
    static void WriteCallback(::System::IAsyncResult* asyncResult);
    // protected System.Text.Encoding get_Encoding()
    // Offset: 0x4FB1AC4
    ::System::Text::Encoding* get_Encoding();
    // protected System.Void set_Encoding(System.Text.Encoding value)
    // Offset: 0x4FB1ACC
    void set_Encoding(::System::Text::Encoding* value);
    // protected System.Boolean CheckValid(System.Net.ResponseDescription response, ref System.Int32 validThrough, ref System.Int32 completeLength)
    // Offset: 0x4FB1B1C
    bool CheckValid(::System::Net::ResponseDescription* response, ByRef<int> validThrough, ByRef<int> completeLength);
    // private System.Net.ResponseDescription ReceiveCommandResponse()
    // Offset: 0x4FB0A3C
    ::System::Net::ResponseDescription* ReceiveCommandResponse();
    // private System.Void ReceiveCommandResponseCallback(System.Net.ReceiveState state, System.Int32 bytesRead)
    // Offset: 0x4FB1288
    void ReceiveCommandResponseCallback(::System::Net::ReceiveState* state, int bytesRead);
    // static private System.Void .cctor()
    // Offset: 0x4FB1BE0
    static void _cctor();
    // System.Void .ctor(System.Net.Sockets.TcpClient client)
    // Offset: 0x4FAFD08
    // Implemented from: System.Net.NetworkStreamWrapper
    // Base method: System.Void NetworkStreamWrapper::.ctor(System.Net.Sockets.TcpClient client)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandStream* New_ctor(::System::Net::Sockets::TcpClient* client) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CommandStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandStream*, creationType>(client)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x4FAFFA8
    // Implemented from: System.Net.NetworkStreamWrapper
    // Base method: System.Void NetworkStreamWrapper::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.CommandStream
  #pragma pack(pop)
  static check_size<sizeof(CommandStream), 128 + sizeof(::System::Text::Decoder*)> __System_Net_CommandStreamSizeCheck;
  static_assert(sizeof(CommandStream) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CommandStream::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(::System::Exception*)>(&System::Net::CommandStream::Abort)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::InvokeRequestCallback
// Il2CppName: InvokeRequestCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(::Il2CppObject*)>(&System::Net::CommandStream::InvokeRequestCallback)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "InvokeRequestCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::get_RecoverableFailure
// Il2CppName: get_RecoverableFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CommandStream::*)()>(&System::Net::CommandStream::get_RecoverableFailure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "get_RecoverableFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::MarkAsRecoverableFailure
// Il2CppName: MarkAsRecoverableFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)()>(&System::Net::CommandStream::MarkAsRecoverableFailure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "MarkAsRecoverableFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::SubmitRequest
// Il2CppName: SubmitRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::CommandStream::*)(::System::Net::WebRequest*, bool, bool)>(&System::Net::CommandStream::SubmitRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* isAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* readInitalResponseOnConnect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "SubmitRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, isAsync, readInitalResponseOnConnect});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::ClearState
// Il2CppName: ClearState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)()>(&System::Net::CommandStream::ClearState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "ClearState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::BuildCommandsList
// Il2CppName: BuildCommandsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::CommandStream::PipelineEntry*> (System::Net::CommandStream::*)(::System::Net::WebRequest*)>(&System::Net::CommandStream::BuildCommandsList)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "BuildCommandsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::GenerateException
// Il2CppName: GenerateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Net::CommandStream::*)(::StringW, ::System::Net::WebExceptionStatus, ::System::Exception*)>(&System::Net::CommandStream::GenerateException)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "GenerateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, status, innerException});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::GenerateException
// Il2CppName: GenerateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Net::CommandStream::*)(::System::Net::FtpStatusCode, ::StringW, ::System::Exception*)>(&System::Net::CommandStream::GenerateException)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System.Net", "FtpStatusCode")->byval_arg;
    static auto* statusDescription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* innerException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "GenerateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, statusDescription, innerException});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::InitCommandPipeline
// Il2CppName: InitCommandPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(::System::Net::WebRequest*, ::ArrayW<::System::Net::CommandStream::PipelineEntry*>, bool)>(&System::Net::CommandStream::InitCommandPipeline)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* commands = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Net", "CommandStream/PipelineEntry"), 1)->byval_arg;
    static auto* isAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "InitCommandPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, commands, isAsync});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::CheckContinuePipeline
// Il2CppName: CheckContinuePipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)()>(&System::Net::CommandStream::CheckContinuePipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "CheckContinuePipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::ContinueCommandPipeline
// Il2CppName: ContinueCommandPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::CommandStream::*)()>(&System::Net::CommandStream::ContinueCommandPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "ContinueCommandPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::PostSendCommandProcessing
// Il2CppName: PostSendCommandProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CommandStream::*)(ByRef<::System::IO::Stream*>)>(&System::Net::CommandStream::PostSendCommandProcessing)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "PostSendCommandProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::PostReadCommandProcessing
// Il2CppName: PostReadCommandProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CommandStream::*)(ByRef<::System::IO::Stream*>)>(&System::Net::CommandStream::PostReadCommandProcessing)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "PostReadCommandProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::PipelineCallback
// Il2CppName: PipelineCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CommandStream::PipelineInstruction (System::Net::CommandStream::*)(::System::Net::CommandStream::PipelineEntry*, ::System::Net::ResponseDescription*, bool, ByRef<::System::IO::Stream*>)>(&System::Net::CommandStream::PipelineCallback)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.Net", "CommandStream/PipelineEntry")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("System.Net", "ResponseDescription")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "PipelineCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry, response, timeout, stream});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::ReadCallback
// Il2CppName: ReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::Net::CommandStream::ReadCallback)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "ReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::WriteCallback
// Il2CppName: WriteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::Net::CommandStream::WriteCallback)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "WriteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Net::CommandStream::*)()>(&System::Net::CommandStream::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::set_Encoding
// Il2CppName: set_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(::System::Text::Encoding*)>(&System::Net::CommandStream::set_Encoding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "set_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::CheckValid
// Il2CppName: CheckValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CommandStream::*)(::System::Net::ResponseDescription*, ByRef<int>, ByRef<int>)>(&System::Net::CommandStream::CheckValid)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("System.Net", "ResponseDescription")->byval_arg;
    static auto* validThrough = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completeLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "CheckValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, validThrough, completeLength});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::ReceiveCommandResponse
// Il2CppName: ReceiveCommandResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ResponseDescription* (System::Net::CommandStream::*)()>(&System::Net::CommandStream::ReceiveCommandResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "ReceiveCommandResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::ReceiveCommandResponseCallback
// Il2CppName: ReceiveCommandResponseCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(::System::Net::ReceiveState*, int)>(&System::Net::CommandStream::ReceiveCommandResponseCallback)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System.Net", "ReceiveState")->byval_arg;
    static auto* bytesRead = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "ReceiveCommandResponseCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, bytesRead});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::CommandStream::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CommandStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CommandStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CommandStream::*)(bool)>(&System::Net::CommandStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CommandStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
