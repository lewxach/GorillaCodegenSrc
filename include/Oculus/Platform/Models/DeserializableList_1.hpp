// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: DeserializableList`1<T>
  template<typename T>
  class DeserializableList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Models::DeserializableList_1, "Oculus.Platform.Models", "DeserializableList`1");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.DeserializableList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  class DeserializableList_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<T>*/ {
    public:
    public:
    // protected System.Collections.Generic.List`1<T> _Data
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<T>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<T>*) == 0x8);
    // protected System.String _NextUrl
    // Size: 0x8
    // Offset: 0x0
    ::StringW NextUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.String _PreviousUrl
    // Size: 0x8
    // Offset: 0x0
    ::StringW PreviousUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<T>
    operator ::System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Collections.Generic.List`1<T> _Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<T>*& dyn__Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::dyn__Data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_Data"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.String _NextUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn__NextUrl() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::dyn__NextUrl");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_NextUrl"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.String _PreviousUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn__PreviousUrl() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::dyn__PreviousUrl");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_PreviousUrl"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_Count");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Int32 IndexOf(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, obj);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::Add");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::Contains");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> array, int arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, arrayIndex);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::Insert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::Remove");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // private System.Collections.IEnumerator GetEnumerator1()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* GetEnumerator1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::GetEnumerator1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Models::DeserializableList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.List`1<T> get_Data()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<T>* get_Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_Data");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Data", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal__method);
    }
    // public System.Boolean get_HasNextPage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasNextPage() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_HasNextPage");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_HasNextPage", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_HasPreviousPage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_HasPreviousPage() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_HasPreviousPage");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_HasPreviousPage", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.String get_NextUrl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_NextUrl() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_NextUrl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NextUrl", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.String get_PreviousUrl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_PreviousUrl() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::get_PreviousUrl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_PreviousUrl", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeserializableList_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::DeserializableList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeserializableList_1<T>*, creationType>()));
    }
  }; // Oculus.Platform.Models.DeserializableList`1
  // Could not write size check! Type: Oculus.Platform.Models.DeserializableList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"