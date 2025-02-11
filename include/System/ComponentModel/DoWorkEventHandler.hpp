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
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DoWorkEventArgs
  class DoWorkEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DoWorkEventHandler
  class DoWorkEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DoWorkEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DoWorkEventHandler*, "System.ComponentModel", "DoWorkEventHandler");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DoWorkEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DoWorkEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4F1F118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoWorkEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DoWorkEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoWorkEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ComponentModel.DoWorkEventArgs e)
    // Offset: 0x4F1F224
    void Invoke(::Il2CppObject* sender, ::System::ComponentModel::DoWorkEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ComponentModel.DoWorkEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4F1F238
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ComponentModel::DoWorkEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4F1F260
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ComponentModel.DoWorkEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::DoWorkEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::DoWorkEventArgs*)>(&System::ComponentModel::DoWorkEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "DoWorkEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ComponentModel::DoWorkEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::DoWorkEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ComponentModel::DoWorkEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "DoWorkEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::DoWorkEventHandler::*)(::System::IAsyncResult*)>(&System::ComponentModel::DoWorkEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
