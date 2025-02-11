// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlSerializer
#include "System/Xml/Serialization/XmlSerializer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializerImplementation
  class XmlSerializerImplementation;
  // Forward declaring type: XmlSerializationWriter
  class XmlSerializationWriter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializer::SerializerData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializer::SerializerData*, "System.Xml.Serialization", "XmlSerializer/SerializerData");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializer/SerializerData
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializer::SerializerData : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.MethodInfo ReaderMethod
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MethodInfo* ReaderMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public System.Type WriterType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* WriterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Reflection.MethodInfo WriterMethod
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MethodInfo* WriterMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public System.Xml.Serialization.XmlSerializerImplementation Implementation
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Serialization::XmlSerializerImplementation* Implementation;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlSerializerImplementation*) == 0x8);
    public:
    // Get instance field reference: public System.Reflection.MethodInfo ReaderMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_ReaderMethod();
    // Get instance field reference: public System.Type WriterType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_WriterType();
    // Get instance field reference: public System.Reflection.MethodInfo WriterMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_WriterMethod();
    // Get instance field reference: public System.Xml.Serialization.XmlSerializerImplementation Implementation
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlSerializerImplementation*& dyn_Implementation();
    // public System.Xml.Serialization.XmlSerializationWriter CreateWriter()
    // Offset: 0x4E6A354
    ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();
  }; // System.Xml.Serialization.XmlSerializer/SerializerData
  #pragma pack(pop)
  static check_size<sizeof(XmlSerializer::SerializerData), 40 + sizeof(::System::Xml::Serialization::XmlSerializerImplementation*)> __System_Xml_Serialization_XmlSerializer_SerializerDataSizeCheck;
  static_assert(sizeof(XmlSerializer::SerializerData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::SerializerData::CreateWriter
// Il2CppName: CreateWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (System::Xml::Serialization::XmlSerializer::SerializerData::*)()>(&System::Xml::Serialization::XmlSerializer::SerializerData::CreateWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer::SerializerData*), "CreateWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
