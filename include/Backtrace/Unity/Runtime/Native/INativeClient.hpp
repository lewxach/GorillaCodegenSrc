// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.Attributes.IDynamicAttributeProvider
#include "Backtrace/Unity/Model/Attributes/IDynamicAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Backtrace.Unity.Runtime.Native
namespace Backtrace::Unity::Runtime::Native {
  // Forward declaring type: INativeClient
  class INativeClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Runtime::Native::INativeClient);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Runtime::Native::INativeClient*, "Backtrace.Unity.Runtime.Native", "INativeClient");
// Type namespace: Backtrace.Unity.Runtime.Native
namespace Backtrace::Unity::Runtime::Native {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Runtime.Native.INativeClient
  // [TokenAttribute] Offset: FFFFFFFF
  class INativeClient/*, public ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*/ {
    public:
    // Creating interface conversion operator: operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider
    operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider() noexcept {
      return *reinterpret_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(this);
    }
    // public System.Void HandleAnr()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleAnr();
    // public System.Void SetAttribute(System.String key, System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAttribute(::StringW key, ::StringW value);
    // public System.Boolean OnOOM()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool OnOOM();
    // public System.Void Update(System.Single time)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(float time);
    // public System.Void Disable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Disable();
    // public System.Void PauseAnrThread(System.Boolean state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PauseAnrThread(bool state);
  }; // Backtrace.Unity.Runtime.Native.INativeClient
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::HandleAnr
// Il2CppName: HandleAnr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&Backtrace::Unity::Runtime::Native::INativeClient::HandleAnr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "HandleAnr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::SetAttribute
// Il2CppName: SetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Runtime::Native::INativeClient::*)(::StringW, ::StringW)>(&Backtrace::Unity::Runtime::Native::INativeClient::SetAttribute)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "SetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::OnOOM
// Il2CppName: OnOOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&Backtrace::Unity::Runtime::Native::INativeClient::OnOOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "OnOOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Runtime::Native::INativeClient::*)(float)>(&Backtrace::Unity::Runtime::Native::INativeClient::Update)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&Backtrace::Unity::Runtime::Native::INativeClient::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::INativeClient::PauseAnrThread
// Il2CppName: PauseAnrThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Runtime::Native::INativeClient::*)(bool)>(&Backtrace::Unity::Runtime::Native::INativeClient::PauseAnrThread)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::INativeClient*), "PauseAnrThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};