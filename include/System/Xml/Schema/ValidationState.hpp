// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentProcessing
#include "System/Xml/Schema/XmlSchemaContentProcessing.hpp"
// Including type: System.Xml.Schema.XmlSchemaValidity
#include "System/Xml/Schema/XmlSchemaValidity.hpp"
// Including type: System.Xml.Schema.StateUnion
#include "System/Xml/Schema/StateUnion.hpp"
// Including type: System.Xml.Schema.RangePositionInfo
#include "System/Xml/Schema/RangePositionInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
  // Forward declaring type: ConstraintStruct
  class ConstraintStruct;
  // Forward declaring type: BitSet
  class BitSet;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ValidationState
  class ValidationState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ValidationState);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationState*, "System.Xml.Schema", "ValidationState");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Xml.Schema.ValidationState
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationState : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean IsNill
    // Size: 0x1
    // Offset: 0x10
    bool IsNill;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsDefault
    // Size: 0x1
    // Offset: 0x11
    bool IsDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean NeedValidateChildren
    // Size: 0x1
    // Offset: 0x12
    bool NeedValidateChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean CheckRequiredAttribute
    // Size: 0x1
    // Offset: 0x13
    bool CheckRequiredAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ValidationSkipped
    // Size: 0x1
    // Offset: 0x14
    bool ValidationSkipped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Xml.Schema.XmlSchemaContentProcessing ProcessContents
    // Size: 0x4
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentProcessing) == 0x4);
    // public System.Xml.Schema.XmlSchemaValidity Validity
    // Size: 0x4
    // Offset: 0x1C
    ::System::Xml::Schema::XmlSchemaValidity Validity;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaValidity) == 0x4);
    // public System.Xml.Schema.SchemaElementDecl ElementDecl
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::SchemaElementDecl* ElementDecl;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaElementDecl*) == 0x8);
    // public System.Xml.Schema.SchemaElementDecl ElementDeclBeforeXsi
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::SchemaElementDecl* ElementDeclBeforeXsi;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaElementDecl*) == 0x8);
    // public System.String LocalName
    // Size: 0x8
    // Offset: 0x30
    ::StringW LocalName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Namespace
    // Size: 0x8
    // Offset: 0x38
    ::StringW Namespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Xml.Schema.ConstraintStruct[] Constr
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Xml::Schema::ConstraintStruct*> Constr;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::ConstraintStruct*>) == 0x8);
    // public System.Xml.Schema.StateUnion CurrentState
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Xml::Schema::StateUnion CurrentState;
    // public System.Boolean HasMatched
    // Size: 0x1
    // Offset: 0x4C
    bool HasMatched;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Xml.Schema.BitSet[] CurPos
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Xml::Schema::BitSet*> CurPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::BitSet*>) == 0x8);
    // public System.Xml.Schema.BitSet AllElementsSet
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::BitSet* AllElementsSet;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    // public System.Collections.Generic.List`1<System.Xml.Schema.RangePositionInfo> RunningPositions
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* RunningPositions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>*) == 0x8);
    // public System.Boolean TooComplex
    // Size: 0x1
    // Offset: 0x68
    bool TooComplex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean IsNill
    [[deprecated("Use field access instead!")]] bool& dyn_IsNill();
    // Get instance field reference: public System.Boolean IsDefault
    [[deprecated("Use field access instead!")]] bool& dyn_IsDefault();
    // Get instance field reference: public System.Boolean NeedValidateChildren
    [[deprecated("Use field access instead!")]] bool& dyn_NeedValidateChildren();
    // Get instance field reference: public System.Boolean CheckRequiredAttribute
    [[deprecated("Use field access instead!")]] bool& dyn_CheckRequiredAttribute();
    // Get instance field reference: public System.Boolean ValidationSkipped
    [[deprecated("Use field access instead!")]] bool& dyn_ValidationSkipped();
    // Get instance field reference: public System.Xml.Schema.XmlSchemaContentProcessing ProcessContents
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContentProcessing& dyn_ProcessContents();
    // Get instance field reference: public System.Xml.Schema.XmlSchemaValidity Validity
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaValidity& dyn_Validity();
    // Get instance field reference: public System.Xml.Schema.SchemaElementDecl ElementDecl
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaElementDecl*& dyn_ElementDecl();
    // Get instance field reference: public System.Xml.Schema.SchemaElementDecl ElementDeclBeforeXsi
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaElementDecl*& dyn_ElementDeclBeforeXsi();
    // Get instance field reference: public System.String LocalName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LocalName();
    // Get instance field reference: public System.String Namespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Namespace();
    // Get instance field reference: public System.Xml.Schema.ConstraintStruct[] Constr
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::ConstraintStruct*>& dyn_Constr();
    // Get instance field reference: public System.Xml.Schema.StateUnion CurrentState
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::StateUnion& dyn_CurrentState();
    // Get instance field reference: public System.Boolean HasMatched
    [[deprecated("Use field access instead!")]] bool& dyn_HasMatched();
    // Get instance field reference: public System.Xml.Schema.BitSet[] CurPos
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::BitSet*>& dyn_CurPos();
    // Get instance field reference: public System.Xml.Schema.BitSet AllElementsSet
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::BitSet*& dyn_AllElementsSet();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Xml.Schema.RangePositionInfo> RunningPositions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>*& dyn_RunningPositions();
    // Get instance field reference: public System.Boolean TooComplex
    [[deprecated("Use field access instead!")]] bool& dyn_TooComplex();
    // public System.Void .ctor()
    // Offset: 0x4D811A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidationState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ValidationState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidationState*, creationType>()));
    }
  }; // System.Xml.Schema.ValidationState
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ValidationState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!