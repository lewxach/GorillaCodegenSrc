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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: HttpListenerTimeoutsElement
  class HttpListenerTimeoutsElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::HttpListenerTimeoutsElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::HttpListenerTimeoutsElement*, "System.Net.Configuration", "HttpListenerTimeoutsElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.HttpListenerTimeoutsElement
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerTimeoutsElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F58720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerTimeoutsElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::HttpListenerTimeoutsElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerTimeoutsElement*, creationType>()));
    }
    // public System.TimeSpan get_DrainEntityBody()
    // Offset: 0x4F58758
    ::System::TimeSpan get_DrainEntityBody();
    // public System.TimeSpan get_EntityBody()
    // Offset: 0x4F58790
    ::System::TimeSpan get_EntityBody();
    // public System.TimeSpan get_HeaderWait()
    // Offset: 0x4F587C8
    ::System::TimeSpan get_HeaderWait();
    // public System.TimeSpan get_IdleConnection()
    // Offset: 0x4F58800
    ::System::TimeSpan get_IdleConnection();
    // public System.Int64 get_MinSendBytesPerSecond()
    // Offset: 0x4F58838
    int64_t get_MinSendBytesPerSecond();
    // public System.TimeSpan get_RequestQueue()
    // Offset: 0x4F588A8
    ::System::TimeSpan get_RequestQueue();
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x4F58870
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.HttpListenerTimeoutsElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_DrainEntityBody
// Il2CppName: get_DrainEntityBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_DrainEntityBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_DrainEntityBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_EntityBody
// Il2CppName: get_EntityBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_EntityBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_EntityBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_HeaderWait
// Il2CppName: get_HeaderWait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_HeaderWait)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_HeaderWait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_IdleConnection
// Il2CppName: get_IdleConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_IdleConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_IdleConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_MinSendBytesPerSecond
// Il2CppName: get_MinSendBytesPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_MinSendBytesPerSecond)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_MinSendBytesPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_RequestQueue
// Il2CppName: get_RequestQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_RequestQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_RequestQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpListenerTimeoutsElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::HttpListenerTimeoutsElement::*)()>(&System::Net::Configuration::HttpListenerTimeoutsElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpListenerTimeoutsElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};