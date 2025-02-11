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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: StatusCallback2
  class StatusCallback2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Internal::StatusCallback2);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::StatusCallback2*, "Viveport.Internal", "StatusCallback2");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.StatusCallback2
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class StatusCallback2 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27B4E4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StatusCallback2* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::StatusCallback2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StatusCallback2*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 nResult, System.String message)
    // Offset: 0x27B6214
    void Invoke(int nResult, ::StringW message);
    // public System.IAsyncResult BeginInvoke(System.Int32 nResult, System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27B6228
    ::System::IAsyncResult* BeginInvoke(int nResult, ::StringW message, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x27B62BC
    void EndInvoke(::System::IAsyncResult* result);
  }; // Viveport.Internal.StatusCallback2
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Internal::StatusCallback2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Internal::StatusCallback2::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Internal::StatusCallback2::*)(int, ::StringW)>(&Viveport::Internal::StatusCallback2::Invoke)> {
  static const MethodInfo* get() {
    static auto* nResult = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::StatusCallback2*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nResult, message});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::StatusCallback2::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Viveport::Internal::StatusCallback2::*)(int, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Viveport::Internal::StatusCallback2::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nResult = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::StatusCallback2*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nResult, message, callback, object});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::StatusCallback2::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Internal::StatusCallback2::*)(::System::IAsyncResult*)>(&Viveport::Internal::StatusCallback2::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::StatusCallback2*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
