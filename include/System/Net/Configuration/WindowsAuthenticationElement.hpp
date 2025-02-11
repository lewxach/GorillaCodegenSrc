// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: WindowsAuthenticationElement
  class WindowsAuthenticationElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::WindowsAuthenticationElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WindowsAuthenticationElement*, "System.Net.Configuration", "WindowsAuthenticationElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.WindowsAuthenticationElement
  // [TokenAttribute] Offset: FFFFFFFF
  class WindowsAuthenticationElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F5A4A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsAuthenticationElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::WindowsAuthenticationElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsAuthenticationElement*, creationType>()));
    }
    // public System.Int32 get_DefaultCredentialsHandleCacheSize()
    // Offset: 0x4F5A4E0
    int get_DefaultCredentialsHandleCacheSize();
    // public System.Void set_DefaultCredentialsHandleCacheSize(System.Int32 value)
    // Offset: 0x4F5A518
    void set_DefaultCredentialsHandleCacheSize(int value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x4F5A550
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.WindowsAuthenticationElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::WindowsAuthenticationElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::WindowsAuthenticationElement::get_DefaultCredentialsHandleCacheSize
// Il2CppName: get_DefaultCredentialsHandleCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::WindowsAuthenticationElement::*)()>(&System::Net::Configuration::WindowsAuthenticationElement::get_DefaultCredentialsHandleCacheSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WindowsAuthenticationElement*), "get_DefaultCredentialsHandleCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WindowsAuthenticationElement::set_DefaultCredentialsHandleCacheSize
// Il2CppName: set_DefaultCredentialsHandleCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::WindowsAuthenticationElement::*)(int)>(&System::Net::Configuration::WindowsAuthenticationElement::set_DefaultCredentialsHandleCacheSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WindowsAuthenticationElement*), "set_DefaultCredentialsHandleCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WindowsAuthenticationElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::WindowsAuthenticationElement::*)()>(&System::Net::Configuration::WindowsAuthenticationElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WindowsAuthenticationElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
