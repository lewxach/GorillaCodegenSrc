// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Common.DataStorage
#include "System/Data/Common/DataStorage.hpp"
// Including type: System.Data.SqlTypes.SqlGuid
#include "System/Data/SqlTypes/SqlGuid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: AggregateType
  struct AggregateType;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: BitArray
  class BitArray;
}
// Completed forward declares
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Forward declaring type: SqlGuidStorage
  class SqlGuidStorage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Common::SqlGuidStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlGuidStorage*, "System.Data.Common", "SqlGuidStorage");
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Common.SqlGuidStorage
  // [TokenAttribute] Offset: FFFFFFFF
  class SqlGuidStorage : public ::System::Data::Common::DataStorage {
    public:
    // Writing base type padding for base size: 0x4C to desired offset: 0x50
    char ___base_padding[0x4] = {};
    public:
    // private System.Data.SqlTypes.SqlGuid[] _values
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Data::SqlTypes::SqlGuid> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::SqlTypes::SqlGuid>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Data::SqlTypes::SqlGuid>
    constexpr operator ::ArrayW<::System::Data::SqlTypes::SqlGuid>() const noexcept {
      return values;
    }
    // Get instance field reference: private System.Data.SqlTypes.SqlGuid[] _values
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Data::SqlTypes::SqlGuid>& dyn__values();
    // public System.Void .ctor(System.Data.DataColumn column)
    // Offset: 0x4CE5474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlGuidStorage* New_ctor(::System::Data::DataColumn* column) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Common::SqlGuidStorage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlGuidStorage*, creationType>(column)));
    }
    // public override System.Object Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    // Offset: 0x4CE55B4
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    ::Il2CppObject* Aggregate(::ArrayW<int> records, ::System::Data::AggregateType kind);
    // public override System.Int32 Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x4CE57F0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    int Compare(int recordNo1, int recordNo2);
    // public override System.Int32 CompareValueTo(System.Int32 recordNo, System.Object value)
    // Offset: 0x4CE5834
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::CompareValueTo(System.Int32 recordNo, System.Object value)
    int CompareValueTo(int recordNo, ::Il2CppObject* value);
    // public override System.Object ConvertValue(System.Object value)
    // Offset: 0x4CE58E0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertValue(System.Object value)
    ::Il2CppObject* ConvertValue(::Il2CppObject* value);
    // public override System.Void Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x4CE5958
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    void Copy(int recordNo1, int recordNo2);
    // public override System.Object Get(System.Int32 record)
    // Offset: 0x4CE599C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Get(System.Int32 record)
    ::Il2CppObject* Get(int record);
    // public override System.Boolean IsNull(System.Int32 record)
    // Offset: 0x4CE5A1C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Boolean DataStorage::IsNull(System.Int32 record)
    bool IsNull(int record);
    // public override System.Void Set(System.Int32 record, System.Object value)
    // Offset: 0x4CE5A50
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Set(System.Int32 record, System.Object value)
    void Set(int record, ::Il2CppObject* value);
    // public override System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0x4CE5AA0
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetCapacity(System.Int32 capacity)
    void SetCapacity(int capacity);
    // public override System.Object ConvertXmlToObject(System.String s)
    // Offset: 0x4CE5B60
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertXmlToObject(System.String s)
    ::Il2CppObject* ConvertXmlToObject(::StringW s);
    // public override System.String ConvertObjectToXml(System.Object value)
    // Offset: 0x4CE5E48
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.String DataStorage::ConvertObjectToXml(System.Object value)
    ::StringW ConvertObjectToXml(::Il2CppObject* value);
    // protected override System.Object GetEmptyStorage(System.Int32 recordCount)
    // Offset: 0x4CE60E8
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::GetEmptyStorage(System.Int32 recordCount)
    ::Il2CppObject* GetEmptyStorage(int recordCount);
    // protected override System.Void CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    // Offset: 0x4CE6130
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    void CopyValue(int record, ::Il2CppObject* store, ::System::Collections::BitArray* nullbits, int storeIndex);
    // protected override System.Void SetStorage(System.Object store, System.Collections.BitArray nullbits)
    // Offset: 0x4CE6238
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetStorage(System.Object store, System.Collections.BitArray nullbits)
    void SetStorage(::Il2CppObject* store, ::System::Collections::BitArray* nullbits);
  }; // System.Data.Common.SqlGuidStorage
  #pragma pack(pop)
  static check_size<sizeof(SqlGuidStorage), 80 + sizeof(::ArrayW<::System::Data::SqlTypes::SqlGuid>)> __System_Data_Common_SqlGuidStorageSizeCheck;
  static_assert(sizeof(SqlGuidStorage) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::Aggregate
// Il2CppName: Aggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::SqlGuidStorage::*)(::ArrayW<int>, ::System::Data::AggregateType)>(&System::Data::Common::SqlGuidStorage::Aggregate)> {
  static const MethodInfo* get() {
    static auto* records = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* kind = &::il2cpp_utils::GetClassFromName("System.Data", "AggregateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "Aggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{records, kind});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::SqlGuidStorage::*)(int, int)>(&System::Data::Common::SqlGuidStorage::Compare)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::CompareValueTo
// Il2CppName: CompareValueTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::SqlGuidStorage::*)(int, ::Il2CppObject*)>(&System::Data::Common::SqlGuidStorage::CompareValueTo)> {
  static const MethodInfo* get() {
    static auto* recordNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "CompareValueTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::ConvertValue
// Il2CppName: ConvertValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::SqlGuidStorage::*)(::Il2CppObject*)>(&System::Data::Common::SqlGuidStorage::ConvertValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "ConvertValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::SqlGuidStorage::*)(int, int)>(&System::Data::Common::SqlGuidStorage::Copy)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::SqlGuidStorage::*)(int)>(&System::Data::Common::SqlGuidStorage::Get)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Common::SqlGuidStorage::*)(int)>(&System::Data::Common::SqlGuidStorage::IsNull)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::SqlGuidStorage::*)(int, ::Il2CppObject*)>(&System::Data::Common::SqlGuidStorage::Set)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::SqlGuidStorage::*)(int)>(&System::Data::Common::SqlGuidStorage::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::ConvertXmlToObject
// Il2CppName: ConvertXmlToObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::SqlGuidStorage::*)(::StringW)>(&System::Data::Common::SqlGuidStorage::ConvertXmlToObject)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "ConvertXmlToObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::ConvertObjectToXml
// Il2CppName: ConvertObjectToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Common::SqlGuidStorage::*)(::Il2CppObject*)>(&System::Data::Common::SqlGuidStorage::ConvertObjectToXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "ConvertObjectToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::GetEmptyStorage
// Il2CppName: GetEmptyStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::SqlGuidStorage::*)(int)>(&System::Data::Common::SqlGuidStorage::GetEmptyStorage)> {
  static const MethodInfo* get() {
    static auto* recordCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "GetEmptyStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordCount});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::CopyValue
// Il2CppName: CopyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::SqlGuidStorage::*)(int, ::Il2CppObject*, ::System::Collections::BitArray*, int)>(&System::Data::Common::SqlGuidStorage::CopyValue)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    static auto* storeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "CopyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record, store, nullbits, storeIndex});
  }
};
// Writing MetadataGetter for method: System::Data::Common::SqlGuidStorage::SetStorage
// Il2CppName: SetStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::SqlGuidStorage::*)(::Il2CppObject*, ::System::Collections::BitArray*)>(&System::Data::Common::SqlGuidStorage::SetStorage)> {
  static const MethodInfo* get() {
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::SqlGuidStorage*), "SetStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{store, nullbits});
  }
};
