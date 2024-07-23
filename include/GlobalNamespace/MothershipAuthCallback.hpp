// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LoginCompleteDelegateWrapper
#include "GlobalNamespace/LoginCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipClientApiClient
  class MothershipClientApiClient;
  // Forward declaring type: MothershipResponse
  class MothershipResponse;
  // Forward declaring type: MothershipError
  class MothershipError;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipAuthCallback
  class MothershipAuthCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipAuthCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipAuthCallback*, "", "MothershipAuthCallback");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MothershipAuthCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipAuthCallback : public ::GlobalNamespace::LoginCompleteDelegateWrapper {
    public:
    // public System.Void .ctor(MothershipClientApiClient clientApiClient)
    // Offset: 0x267D4DC
    // Implemented from: LoginCompleteDelegateWrapper
    // Base method: System.Void LoginCompleteDelegateWrapper::.ctor(MothershipClientApiClient clientApiClient)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipAuthCallback* New_ctor(::GlobalNamespace::MothershipClientApiClient* clientApiClient) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipAuthCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipAuthCallback*, creationType>(clientApiClient)));
    }
    // public override System.Void OnCompleteCallback(MothershipResponse response, System.Boolean wasSuccess, MothershipError error, System.IntPtr userData)
    // Offset: 0x267D548
    // Implemented from: MothershipRequestCompleteDelegateWrapper
    // Base method: System.Void MothershipRequestCompleteDelegateWrapper::OnCompleteCallback(MothershipResponse response, System.Boolean wasSuccess, MothershipError error, System.IntPtr userData)
    void OnCompleteCallback(::GlobalNamespace::MothershipResponse* response, bool wasSuccess, ::GlobalNamespace::MothershipError* error, ::System::IntPtr userData);
  }; // MothershipAuthCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthCallback::OnCompleteCallback
// Il2CppName: OnCompleteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&GlobalNamespace::MothershipAuthCallback::OnCompleteCallback)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("", "MothershipResponse")->byval_arg;
    static auto* wasSuccess = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("", "MothershipError")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthCallback*), "OnCompleteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, wasSuccess, error, userData});
  }
};