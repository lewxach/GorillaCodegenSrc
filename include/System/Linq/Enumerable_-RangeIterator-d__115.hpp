// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Enumerable::$RangeIterator$d__115);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Enumerable::$RangeIterator$d__115*, "System.Linq", "Enumerable/<RangeIterator>d__115");
// Type namespace: System.Linq
namespace System::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Enumerable/<RangeIterator>d__115
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Enumerable::$RangeIterator$d__115 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<int>, public ::System::Collections::Generic::IEnumerator_1<int>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <>2__current
    // Size: 0x4
    // Offset: 0x14
    int $$2__current;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x18
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 start
    // Size: 0x4
    // Offset: 0x1C
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 <>3__start
    // Size: 0x4
    // Offset: 0x20
    int $$3__start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x24
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 <>3__count
    // Size: 0x4
    // Offset: 0x28
    int $$3__count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x2C
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<int>
    operator ::System::Collections::Generic::IEnumerable_1<int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<int>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<int>
    operator ::System::Collections::Generic::IEnumerator_1<int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<int>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Int32 <>2__current
    [[deprecated("Use field access instead!")]] int& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.Int32 start
    [[deprecated("Use field access instead!")]] int& dyn_start();
    // Get instance field reference: public System.Int32 <>3__start
    [[deprecated("Use field access instead!")]] int& dyn_$$3__start();
    // Get instance field reference: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: public System.Int32 <>3__count
    [[deprecated("Use field access instead!")]] int& dyn_$$3__count();
    // Get instance field reference: private System.Int32 <i>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x4B75200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$RangeIterator$d__115* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::$RangeIterator$d__115::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$RangeIterator$d__115*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4B75BA0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4B75BA4
    bool MoveNext();
    // private System.Int32 System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
    // Offset: 0x4B75C08
    int System_Collections_Generic_IEnumerator$System_Int32$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4B75C10
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4B75C48
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Int32> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
    // Offset: 0x4B75CA4
    ::System::Collections::Generic::IEnumerator_1<int>* System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x4B75D48
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Linq.Enumerable/<RangeIterator>d__115
  #pragma pack(pop)
  static check_size<sizeof(Enumerable::$RangeIterator$d__115), 44 + sizeof(int)> __System_Linq_Enumerable_$RangeIterator$d__115SizeCheck;
  static_assert(sizeof(Enumerable::$RangeIterator$d__115) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_Generic_IEnumerator$System_Int32$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Int32>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_Generic_IEnumerator$System_Int32$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int>* (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Linq::Enumerable::$RangeIterator$d__115::*)()>(&System::Linq::Enumerable::$RangeIterator$d__115::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Enumerable::$RangeIterator$d__115*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
