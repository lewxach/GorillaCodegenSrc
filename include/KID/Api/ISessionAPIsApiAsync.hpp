// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Client.IApiAccessor
#include "KID/Client/IApiAccessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Forward declaring type: Session
  class Session;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: ApiResponse`1<T>
  template<typename T>
  class ApiResponse_1;
}
// Completed forward declares
// Type namespace: KID.Api
namespace KID::Api {
  // Forward declaring type: ISessionAPIsApiAsync
  class ISessionAPIsApiAsync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::ISessionAPIsApiAsync);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::ISessionAPIsApiAsync*, "KID.Api", "ISessionAPIsApiAsync");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.ISessionAPIsApiAsync
  // [TokenAttribute] Offset: FFFFFFFF
  class ISessionAPIsApiAsync/*, public ::KID::Client::IApiAccessor*/ {
    public:
    // Creating interface conversion operator: operator ::KID::Client::IApiAccessor
    operator ::KID::Client::IApiAccessor() noexcept {
      return *reinterpret_cast<::KID::Client::IApiAccessor*>(this);
    }
    // public System.Threading.Tasks.Task`1<KID.Model.Session> GetSessionAsync(System.Guid sessionId, System.String etag, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::KID::Model::Session*>* GetSessionAsync(::System::Guid sessionId, ::StringW etag, ::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<KID.Client.ApiResponse`1<KID.Model.Session>> GetSessionWithHttpInfoAsync(System.Guid sessionId, System.String etag, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::Session*>*>* GetSessionWithHttpInfoAsync(::System::Guid sessionId, ::StringW etag, ::System::Threading::CancellationToken cancellationToken);
  }; // KID.Api.ISessionAPIsApiAsync
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::ISessionAPIsApiAsync::GetSessionAsync
// Il2CppName: GetSessionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Model::Session*>* (KID::Api::ISessionAPIsApiAsync::*)(::System::Guid, ::StringW, ::System::Threading::CancellationToken)>(&KID::Api::ISessionAPIsApiAsync::GetSessionAsync)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::ISessionAPIsApiAsync*), "GetSessionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag, cancellationToken});
  }
};
// Writing MetadataGetter for method: KID::Api::ISessionAPIsApiAsync::GetSessionWithHttpInfoAsync
// Il2CppName: GetSessionWithHttpInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::KID::Client::ApiResponse_1<::KID::Model::Session*>*>* (KID::Api::ISessionAPIsApiAsync::*)(::System::Guid, ::StringW, ::System::Threading::CancellationToken)>(&KID::Api::ISessionAPIsApiAsync::GetSessionWithHttpInfoAsync)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* etag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::ISessionAPIsApiAsync*), "GetSessionWithHttpInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, etag, cancellationToken});
  }
};