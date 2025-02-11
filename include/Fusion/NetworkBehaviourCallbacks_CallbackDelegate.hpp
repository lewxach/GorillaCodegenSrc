// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkBehaviourCallbacks
#include "Fusion/NetworkBehaviourCallbacks.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkBehaviour
  class NetworkBehaviour;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkBehaviourCallbacks::CallbackDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkBehaviourCallbacks::CallbackDelegate*, "Fusion", "NetworkBehaviourCallbacks/CallbackDelegate");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkBehaviourCallbacks/CallbackDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkBehaviourCallbacks::CallbackDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B0CEF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkBehaviourCallbacks::CallbackDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkBehaviourCallbacks::CallbackDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkBehaviourCallbacks::CallbackDelegate*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Fusion.NetworkBehaviour behaviour, System.Int32* old)
    // Offset: 0x2B0D000
    bool Invoke(::Fusion::NetworkBehaviour* behaviour, int* old);
    // public System.IAsyncResult BeginInvoke(Fusion.NetworkBehaviour behaviour, System.Int32* old, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B0D014
    ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkBehaviour* behaviour, int* old, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x2B0D03C
    bool EndInvoke(::System::IAsyncResult* result);
  }; // Fusion.NetworkBehaviourCallbacks/CallbackDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkBehaviourCallbacks::CallbackDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkBehaviourCallbacks::CallbackDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkBehaviourCallbacks::CallbackDelegate::*)(::Fusion::NetworkBehaviour*, int*)>(&Fusion::NetworkBehaviourCallbacks::CallbackDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* behaviour = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkBehaviour")->byval_arg;
    static auto* old = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourCallbacks::CallbackDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behaviour, old});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourCallbacks::CallbackDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Fusion::NetworkBehaviourCallbacks::CallbackDelegate::*)(::Fusion::NetworkBehaviour*, int*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Fusion::NetworkBehaviourCallbacks::CallbackDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* behaviour = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkBehaviour")->byval_arg;
    static auto* old = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourCallbacks::CallbackDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behaviour, old, callback, object});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourCallbacks::CallbackDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkBehaviourCallbacks::CallbackDelegate::*)(::System::IAsyncResult*)>(&Fusion::NetworkBehaviourCallbacks::CallbackDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourCallbacks::CallbackDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
