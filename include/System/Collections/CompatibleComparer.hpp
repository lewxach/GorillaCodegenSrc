// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: CompatibleComparer
  class CompatibleComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CompatibleComparer*, "System.Collections", "CompatibleComparer");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.CompatibleComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CompatibleComparer : public ::Il2CppObject/*, public ::System::Collections::IEqualityComparer*/ {
    public:
    public:
    // private readonly System.Collections.IHashCodeProvider _hcp
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IHashCodeProvider* hcp;
    // Field size check
    static_assert(sizeof(::System::Collections::IHashCodeProvider*) == 0x8);
    // private readonly System.Collections.IComparer _comparer
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IComparer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEqualityComparer
    operator ::System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Get instance field reference: private readonly System.Collections.IHashCodeProvider _hcp
    [[deprecated("Use field access instead!")]] ::System::Collections::IHashCodeProvider*& dyn__hcp();
    // Get instance field reference: private readonly System.Collections.IComparer _comparer
    [[deprecated("Use field access instead!")]] ::System::Collections::IComparer*& dyn__comparer();
    // System.Void .ctor(System.Collections.IHashCodeProvider hashCodeProvider, System.Collections.IComparer comparer)
    // Offset: 0x461DB88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompatibleComparer* New_ctor(::System::Collections::IHashCodeProvider* hashCodeProvider, ::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::CompatibleComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompatibleComparer*, creationType>(hashCodeProvider, comparer)));
    }
    // System.Collections.IHashCodeProvider get_HashCodeProvider()
    // Offset: 0x461DBCC
    ::System::Collections::IHashCodeProvider* get_HashCodeProvider();
    // System.Collections.IComparer get_Comparer()
    // Offset: 0x461DBD4
    ::System::Collections::IComparer* get_Comparer();
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x461DBDC
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x461DBF4
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x461DDB4
    int GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.CompatibleComparer
  #pragma pack(pop)
  static check_size<sizeof(CompatibleComparer), 24 + sizeof(::System::Collections::IComparer*)> __System_Collections_CompatibleComparerSizeCheck;
  static_assert(sizeof(CompatibleComparer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::get_HashCodeProvider
// Il2CppName: get_HashCodeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IHashCodeProvider* (System::Collections::CompatibleComparer::*)()>(&System::Collections::CompatibleComparer::get_HashCodeProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CompatibleComparer*), "get_HashCodeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::get_Comparer
// Il2CppName: get_Comparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IComparer* (System::Collections::CompatibleComparer::*)()>(&System::Collections::CompatibleComparer::get_Comparer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CompatibleComparer*), "get_Comparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::CompatibleComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::CompatibleComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CompatibleComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CompatibleComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::CompatibleComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CompatibleComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Collections::CompatibleComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CompatibleComparer::*)(::Il2CppObject*)>(&System::Collections::CompatibleComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CompatibleComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};