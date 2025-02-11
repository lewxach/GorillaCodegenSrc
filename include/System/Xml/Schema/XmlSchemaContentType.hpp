// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaContentType
  struct XmlSchemaContentType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentType, "System.Xml.Schema", "XmlSchemaContentType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaContentType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaContentType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaContentType
    constexpr XmlSchemaContentType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XmlSchemaContentType TextOnly
    static constexpr const int TextOnly = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentType TextOnly
    static ::System::Xml::Schema::XmlSchemaContentType _get_TextOnly();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentType TextOnly
    static void _set_TextOnly(::System::Xml::Schema::XmlSchemaContentType value);
    // static field const value: static public System.Xml.Schema.XmlSchemaContentType Empty
    static constexpr const int Empty = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentType Empty
    static ::System::Xml::Schema::XmlSchemaContentType _get_Empty();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentType Empty
    static void _set_Empty(::System::Xml::Schema::XmlSchemaContentType value);
    // static field const value: static public System.Xml.Schema.XmlSchemaContentType ElementOnly
    static constexpr const int ElementOnly = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentType ElementOnly
    static ::System::Xml::Schema::XmlSchemaContentType _get_ElementOnly();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentType ElementOnly
    static void _set_ElementOnly(::System::Xml::Schema::XmlSchemaContentType value);
    // static field const value: static public System.Xml.Schema.XmlSchemaContentType Mixed
    static constexpr const int Mixed = 3;
    // Get static field: static public System.Xml.Schema.XmlSchemaContentType Mixed
    static ::System::Xml::Schema::XmlSchemaContentType _get_Mixed();
    // Set static field: static public System.Xml.Schema.XmlSchemaContentType Mixed
    static void _set_Mixed(::System::Xml::Schema::XmlSchemaContentType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaContentType
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaContentType), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaContentTypeSizeCheck;
  static_assert(sizeof(XmlSchemaContentType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
