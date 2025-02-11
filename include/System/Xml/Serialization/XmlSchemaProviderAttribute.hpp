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
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSchemaProviderAttribute
  class XmlSchemaProviderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSchemaProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSchemaProviderAttribute*, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSchemaProviderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class XmlSchemaProviderAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x10
    ::StringW methodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isAny
    // Size: 0x1
    // Offset: 0x18
    bool isAny;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _methodName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__methodName();
    // Get instance field reference: private System.Boolean _isAny
    [[deprecated("Use field access instead!")]] bool& dyn__isAny();
    // public System.Void .ctor(System.String methodName)
    // Offset: 0x4E5506C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaProviderAttribute* New_ctor(::StringW methodName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSchemaProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaProviderAttribute*, creationType>(methodName)));
    }
    // public System.String get_MethodName()
    // Offset: 0x4E5509C
    ::StringW get_MethodName();
    // public System.Boolean get_IsAny()
    // Offset: 0x4E550A4
    bool get_IsAny();
    // public System.Void set_IsAny(System.Boolean value)
    // Offset: 0x4E550AC
    void set_IsAny(bool value);
  }; // System.Xml.Serialization.XmlSchemaProviderAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaProviderAttribute), 24 + sizeof(bool)> __System_Xml_Serialization_XmlSchemaProviderAttributeSizeCheck;
  static_assert(sizeof(XmlSchemaProviderAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSchemaProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSchemaProviderAttribute::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlSchemaProviderAttribute::*)()>(&System::Xml::Serialization::XmlSchemaProviderAttribute::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSchemaProviderAttribute*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSchemaProviderAttribute::get_IsAny
// Il2CppName: get_IsAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlSchemaProviderAttribute::*)()>(&System::Xml::Serialization::XmlSchemaProviderAttribute::get_IsAny)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSchemaProviderAttribute*), "get_IsAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny
// Il2CppName: set_IsAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSchemaProviderAttribute::*)(bool)>(&System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSchemaProviderAttribute*), "set_IsAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
