// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Skipping declaration: Entry because it is already included!
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectRefMap`1<T>
  template<typename T>
  class NetworkObjectRefMap_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Fusion::NetworkObjectRefMap_1, "Fusion", "NetworkObjectRefMap`1");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkObjectRefMap`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetworkObjectRefMap_1 : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::NetworkObjectRefMap_1::Entry<T>
    struct Entry;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkObjectRefMap`1/Entry
    // [TokenAttribute] Offset: FFFFFFFF
    struct Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::ValueType*/ {
      public:
      using declaring_type = NetworkObjectRefMap_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Entry";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public Fusion.NetworkId Id
      // Size: 0x4
      // Offset: 0x0
      ::Fusion::NetworkId Id;
      // Field size check
      static_assert(sizeof(::Fusion::NetworkId) == 0x4);
      // public T Value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T Value;
      // public System.Int32 Next
      // Size: 0x4
      // Offset: 0x0
      int Next;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Entry
      constexpr Entry(::Fusion::NetworkId Id_ = {}, T Value_ = {}, int Next_ = {}) noexcept : Id{Id_}, Value{Value_}, Next{Next_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public Fusion.NetworkId Id
      [[deprecated("Use field access instead!")]] ::Fusion::NetworkId& dyn_Id() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Entry::dyn_Id");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Id"))->offset;
        return *reinterpret_cast<::Fusion::NetworkId*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public T Value
      [[deprecated("Use field access instead!")]] T& dyn_Value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Entry::dyn_Value");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 Next
      [[deprecated("Use field access instead!")]] int& dyn_Next() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Entry::dyn_Next");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Next"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // Fusion.NetworkObjectRefMap`1/Entry
    // Could not write size check! Type: Fusion.NetworkObjectRefMap`1/Entry is generic, or has no fields that are valid for size checks!
    public:
    // private System.Int32[] _buckets
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<int> buckets;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private Fusion.NetworkObjectRefMap`1/Entry<T>[] _entries
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry> entries;
    // Field size check
    static_assert(sizeof(::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry>) == 0x8);
    // private System.Int32 _free
    // Size: 0x4
    // Offset: 0x0
    int free;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _usedCount
    // Size: 0x4
    // Offset: 0x0
    int usedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _freeCount
    // Size: 0x4
    // Offset: 0x0
    int freeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Int32 INVALID_ENTRY
    static int _get_INVALID_ENTRY() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::_get_INVALID_ENTRY");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkObjectRefMap_1<T>*>::get(), "INVALID_ENTRY"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 INVALID_ENTRY
    static void _set_INVALID_ENTRY(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::_set_INVALID_ENTRY");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkObjectRefMap_1<T>*>::get(), "INVALID_ENTRY", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 ENTRY_START_INDEX
    static int _get_ENTRY_START_INDEX() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::_get_ENTRY_START_INDEX");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkObjectRefMap_1<T>*>::get(), "ENTRY_START_INDEX"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 ENTRY_START_INDEX
    static void _set_ENTRY_START_INDEX(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::_set_ENTRY_START_INDEX");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetworkObjectRefMap_1<T>*>::get(), "ENTRY_START_INDEX", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32[] _buckets
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__buckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::dyn__buckets");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_buckets"))->offset;
      return *reinterpret_cast<::ArrayW<int>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Fusion.NetworkObjectRefMap`1/Entry<T>[] _entries
    [[deprecated("Use field access instead!")]] ::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry>& dyn__entries() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::dyn__entries");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_entries"))->offset;
      return *reinterpret_cast<::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _free
    [[deprecated("Use field access instead!")]] int& dyn__free() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::dyn__free");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_free"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _usedCount
    [[deprecated("Use field access instead!")]] int& dyn__usedCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::dyn__usedCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_usedCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _freeCount
    [[deprecated("Use field access instead!")]] int& dyn__freeCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::dyn__freeCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_freeCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.UInt32 get_Capacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint get_Capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::get_Capacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Capacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<uint, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.UInt32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkObjectRefMap_1<T>* New_ctor(uint capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkObjectRefMap_1<T>*, creationType>(capacity)));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void GetIterateBufferStartCount(out Fusion.NetworkObjectRefMap`1/Entry<T>[] entries, out System.Int32 start, out System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetIterateBufferStartCount(ByRef<::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry>> entries, ByRef<int> start, ByRef<int> count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::GetIterateBufferStartCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetIterateBufferStartCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::ArrayW<typename ::Fusion::NetworkObjectRefMap_1<T>::Entry>&>(), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractIndependentType<int&>()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(entries), byref(start), byref(count));
    }
    // public System.Boolean Contains(Fusion.NetworkId id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(::Fusion::NetworkId id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, id);
    }
    // public System.Boolean Remove(Fusion.NetworkId id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(::Fusion::NetworkId id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, id);
    }
    // public System.Boolean TryGet(Fusion.NetworkId id, out T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGet(::Fusion::NetworkId id, ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::TryGet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGet", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, id, byref(value));
    }
    // public System.Void Add(Fusion.NetworkId id, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::Fusion::NetworkId id, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, id, value);
    }
    // public System.Void AddOrUpdate(Fusion.NetworkId id, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddOrUpdate(::Fusion::NetworkId id, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::AddOrUpdate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddOrUpdate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, id, value);
    }
    // private System.Void Insert(Fusion.NetworkId id, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(::Fusion::NetworkId id, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, id, value);
    }
    // private System.Void Expand()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Expand() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Expand");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Expand", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Int32 Find(Fusion.NetworkId id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Find(::Fusion::NetworkId id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkObjectRefMap_1::Find");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, id);
    }
  }; // Fusion.NetworkObjectRefMap`1
  // Could not write size check! Type: Fusion.NetworkObjectRefMap`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"