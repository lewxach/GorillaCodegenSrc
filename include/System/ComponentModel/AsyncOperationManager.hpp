// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncOperationManager
  class AsyncOperationManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AsyncOperationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AsyncOperationManager*, "System.ComponentModel", "AsyncOperationManager");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AsyncOperationManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncOperationManager : public ::Il2CppObject {
    public:
    // static public System.ComponentModel.AsyncOperation CreateOperation(System.Object userSuppliedState)
    // Offset: 0x4EF0D68
    static ::System::ComponentModel::AsyncOperation* CreateOperation(::Il2CppObject* userSuppliedState);
    // static public System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0x4EF0D84
    static ::System::Threading::SynchronizationContext* get_SynchronizationContext();
    // static public System.Void set_SynchronizationContext(System.Threading.SynchronizationContext value)
    // Offset: 0x4EF0DE8
    static void set_SynchronizationContext(::System::Threading::SynchronizationContext* value);
  }; // System.ComponentModel.AsyncOperationManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AsyncOperationManager::CreateOperation
// Il2CppName: CreateOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AsyncOperation* (*)(::Il2CppObject*)>(&System::ComponentModel::AsyncOperationManager::CreateOperation)> {
  static const MethodInfo* get() {
    static auto* userSuppliedState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AsyncOperationManager*), "CreateOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userSuppliedState});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AsyncOperationManager::get_SynchronizationContext
// Il2CppName: get_SynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&System::ComponentModel::AsyncOperationManager::get_SynchronizationContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AsyncOperationManager*), "get_SynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AsyncOperationManager::set_SynchronizationContext
// Il2CppName: set_SynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&System::ComponentModel::AsyncOperationManager::set_SynchronizationContext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Threading", "SynchronizationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AsyncOperationManager*), "set_SynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
