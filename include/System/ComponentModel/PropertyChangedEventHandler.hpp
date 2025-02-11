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
  // Forward declaring type: PropertyChangedEventArgs
  class PropertyChangedEventArgs;
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
  // Forward declaring type: PropertyChangedEventHandler
  class PropertyChangedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventHandler*, "System.ComponentModel", "PropertyChangedEventHandler");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyChangedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyChangedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4F1A370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyChangedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyChangedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyChangedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ComponentModel.PropertyChangedEventArgs e)
    // Offset: 0x4F1A47C
    void Invoke(::Il2CppObject* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ComponentModel.PropertyChangedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4F1A490
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ComponentModel::PropertyChangedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4F1A4B8
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ComponentModel.PropertyChangedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::PropertyChangedEventArgs*)>(&System::ComponentModel::PropertyChangedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyChangedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ComponentModel::PropertyChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::PropertyChangedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ComponentModel::PropertyChangedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyChangedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyChangedEventHandler::*)(::System::IAsyncResult*)>(&System::ComponentModel::PropertyChangedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyChangedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
