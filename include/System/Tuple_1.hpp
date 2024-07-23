// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.ITupleInternal
#include "System/ITupleInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Tuple`1<T1>
  template<typename T1>
  class Tuple_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Tuple_1, "System", "Tuple`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Tuple`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1>
  class Tuple_1 : public ::Il2CppObject/*, public ::System::Collections::IStructuralEquatable, public ::System::Collections::IStructuralComparable, public ::System::IComparable, public ::System::ITupleInternal*/ {
    public:
    public:
    // private readonly T1 m_Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 m_Item1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::IStructuralEquatable
    operator ::System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralComparable
    operator ::System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::ITupleInternal
    operator ::System::ITupleInternal() noexcept {
      return *reinterpret_cast<::System::ITupleInternal*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T1 m_Item1
    [[deprecated("Use field access instead!")]] T1& dyn_m_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::dyn_m_Item1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Item1"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T1 get_Item1()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T1 get_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::get_Item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T1, false>(this, ___internal__method);
    }
    // public System.Void .ctor(T1 item1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tuple_1<T1>* New_ctor(T1 item1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tuple_1<T1>*, creationType>(item1)));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, ::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.Collections.IStructuralEquatable.Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_IComparable_CompareTo(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.IComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, obj);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, ::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.Collections.IStructuralComparable.CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.Collections.IStructuralEquatable.GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.Int32 System.ITupleInternal.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_ITupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.ITupleInternal.GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.String System.ITupleInternal.ToString(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.ITupleInternal.ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, sb);
    }
    // private System.Int32 System.Runtime.CompilerServices.ITuple.get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Runtime_CompilerServices_ITuple_get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::System.Runtime.CompilerServices.ITuple.get_Length");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Tuple_1<T1>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Tuple_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // System.Tuple`1
  // Could not write size check! Type: System.Tuple`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"