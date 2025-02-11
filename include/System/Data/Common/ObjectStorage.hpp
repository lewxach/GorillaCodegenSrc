// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Common.DataStorage
#include "System/Data/Common/DataStorage.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data::Common
namespace System::Data::Common {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlRootAttribute
  class XmlRootAttribute;
  // Forward declaring type: XmlSerializer
  class XmlSerializer;
  // Forward declaring type: XmlSerializerFactory
  class XmlSerializerFactory;
}
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: AggregateType
  struct AggregateType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: BitArray
  class BitArray;
}
// Completed forward declares
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Forward declaring type: ObjectStorage
  class ObjectStorage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Common::ObjectStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::ObjectStorage*, "System.Data.Common", "ObjectStorage");
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Common.ObjectStorage
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectStorage : public ::System::Data::Common::DataStorage {
    public:
    // Writing base type padding for base size: 0x4C to desired offset: 0x50
    char ___base_padding[0x4] = {};
    // Nested type: ::System::Data::Common::ObjectStorage::Families
    struct Families;
    // Nested type: ::System::Data::Common::ObjectStorage::TempAssemblyComparer
    class TempAssemblyComparer;
    public:
    // private System.Object[] _values
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::Il2CppObject*> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private readonly System.Boolean _implementsIXmlSerializable
    // Size: 0x1
    // Offset: 0x58
    bool implementsIXmlSerializable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.Object s_defaultValue
    static ::Il2CppObject* _get_s_defaultValue();
    // Set static field: static private readonly System.Object s_defaultValue
    static void _set_s_defaultValue(::Il2CppObject* value);
    // Get static field: static private readonly System.Object s_tempAssemblyCacheLock
    static ::Il2CppObject* _get_s_tempAssemblyCacheLock();
    // Set static field: static private readonly System.Object s_tempAssemblyCacheLock
    static void _set_s_tempAssemblyCacheLock(::Il2CppObject* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>,System.Xml.Serialization.XmlSerializer> s_tempAssemblyCache
    static ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Xml::Serialization::XmlSerializer*>* _get_s_tempAssemblyCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>,System.Xml.Serialization.XmlSerializer> s_tempAssemblyCache
    static void _set_s_tempAssemblyCache(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Xml::Serialization::XmlSerializer*>* value);
    // Get static field: static private readonly System.Xml.Serialization.XmlSerializerFactory s_serializerFactory
    static ::System::Xml::Serialization::XmlSerializerFactory* _get_s_serializerFactory();
    // Set static field: static private readonly System.Xml.Serialization.XmlSerializerFactory s_serializerFactory
    static void _set_s_serializerFactory(::System::Xml::Serialization::XmlSerializerFactory* value);
    // Get instance field reference: private System.Object[] _values
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__values();
    // Get instance field reference: private readonly System.Boolean _implementsIXmlSerializable
    [[deprecated("Use field access instead!")]] bool& dyn__implementsIXmlSerializable();
    // System.Void .ctor(System.Data.DataColumn column, System.Type type)
    // Offset: 0x4CC7890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Common::ObjectStorage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectStorage*, creationType>(column, type)));
    }
    // private System.Int32 CompareTo(System.Object valueNo1, System.Object valueNo2)
    // Offset: 0x4CD2828
    int CompareTo(::Il2CppObject* valueNo1, ::Il2CppObject* valueNo2);
    // private System.Int32 CompareWithFamilies(System.Object valueNo1, System.Object valueNo2)
    // Offset: 0x4CD2184
    int CompareWithFamilies(::Il2CppObject* valueNo1, ::Il2CppObject* valueNo2);
    // private System.Data.Common.ObjectStorage/Families GetFamily(System.Type dataType)
    // Offset: 0x4CD2A00
    ::System::Data::Common::ObjectStorage::Families GetFamily(::System::Type* dataType);
    // static System.Void VerifyIDynamicMetaObjectProvider(System.Type type)
    // Offset: 0x4CC91CC
    static void VerifyIDynamicMetaObjectProvider(::System::Type* type);
    // static System.Xml.Serialization.XmlSerializer GetXmlSerializer(System.Type type)
    // Offset: 0x4CD3AE8
    static ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* type);
    // static System.Xml.Serialization.XmlSerializer GetXmlSerializer(System.Type type, System.Xml.Serialization.XmlRootAttribute attribute)
    // Offset: 0x4CD5E7C
    static ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* attribute);
    // public override System.Object Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    // Offset: 0x4CD1FA0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    ::Il2CppObject* Aggregate(::ArrayW<int> records, ::System::Data::AggregateType kind);
    // public override System.Int32 Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x4CD1FD0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    int Compare(int recordNo1, int recordNo2);
    // public override System.Int32 CompareValueTo(System.Int32 recordNo1, System.Object value)
    // Offset: 0x4CD2644
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::CompareValueTo(System.Int32 recordNo1, System.Object value)
    int CompareValueTo(int recordNo1, ::Il2CppObject* value);
    // public override System.Void Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x4CD2AF4
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    void Copy(int recordNo1, int recordNo2);
    // public override System.Object Get(System.Int32 recordNo)
    // Offset: 0x4CD2B6C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Get(System.Int32 recordNo)
    ::Il2CppObject* Get(int recordNo);
    // public override System.Boolean IsNull(System.Int32 record)
    // Offset: 0x4CD2BA8
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Boolean DataStorage::IsNull(System.Int32 record)
    bool IsNull(int record);
    // public override System.Void Set(System.Int32 recordNo, System.Object value)
    // Offset: 0x4CD2BE0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Set(System.Int32 recordNo, System.Object value)
    void Set(int recordNo, ::Il2CppObject* value);
    // public override System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0x4CD34D0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetCapacity(System.Int32 capacity)
    void SetCapacity(int capacity);
    // public override System.Object ConvertXmlToObject(System.String s)
    // Offset: 0x4CD3590
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertXmlToObject(System.String s)
    ::Il2CppObject* ConvertXmlToObject(::StringW s);
    // public override System.Object ConvertXmlToObject(System.Xml.XmlReader xmlReader, System.Xml.Serialization.XmlRootAttribute xmlAttrib)
    // Offset: 0x4CD3B5C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertXmlToObject(System.Xml.XmlReader xmlReader, System.Xml.Serialization.XmlRootAttribute xmlAttrib)
    ::Il2CppObject* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);
    // public override System.String ConvertObjectToXml(System.Object value)
    // Offset: 0x4CD6474
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.String DataStorage::ConvertObjectToXml(System.Object value)
    ::StringW ConvertObjectToXml(::Il2CppObject* value);
    // public override System.Void ConvertObjectToXml(System.Object value, System.Xml.XmlWriter xmlWriter, System.Xml.Serialization.XmlRootAttribute xmlAttrib)
    // Offset: 0x4CD6AD0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::ConvertObjectToXml(System.Object value, System.Xml.XmlWriter xmlWriter, System.Xml.Serialization.XmlRootAttribute xmlAttrib)
    void ConvertObjectToXml(::Il2CppObject* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);
    // protected override System.Object GetEmptyStorage(System.Int32 recordCount)
    // Offset: 0x4CD6C34
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::GetEmptyStorage(System.Int32 recordCount)
    ::Il2CppObject* GetEmptyStorage(int recordCount);
    // protected override System.Void CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    // Offset: 0x4CD6C7C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    void CopyValue(int record, ::Il2CppObject* store, ::System::Collections::BitArray* nullbits, int storeIndex);
    // protected override System.Void SetStorage(System.Object store, System.Collections.BitArray nullbits)
    // Offset: 0x4CD6E8C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetStorage(System.Object store, System.Collections.BitArray nullbits)
    void SetStorage(::Il2CppObject* store, ::System::Collections::BitArray* nullbits);
    // static private System.Void .cctor()
    // Offset: 0x4CD7064
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::.cctor()
    static void _cctor();
  }; // System.Data.Common.ObjectStorage
  #pragma pack(pop)
  static check_size<sizeof(ObjectStorage), 88 + sizeof(bool)> __System_Data_Common_ObjectStorageSizeCheck;
  static_assert(sizeof(ObjectStorage) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::ObjectStorage::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Data::Common::ObjectStorage::CompareTo)> {
  static const MethodInfo* get() {
    static auto* valueNo1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* valueNo2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueNo1, valueNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::CompareWithFamilies
// Il2CppName: CompareWithFamilies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::ObjectStorage::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Data::Common::ObjectStorage::CompareWithFamilies)> {
  static const MethodInfo* get() {
    static auto* valueNo1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* valueNo2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "CompareWithFamilies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueNo1, valueNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::GetFamily
// Il2CppName: GetFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::ObjectStorage::Families (System::Data::Common::ObjectStorage::*)(::System::Type*)>(&System::Data::Common::ObjectStorage::GetFamily)> {
  static const MethodInfo* get() {
    static auto* dataType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "GetFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataType});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider
// Il2CppName: VerifyIDynamicMetaObjectProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "VerifyIDynamicMetaObjectProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::GetXmlSerializer
// Il2CppName: GetXmlSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*)>(&System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "GetXmlSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::GetXmlSerializer
// Il2CppName: GetXmlSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(&System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "GetXmlSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, attribute});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::Aggregate
// Il2CppName: Aggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::ObjectStorage::*)(::ArrayW<int>, ::System::Data::AggregateType)>(&System::Data::Common::ObjectStorage::Aggregate)> {
  static const MethodInfo* get() {
    static auto* records = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* kind = &::il2cpp_utils::GetClassFromName("System.Data", "AggregateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "Aggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{records, kind});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::ObjectStorage::*)(int, int)>(&System::Data::Common::ObjectStorage::Compare)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::CompareValueTo
// Il2CppName: CompareValueTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::ObjectStorage::*)(int, ::Il2CppObject*)>(&System::Data::Common::ObjectStorage::CompareValueTo)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "CompareValueTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(int, int)>(&System::Data::Common::ObjectStorage::Copy)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::ObjectStorage::*)(int)>(&System::Data::Common::ObjectStorage::Get)> {
  static const MethodInfo* get() {
    static auto* recordNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Common::ObjectStorage::*)(int)>(&System::Data::Common::ObjectStorage::IsNull)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(int, ::Il2CppObject*)>(&System::Data::Common::ObjectStorage::Set)> {
  static const MethodInfo* get() {
    static auto* recordNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(int)>(&System::Data::Common::ObjectStorage::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::ConvertXmlToObject
// Il2CppName: ConvertXmlToObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::ObjectStorage::*)(::StringW)>(&System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "ConvertXmlToObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::ConvertXmlToObject
// Il2CppName: ConvertXmlToObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::ObjectStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(&System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  static const MethodInfo* get() {
    static auto* xmlReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* xmlAttrib = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "ConvertXmlToObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlReader, xmlAttrib});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::ConvertObjectToXml
// Il2CppName: ConvertObjectToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Common::ObjectStorage::*)(::Il2CppObject*)>(&System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "ConvertObjectToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::ConvertObjectToXml
// Il2CppName: ConvertObjectToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(::Il2CppObject*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(&System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* xmlWriter = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    static auto* xmlAttrib = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "ConvertObjectToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, xmlWriter, xmlAttrib});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::GetEmptyStorage
// Il2CppName: GetEmptyStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::ObjectStorage::*)(int)>(&System::Data::Common::ObjectStorage::GetEmptyStorage)> {
  static const MethodInfo* get() {
    static auto* recordCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "GetEmptyStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordCount});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::CopyValue
// Il2CppName: CopyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(int, ::Il2CppObject*, ::System::Collections::BitArray*, int)>(&System::Data::Common::ObjectStorage::CopyValue)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    static auto* storeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "CopyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record, store, nullbits, storeIndex});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::SetStorage
// Il2CppName: SetStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::ObjectStorage::*)(::Il2CppObject*, ::System::Collections::BitArray*)>(&System::Data::Common::ObjectStorage::SetStorage)> {
  static const MethodInfo* get() {
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), "SetStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{store, nullbits});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::Common::ObjectStorage::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
