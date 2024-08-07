// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.InternalDataCollectionBase
#include "System/Data/InternalDataCollectionBase.hpp"
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
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: Constraint
  class Constraint;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: UniqueConstraint
  class UniqueConstraint;
  // Forward declaring type: ForeignKeyConstraint
  class ForeignKeyConstraint;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionChangeEventHandler
  class CollectionChangeEventHandler;
  // Forward declaring type: CollectionChangeEventArgs
  class CollectionChangeEventArgs;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: ConstraintCollection
  class ConstraintCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::ConstraintCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstraintCollection*, "System.Data", "ConstraintCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ConstraintCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [DefaultEventAttribute] Offset: FFFFFFFF
  class ConstraintCollection : public ::System::Data::InternalDataCollectionBase {
    public:
    public:
    // private readonly System.Data.DataTable _table
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataTable* table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private readonly System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Int32 _defaultNameIndex
    // Size: 0x4
    // Offset: 0x20
    int defaultNameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultNameIndex and: onCollectionChanged
    char __padding2[0x4] = {};
    // private System.ComponentModel.CollectionChangeEventHandler _onCollectionChanged
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::CollectionChangeEventHandler* onCollectionChanged;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeEventHandler*) == 0x8);
    // private System.Data.Constraint[] _delayLoadingConstraints
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Data::Constraint*> delayLoadingConstraints;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::Constraint*>) == 0x8);
    // private System.Boolean _fLoadForeignKeyConstraintsOnly
    // Size: 0x1
    // Offset: 0x38
    bool fLoadForeignKeyConstraintsOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Data.DataTable _table
    [[deprecated("Use field access instead!")]] ::System::Data::DataTable*& dyn__table();
    // Get instance field reference: private readonly System.Collections.ArrayList _list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__list();
    // Get instance field reference: private System.Int32 _defaultNameIndex
    [[deprecated("Use field access instead!")]] int& dyn__defaultNameIndex();
    // Get instance field reference: private System.ComponentModel.CollectionChangeEventHandler _onCollectionChanged
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::CollectionChangeEventHandler*& dyn__onCollectionChanged();
    // Get instance field reference: private System.Data.Constraint[] _delayLoadingConstraints
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Data::Constraint*>& dyn__delayLoadingConstraints();
    // Get instance field reference: private System.Boolean _fLoadForeignKeyConstraintsOnly
    [[deprecated("Use field access instead!")]] bool& dyn__fLoadForeignKeyConstraintsOnly();
    // System.Void .ctor(System.Data.DataTable table)
    // Offset: 0x4C06760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintCollection* New_ctor(::System::Data::DataTable* table) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ConstraintCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintCollection*, creationType>(table)));
    }
    // public System.Data.Constraint get_Item(System.Int32 index)
    // Offset: 0x4C06820
    ::System::Data::Constraint* get_Item(int index);
    // System.Data.DataTable get_Table()
    // Offset: 0x4C069A8
    ::System::Data::DataTable* get_Table();
    // public System.Data.Constraint get_Item(System.String name)
    // Offset: 0x4C069B0
    ::System::Data::Constraint* get_Item(::StringW name);
    // public System.Void Add(System.Data.Constraint constraint)
    // Offset: 0x4C06C40
    void Add(::System::Data::Constraint* constraint);
    // System.Void Add(System.Data.Constraint constraint, System.Boolean addUniqueWhenAddingForeign)
    // Offset: 0x4C06C48
    void Add(::System::Data::Constraint* constraint, bool addUniqueWhenAddingForeign);
    // public System.Data.Constraint Add(System.String name, System.Data.DataColumn[] columns, System.Boolean primaryKey)
    // Offset: 0x4C076D8
    ::System::Data::Constraint* Add(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns, bool primaryKey);
    // private System.Void AddUniqueConstraint(System.Data.UniqueConstraint constraint)
    // Offset: 0x4C07344
    void AddUniqueConstraint(::System::Data::UniqueConstraint* constraint);
    // private System.Void AddForeignKeyConstraint(System.Data.ForeignKeyConstraint constraint)
    // Offset: 0x4C07548
    void AddForeignKeyConstraint(::System::Data::ForeignKeyConstraint* constraint);
    // private System.Boolean AutoGenerated(System.Data.Constraint constraint)
    // Offset: 0x4C071E8
    bool AutoGenerated(::System::Data::Constraint* constraint);
    // private System.Void ArrayAdd(System.Data.Constraint constraint)
    // Offset: 0x4C07678
    void ArrayAdd(::System::Data::Constraint* constraint);
    // private System.Void ArrayRemove(System.Data.Constraint constraint)
    // Offset: 0x4C07840
    void ArrayRemove(::System::Data::Constraint* constraint);
    // System.String AssignName()
    // Offset: 0x4C07524
    ::StringW AssignName();
    // private System.Void BaseAdd(System.Data.Constraint constraint)
    // Offset: 0x4C075B4
    void BaseAdd(::System::Data::Constraint* constraint);
    // private System.Void BaseGroupSwitch(System.Data.Constraint[] oldArray, System.Int32 oldLength, System.Data.Constraint[] newArray, System.Int32 newLength)
    // Offset: 0x4C07930
    void BaseGroupSwitch(::ArrayW<::System::Data::Constraint*> oldArray, int oldLength, ::ArrayW<::System::Data::Constraint*> newArray, int newLength);
    // private System.Void BaseRemove(System.Data.Constraint constraint)
    // Offset: 0x4C07AE4
    void BaseRemove(::System::Data::Constraint* constraint);
    // System.Boolean CanRemove(System.Data.Constraint constraint, System.Boolean fThrowException)
    // Offset: 0x4C07DC8
    bool CanRemove(::System::Data::Constraint* constraint, bool fThrowException);
    // public System.Void Clear()
    // Offset: 0x4C07DF8
    void Clear();
    // public System.Boolean Contains(System.String name)
    // Offset: 0x4C081E4
    bool Contains(::StringW name);
    // System.Boolean Contains(System.String name, System.Boolean caseSensitive)
    // Offset: 0x4C081FC
    bool Contains(::StringW name, bool caseSensitive);
    // System.Data.Constraint FindConstraint(System.Data.Constraint constraint)
    // Offset: 0x4C07040
    ::System::Data::Constraint* FindConstraint(::System::Data::Constraint* constraint);
    // System.Data.UniqueConstraint FindKeyConstraint(System.Data.DataColumn[] columns)
    // Offset: 0x4C07418
    ::System::Data::UniqueConstraint* FindKeyConstraint(::ArrayW<::System::Data::DataColumn*> columns);
    // System.Data.UniqueConstraint FindKeyConstraint(System.Data.DataColumn column)
    // Offset: 0x4C08380
    ::System::Data::UniqueConstraint* FindKeyConstraint(::System::Data::DataColumn* column);
    // System.Data.ForeignKeyConstraint FindForeignKeyConstraint(System.Data.DataColumn[] parentColumns, System.Data.DataColumn[] childColumns)
    // Offset: 0x4C0848C
    ::System::Data::ForeignKeyConstraint* FindForeignKeyConstraint(::ArrayW<::System::Data::DataColumn*> parentColumns, ::ArrayW<::System::Data::DataColumn*> childColumns);
    // static private System.Boolean CompareArrays(System.Data.DataColumn[] a1, System.Data.DataColumn[] a2)
    // Offset: 0x4C082F8
    static bool CompareArrays(::ArrayW<::System::Data::DataColumn*> a1, ::ArrayW<::System::Data::DataColumn*> a2);
    // System.Int32 InternalIndexOf(System.String constraintName)
    // Offset: 0x4C06A98
    int InternalIndexOf(::StringW constraintName);
    // private System.String MakeName(System.Int32 index)
    // Offset: 0x4C07878
    ::StringW MakeName(int index);
    // private System.Void OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs ccevent)
    // Offset: 0x4C076B0
    void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);
    // System.Void RegisterName(System.String name)
    // Offset: 0x4C06158
    void RegisterName(::StringW name);
    // public System.Void Remove(System.Data.Constraint constraint)
    // Offset: 0x4C08608
    void Remove(::System::Data::Constraint* constraint);
    // System.Void UnregisterName(System.String name)
    // Offset: 0x4C0633C
    void UnregisterName(::StringW name);
    // System.Void FinishInitConstraints()
    // Offset: 0x4C08760
    void FinishInitConstraints();
    // protected override System.Collections.ArrayList get_List()
    // Offset: 0x4C06818
    // Implemented from: System.Data.InternalDataCollectionBase
    // Base method: System.Collections.ArrayList InternalDataCollectionBase::get_List()
    ::System::Collections::ArrayList* get_List();
  }; // System.Data.ConstraintCollection
  #pragma pack(pop)
  static check_size<sizeof(ConstraintCollection), 56 + sizeof(bool)> __System_Data_ConstraintCollectionSizeCheck;
  static_assert(sizeof(ConstraintCollection) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::ConstraintCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ConstraintCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintCollection::*)(int)>(&System::Data::ConstraintCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::get_Table
// Il2CppName: get_Table
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::ConstraintCollection::*)()>(&System::Data::ConstraintCollection::get_Table)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "get_Table", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintCollection::*)(::StringW)>(&System::Data::ConstraintCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::Add)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(&System::Data::ConstraintCollection::Add)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    static auto* addUniqueWhenAddingForeign = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint, addUniqueWhenAddingForeign});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintCollection::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>, bool)>(&System::Data::ConstraintCollection::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* columns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    static auto* primaryKey = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, columns, primaryKey});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::AddUniqueConstraint
// Il2CppName: AddUniqueConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::UniqueConstraint*)>(&System::Data::ConstraintCollection::AddUniqueConstraint)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "UniqueConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "AddUniqueConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::AddForeignKeyConstraint
// Il2CppName: AddForeignKeyConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::ForeignKeyConstraint*)>(&System::Data::ConstraintCollection::AddForeignKeyConstraint)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "ForeignKeyConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "AddForeignKeyConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::AutoGenerated
// Il2CppName: AutoGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::AutoGenerated)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "AutoGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::ArrayAdd
// Il2CppName: ArrayAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::ArrayAdd)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "ArrayAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::ArrayRemove
// Il2CppName: ArrayRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::ArrayRemove)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "ArrayRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::AssignName
// Il2CppName: AssignName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::ConstraintCollection::*)()>(&System::Data::ConstraintCollection::AssignName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "AssignName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::BaseAdd
// Il2CppName: BaseAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::BaseAdd)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "BaseAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::BaseGroupSwitch
// Il2CppName: BaseGroupSwitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::Constraint*>, int, ::ArrayW<::System::Data::Constraint*>, int)>(&System::Data::ConstraintCollection::BaseGroupSwitch)> {
  static const MethodInfo* get() {
    static auto* oldArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "Constraint"), 1)->byval_arg;
    static auto* oldLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "Constraint"), 1)->byval_arg;
    static auto* newLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "BaseGroupSwitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldArray, oldLength, newArray, newLength});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::BaseRemove
// Il2CppName: BaseRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::BaseRemove)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "BaseRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::CanRemove
// Il2CppName: CanRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(&System::Data::ConstraintCollection::CanRemove)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    static auto* fThrowException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "CanRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint, fThrowException});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)()>(&System::Data::ConstraintCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintCollection::*)(::StringW)>(&System::Data::ConstraintCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintCollection::*)(::StringW, bool)>(&System::Data::ConstraintCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* caseSensitive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, caseSensitive});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::FindConstraint
// Il2CppName: FindConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::FindConstraint)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "FindConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::FindKeyConstraint
// Il2CppName: FindKeyConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::UniqueConstraint* (System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*>)>(&System::Data::ConstraintCollection::FindKeyConstraint)> {
  static const MethodInfo* get() {
    static auto* columns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "FindKeyConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{columns});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::FindKeyConstraint
// Il2CppName: FindKeyConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::UniqueConstraint* (System::Data::ConstraintCollection::*)(::System::Data::DataColumn*)>(&System::Data::ConstraintCollection::FindKeyConstraint)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "FindKeyConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::FindForeignKeyConstraint
// Il2CppName: FindForeignKeyConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ForeignKeyConstraint* (System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(&System::Data::ConstraintCollection::FindForeignKeyConstraint)> {
  static const MethodInfo* get() {
    static auto* parentColumns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    static auto* childColumns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "FindForeignKeyConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentColumns, childColumns});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::CompareArrays
// Il2CppName: CompareArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(&System::Data::ConstraintCollection::CompareArrays)> {
  static const MethodInfo* get() {
    static auto* a1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    static auto* a2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "CompareArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a1, a2});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::InternalIndexOf
// Il2CppName: InternalIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::ConstraintCollection::*)(::StringW)>(&System::Data::ConstraintCollection::InternalIndexOf)> {
  static const MethodInfo* get() {
    static auto* constraintName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "InternalIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraintName});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::MakeName
// Il2CppName: MakeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::ConstraintCollection::*)(int)>(&System::Data::ConstraintCollection::MakeName)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "MakeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::OnCollectionChanged
// Il2CppName: OnCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::ConstraintCollection::OnCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* ccevent = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "OnCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ccevent});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::RegisterName
// Il2CppName: RegisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::StringW)>(&System::Data::ConstraintCollection::RegisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "RegisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&System::Data::ConstraintCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::UnregisterName
// Il2CppName: UnregisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)(::StringW)>(&System::Data::ConstraintCollection::UnregisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "UnregisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::FinishInitConstraints
// Il2CppName: FinishInitConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstraintCollection::*)()>(&System::Data::ConstraintCollection::FinishInitConstraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "FinishInitConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintCollection::get_List
// Il2CppName: get_List
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Data::ConstraintCollection::*)()>(&System::Data::ConstraintCollection::get_List)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintCollection*), "get_List", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
