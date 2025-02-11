// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.INativeList`1
#include "Unity/Collections/INativeList_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: Unity.Collections.FixedBytes4096Align8
#include "Unity/Collections/FixedBytes4096Align8.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: FixedList4096Bytes`1<T>
  template<typename T>
  struct FixedList4096Bytes_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::FixedList4096Bytes_1, "Unity.Collections", "FixedList4096Bytes`1");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.FixedList4096Bytes`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  struct FixedList4096Bytes_1/*, public ::System::ValueType, public ::Unity::Collections::INativeList_1<T>, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>, public ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>, public ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>, public ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>, public ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>, public ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>, public ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>, public ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>, public ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>, public ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*/ {
    public:
    public:
    // Unity.Collections.FixedBytes4096Align8 data
    // Size: 0x1000
    // Offset: 0x0
    ::Unity::Collections::FixedBytes4096Align8 data;
    // Field size check
    static_assert(sizeof(::Unity::Collections::FixedBytes4096Align8) == 0x1000);
    public:
    // Creating value type constructor for type: FixedList4096Bytes_1
    constexpr FixedList4096Bytes_1(::Unity::Collections::FixedBytes4096Align8 data_ = {}) noexcept : data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Collections::INativeList_1<T>
    operator ::Unity::Collections::INativeList_1<T>() noexcept {
      return *reinterpret_cast<::Unity::Collections::INativeList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>
    operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>
    operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>
    operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>
    operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>
    operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>
    operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(this);
    }
    // Creating conversion operator: operator ::Unity::Collections::FixedBytes4096Align8
    constexpr operator ::Unity::Collections::FixedBytes4096Align8() const noexcept {
      return data;
    }
    // Autogenerated instance field getter
    // Get instance field: Unity.Collections.FixedBytes4096Align8 data
    [[deprecated("Use field access instead!")]] ::Unity::Collections::FixedBytes4096Align8& dyn_data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::dyn_data");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "data"))->offset;
      return *reinterpret_cast<::Unity::Collections::FixedBytes4096Align8*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.UInt16 get_length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint16_t get_length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<uint16_t, false>(this, ___internal__method);
    }
    // System.Byte* get_buffer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint8_t* get_buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_buffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_buffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<uint8_t*, false>(this, ___internal__method);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_Length");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // System.Int32 get_LengthInBytes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_LengthInBytes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_LengthInBytes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_LengthInBytes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // System.Byte* get_Buffer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint8_t* get_Buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_Buffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Buffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<uint8_t*, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Int32 CompareTo(Unity.Collections.FixedList32Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Unity::Collections::FixedList32Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Boolean Equals(Unity.Collections.FixedList32Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::FixedList32Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(Unity.Collections.FixedList64Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Unity::Collections::FixedList64Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Boolean Equals(Unity.Collections.FixedList64Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::FixedList64Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(Unity.Collections.FixedList128Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Unity::Collections::FixedList128Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Boolean Equals(Unity.Collections.FixedList128Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::FixedList128Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(Unity.Collections.FixedList512Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Unity::Collections::FixedList512Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Boolean Equals(Unity.Collections.FixedList512Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::FixedList512Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(Unity.Collections.FixedList4096Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CompareTo(::Unity::Collections::FixedList4096Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::CompareTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, other);
    }
    // public System.Boolean Equals(Unity.Collections.FixedList4096Bytes`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Unity::Collections::FixedList4096Bytes_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::FixedList4096Bytes_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::FixedList4096Bytes_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
  }; // Unity.Collections.FixedList4096Bytes`1
  // Could not write size check! Type: Unity.Collections.FixedList4096Bytes`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
