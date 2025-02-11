// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystem
#include "GlobalNamespace/NetworkSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, "", "NetworkSystem/StaticRPCPlaceholder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: NetworkSystem/StaticRPCPlaceholder
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkSystem::StaticRPCPlaceholder : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2911348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSystem::StaticRPCPlaceholder* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSystem::StaticRPCPlaceholder*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Byte[] args)
    // Offset: 0x29113F8
    void Invoke(::ArrayW<uint8_t> args);
    // public System.IAsyncResult BeginInvoke(System.Byte[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x291140C
    ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t> args, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x291142C
    void EndInvoke(::System::IAsyncResult* result);
  }; // NetworkSystem/StaticRPCPlaceholder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::Invoke)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::*)(::System::IAsyncResult*)>(&GlobalNamespace::NetworkSystem::StaticRPCPlaceholder::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
