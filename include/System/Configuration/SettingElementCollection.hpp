// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: SettingElement
  class SettingElement;
  // Forward declaring type: ConfigurationElementCollectionType
  struct ConfigurationElementCollectionType;
  // Skipping declaration: ConfigurationElement because it is already included!
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingElementCollection
  class SettingElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingElementCollection*, "System.Configuration", "SettingElementCollection");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingElementCollection : public ::System::Configuration::ConfigurationElementCollection {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F5B780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingElementCollection*, creationType>()));
    }
    // public System.Void Add(System.Configuration.SettingElement element)
    // Offset: 0x4F5B828
    void Add(::System::Configuration::SettingElement* element);
    // public System.Void Clear()
    // Offset: 0x4F5B860
    void Clear();
    // public System.Configuration.SettingElement Get(System.String elementKey)
    // Offset: 0x4F5B8D0
    ::System::Configuration::SettingElement* Get(::StringW elementKey);
    // public System.Void Remove(System.Configuration.SettingElement element)
    // Offset: 0x4F5B940
    void Remove(::System::Configuration::SettingElement* element);
    // public override System.Configuration.ConfigurationElementCollectionType get_CollectionType()
    // Offset: 0x4F5B7B8
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Configuration.ConfigurationElementCollectionType ConfigurationElementCollection::get_CollectionType()
    ::System::Configuration::ConfigurationElementCollectionType get_CollectionType();
    // protected override System.String get_ElementName()
    // Offset: 0x4F5B7F0
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.String ConfigurationElementCollection::get_ElementName()
    ::StringW get_ElementName();
    // protected override System.Configuration.ConfigurationElement CreateNewElement()
    // Offset: 0x4F5B898
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Configuration.ConfigurationElement ConfigurationElementCollection::CreateNewElement()
    ::System::Configuration::ConfigurationElement* CreateNewElement();
    // protected override System.Object GetElementKey(System.Configuration.ConfigurationElement element)
    // Offset: 0x4F5B908
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Object ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement element)
    ::Il2CppObject* GetElementKey(::System::Configuration::ConfigurationElement* element);
  }; // System.Configuration.SettingElementCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingElementCollection::*)(::System::Configuration::SettingElement*)>(&System::Configuration::SettingElementCollection::Add)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Configuration", "SettingElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingElementCollection::*)()>(&System::Configuration::SettingElementCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::SettingElement* (System::Configuration::SettingElementCollection::*)(::StringW)>(&System::Configuration::SettingElementCollection::Get)> {
  static const MethodInfo* get() {
    static auto* elementKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementKey});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingElementCollection::*)(::System::Configuration::SettingElement*)>(&System::Configuration::SettingElementCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Configuration", "SettingElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::get_CollectionType
// Il2CppName: get_CollectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationElementCollectionType (System::Configuration::SettingElementCollection::*)()>(&System::Configuration::SettingElementCollection::get_CollectionType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "get_CollectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::SettingElementCollection::*)()>(&System::Configuration::SettingElementCollection::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::CreateNewElement
// Il2CppName: CreateNewElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationElement* (System::Configuration::SettingElementCollection::*)()>(&System::Configuration::SettingElementCollection::CreateNewElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "CreateNewElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingElementCollection::GetElementKey
// Il2CppName: GetElementKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Configuration::SettingElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&System::Configuration::SettingElementCollection::GetElementKey)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingElementCollection*), "GetElementKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};