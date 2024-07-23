// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
// Including type: System.ReadOnlySpan`1
#include "System/ReadOnlySpan_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ReadOnlyMemory`1<T>
  template<typename T>
  struct ReadOnlyMemory_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ReadOnlyMemory_1, "System", "ReadOnlyMemory`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ReadOnlyMemory`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  template<typename T>
  struct ReadOnlyMemory_1/*, public ::System::ValueType, public ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*/ {
    public:
    public:
    // private readonly System.Object _object
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* object;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Int32 _index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _length
    // Size: 0x4
    // Offset: 0x0
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReadOnlyMemory_1
    constexpr ReadOnlyMemory_1(::Il2CppObject* object_ = {}, int index_ = {}, int length_ = {}) noexcept : object{object_}, index{index_}, length{length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>
    operator ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Object _object
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__object() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::dyn__object");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_object"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::dyn__index");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_index"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::dyn__length");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(T[] array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ReadOnlyMemory_1(::ArrayW<T> array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array);
    }
    // public System.Void .ctor(T[] array, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ReadOnlyMemory_1(::ArrayW<T> array, int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, start, length);
    }
    // System.Void .ctor(System.Object obj, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // ABORTED: conflicts with another method.  ReadOnlyMemory_1(::Il2CppObject* obj, int start, int length)
    // static public System.ReadOnlyMemory`1<T> get_Empty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::ReadOnlyMemory_1<T> get_Empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::get_Empty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyMemory_1<T>>::get(), "get_Empty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.ReadOnlyMemory`1<T> Slice(System.Int32 start)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ReadOnlyMemory_1<T> Slice(int start) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::Slice");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Slice", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(start)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(this, ___internal__method, start);
    }
    // public System.ReadOnlyMemory`1<T> Slice(System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ReadOnlyMemory_1<T> Slice(int start, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::Slice");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Slice", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(length)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(this, ___internal__method, start, length);
    }
    // public System.ReadOnlySpan`1<T> get_Span()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ReadOnlySpan_1<T> get_Span() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::get_Span");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Span", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ReadOnlySpan_1<T>, false>(this, ___internal__method);
    }
    // public System.Boolean Equals(System.ReadOnlyMemory`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::System::ReadOnlyMemory_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ReadOnlyMemory_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // static private System.Int32 CombineHashCodes(System.Int32 left, System.Int32 right)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static int CombineHashCodes(int left, int right) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::CombineHashCodes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyMemory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, left, right);
    }
    // static private System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static int CombineHashCodes(int h1, int h2, int h3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::CombineHashCodes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyMemory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(h1), ::il2cpp_utils::ExtractType(h2), ::il2cpp_utils::ExtractType(h3)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, h1, h2, h3);
    }
    // System.Object GetObjectStartLength(out System.Int32 start, out System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetObjectStartLength(ByRef<int> start, ByRef<int> length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::GetObjectStartLength");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetObjectStartLength", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>()})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, byref(start), byref(length));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReadOnlyMemory_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::System::ValueType*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // System.ReadOnlyMemory`1
  // Could not write size check! Type: System.ReadOnlyMemory`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"