// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaIdentityConstraint
#include "System/Xml/Schema/XmlSchemaIdentityConstraint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaUnique
  class XmlSchemaUnique;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaUnique);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaUnique*, "System.Xml.Schema", "XmlSchemaUnique");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaUnique
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaUnique : public ::System::Xml::Schema::XmlSchemaIdentityConstraint {
    public:
    // public System.Void .ctor()
    // Offset: 0x4D947D0
    // Implemented from: System.Xml.Schema.XmlSchemaIdentityConstraint
    // Base method: System.Void XmlSchemaIdentityConstraint::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaUnique* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaUnique::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaUnique*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaUnique
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaUnique::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
