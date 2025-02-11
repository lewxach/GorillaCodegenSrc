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
  // Forward declaring type: ApplicationInviteList
  class ApplicationInviteList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithApplicationInviteList
  class MessageWithApplicationInviteList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationInviteList*, "Oculus.Platform", "MessageWithApplicationInviteList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithApplicationInviteList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithApplicationInviteList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationInviteList*> {
    public:
    // protected Oculus.Platform.Models.ApplicationInviteList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x48740D4
    ::Oculus::Platform::Models::ApplicationInviteList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x4871F18
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithApplicationInviteList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithApplicationInviteList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithApplicationInviteList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ApplicationInviteList GetApplicationInviteList()
    // Offset: 0x4874098
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ApplicationInviteList Message::GetApplicationInviteList()
    ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList();
  }; // Oculus.Platform.MessageWithApplicationInviteList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (Oculus::Platform::MessageWithApplicationInviteList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithApplicationInviteList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationInviteList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList
// Il2CppName: GetApplicationInviteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (Oculus::Platform::MessageWithApplicationInviteList::*)()>(&Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithApplicationInviteList*), "GetApplicationInviteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
