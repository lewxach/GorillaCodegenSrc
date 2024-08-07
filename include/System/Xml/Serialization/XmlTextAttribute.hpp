// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTextAttribute
  class XmlTextAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlTextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTextAttribute*, "System.Xml.Serialization", "XmlTextAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlTextAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class XmlTextAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String dataType
    // Size: 0x8
    // Offset: 0x10
    ::StringW dataType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String dataType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dataType();
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor()
    // Offset: 0x4E6A77C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlTextAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextAttribute*, creationType>()));
    }
    // public System.String get_DataType()
    // Offset: 0x4E6A784
    ::StringW get_DataType();
    // public System.Type get_Type()
    // Offset: 0x4E6A7D8
    ::System::Type* get_Type();
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x4E6A7E0
    void AddKeyHash(::System::Text::StringBuilder* sb);
  }; // System.Xml.Serialization.XmlTextAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlTextAttribute), 24 + sizeof(::System::Type*)> __System_Xml_Serialization_XmlTextAttributeSizeCheck;
  static_assert(sizeof(XmlTextAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTextAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTextAttribute::get_DataType
// Il2CppName: get_DataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlTextAttribute::*)()>(&System::Xml::Serialization::XmlTextAttribute::get_DataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTextAttribute*), "get_DataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTextAttribute::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Serialization::XmlTextAttribute::*)()>(&System::Xml::Serialization::XmlTextAttribute::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTextAttribute*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlTextAttribute::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlTextAttribute::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlTextAttribute::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlTextAttribute*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
