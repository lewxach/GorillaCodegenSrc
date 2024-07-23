// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkRunner
#include "Fusion/NetworkRunner.hpp"
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
  // Forward declaring type: NetworkObject
  class NetworkObject;
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
NEED_NO_BOX(::Fusion::NetworkRunner::OnBeforeSpawned);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRunner::OnBeforeSpawned*, "Fusion", "NetworkRunner/OnBeforeSpawned");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkRunner/OnBeforeSpawned
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkRunner::OnBeforeSpawned : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B66488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRunner::OnBeforeSpawned* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRunner::OnBeforeSpawned::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRunner::OnBeforeSpawned*, creationType>(object, method)));
    }
    // public System.Void Invoke(Fusion.NetworkRunner runner, Fusion.NetworkObject obj)
    // Offset: 0x2B6653C
    void Invoke(::Fusion::NetworkRunner* runner, ::Fusion::NetworkObject* obj);
    // public System.IAsyncResult BeginInvoke(Fusion.NetworkRunner runner, Fusion.NetworkObject obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B66550
    ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkRunner* runner, ::Fusion::NetworkObject* obj, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2B66578
    void EndInvoke(::System::IAsyncResult* result);
  }; // Fusion.NetworkRunner/OnBeforeSpawned
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRunner::OnBeforeSpawned::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkRunner::OnBeforeSpawned::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::OnBeforeSpawned::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&Fusion::NetworkRunner::OnBeforeSpawned::Invoke)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::OnBeforeSpawned*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::OnBeforeSpawned::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Fusion::NetworkRunner::OnBeforeSpawned::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Fusion::NetworkRunner::OnBeforeSpawned::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::OnBeforeSpawned*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, obj, callback, object});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::OnBeforeSpawned::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::OnBeforeSpawned::*)(::System::IAsyncResult*)>(&Fusion::NetworkRunner::OnBeforeSpawned::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::OnBeforeSpawned*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};