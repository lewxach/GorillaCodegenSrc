// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.IConfigurationSectionHandler
#include "System/Configuration/IConfigurationSectionHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: DictionarySectionHandler
  class DictionarySectionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::DictionarySectionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::DictionarySectionHandler*, "System.Configuration", "DictionarySectionHandler");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.DictionarySectionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DictionarySectionHandler : public ::Il2CppObject/*, public ::System::Configuration::IConfigurationSectionHandler*/ {
    public:
    // Creating interface conversion operator: operator ::System::Configuration::IConfigurationSectionHandler
    operator ::System::Configuration::IConfigurationSectionHandler() noexcept {
      return *reinterpret_cast<::System::Configuration::IConfigurationSectionHandler*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x4F5BFD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictionarySectionHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::DictionarySectionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictionarySectionHandler*, creationType>()));
    }
    // protected System.String get_KeyAttributeName()
    // Offset: 0x4F5C00C
    ::StringW get_KeyAttributeName();
    // protected System.String get_ValueAttributeName()
    // Offset: 0x4F5C044
    ::StringW get_ValueAttributeName();
    // public System.Object Create(System.Object parent, System.Object context, System.Xml.XmlNode section)
    // Offset: 0x4F5C07C
    ::Il2CppObject* Create(::Il2CppObject* parent, ::Il2CppObject* context, ::System::Xml::XmlNode* section);
  }; // System.Configuration.DictionarySectionHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::DictionarySectionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::DictionarySectionHandler::get_KeyAttributeName
// Il2CppName: get_KeyAttributeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::DictionarySectionHandler::*)()>(&System::Configuration::DictionarySectionHandler::get_KeyAttributeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::DictionarySectionHandler*), "get_KeyAttributeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::DictionarySectionHandler::get_ValueAttributeName
// Il2CppName: get_ValueAttributeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::DictionarySectionHandler::*)()>(&System::Configuration::DictionarySectionHandler::get_ValueAttributeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::DictionarySectionHandler*), "get_ValueAttributeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::DictionarySectionHandler::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Configuration::DictionarySectionHandler::*)(::Il2CppObject*, ::Il2CppObject*, ::System::Xml::XmlNode*)>(&System::Configuration::DictionarySectionHandler::Create)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* section = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::DictionarySectionHandler*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, context, section});
  }
};
