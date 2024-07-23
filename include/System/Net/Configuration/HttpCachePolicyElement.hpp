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
// Forward declaring namespace: System::Net::Cache
namespace System::Net::Cache {
  // Forward declaring type: HttpRequestCacheLevel
  struct HttpRequestCacheLevel;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: HttpCachePolicyElement
  class HttpCachePolicyElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::HttpCachePolicyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::HttpCachePolicyElement*, "System.Net.Configuration", "HttpCachePolicyElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.HttpCachePolicyElement
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpCachePolicyElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F583A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpCachePolicyElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::HttpCachePolicyElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpCachePolicyElement*, creationType>()));
    }
    // public System.TimeSpan get_MaximumAge()
    // Offset: 0x4F583D8
    ::System::TimeSpan get_MaximumAge();
    // public System.Void set_MaximumAge(System.TimeSpan value)
    // Offset: 0x4F58410
    void set_MaximumAge(::System::TimeSpan value);
    // public System.TimeSpan get_MaximumStale()
    // Offset: 0x4F58448
    ::System::TimeSpan get_MaximumStale();
    // public System.Void set_MaximumStale(System.TimeSpan value)
    // Offset: 0x4F58480
    void set_MaximumStale(::System::TimeSpan value);
    // public System.TimeSpan get_MinimumFresh()
    // Offset: 0x4F584B8
    ::System::TimeSpan get_MinimumFresh();
    // public System.Void set_MinimumFresh(System.TimeSpan value)
    // Offset: 0x4F584F0
    void set_MinimumFresh(::System::TimeSpan value);
    // public System.Net.Cache.HttpRequestCacheLevel get_PolicyLevel()
    // Offset: 0x4F58528
    ::System::Net::Cache::HttpRequestCacheLevel get_PolicyLevel();
    // public System.Void set_PolicyLevel(System.Net.Cache.HttpRequestCacheLevel value)
    // Offset: 0x4F58560
    void set_PolicyLevel(::System::Net::Cache::HttpRequestCacheLevel value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x4F58598
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected override System.Void DeserializeElement(System.Xml.XmlReader reader, System.Boolean serializeCollectionKey)
    // Offset: 0x4F585D0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::DeserializeElement(System.Xml.XmlReader reader, System.Boolean serializeCollectionKey)
    void DeserializeElement(::System::Xml::XmlReader* reader, bool serializeCollectionKey);
    // protected override System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x4F58608
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::Reset(System.Configuration.ConfigurationElement parentElement)
    void Reset(::System::Configuration::ConfigurationElement* parentElement);
  }; // System.Net.Configuration.HttpCachePolicyElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::get_MaximumAge
// Il2CppName: get_MaximumAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpCachePolicyElement::*)()>(&System::Net::Configuration::HttpCachePolicyElement::get_MaximumAge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "get_MaximumAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::set_MaximumAge
// Il2CppName: set_MaximumAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&System::Net::Configuration::HttpCachePolicyElement::set_MaximumAge)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "set_MaximumAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::get_MaximumStale
// Il2CppName: get_MaximumStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpCachePolicyElement::*)()>(&System::Net::Configuration::HttpCachePolicyElement::get_MaximumStale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "get_MaximumStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::set_MaximumStale
// Il2CppName: set_MaximumStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&System::Net::Configuration::HttpCachePolicyElement::set_MaximumStale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "set_MaximumStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::get_MinimumFresh
// Il2CppName: get_MinimumFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::HttpCachePolicyElement::*)()>(&System::Net::Configuration::HttpCachePolicyElement::get_MinimumFresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "get_MinimumFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::set_MinimumFresh
// Il2CppName: set_MinimumFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::TimeSpan)>(&System::Net::Configuration::HttpCachePolicyElement::set_MinimumFresh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "set_MinimumFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::get_PolicyLevel
// Il2CppName: get_PolicyLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::HttpRequestCacheLevel (System::Net::Configuration::HttpCachePolicyElement::*)()>(&System::Net::Configuration::HttpCachePolicyElement::get_PolicyLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "get_PolicyLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::set_PolicyLevel
// Il2CppName: set_PolicyLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::Net::Cache::HttpRequestCacheLevel)>(&System::Net::Configuration::HttpCachePolicyElement::set_PolicyLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Cache", "HttpRequestCacheLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "set_PolicyLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::HttpCachePolicyElement::*)()>(&System::Net::Configuration::HttpCachePolicyElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::DeserializeElement
// Il2CppName: DeserializeElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::Xml::XmlReader*, bool)>(&System::Net::Configuration::HttpCachePolicyElement::DeserializeElement)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* serializeCollectionKey = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "DeserializeElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, serializeCollectionKey});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpCachePolicyElement::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpCachePolicyElement::*)(::System::Configuration::ConfigurationElement*)>(&System::Net::Configuration::HttpCachePolicyElement::Reset)> {
  static const MethodInfo* get() {
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpCachePolicyElement*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentElement});
  }
};