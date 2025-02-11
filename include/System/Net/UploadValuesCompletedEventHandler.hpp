// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: UploadValuesCompletedEventArgs
  class UploadValuesCompletedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: UploadValuesCompletedEventHandler
  class UploadValuesCompletedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UploadValuesCompletedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UploadValuesCompletedEventHandler*, "System.Net", "UploadValuesCompletedEventHandler");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UploadValuesCompletedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class UploadValuesCompletedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4FCA2E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UploadValuesCompletedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::UploadValuesCompletedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UploadValuesCompletedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Net.UploadValuesCompletedEventArgs e)
    // Offset: 0x4FCF69C
    void Invoke(::Il2CppObject* sender, ::System::Net::UploadValuesCompletedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Net.UploadValuesCompletedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4FCF6B0
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Net::UploadValuesCompletedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4FCF6D8
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.UploadValuesCompletedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::UploadValuesCompletedEventHandler::*)(::Il2CppObject*, ::System::Net::UploadValuesCompletedEventArgs*)>(&System::Net::UploadValuesCompletedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "UploadValuesCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadValuesCompletedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::UploadValuesCompletedEventHandler::*)(::Il2CppObject*, ::System::Net::UploadValuesCompletedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::UploadValuesCompletedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "UploadValuesCompletedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadValuesCompletedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::UploadValuesCompletedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::UploadValuesCompletedEventHandler::*)(::System::IAsyncResult*)>(&System::Net::UploadValuesCompletedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UploadValuesCompletedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
