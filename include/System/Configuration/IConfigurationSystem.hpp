// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: IConfigurationSystem
  class IConfigurationSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::IConfigurationSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IConfigurationSystem*, "System.Configuration", "IConfigurationSystem");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.IConfigurationSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class IConfigurationSystem {
    public:
    // public System.Object GetConfig(System.String configKey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetConfig(::StringW configKey);
    // public System.Void Init()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init();
  }; // System.Configuration.IConfigurationSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::IConfigurationSystem::GetConfig
// Il2CppName: GetConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Configuration::IConfigurationSystem::*)(::StringW)>(&System::Configuration::IConfigurationSystem::GetConfig)> {
  static const MethodInfo* get() {
    static auto* configKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IConfigurationSystem*), "GetConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configKey});
  }
};
// Writing MetadataGetter for method: System::Configuration::IConfigurationSystem::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::IConfigurationSystem::*)()>(&System::Configuration::IConfigurationSystem::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IConfigurationSystem*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};