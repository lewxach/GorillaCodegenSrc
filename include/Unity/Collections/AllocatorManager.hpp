// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Skipping declaration: AllocatorHandle because it is already included!
  // Skipping declaration: Block because it is already included!
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: AllocatorManager
  class AllocatorManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::AllocatorManager);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager*, "Unity.Collections", "AllocatorManager");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.AllocatorManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AllocatorManager : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Collections::AllocatorManager::TryFunction
    class TryFunction;
    // Nested type: ::Unity::Collections::AllocatorManager::AllocatorHandle
    struct AllocatorHandle;
    // Nested type: ::Unity::Collections::AllocatorManager::Range
    struct Range;
    // Nested type: ::Unity::Collections::AllocatorManager::Block
    struct Block;
    // Nested type: ::Unity::Collections::AllocatorManager::IAllocator
    class IAllocator;
    // Nested type: ::Unity::Collections::AllocatorManager::StackAllocator
    struct StackAllocator;
    // Nested type: ::Unity::Collections::AllocatorManager::SlabAllocator
    struct SlabAllocator;
    // Nested type: ::Unity::Collections::AllocatorManager::TableEntry
    struct TableEntry;
    // Nested type: ::Unity::Collections::AllocatorManager::Array16_1<T>
    template<typename T>
    struct Array16_1;
    // Nested type: ::Unity::Collections::AllocatorManager::Array256_1<T>
    template<typename T>
    struct Array256_1;
    // Nested type: ::Unity::Collections::AllocatorManager::Array4096_1<T>
    template<typename T>
    struct Array4096_1;
    // Nested type: ::Unity::Collections::AllocatorManager::Array32768_1<T>
    template<typename T>
    struct Array32768_1;
    // Nested type: ::Unity::Collections::AllocatorManager::SharedStatics
    class SharedStatics;
    // Nested type: ::Unity::Collections::AllocatorManager::Managed
    class Managed;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.AllocatorManager/AllocatorHandle
    // [TokenAttribute] Offset: FFFFFFFF
    struct AllocatorHandle/*, public ::System::ValueType, public ::Unity::Collections::AllocatorManager::IAllocator, public ::System::IEquatable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>, public ::System::IComparable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>*/ {
      public:
      public:
      // public System.UInt16 Index
      // Size: 0x2
      // Offset: 0x0
      uint16_t Index;
      // Field size check
      static_assert(sizeof(uint16_t) == 0x2);
      // public System.UInt16 Version
      // Size: 0x2
      // Offset: 0x2
      uint16_t Version;
      // Field size check
      static_assert(sizeof(uint16_t) == 0x2);
      public:
      // Creating value type constructor for type: AllocatorHandle
      constexpr AllocatorHandle(uint16_t Index_ = {}, uint16_t Version_ = {}) noexcept : Index{Index_}, Version{Version_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::Unity::Collections::AllocatorManager::IAllocator
      operator ::Unity::Collections::AllocatorManager::IAllocator() noexcept {
        return *reinterpret_cast<::Unity::Collections::AllocatorManager::IAllocator*>(this);
      }
      // Creating interface conversion operator: operator ::System::IEquatable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>
      operator ::System::IEquatable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>() noexcept {
        return *reinterpret_cast<::System::IEquatable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>*>(this);
      }
      // Creating interface conversion operator: operator ::System::IComparable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>
      operator ::System::IComparable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>() noexcept {
        return *reinterpret_cast<::System::IComparable_1<::Unity::Collections::AllocatorManager::AllocatorHandle>*>(this);
      }
      // Get instance field reference: public System.UInt16 Index
      [[deprecated("Use field access instead!")]] uint16_t& dyn_Index();
      // Get instance field reference: public System.UInt16 Version
      [[deprecated("Use field access instead!")]] uint16_t& dyn_Version();
      // Unity.Collections.AllocatorManager/TableEntry get_TableEntry()
      // Offset: 0x5085FC0
      ::Unity::Collections::AllocatorManager::TableEntry get_TableEntry();
      // System.Void Rewind()
      // Offset: 0x5086594
      void Rewind();
      // public System.Int32 get_Value()
      // Offset: 0x5086598
      int get_Value();
      // public System.Int32 Try(ref Unity.Collections.AllocatorManager/Block block)
      // Offset: 0x50865A0
      int Try(ByRef<::Unity::Collections::AllocatorManager::Block> block);
      // public Unity.Collections.AllocatorManager/AllocatorHandle get_Handle()
      // Offset: 0x5086168
      ::Unity::Collections::AllocatorManager::AllocatorHandle get_Handle();
      // public Unity.Collections.Allocator get_ToAllocator()
      // Offset: 0x5086608
      ::Unity::Collections::Allocator get_ToAllocator();
      // public System.Void Dispose()
      // Offset: 0x5086610
      void Dispose();
      // public System.Boolean Equals(Unity.Collections.AllocatorManager/AllocatorHandle other)
      // Offset: 0x50866D0
      bool Equals(::Unity::Collections::AllocatorManager::AllocatorHandle other);
      // public System.Int32 CompareTo(Unity.Collections.AllocatorManager/AllocatorHandle other)
      // Offset: 0x50866E8
      int CompareTo(::Unity::Collections::AllocatorManager::AllocatorHandle other);
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0x5086624
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
      // public override System.Int32 GetHashCode()
      // Offset: 0x50866E0
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
    }; // Unity.Collections.AllocatorManager/AllocatorHandle
    #pragma pack(pop)
    static check_size<sizeof(AllocatorManager::AllocatorHandle), 2 + sizeof(uint16_t)> __Unity_Collections_AllocatorManager_AllocatorHandleSizeCheck;
    static_assert(sizeof(AllocatorManager::AllocatorHandle) == 0x4);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.AllocatorManager/Range
    // [TokenAttribute] Offset: FFFFFFFF
    struct Range/*, public ::System::ValueType, public ::System::IDisposable*/ {
      public:
      public:
      // public System.IntPtr Pointer
      // Size: 0x8
      // Offset: 0x0
      ::System::IntPtr Pointer;
      // Field size check
      static_assert(sizeof(::System::IntPtr) == 0x8);
      // public System.Int32 Items
      // Size: 0x4
      // Offset: 0x8
      int Items;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public Unity.Collections.AllocatorManager/AllocatorHandle Allocator
      // Size: 0x4
      // Offset: 0xC
      ::Unity::Collections::AllocatorManager::AllocatorHandle Allocator;
      // Field size check
      static_assert(sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle) == 0x4);
      public:
      // Creating value type constructor for type: Range
      constexpr Range(::System::IntPtr Pointer_ = {}, int Items_ = {}, ::Unity::Collections::AllocatorManager::AllocatorHandle Allocator_ = {}) noexcept : Pointer{Pointer_}, Items{Items_}, Allocator{Allocator_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::IDisposable
      operator ::System::IDisposable() noexcept {
        return *reinterpret_cast<::System::IDisposable*>(this);
      }
      // Get instance field reference: public System.IntPtr Pointer
      [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Pointer();
      // Get instance field reference: public System.Int32 Items
      [[deprecated("Use field access instead!")]] int& dyn_Items();
      // Get instance field reference: public Unity.Collections.AllocatorManager/AllocatorHandle Allocator
      [[deprecated("Use field access instead!")]] ::Unity::Collections::AllocatorManager::AllocatorHandle& dyn_Allocator();
      // public System.Void Dispose()
      // Offset: 0x50866F4
      void Dispose();
    }; // Unity.Collections.AllocatorManager/Range
    #pragma pack(pop)
    static check_size<sizeof(AllocatorManager::Range), 12 + sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle)> __Unity_Collections_AllocatorManager_RangeSizeCheck;
    static_assert(sizeof(AllocatorManager::Range) == 0x10);
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Collections.AllocatorManager/Block
    // [TokenAttribute] Offset: FFFFFFFF
    struct Block/*, public ::System::ValueType, public ::System::IDisposable*/ {
      public:
      public:
      // public Unity.Collections.AllocatorManager/Range Range
      // Size: 0x10
      // Offset: 0x0
      ::Unity::Collections::AllocatorManager::Range Range;
      // Field size check
      static_assert(sizeof(::Unity::Collections::AllocatorManager::Range) == 0x10);
      // public System.Int32 BytesPerItem
      // Size: 0x4
      // Offset: 0x10
      int BytesPerItem;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 AllocatedItems
      // Size: 0x4
      // Offset: 0x14
      int AllocatedItems;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Byte Log2Alignment
      // Size: 0x1
      // Offset: 0x18
      uint8_t Log2Alignment;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // public System.Byte Padding0
      // Size: 0x1
      // Offset: 0x19
      uint8_t Padding0;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // public System.UInt16 Padding1
      // Size: 0x2
      // Offset: 0x1A
      uint16_t Padding1;
      // Field size check
      static_assert(sizeof(uint16_t) == 0x2);
      // public System.UInt32 Padding2
      // Size: 0x4
      // Offset: 0x1C
      uint Padding2;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: Block
      constexpr Block(::Unity::Collections::AllocatorManager::Range Range_ = {}, int BytesPerItem_ = {}, int AllocatedItems_ = {}, uint8_t Log2Alignment_ = {}, uint8_t Padding0_ = {}, uint16_t Padding1_ = {}, uint Padding2_ = {}) noexcept : Range{Range_}, BytesPerItem{BytesPerItem_}, AllocatedItems{AllocatedItems_}, Log2Alignment{Log2Alignment_}, Padding0{Padding0_}, Padding1{Padding1_}, Padding2{Padding2_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::IDisposable
      operator ::System::IDisposable() noexcept {
        return *reinterpret_cast<::System::IDisposable*>(this);
      }
      // Get instance field reference: public Unity.Collections.AllocatorManager/Range Range
      [[deprecated("Use field access instead!")]] ::Unity::Collections::AllocatorManager::Range& dyn_Range();
      // Get instance field reference: public System.Int32 BytesPerItem
      [[deprecated("Use field access instead!")]] int& dyn_BytesPerItem();
      // Get instance field reference: public System.Int32 AllocatedItems
      [[deprecated("Use field access instead!")]] int& dyn_AllocatedItems();
      // Get instance field reference: public System.Byte Log2Alignment
      [[deprecated("Use field access instead!")]] uint8_t& dyn_Log2Alignment();
      // Get instance field reference: public System.Byte Padding0
      [[deprecated("Use field access instead!")]] uint8_t& dyn_Padding0();
      // Get instance field reference: public System.UInt16 Padding1
      [[deprecated("Use field access instead!")]] uint16_t& dyn_Padding1();
      // Get instance field reference: public System.UInt32 Padding2
      [[deprecated("Use field access instead!")]] uint& dyn_Padding2();
      // public System.Int64 get_Bytes()
      // Offset: 0x50862E0
      int64_t get_Bytes();
      // public System.Int64 get_AllocatedBytes()
      // Offset: 0x5086734
      int64_t get_AllocatedBytes();
      // public System.Int32 get_Alignment()
      // Offset: 0x50862F0
      int get_Alignment();
      // public System.Void set_Alignment(System.Int32 value)
      // Offset: 0x5086740
      void set_Alignment(int value);
      // public System.Void Dispose()
      // Offset: 0x5086730
      void Dispose();
      // public System.Int32 TryFree()
      // Offset: 0x5086780
      int TryFree();
    }; // Unity.Collections.AllocatorManager/Block
    #pragma pack(pop)
    static check_size<sizeof(AllocatorManager::Block), 28 + sizeof(uint)> __Unity_Collections_AllocatorManager_BlockSizeCheck;
    static_assert(sizeof(AllocatorManager::Block) == 0x20);
    // Size: 0x0
    #pragma pack(push, 1)
    // Autogenerated type: Unity.Collections.AllocatorManager/IAllocator
    // [TokenAttribute] Offset: FFFFFFFF
    class IAllocator/*, public ::System::IDisposable*/ {
      public:
      // Creating interface conversion operator: operator ::System::IDisposable
      operator ::System::IDisposable() noexcept {
        return *reinterpret_cast<::System::IDisposable*>(this);
      }
      // public System.Int32 Try(ref Unity.Collections.AllocatorManager/Block block)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int Try(ByRef<::Unity::Collections::AllocatorManager::Block> block);
      // public Unity.Collections.AllocatorManager/AllocatorHandle get_Handle()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Unity::Collections::AllocatorManager::AllocatorHandle get_Handle();
    }; // Unity.Collections.AllocatorManager/IAllocator
    #pragma pack(pop)
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Invalid
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_Invalid();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Invalid
    static void _set_Invalid(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle None
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_None();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle None
    static void _set_None(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Temp
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_Temp();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Temp
    static void _set_Temp(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle TempJob
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_TempJob();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle TempJob
    static void _set_TempJob(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Persistent
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_Persistent();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle Persistent
    static void _set_Persistent(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle AudioKernel
    static ::Unity::Collections::AllocatorManager::AllocatorHandle _get_AudioKernel();
    // Set static field: static public readonly Unity.Collections.AllocatorManager/AllocatorHandle AudioKernel
    static void _set_AudioKernel(::Unity::Collections::AllocatorManager::AllocatorHandle value);
    // Get static field: static readonly System.UInt16 NumGlobalScratchAllocators
    static uint16_t _get_NumGlobalScratchAllocators();
    // Set static field: static readonly System.UInt16 NumGlobalScratchAllocators
    static void _set_NumGlobalScratchAllocators(uint16_t value);
    // Get static field: static readonly System.UInt16 MaxNumGlobalAllocators
    static uint16_t _get_MaxNumGlobalAllocators();
    // Set static field: static readonly System.UInt16 MaxNumGlobalAllocators
    static void _set_MaxNumGlobalAllocators(uint16_t value);
    // Get static field: static readonly System.UInt32 GlobalAllocatorBaseIndex
    static uint _get_GlobalAllocatorBaseIndex();
    // Set static field: static readonly System.UInt32 GlobalAllocatorBaseIndex
    static void _set_GlobalAllocatorBaseIndex(uint value);
    // Get static field: static readonly System.UInt32 FirstGlobalScratchpadAllocatorIndex
    static uint _get_FirstGlobalScratchpadAllocatorIndex();
    // Set static field: static readonly System.UInt32 FirstGlobalScratchpadAllocatorIndex
    static void _set_FirstGlobalScratchpadAllocatorIndex(uint value);
    // static Unity.Collections.AllocatorManager/Block AllocateBlock(ref T t, System.Int32 sizeOf, System.Int32 alignOf, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::AllocatorManager::Block AllocateBlock(ByRef<T> t, int sizeOf, int alignOf, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::AllocateBlock");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "AllocateBlock", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(sizeOf), ::il2cpp_utils::ExtractType(alignOf), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::AllocatorManager::Block, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), sizeOf, alignOf, items);
    }
    // static public System.Void* Allocate(ref T t, System.Int32 sizeOf, System.Int32 alignOf, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void* Allocate(ByRef<T> t, int sizeOf, int alignOf, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::Allocate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "Allocate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(sizeOf), ::il2cpp_utils::ExtractType(alignOf), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<void*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), sizeOf, alignOf, items);
    }
    // static U* Allocate(ref T t, U u, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class U>
    static U* Allocate(ByRef<T> t, U u, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static_assert(std::is_convertible_v<U, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::Allocate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "Allocate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(u), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<U*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), u, items);
    }
    // static System.Void FreeBlock(ref T t, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void FreeBlock(ByRef<T> t, ByRef<::Unity::Collections::AllocatorManager::Block> block) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::FreeBlock");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "FreeBlock", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(block)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), byref(block));
    }
    // static System.Void Free(ref T t, System.Void* pointer, System.Int32 sizeOf, System.Int32 alignOf, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Free(ByRef<T> t, void* pointer, int sizeOf, int alignOf, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::Free");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "Free", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(pointer), ::il2cpp_utils::ExtractType(sizeOf), ::il2cpp_utils::ExtractType(alignOf), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), pointer, sizeOf, alignOf, items);
    }
    // static System.Void Free(ref T t, U* pointer, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class U>
    static void Free(ByRef<T> t, U* pointer, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static_assert(std::is_convertible_v<U, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::Free");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "Free", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(pointer), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(t), pointer, items);
    }
    // static public System.Void Free(Unity.Collections.AllocatorManager/AllocatorHandle handle, System.Void* pointer)
    // Offset: 0x5085E48
    static void Free(::Unity::Collections::AllocatorManager::AllocatorHandle handle, void* pointer);
    // static public System.Void Free(Unity.Collections.AllocatorManager/AllocatorHandle handle, T* pointer, System.Int32 items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Free(::Unity::Collections::AllocatorManager::AllocatorHandle handle, T* pointer, int items) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::Free");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "AllocatorManager", "Free", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(handle), ::il2cpp_utils::ExtractType(pointer), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, handle, pointer, items);
    }
    // static private System.Void CheckDelegate(ref System.Boolean useDelegate)
    // Offset: 0x5085ECC
    static void CheckDelegate(ByRef<bool> useDelegate);
    // static private System.Boolean UseDelegate()
    // Offset: 0x5085ED8
    static bool UseDelegate();
    // static private System.Int32 allocate_block(ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5085F28
    static int allocate_block(ByRef<::Unity::Collections::AllocatorManager::Block> block);
    // static private System.Void forward_mono_allocate_block(ref Unity.Collections.AllocatorManager/Block block, ref System.Int32 error)
    // Offset: 0x5086058
    static void forward_mono_allocate_block(ByRef<::Unity::Collections::AllocatorManager::Block> block, ByRef<int> error);
    // static Unity.Collections.Allocator LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle handle)
    // Offset: 0x5086170
    static ::Unity::Collections::Allocator LegacyOf(::Unity::Collections::AllocatorManager::AllocatorHandle handle);
    // static private System.Int32 TryLegacy(ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5086184
    static int TryLegacy(ByRef<::Unity::Collections::AllocatorManager::Block> block);
    // static public System.Int32 Try(ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5086344
    static int Try(ByRef<::Unity::Collections::AllocatorManager::Block> block);
    // static private System.Void .cctor()
    // Offset: 0x5086420
    static void _cctor();
  }; // Unity.Collections.AllocatorManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::AllocatorManager::IAllocator);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager::IAllocator*, "Unity.Collections", "AllocatorManager/IAllocator");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager::Block, "Unity.Collections", "AllocatorManager/Block");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager::Range, "Unity.Collections", "AllocatorManager/Range");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager::AllocatorHandle, "Unity.Collections", "AllocatorManager/AllocatorHandle");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::AllocateBlock
// Il2CppName: AllocateBlock
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Allocate
// Il2CppName: Allocate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Allocate
// Il2CppName: Allocate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::FreeBlock
// Il2CppName: FreeBlock
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Free
// Il2CppName: Free
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Free
// Il2CppName: Free
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager::AllocatorHandle, void*)>(&Unity::Collections::AllocatorManager::Free)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/AllocatorHandle")->byval_arg;
    static auto* pointer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, pointer});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Free
// Il2CppName: Free
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::CheckDelegate
// Il2CppName: CheckDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<bool>)>(&Unity::Collections::AllocatorManager::CheckDelegate)> {
  static const MethodInfo* get() {
    static auto* useDelegate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "CheckDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useDelegate});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::UseDelegate
// Il2CppName: UseDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::Collections::AllocatorManager::UseDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "UseDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::allocate_block
// Il2CppName: allocate_block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AllocatorManager::allocate_block)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "allocate_block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::forward_mono_allocate_block
// Il2CppName: forward_mono_allocate_block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::AllocatorManager::Block>, ByRef<int>)>(&Unity::Collections::AllocatorManager::forward_mono_allocate_block)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "forward_mono_allocate_block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, error});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::LegacyOf
// Il2CppName: LegacyOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (*)(::Unity::Collections::AllocatorManager::AllocatorHandle)>(&Unity::Collections::AllocatorManager::LegacyOf)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/AllocatorHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "LegacyOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::TryLegacy
// Il2CppName: TryLegacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AllocatorManager::TryLegacy)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "TryLegacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::Try
// Il2CppName: Try
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AllocatorManager::Try)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), "Try", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::AllocatorManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
