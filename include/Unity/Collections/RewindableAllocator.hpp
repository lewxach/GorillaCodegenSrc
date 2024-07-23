// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.AllocatorManager/IAllocator
#include "Unity/Collections/AllocatorManager.hpp"
// Including type: Unity.Collections.Spinner
#include "Unity/Collections/Spinner.hpp"
// Including type: Unity.Collections.UnmanagedArray`1
#include "Unity/Collections/UnmanagedArray_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Skipping declaration: Union because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: RewindableAllocator
  struct RewindableAllocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator, "Unity.Collections", "RewindableAllocator");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.RewindableAllocator
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct RewindableAllocator/*, public ::System::ValueType, public ::Unity::Collections::AllocatorManager::IAllocator*/ {
    public:
    // Nested type: ::Unity::Collections::RewindableAllocator::Union
    struct Union;
    // Nested type: ::Unity::Collections::RewindableAllocator::MemoryBlock
    struct MemoryBlock;
    // Nested type: ::Unity::Collections::RewindableAllocator::Try_000009D0$PostfixBurstDelegate
    class Try_000009D0$PostfixBurstDelegate;
    // Nested type: ::Unity::Collections::RewindableAllocator::Try_000009D0$BurstDirectCall
    class Try_000009D0$BurstDirectCall;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.RewindableAllocator/Union
    // [TokenAttribute] Offset: FFFFFFFF
    struct Union/*, public ::System::ValueType*/ {
      public:
      public:
      // System.Int64 m_long
      // Size: 0x8
      // Offset: 0x0
      int64_t m_long;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      public:
      // Creating value type constructor for type: Union
      constexpr Union(int64_t m_long_ = {}) noexcept : m_long{m_long_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator int64_t
      constexpr operator int64_t() const noexcept {
        return m_long;
      }
      // Get instance field reference: System.Int64 m_long
      [[deprecated("Use field access instead!")]] int64_t& dyn_m_long();
      // System.Int64 get_m_current()
      // Offset: 0x5088C38
      int64_t get_m_current();
      // System.Void set_m_current(System.Int64 value)
      // Offset: 0x5088C44
      void set_m_current(int64_t value);
      // System.Int64 get_m_allocCount()
      // Offset: 0x5088C54
      int64_t get_m_allocCount();
      // System.Void set_m_allocCount(System.Int64 value)
      // Offset: 0x5088C60
      void set_m_allocCount(int64_t value);
    }; // Unity.Collections.RewindableAllocator/Union
    #pragma pack(pop)
    static check_size<sizeof(RewindableAllocator::Union), 0 + sizeof(int64_t)> __Unity_Collections_RewindableAllocator_UnionSizeCheck;
    static_assert(sizeof(RewindableAllocator::Union) == 0x8);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.RewindableAllocator/MemoryBlock
    // [TokenAttribute] Offset: FFFFFFFF
    // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
    struct MemoryBlock/*, public ::System::ValueType, public ::System::IDisposable*/ {
      public:
      public:
      // public System.Byte* m_pointer
      // Size: 0x8
      // Offset: 0x0
      uint8_t* m_pointer;
      // Field size check
      static_assert(sizeof(uint8_t*) == 0x8);
      // public System.Int64 m_bytes
      // Size: 0x8
      // Offset: 0x8
      int64_t m_bytes;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // public Unity.Collections.RewindableAllocator/Union m_union
      // Size: 0x8
      // Offset: 0x10
      ::Unity::Collections::RewindableAllocator::Union m_union;
      // Field size check
      static_assert(sizeof(::Unity::Collections::RewindableAllocator::Union) == 0x8);
      public:
      // Creating value type constructor for type: MemoryBlock
      constexpr MemoryBlock(uint8_t* m_pointer_ = {}, int64_t m_bytes_ = {}, ::Unity::Collections::RewindableAllocator::Union m_union_ = {}) noexcept : m_pointer{m_pointer_}, m_bytes{m_bytes_}, m_union{m_union_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::IDisposable
      operator ::System::IDisposable() noexcept {
        return *reinterpret_cast<::System::IDisposable*>(this);
      }
      // Get instance field reference: public System.Byte* m_pointer
      [[deprecated("Use field access instead!")]] uint8_t*& dyn_m_pointer();
      // Get instance field reference: public System.Int64 m_bytes
      [[deprecated("Use field access instead!")]] int64_t& dyn_m_bytes();
      // Get instance field reference: public Unity.Collections.RewindableAllocator/Union m_union
      [[deprecated("Use field access instead!")]] ::Unity::Collections::RewindableAllocator::Union& dyn_m_union();
      // public System.Void .ctor(System.Int64 bytes)
      // Offset: 0x5088AD0
      MemoryBlock(int64_t bytes);
      // public System.Void Rewind()
      // Offset: 0x508853C
      void Rewind();
      // public System.Void Dispose()
      // Offset: 0x50884E4
      void Dispose();
      // public System.Boolean Contains(System.IntPtr ptr)
      // Offset: 0x5088B10
      bool Contains(::System::IntPtr ptr);
    }; // Unity.Collections.RewindableAllocator/MemoryBlock
    #pragma pack(pop)
    static check_size<sizeof(RewindableAllocator::MemoryBlock), 16 + sizeof(::Unity::Collections::RewindableAllocator::Union)> __Unity_Collections_RewindableAllocator_MemoryBlockSizeCheck;
    static_assert(sizeof(RewindableAllocator::MemoryBlock) == 0x18);
    public:
    // private Unity.Collections.Spinner m_spinner
    // Size: 0x4
    // Offset: 0x0
    ::Unity::Collections::Spinner m_spinner;
    // Field size check
    static_assert(sizeof(::Unity::Collections::Spinner) == 0x4);
    // private Unity.Collections.AllocatorManager/AllocatorHandle m_handle
    // Size: 0x4
    // Offset: 0x4
    ::Unity::Collections::AllocatorManager::AllocatorHandle m_handle;
    // Field size check
    static_assert(sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle) == 0x4);
    // private Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock> m_block
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator::MemoryBlock> m_block;
    // private System.Int32 m_last
    // Size: 0x4
    // Offset: 0x18
    int m_last;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_used
    // Size: 0x4
    // Offset: 0x1C
    int m_used;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte m_enableBlockFree
    // Size: 0x1
    // Offset: 0x20
    uint8_t m_enableBlockFree;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_reachMaxBlockSize
    // Size: 0x1
    // Offset: 0x21
    uint8_t m_reachMaxBlockSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: RewindableAllocator
    constexpr RewindableAllocator(::Unity::Collections::Spinner m_spinner_ = {}, ::Unity::Collections::AllocatorManager::AllocatorHandle m_handle_ = {}, ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator::MemoryBlock> m_block_ = {}, int m_last_ = {}, int m_used_ = {}, uint8_t m_enableBlockFree_ = {}, uint8_t m_reachMaxBlockSize_ = {}) noexcept : m_spinner{m_spinner_}, m_handle{m_handle_}, m_block{m_block_}, m_last{m_last_}, m_used{m_used_}, m_enableBlockFree{m_enableBlockFree_}, m_reachMaxBlockSize{m_reachMaxBlockSize_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Collections::AllocatorManager::IAllocator
    operator ::Unity::Collections::AllocatorManager::IAllocator() noexcept {
      return *reinterpret_cast<::Unity::Collections::AllocatorManager::IAllocator*>(this);
    }
    // Get instance field reference: private Unity.Collections.Spinner m_spinner
    [[deprecated("Use field access instead!")]] ::Unity::Collections::Spinner& dyn_m_spinner();
    // Get instance field reference: private Unity.Collections.AllocatorManager/AllocatorHandle m_handle
    [[deprecated("Use field access instead!")]] ::Unity::Collections::AllocatorManager::AllocatorHandle& dyn_m_handle();
    // Get instance field reference: private Unity.Collections.UnmanagedArray`1<Unity.Collections.RewindableAllocator/MemoryBlock> m_block
    [[deprecated("Use field access instead!")]] ::Unity::Collections::UnmanagedArray_1<::Unity::Collections::RewindableAllocator::MemoryBlock>& dyn_m_block();
    // Get instance field reference: private System.Int32 m_last
    [[deprecated("Use field access instead!")]] int& dyn_m_last();
    // Get instance field reference: private System.Int32 m_used
    [[deprecated("Use field access instead!")]] int& dyn_m_used();
    // Get instance field reference: private System.Byte m_enableBlockFree
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_enableBlockFree();
    // Get instance field reference: private System.Byte m_reachMaxBlockSize
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_reachMaxBlockSize();
    // public System.Void Rewind()
    // Offset: 0x50883D4
    void Rewind();
    // public System.Void Dispose()
    // Offset: 0x5088544
    void Dispose();
    // private System.Int32 TryAllocate(ref Unity.Collections.AllocatorManager/Block block, System.Int32 startIndex, System.Int32 lastIndex, System.Int64 alignedSize, System.Int64 alignmentMask)
    // Offset: 0x5088610
    int TryAllocate(ByRef<::Unity::Collections::AllocatorManager::Block> block, int startIndex, int lastIndex, int64_t alignedSize, int64_t alignmentMask);
    // public System.Int32 Try(ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x50887E4
    int Try(ByRef<::Unity::Collections::AllocatorManager::Block> block);
    // static System.Int32 Try(System.IntPtr state, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5088370
    static int Try(::System::IntPtr state, ByRef<::Unity::Collections::AllocatorManager::Block> block);
    // public Unity.Collections.AllocatorManager/AllocatorHandle get_Handle()
    // Offset: 0x5088C14
    ::Unity::Collections::AllocatorManager::AllocatorHandle get_Handle();
    // static public System.Int32 Try$BurstManaged(System.IntPtr state, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5088C1C
    static int Try$BurstManaged(::System::IntPtr state, ByRef<::Unity::Collections::AllocatorManager::Block> block);
  }; // Unity.Collections.RewindableAllocator
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator::MemoryBlock, "Unity.Collections", "RewindableAllocator/MemoryBlock");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::RewindableAllocator::Union, "Unity.Collections", "RewindableAllocator/Union");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::Rewind
// Il2CppName: Rewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::RewindableAllocator::*)()>(&Unity::Collections::RewindableAllocator::Rewind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "Rewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::RewindableAllocator::*)()>(&Unity::Collections::RewindableAllocator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::TryAllocate
// Il2CppName: TryAllocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Collections::RewindableAllocator::*)(ByRef<::Unity::Collections::AllocatorManager::Block>, int, int, int64_t, int64_t)>(&Unity::Collections::RewindableAllocator::TryAllocate)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lastIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* alignedSize = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* alignmentMask = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "TryAllocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, startIndex, lastIndex, alignedSize, alignmentMask});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::Try
// Il2CppName: Try
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Collections::RewindableAllocator::*)(ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::RewindableAllocator::Try)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "Try", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::Try
// Il2CppName: Try
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::RewindableAllocator::Try)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "Try", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager::AllocatorHandle (Unity::Collections::RewindableAllocator::*)()>(&Unity::Collections::RewindableAllocator::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::RewindableAllocator::Try$BurstManaged
// Il2CppName: Try$BurstManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::RewindableAllocator::Try$BurstManaged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::RewindableAllocator), "Try$BurstManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block});
  }
};