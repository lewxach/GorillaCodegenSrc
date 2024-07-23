// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Buffers.ArrayPool`1
#include "System/Buffers/ArrayPool_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Buffers
namespace System::Buffers {
  // Skipping declaration: MemoryPressure because it is already included!
  // Skipping declaration: PerCoreLockedStacks because it is already included!
  // Skipping declaration: LockedStack because it is already included!
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Completed forward declares
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: TlsOverPerCoreLockedStacksArrayPool`1<T>
  template<typename T>
  class TlsOverPerCoreLockedStacksArrayPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1");
// Type namespace: System.Buffers
namespace System::Buffers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TlsOverPerCoreLockedStacksArrayPool_1 : public ::System::Buffers::ArrayPool_1<T> {
    public:
    // Nested type: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure<T>
    struct MemoryPressure;
    // Nested type: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks<T>
    class PerCoreLockedStacks;
    // Nested type: ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack<T>
    class LockedStack;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure
    // [TokenAttribute] Offset: FFFFFFFF
    struct MemoryPressure : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::Enum*/ {
      public:
      using declaring_type = TlsOverPerCoreLockedStacksArrayPool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "MemoryPressure";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MemoryPressure
      constexpr MemoryPressure(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // Autogenerated static field getter
      // Get static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> Low
      static typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure _get_Low() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_get_Low");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "Low"));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> Low
      static void _set_Low(typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_set_Low");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "Low", value));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> Medium
      static typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure _get_Medium() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_get_Medium");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "Medium"));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> Medium
      static void _set_Medium(typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_set_Medium");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "Medium", value));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> High
      static typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure _get_High() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_get_High");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "High"));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> High
      static void _set_High(typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::_set_High");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure>::get(), "High", value));
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::MemoryPressure::dyn_value__");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value__"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure
    // Could not write size check! Type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks
    // [TokenAttribute] Offset: FFFFFFFF
    class PerCoreLockedStacks : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TlsOverPerCoreLockedStacksArrayPool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "PerCoreLockedStacks";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private readonly System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack<T>[] _perCoreStacks
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*> perCoreStacks;
      // Field size check
      static_assert(sizeof(::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*>) == 0x8);
      public:
      // Creating conversion operator: operator ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*>
      constexpr operator ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*>() const noexcept {
        return perCoreStacks;
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack<T>[] _perCoreStacks
      [[deprecated("Use field access instead!")]] ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*>& dyn__perCoreStacks() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks::dyn__perCoreStacks");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_perCoreStacks"))->offset;
        return *reinterpret_cast<::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void TryPush(T[] array)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void TryPush(::ArrayW<T> array) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks::TryPush");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryPush", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array);
      }
      // public T[] TryPop()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::ArrayW<T> TryPop() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks::TryPop");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryPop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
      }
      // public System.Boolean Trim(System.UInt32 tickCount, System.Int32 id, System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> pressure, System.Int32[] bucketSizes)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool Trim(uint tickCount, int id, typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure pressure, ::ArrayW<int> bucketSizes) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks::Trim");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Trim", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tickCount), ::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(pressure), ::il2cpp_utils::ExtractType(bucketSizes)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, tickCount, id, pressure, bucketSizes);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::PerCoreLockedStacks::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*, creationType>()));
      }
    }; // System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks
    // Could not write size check! Type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack
    // [TokenAttribute] Offset: FFFFFFFF
    class LockedStack : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TlsOverPerCoreLockedStacksArrayPool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "LockedStack";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private readonly T[][] _arrays
      // Size: 0x8
      // Offset: 0x0
      ::ArrayW<::ArrayW<T>> arrays;
      // Field size check
      static_assert(sizeof(::ArrayW<::ArrayW<T>>) == 0x8);
      // private System.Int32 _count
      // Size: 0x4
      // Offset: 0x0
      int count;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.UInt32 _firstStackItemMS
      // Size: 0x4
      // Offset: 0x0
      uint firstStackItemMS;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Autogenerated instance field getter
      // Get instance field: private readonly T[][] _arrays
      [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<T>>& dyn__arrays() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::dyn__arrays");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_arrays"))->offset;
        return *reinterpret_cast<::ArrayW<::ArrayW<T>>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 _count
      [[deprecated("Use field access instead!")]] int& dyn__count() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::dyn__count");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_count"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.UInt32 _firstStackItemMS
      [[deprecated("Use field access instead!")]] uint& dyn__firstStackItemMS() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::dyn__firstStackItemMS");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_firstStackItemMS"))->offset;
        return *reinterpret_cast<uint*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Boolean TryPush(T[] array)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool TryPush(::ArrayW<T> array) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::TryPush");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryPush", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, array);
      }
      // public T[] TryPop()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::ArrayW<T> TryPop() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::TryPop");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryPop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
      }
      // public System.Void Trim(System.UInt32 tickCount, System.Int32 id, System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> pressure, System.Int32 bucketSize)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Trim(uint tickCount, int id, typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure pressure, int bucketSize) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::Trim");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Trim", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(tickCount), ::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(pressure), ::il2cpp_utils::ExtractType(bucketSize)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, tickCount, id, pressure, bucketSize);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::LockedStack::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TlsOverPerCoreLockedStacksArrayPool_1<T>::LockedStack*, creationType>()));
      }
    }; // System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack
    // Could not write size check! Type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Int32[] _bucketArraySizes
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<int> bucketArraySizes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks<T>[] _buckets
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*> buckets;
    // Field size check
    static_assert(sizeof(::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*>) == 0x8);
    // private System.Int32 _callbackCreated
    // Size: 0x4
    // Offset: 0x0
    int callbackCreated;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated static field getter
    // Get static field: static private T[][] t_tlsBuckets
    static ::ArrayW<::ArrayW<T>> _get_t_tlsBuckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_get_t_tlsBuckets");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::ArrayW<::ArrayW<T>>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "t_tlsBuckets"));
    }
    // Autogenerated static field setter
    // Set static field: static private T[][] t_tlsBuckets
    static void _set_t_tlsBuckets(::ArrayW<::ArrayW<T>> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_set_t_tlsBuckets");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "t_tlsBuckets", value));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Boolean s_trimBuffers
    static bool _get_s_trimBuffers() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_get_s_trimBuffers");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "s_trimBuffers"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Boolean s_trimBuffers
    static void _set_s_trimBuffers(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_set_s_trimBuffers");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "s_trimBuffers", value));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<T[][],System.Object> s_allTlsBuckets
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::Il2CppObject*>* _get_s_allTlsBuckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_get_s_allTlsBuckets");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::Il2CppObject*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "s_allTlsBuckets")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<T[][],System.Object> s_allTlsBuckets
    static void _set_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>, ::Il2CppObject*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::_set_s_allTlsBuckets");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "s_allTlsBuckets", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32[] _bucketArraySizes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__bucketArraySizes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::dyn__bucketArraySizes");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_bucketArraySizes"))->offset;
      return *reinterpret_cast<::ArrayW<int>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks<T>[] _buckets
    [[deprecated("Use field access instead!")]] ::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*>& dyn__buckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::dyn__buckets");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_buckets"))->offset;
      return *reinterpret_cast<::ArrayW<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _callbackCreated
    [[deprecated("Use field access instead!")]] int& dyn__callbackCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::dyn__callbackCreated");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_callbackCreated"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks<T> CreatePerCoreLockedStacks(System.Int32 bucketIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks* CreatePerCoreLockedStacks(int bucketIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::CreatePerCoreLockedStacks");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreatePerCoreLockedStacks", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bucketIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::PerCoreLockedStacks*, false>(this, ___internal__method, bucketIndex);
    }
    // private System.Int32 get_Id()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Id() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::get_Id");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Id", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean Trim()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Trim() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Trim");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Trim", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // static private System.Boolean Gen2GcCallbackFunc(System.Object target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool Gen2GcCallbackFunc(::Il2CppObject* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Gen2GcCallbackFunc");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "Gen2GcCallbackFunc", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, target);
    }
    // static private System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T> GetMemoryPressure()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure GetMemoryPressure() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetMemoryPressure");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetMemoryPressure", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>::MemoryPressure, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Boolean GetTrimBuffers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool GetTrimBuffers() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::GetTrimBuffers");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), "GetTrimBuffers", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Buffers.ArrayPool`1
    // Base method: System.Void ArrayPool_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsOverPerCoreLockedStacksArrayPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsOverPerCoreLockedStacksArrayPool_1<T>*, creationType>()));
    }
    // public override T[] Rent(System.Int32 minimumLength)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Buffers.ArrayPool`1
    // Base method: T[] ArrayPool_1::Rent(System.Int32 minimumLength)
    ::ArrayW<T> Rent(int minimumLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Rent");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, minimumLength);
    }
    // public override System.Void Return(T[] array, System.Boolean clearArray)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Buffers.ArrayPool`1
    // Base method: System.Void ArrayPool_1::Return(T[] array, System.Boolean clearArray)
    void Return(::ArrayW<T> array, bool clearArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::Return");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, clearArray);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Buffers.ArrayPool`1
    // Base method: System.Void ArrayPool_1::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TlsOverPerCoreLockedStacksArrayPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
  // Could not write size check! Type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"