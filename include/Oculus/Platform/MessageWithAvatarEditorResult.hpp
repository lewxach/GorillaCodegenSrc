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
  // Forward declaring type: AvatarEditorResult
  class AvatarEditorResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithAvatarEditorResult
  class MessageWithAvatarEditorResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithAvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAvatarEditorResult*, "Oculus.Platform", "MessageWithAvatarEditorResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAvatarEditorResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAvatarEditorResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AvatarEditorResult*> {
    public:
    // protected Oculus.Platform.Models.AvatarEditorResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x4874754
    ::Oculus::Platform::Models::AvatarEditorResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x48721D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAvatarEditorResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithAvatarEditorResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAvatarEditorResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AvatarEditorResult GetAvatarEditorResult()
    // Offset: 0x4874718
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AvatarEditorResult Message::GetAvatarEditorResult()
    ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();
  }; // Oculus.Platform.MessageWithAvatarEditorResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (Oculus::Platform::MessageWithAvatarEditorResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAvatarEditorResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAvatarEditorResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult
// Il2CppName: GetAvatarEditorResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (Oculus::Platform::MessageWithAvatarEditorResult::*)()>(&Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAvatarEditorResult*), "GetAvatarEditorResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
