// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: IStructuralComparable
  class IStructuralComparable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::IStructuralComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IStructuralComparable*, "System.Collections", "IStructuralComparable");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IStructuralComparable
  // [TokenAttribute] Offset: FFFFFFFF
  class IStructuralComparable {
    public:
    // public System.Int32 CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Il2CppObject* other, ::System::Collections::IComparer* comparer);
  }; // System.Collections.IStructuralComparable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::IStructuralComparable::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::IStructuralComparable::*)(::Il2CppObject*, ::System::Collections::IComparer*)>(&System::Collections::IStructuralComparable::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IStructuralComparable*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, comparer});
  }
};
