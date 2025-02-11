// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaObject
#include "System/Xml/Schema/XmlSchemaObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDocumentation
  class XmlSchemaDocumentation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaDocumentation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDocumentation*, "System.Xml.Schema", "XmlSchemaDocumentation");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaDocumentation
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaDocumentation : public ::System::Xml::Schema::XmlSchemaObject {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    public:
    // private System.String source
    // Size: 0x8
    // Offset: 0x38
    ::StringW source;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String language
    // Size: 0x8
    // Offset: 0x40
    ::StringW language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.XmlNode[] markup
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::System::Xml::XmlNode*> markup;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::XmlNode*>) == 0x8);
    public:
    // Get static field: static private System.Xml.Schema.XmlSchemaSimpleType languageType
    static ::System::Xml::Schema::XmlSchemaSimpleType* _get_languageType();
    // Set static field: static private System.Xml.Schema.XmlSchemaSimpleType languageType
    static void _set_languageType(::System::Xml::Schema::XmlSchemaSimpleType* value);
    // Get instance field reference: private System.String source
    [[deprecated("Use field access instead!")]] ::StringW& dyn_source();
    // Get instance field reference: private System.String language
    [[deprecated("Use field access instead!")]] ::StringW& dyn_language();
    // Get instance field reference: private System.Xml.XmlNode[] markup
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::XmlNode*>& dyn_markup();
    // public System.Void set_Source(System.String value)
    // Offset: 0x4D931A8
    void set_Source(::StringW value);
    // public System.Void set_Language(System.String value)
    // Offset: 0x4D931B0
    void set_Language(::StringW value);
    // public System.Void set_Markup(System.Xml.XmlNode[] value)
    // Offset: 0x4D93290
    void set_Markup(::ArrayW<::System::Xml::XmlNode*> value);
    // static private System.Void .cctor()
    // Offset: 0x4D932A0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4D93298
    // Implemented from: System.Xml.Schema.XmlSchemaObject
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaDocumentation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaDocumentation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaDocumentation*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaDocumentation
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaDocumentation), 72 + sizeof(::ArrayW<::System::Xml::XmlNode*>)> __System_Xml_Schema_XmlSchemaDocumentationSizeCheck;
  static_assert(sizeof(XmlSchemaDocumentation) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDocumentation::set_Source
// Il2CppName: set_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaDocumentation::*)(::StringW)>(&System::Xml::Schema::XmlSchemaDocumentation::set_Source)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDocumentation*), "set_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDocumentation::set_Language
// Il2CppName: set_Language
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaDocumentation::*)(::StringW)>(&System::Xml::Schema::XmlSchemaDocumentation::set_Language)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDocumentation*), "set_Language", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDocumentation::set_Markup
// Il2CppName: set_Markup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaDocumentation::*)(::ArrayW<::System::Xml::XmlNode*>)>(&System::Xml::Schema::XmlSchemaDocumentation::set_Markup)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDocumentation*), "set_Markup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDocumentation::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::XmlSchemaDocumentation::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaDocumentation*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaDocumentation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
