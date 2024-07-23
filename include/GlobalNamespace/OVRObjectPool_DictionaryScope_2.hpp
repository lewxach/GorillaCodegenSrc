// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRObjectPool
#include "GlobalNamespace/OVRObjectPool.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool::DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRObjectPool/DictionaryScope`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  struct OVRObjectPool::DictionaryScope_2/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.Collections.Generic.Dictionary`2<TKey,TValue> _dictionary
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TKey, TValue>*) == 0x8);
    public:
    // Creating value type constructor for type: DictionaryScope_2
    constexpr DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary_ = {}) noexcept : dictionary{dictionary_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<TKey, TValue>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<TKey, TValue>*() const noexcept {
      return dictionary;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<TKey,TValue> _dictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& dyn__dictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::DictionaryScope_2::dyn__dictionary");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_dictionary"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(out System.Collections.Generic.Dictionary`2<TKey,TValue> dictionary)
    // Offset: 0xFFFFFFFFFFFFFFFF
    DictionaryScope_2(ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::DictionaryScope_2::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::System::Collections::Generic::Dictionary_2<TKey, TValue>*&>()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(dictionary));
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::DictionaryScope_2::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(*this, classof(::GlobalNamespace::OVRObjectPool::DictionaryScope_2<TKey, TValue>), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // OVRObjectPool/DictionaryScope`2
  // Could not write size check! Type: OVRObjectPool/DictionaryScope`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"