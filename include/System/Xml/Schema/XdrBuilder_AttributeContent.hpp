// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XdrBuilder
#include "System/Xml/Schema/XdrBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaAttDef
  class SchemaAttDef;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder::AttributeContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder::AttributeContent*, "System.Xml.Schema", "XdrBuilder/AttributeContent");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XdrBuilder/AttributeContent
  // [TokenAttribute] Offset: FFFFFFFF
  class XdrBuilder::AttributeContent : public ::Il2CppObject {
    public:
    public:
    // System.Xml.Schema.SchemaAttDef _AttDef
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::SchemaAttDef* AttDef;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaAttDef*) == 0x8);
    // System.Xml.XmlQualifiedName _Name
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlQualifiedName* Name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // System.String _Prefix
    // Size: 0x8
    // Offset: 0x20
    ::StringW Prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean _Required
    // Size: 0x1
    // Offset: 0x28
    bool Required;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Required and: MinVal
    char __padding3[0x3] = {};
    // System.UInt32 _MinVal
    // Size: 0x4
    // Offset: 0x2C
    uint MinVal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MaxVal
    // Size: 0x4
    // Offset: 0x30
    uint MaxVal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MaxLength
    // Size: 0x4
    // Offset: 0x34
    uint MaxLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MinLength
    // Size: 0x4
    // Offset: 0x38
    uint MinLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Boolean _EnumerationRequired
    // Size: 0x1
    // Offset: 0x3C
    bool EnumerationRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _HasDataType
    // Size: 0x1
    // Offset: 0x3D
    bool HasDataType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _Global
    // Size: 0x1
    // Offset: 0x3E
    bool Global;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Global and: Default
    char __padding10[0x1] = {};
    // System.Object _Default
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* Default;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.Xml.Schema.SchemaAttDef _AttDef
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaAttDef*& dyn__AttDef();
    // Get instance field reference: System.Xml.XmlQualifiedName _Name
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn__Name();
    // Get instance field reference: System.String _Prefix
    [[deprecated("Use field access instead!")]] ::StringW& dyn__Prefix();
    // Get instance field reference: System.Boolean _Required
    [[deprecated("Use field access instead!")]] bool& dyn__Required();
    // Get instance field reference: System.UInt32 _MinVal
    [[deprecated("Use field access instead!")]] uint& dyn__MinVal();
    // Get instance field reference: System.UInt32 _MaxVal
    [[deprecated("Use field access instead!")]] uint& dyn__MaxVal();
    // Get instance field reference: System.UInt32 _MaxLength
    [[deprecated("Use field access instead!")]] uint& dyn__MaxLength();
    // Get instance field reference: System.UInt32 _MinLength
    [[deprecated("Use field access instead!")]] uint& dyn__MinLength();
    // Get instance field reference: System.Boolean _EnumerationRequired
    [[deprecated("Use field access instead!")]] bool& dyn__EnumerationRequired();
    // Get instance field reference: System.Boolean _HasDataType
    [[deprecated("Use field access instead!")]] bool& dyn__HasDataType();
    // Get instance field reference: System.Boolean _Global
    [[deprecated("Use field access instead!")]] bool& dyn__Global();
    // Get instance field reference: System.Object _Default
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__Default();
    // public System.Void .ctor()
    // Offset: 0x4D814BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrBuilder::AttributeContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrBuilder::AttributeContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrBuilder::AttributeContent*, creationType>()));
    }
  }; // System.Xml.Schema.XdrBuilder/AttributeContent
  #pragma pack(pop)
  static check_size<sizeof(XdrBuilder::AttributeContent), 64 + sizeof(::Il2CppObject*)> __System_Xml_Schema_XdrBuilder_AttributeContentSizeCheck;
  static_assert(sizeof(XdrBuilder::AttributeContent) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::AttributeContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
