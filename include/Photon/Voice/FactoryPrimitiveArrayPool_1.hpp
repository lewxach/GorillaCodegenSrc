// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.ObjectFactory`2
#include "Photon/Voice/ObjectFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: PrimitiveArrayPool`1<T>
  template<typename T>
  class PrimitiveArrayPool_1;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: FactoryPrimitiveArrayPool`1<T>
  template<typename T>
  class FactoryPrimitiveArrayPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::FactoryPrimitiveArrayPool_1, "Photon.Voice", "FactoryPrimitiveArrayPool`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.FactoryPrimitiveArrayPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class FactoryPrimitiveArrayPool_1 : public ::Il2CppObject/*, public ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>*/ {
    public:
    public:
    // private Photon.Voice.PrimitiveArrayPool`1<T> pool
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::PrimitiveArrayPool_1<T>* pool;
    // Field size check
    static_assert(sizeof(::Photon::Voice::PrimitiveArrayPool_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>
    operator ::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>() noexcept {
      return *reinterpret_cast<::Photon::Voice::ObjectFactory_2<::ArrayW<T>, int>*>(this);
    }
    // Creating conversion operator: operator ::Photon::Voice::PrimitiveArrayPool_1<T>*
    constexpr operator ::Photon::Voice::PrimitiveArrayPool_1<T>*() const noexcept {
      return pool;
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.PrimitiveArrayPool`1<T> pool
    [[deprecated("Use field access instead!")]] ::Photon::Voice::PrimitiveArrayPool_1<T>*& dyn_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::dyn_pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pool"))->offset;
      return *reinterpret_cast<::Photon::Voice::PrimitiveArrayPool_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 capacity, System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryPrimitiveArrayPool_1<T>* New_ctor(int capacity, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryPrimitiveArrayPool_1<T>*, creationType>(capacity, name)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.String name, System.Int32 info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryPrimitiveArrayPool_1<T>* New_ctor(int capacity, ::StringW name, int info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryPrimitiveArrayPool_1<T>*, creationType>(capacity, name, info)));
    }
    // public System.Int32 get_Info()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Info() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::get_Info");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T[] New()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> New() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::New");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public T[] New(System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> New(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::New");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, size);
    }
    // public System.Void Free(T[] obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Free(::ArrayW<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::Free");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
    // public System.Void Free(T[] obj, System.Int32 info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Free(::ArrayW<T> obj, int info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::Free");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj, info);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::FactoryPrimitiveArrayPool_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.FactoryPrimitiveArrayPool`1
  // Could not write size check! Type: Photon.Voice.FactoryPrimitiveArrayPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
