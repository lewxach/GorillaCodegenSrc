// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AuthRefreshRequiredDelegateWrapper
#include "GlobalNamespace/AuthRefreshRequiredDelegateWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipAuthRefreshRequiredCallback
  class MothershipAuthRefreshRequiredCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipAuthRefreshRequiredCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipAuthRefreshRequiredCallback*, "", "MothershipAuthRefreshRequiredCallback");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MothershipAuthRefreshRequiredCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipAuthRefreshRequiredCallback : public ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper {
    public:
    public:
    // private System.Action`1<System.String> _authRefreshFunction
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::StringW>* authRefreshFunction;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::StringW>*
    constexpr operator ::System::Action_1<::StringW>*() const noexcept {
      return authRefreshFunction;
    }
    // Get instance field reference: private System.Action`1<System.String> _authRefreshFunction
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn__authRefreshFunction();
    // public System.Void .ctor(System.Action`1<System.String> authRefreshFunction)
    // Offset: 0x267D694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipAuthRefreshRequiredCallback* New_ctor(::System::Action_1<::StringW>* authRefreshFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipAuthRefreshRequiredCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipAuthRefreshRequiredCallback*, creationType>(authRefreshFunction)));
    }
    // public override System.Void AuthRefreshRequired(System.String arg0)
    // Offset: 0x267D708
    // Implemented from: AuthRefreshRequiredDelegateWrapper
    // Base method: System.Void AuthRefreshRequiredDelegateWrapper::AuthRefreshRequired(System.String arg0)
    void AuthRefreshRequired(::StringW arg0);
  }; // MothershipAuthRefreshRequiredCallback
  #pragma pack(pop)
  static check_size<sizeof(MothershipAuthRefreshRequiredCallback), 48 + sizeof(::System::Action_1<::StringW>*)> __GlobalNamespace_MothershipAuthRefreshRequiredCallbackSizeCheck;
  static_assert(sizeof(MothershipAuthRefreshRequiredCallback) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthRefreshRequiredCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthRefreshRequiredCallback::AuthRefreshRequired
// Il2CppName: AuthRefreshRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthRefreshRequiredCallback::*)(::StringW)>(&GlobalNamespace::MothershipAuthRefreshRequiredCallback::AuthRefreshRequired)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthRefreshRequiredCallback*), "AuthRefreshRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0});
  }
};
