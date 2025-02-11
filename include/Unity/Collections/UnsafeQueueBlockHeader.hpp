// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: UnsafeQueueBlockHeader
  struct UnsafeQueueBlockHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueBlockHeader, "Unity.Collections", "UnsafeQueueBlockHeader");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.UnsafeQueueBlockHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnsafeQueueBlockHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public Unity.Collections.UnsafeQueueBlockHeader* m_NextBlock
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Collections::UnsafeQueueBlockHeader* m_NextBlock;
    // Field size check
    static_assert(sizeof(::Unity::Collections::UnsafeQueueBlockHeader*) == 0x8);
    // public System.Int32 m_NumItems
    // Size: 0x4
    // Offset: 0x8
    int m_NumItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnsafeQueueBlockHeader
    constexpr UnsafeQueueBlockHeader(::Unity::Collections::UnsafeQueueBlockHeader* m_NextBlock_ = {}, int m_NumItems_ = {}) noexcept : m_NextBlock{m_NextBlock_}, m_NumItems{m_NumItems_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Unity.Collections.UnsafeQueueBlockHeader* m_NextBlock
    [[deprecated("Use field access instead!")]] ::Unity::Collections::UnsafeQueueBlockHeader*& dyn_m_NextBlock();
    // Get instance field reference: public System.Int32 m_NumItems
    [[deprecated("Use field access instead!")]] int& dyn_m_NumItems();
  }; // Unity.Collections.UnsafeQueueBlockHeader
  #pragma pack(pop)
  static check_size<sizeof(UnsafeQueueBlockHeader), 8 + sizeof(int)> __Unity_Collections_UnsafeQueueBlockHeaderSizeCheck;
  static_assert(sizeof(UnsafeQueueBlockHeader) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
