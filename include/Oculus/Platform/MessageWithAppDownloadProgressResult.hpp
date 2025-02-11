// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AppDownloadProgressResult
  class AppDownloadProgressResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithAppDownloadProgressResult
  class MessageWithAppDownloadProgressResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithAppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAppDownloadProgressResult*, "Oculus.Platform", "MessageWithAppDownloadProgressResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAppDownloadProgressResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAppDownloadProgressResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AppDownloadProgressResult*> {
    public:
    // protected Oculus.Platform.Models.AppDownloadProgressResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x4873F34
    ::Oculus::Platform::Models::AppDownloadProgressResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x4871E68
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAppDownloadProgressResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithAppDownloadProgressResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAppDownloadProgressResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AppDownloadProgressResult GetAppDownloadProgressResult()
    // Offset: 0x4873EF8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AppDownloadProgressResult Message::GetAppDownloadProgressResult()
    ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();
  }; // Oculus.Platform.MessageWithAppDownloadProgressResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAppDownloadProgressResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (Oculus::Platform::MessageWithAppDownloadProgressResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithAppDownloadProgressResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAppDownloadProgressResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAppDownloadProgressResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAppDownloadProgressResult::GetAppDownloadProgressResult
// Il2CppName: GetAppDownloadProgressResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (Oculus::Platform::MessageWithAppDownloadProgressResult::*)()>(&Oculus::Platform::MessageWithAppDownloadProgressResult::GetAppDownloadProgressResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAppDownloadProgressResult*), "GetAppDownloadProgressResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
