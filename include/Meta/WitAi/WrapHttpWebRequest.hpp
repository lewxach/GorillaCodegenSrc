// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.IRequest
#include "Meta/WitAi/IRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: WrapHttpWebRequest
  class WrapHttpWebRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::WrapHttpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::WrapHttpWebRequest*, "Meta.WitAi", "WrapHttpWebRequest");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.WrapHttpWebRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WrapHttpWebRequest : public ::Il2CppObject/*, public ::Meta::WitAi::IRequest*/ {
    public:
    public:
    // private System.Net.HttpWebRequest _httpWebRequest
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::HttpWebRequest* httpWebRequest;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::IRequest
    operator ::Meta::WitAi::IRequest() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IRequest*>(this);
    }
    // Creating conversion operator: operator ::System::Net::HttpWebRequest*
    constexpr operator ::System::Net::HttpWebRequest*() const noexcept {
      return httpWebRequest;
    }
    // Get instance field reference: private System.Net.HttpWebRequest _httpWebRequest
    [[deprecated("Use field access instead!")]] ::System::Net::HttpWebRequest*& dyn__httpWebRequest();
    // public System.Void .ctor(System.Net.HttpWebRequest httpWebRequest)
    // Offset: 0x44362E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WrapHttpWebRequest* New_ctor(::System::Net::HttpWebRequest* httpWebRequest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::WrapHttpWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WrapHttpWebRequest*, creationType>(httpWebRequest)));
    }
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x4436370
    ::System::Net::WebHeaderCollection* get_Headers();
    // public System.Void set_Headers(System.Net.WebHeaderCollection value)
    // Offset: 0x4436394
    void set_Headers(::System::Net::WebHeaderCollection* value);
    // public System.String get_Method()
    // Offset: 0x44363B8
    ::StringW get_Method();
    // public System.Void set_Method(System.String value)
    // Offset: 0x44363D8
    void set_Method(::StringW value);
    // public System.String get_ContentType()
    // Offset: 0x44363F8
    ::StringW get_ContentType();
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x443641C
    void set_ContentType(::StringW value);
    // public System.Int64 get_ContentLength()
    // Offset: 0x4436440
    int64_t get_ContentLength();
    // public System.Void set_ContentLength(System.Int64 value)
    // Offset: 0x4436464
    void set_ContentLength(int64_t value);
    // public System.Boolean get_SendChunked()
    // Offset: 0x4436488
    bool get_SendChunked();
    // public System.Void set_SendChunked(System.Boolean value)
    // Offset: 0x44364A4
    void set_SendChunked(bool value);
    // public System.String get_UserAgent()
    // Offset: 0x44364C4
    ::StringW get_UserAgent();
    // public System.Void set_UserAgent(System.String value)
    // Offset: 0x44364E0
    void set_UserAgent(::StringW value);
    // public System.Int32 get_Timeout()
    // Offset: 0x44364FC
    int get_Timeout();
    // public System.Void set_Timeout(System.Int32 value)
    // Offset: 0x4436520
    void set_Timeout(int value);
    // public System.Void Abort()
    // Offset: 0x4436544
    void Abort();
    // public System.Void Dispose()
    // Offset: 0x4436568
    void Dispose();
    // public System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0x44365A0
    ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0x44365C4
    ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0x44365E8
    ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);
    // public System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0x443660C
    ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);
  }; // Meta.WitAi.WrapHttpWebRequest
  #pragma pack(pop)
  static check_size<sizeof(WrapHttpWebRequest), 16 + sizeof(::System::Net::HttpWebRequest*)> __Meta_WitAi_WrapHttpWebRequestSizeCheck;
  static_assert(sizeof(WrapHttpWebRequest) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_Headers
// Il2CppName: set_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(::System::Net::WebHeaderCollection*)>(&Meta::WitAi::WrapHttpWebRequest::set_Headers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(::StringW)>(&Meta::WitAi::WrapHttpWebRequest::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(::StringW)>(&Meta::WitAi::WrapHttpWebRequest::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_ContentLength
// Il2CppName: set_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(int64_t)>(&Meta::WitAi::WrapHttpWebRequest::set_ContentLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_SendChunked
// Il2CppName: get_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_SendChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_SendChunked
// Il2CppName: set_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(bool)>(&Meta::WitAi::WrapHttpWebRequest::set_SendChunked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_UserAgent
// Il2CppName: get_UserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_UserAgent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_UserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_UserAgent
// Il2CppName: set_UserAgent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(::StringW)>(&Meta::WitAi::WrapHttpWebRequest::set_UserAgent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_UserAgent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::set_Timeout
// Il2CppName: set_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)(int)>(&Meta::WitAi::WrapHttpWebRequest::set_Timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "set_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::WrapHttpWebRequest::*)()>(&Meta::WitAi::WrapHttpWebRequest::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::BeginGetRequestStream
// Il2CppName: BeginGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Meta::WitAi::WrapHttpWebRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Meta::WitAi::WrapHttpWebRequest::BeginGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "BeginGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Meta::WitAi::WrapHttpWebRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Meta::WitAi::WrapHttpWebRequest::BeginGetResponse)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "BeginGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::EndGetRequestStream
// Il2CppName: EndGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Meta::WitAi::WrapHttpWebRequest::*)(::System::IAsyncResult*)>(&Meta::WitAi::WrapHttpWebRequest::EndGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "EndGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::WrapHttpWebRequest::EndGetResponse
// Il2CppName: EndGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (Meta::WitAi::WrapHttpWebRequest::*)(::System::IAsyncResult*)>(&Meta::WitAi::WrapHttpWebRequest::EndGetResponse)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::WrapHttpWebRequest*), "EndGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
