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
  // Forward declaring type: LivestreamingStartResult
  class LivestreamingStartResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithLivestreamingStartResult
  class MessageWithLivestreamingStartResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingStartResult*, "Oculus.Platform", "MessageWithLivestreamingStartResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLivestreamingStartResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLivestreamingStartResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStartResult*> {
    public:
    // protected Oculus.Platform.Models.LivestreamingStartResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x48759AC
    ::Oculus::Platform::Models::LivestreamingStartResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x4875918
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLivestreamingStartResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithLivestreamingStartResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLivestreamingStartResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LivestreamingStartResult GetLivestreamingStartResult()
    // Offset: 0x4875970
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LivestreamingStartResult Message::GetLivestreamingStartResult()
    ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();
  }; // Oculus.Platform.MessageWithLivestreamingStartResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStartResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (Oculus::Platform::MessageWithLivestreamingStartResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithLivestreamingStartResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingStartResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStartResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingStartResult::GetLivestreamingStartResult
// Il2CppName: GetLivestreamingStartResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (Oculus::Platform::MessageWithLivestreamingStartResult::*)()>(&Oculus::Platform::MessageWithLivestreamingStartResult::GetLivestreamingStartResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingStartResult*), "GetLivestreamingStartResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
