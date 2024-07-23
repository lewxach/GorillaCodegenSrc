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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: ConnectionManagementElement
  class ConnectionManagementElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElement*, "System.Net.Configuration", "ConnectionManagementElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.ConnectionManagementElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectionManagementElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F57760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionManagementElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::ConnectionManagementElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionManagementElement*, creationType>()));
    }
    // public System.Void .ctor(System.String address, System.Int32 maxConnection)
    // Offset: 0x4F57798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionManagementElement* New_ctor(::StringW address, int maxConnection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::ConnectionManagementElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionManagementElement*, creationType>(address, maxConnection)));
    }
    // public System.String get_Address()
    // Offset: 0x4F577D0
    ::StringW get_Address();
    // public System.Void set_Address(System.String value)
    // Offset: 0x4F57808
    void set_Address(::StringW value);
    // public System.Int32 get_MaxConnection()
    // Offset: 0x4F57840
    int get_MaxConnection();
    // public System.Void set_MaxConnection(System.Int32 value)
    // Offset: 0x4F57878
    void set_MaxConnection(int value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x4F578B0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.ConnectionManagementElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::ConnectionManagementElement::*)()>(&System::Net::Configuration::ConnectionManagementElement::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::ConnectionManagementElement*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::set_Address
// Il2CppName: set_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::ConnectionManagementElement::*)(::StringW)>(&System::Net::Configuration::ConnectionManagementElement::set_Address)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::ConnectionManagementElement*), "set_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::get_MaxConnection
// Il2CppName: get_MaxConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::ConnectionManagementElement::*)()>(&System::Net::Configuration::ConnectionManagementElement::get_MaxConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::ConnectionManagementElement*), "get_MaxConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::set_MaxConnection
// Il2CppName: set_MaxConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::ConnectionManagementElement::*)(int)>(&System::Net::Configuration::ConnectionManagementElement::set_MaxConnection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::ConnectionManagementElement*), "set_MaxConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::ConnectionManagementElement::*)()>(&System::Net::Configuration::ConnectionManagementElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::ConnectionManagementElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};