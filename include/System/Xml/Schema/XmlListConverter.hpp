// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlListConverter
  class XmlListConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlListConverter*, "System.Xml.Schema", "XmlListConverter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlListConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    public:
    // protected System.Xml.Schema.XmlValueConverter atomicConverter
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XmlValueConverter* atomicConverter;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlValueConverter*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Schema::XmlValueConverter*
    constexpr operator ::System::Xml::Schema::XmlValueConverter*() const noexcept {
      return atomicConverter;
    }
    // Get instance field reference: protected System.Xml.Schema.XmlValueConverter atomicConverter
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlValueConverter*& dyn_atomicConverter();
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlValueConverter atomicConverter)
    // Offset: 0x4DC6B84
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* atomicConverter);
    // private System.Boolean IsListType(System.Type type)
    // Offset: 0x4DC6E30
    bool IsListType(::System::Type* type);
    // private T[] ToArray(System.Object list, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> ToArray(::Il2CppObject* list, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlListConverter::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(nsResolver)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, list, nsResolver);
    }
    // private System.Collections.IList ToList(System.Object list, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x4DC76B8
    ::System::Collections::IList* ToList(::Il2CppObject* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Collections.Generic.List`1<System.String> StringAsList(System.String value)
    // Offset: 0x4DC7610
    ::System::Collections::Generic::List_1<::StringW>* StringAsList(::StringW value);
    // private System.String ListAsString(System.Collections.IEnumerable list, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x4DC7258
    ::StringW ListAsString(::System::Collections::IEnumerable* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // protected System.Void .ctor(System.Xml.Schema.XmlBaseConverter atomicConverter)
    // Offset: 0x4DC6750
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlBaseConverter atomicConverter)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlListConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlListConverter*, creationType>(atomicConverter)));
    }
    // protected System.Void .ctor(System.Xml.Schema.XmlBaseConverter atomicConverter, System.Type clrTypeDefault)
    // Offset: 0x4DBC764
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlBaseConverter atomicConverter, System.Type clrTypeDefault)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlListConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlListConverter*, creationType>(atomicConverter, clrTypeDefault)));
    }
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x4DBC670
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlListConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlListConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlListConverter*, creationType>(schemaType)));
    }
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x4DC6D30
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // protected override System.Object ChangeListType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x4DC243C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeListType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeListType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Exception CreateInvalidClrMappingException(System.Type sourceType, System.Type destinationType)
    // Offset: 0x4DC6FC0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Exception XmlBaseConverter::CreateInvalidClrMappingException(System.Type sourceType, System.Type destinationType)
    ::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType);
  }; // System.Xml.Schema.XmlListConverter
  #pragma pack(pop)
  static check_size<sizeof(XmlListConverter), 40 + sizeof(::System::Xml::Schema::XmlValueConverter*)> __System_Xml_Schema_XmlListConverterSizeCheck;
  static_assert(sizeof(XmlListConverter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlValueConverter*)>(&System::Xml::Schema::XmlListConverter::Create)> {
  static const MethodInfo* get() {
    static auto* atomicConverter = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlValueConverter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atomicConverter});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::IsListType
// Il2CppName: IsListType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlListConverter::*)(::System::Type*)>(&System::Xml::Schema::XmlListConverter::IsListType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "IsListType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::ToArray
// Il2CppName: ToArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::ToList
// Il2CppName: ToList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Xml::Schema::XmlListConverter::*)(::Il2CppObject*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlListConverter::ToList)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "ToList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::StringAsList
// Il2CppName: StringAsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (System::Xml::Schema::XmlListConverter::*)(::StringW)>(&System::Xml::Schema::XmlListConverter::StringAsList)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "StringAsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::ListAsString
// Il2CppName: ListAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlListConverter::*)(::System::Collections::IEnumerable*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlListConverter::ListAsString)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "ListAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlListConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlListConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::ChangeListType
// Il2CppName: ChangeListType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlListConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlListConverter::ChangeListType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "ChangeListType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlListConverter::CreateInvalidClrMappingException
// Il2CppName: CreateInvalidClrMappingException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::XmlListConverter::*)(::System::Type*, ::System::Type*)>(&System::Xml::Schema::XmlListConverter::CreateInvalidClrMappingException)> {
  static const MethodInfo* get() {
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlListConverter*), "CreateInvalidClrMappingException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceType, destinationType});
  }
};
