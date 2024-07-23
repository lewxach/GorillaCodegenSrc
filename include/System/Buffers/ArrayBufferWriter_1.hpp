// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Buffers.IBufferWriter`1
#include "System/Buffers/IBufferWriter_1.hpp"
// Including type: System.ReadOnlyMemory`1
#include "System/ReadOnlyMemory_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: ArrayBufferWriter`1<T>
  template<typename T>
  class ArrayBufferWriter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayBufferWriter_1, "System.Buffers", "ArrayBufferWriter`1");
// Type namespace: System.Buffers
namespace System::Buffers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Buffers.ArrayBufferWriter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ArrayBufferWriter_1 : public ::Il2CppObject/*, public ::System::Buffers::IBufferWriter_1<T>*/ {
    public:
    public:
    // private T[] _buffer
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Buffers::IBufferWriter_1<T>
    operator ::System::Buffers::IBufferWriter_1<T>() noexcept {
      return *reinterpret_cast<::System::Buffers::IBufferWriter_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn__buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::dyn__buffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_buffer"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::dyn__index");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_index"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayBufferWriter_1<T>* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayBufferWriter_1<T>*, creationType>(initialCapacity)));
    }
    // public System.ReadOnlyMemory`1<T> get_WrittenMemory()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ReadOnlyMemory_1<T> get_WrittenMemory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::get_WrittenMemory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_WrittenMemory", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(this, ___internal__method);
    }
    // public System.Int32 get_FreeCapacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_FreeCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::get_FreeCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_FreeCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Advance(System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Advance(int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::Advance");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayBufferWriter_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, count);
    }
    // public System.Span`1<T> GetSpan(System.Int32 sizeHint)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Span_1<T> GetSpan(int sizeHint) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::GetSpan");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayBufferWriter_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Span_1<T>, false>(this, ___internal__method, sizeHint);
    }
    // private System.Void CheckAndResizeBuffer(System.Int32 sizeHint)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CheckAndResizeBuffer(int sizeHint) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::CheckAndResizeBuffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CheckAndResizeBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sizeHint)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, sizeHint);
    }
    // static private System.Void ThrowInvalidOperationException_AdvancedTooFar(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void ThrowInvalidOperationException_AdvancedTooFar(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayBufferWriter_1::ThrowInvalidOperationException_AdvancedTooFar");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayBufferWriter_1<T>*>::get(), "ThrowInvalidOperationException_AdvancedTooFar", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(capacity)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, capacity);
    }
  }; // System.Buffers.ArrayBufferWriter`1
  // Could not write size check! Type: System.Buffers.ArrayBufferWriter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"