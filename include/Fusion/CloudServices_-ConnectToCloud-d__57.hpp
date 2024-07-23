// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.CloudServices
#include "Fusion/CloudServices.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: AppSettings
  class AppSettings;
  // Forward declaring type: AuthenticationValues
  class AuthenticationValues;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::CloudServices::$ConnectToCloud$d__57, "Fusion", "CloudServices/<ConnectToCloud>d__57");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.CloudServices/<ConnectToCloud>d__57
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct CloudServices::$ConnectToCloud$d__57/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public Fusion.Photon.Realtime.AppSettings customAppSettings
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Photon::Realtime::AppSettings* customAppSettings;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::AppSettings*) == 0x8);
    // public Fusion.CloudServices <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::CloudServices* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::CloudServices*) == 0x8);
    // public Fusion.Photon.Realtime.AuthenticationValues authentication
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::Photon::Realtime::AuthenticationValues* authentication;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::AuthenticationValues*) == 0x8);
    // public System.Nullable`1<System.Boolean> useDefaultCloudPorts
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<bool> useDefaultCloudPorts;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $ConnectToCloud$d__57
    constexpr $ConnectToCloud$d__57(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::Fusion::Photon::Realtime::AppSettings* customAppSettings_ = {}, ::Fusion::CloudServices* $$4__this_ = {}, ::Fusion::Photon::Realtime::AuthenticationValues* authentication_ = {}, ::System::Nullable_1<bool> useDefaultCloudPorts_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, customAppSettings{customAppSettings_}, $$4__this{$$4__this_}, authentication{authentication_}, useDefaultCloudPorts{useDefaultCloudPorts_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public Fusion.Photon.Realtime.AppSettings customAppSettings
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::AppSettings*& dyn_customAppSettings();
    // Get instance field reference: public Fusion.CloudServices <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::CloudServices*& dyn_$$4__this();
    // Get instance field reference: public Fusion.Photon.Realtime.AuthenticationValues authentication
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::AuthenticationValues*& dyn_authentication();
    // Get instance field reference: public System.Nullable`1<System.Boolean> useDefaultCloudPorts
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_useDefaultCloudPorts();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2B0390C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2B03B74
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Fusion.CloudServices/<ConnectToCloud>d__57
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::CloudServices::$ConnectToCloud$d__57::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$ConnectToCloud$d__57::*)()>(&Fusion::CloudServices::$ConnectToCloud$d__57::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$ConnectToCloud$d__57), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::CloudServices::$ConnectToCloud$d__57::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$ConnectToCloud$d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Fusion::CloudServices::$ConnectToCloud$d__57::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$ConnectToCloud$d__57), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};