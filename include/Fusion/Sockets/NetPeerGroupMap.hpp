// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetAddress
  struct NetAddress;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetPeerGroupMap
  struct NetPeerGroupMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetPeerGroupMap, "Fusion.Sockets", "NetPeerGroupMap");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetPeerGroupMap
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetPeerGroupMap/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Fusion::Sockets::NetPeerGroupMap::EntryState
    struct EntryState;
    // Nested type: ::Fusion::Sockets::NetPeerGroupMap::Entry
    struct Entry;
    public:
    // public Fusion.Sockets.NetPeerGroupMap/Entry** Buckets
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::Sockets::NetPeerGroupMap::Entry** Buckets;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPeerGroupMap::Entry**) == 0x8);
    // public Fusion.Sockets.NetPeerGroupMap/Entry* Entries
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::Sockets::NetPeerGroupMap::Entry* Entries;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPeerGroupMap::Entry*) == 0x8);
    // public Fusion.Sockets.NetPeerGroupMap/Entry* FreeHead
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::Sockets::NetPeerGroupMap::Entry* FreeHead;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPeerGroupMap::Entry*) == 0x8);
    // public System.UInt64 UsedCount
    // Size: 0x8
    // Offset: 0x18
    uint64_t UsedCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 FreeCount
    // Size: 0x8
    // Offset: 0x20
    uint64_t FreeCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 CapacityUsable
    // Size: 0x8
    // Offset: 0x28
    uint64_t CapacityUsable;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 CapacityAllocated
    // Size: 0x8
    // Offset: 0x30
    uint64_t CapacityAllocated;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: NetPeerGroupMap
    constexpr NetPeerGroupMap(::Fusion::Sockets::NetPeerGroupMap::Entry** Buckets_ = {}, ::Fusion::Sockets::NetPeerGroupMap::Entry* Entries_ = {}, ::Fusion::Sockets::NetPeerGroupMap::Entry* FreeHead_ = {}, uint64_t UsedCount_ = {}, uint64_t FreeCount_ = {}, uint64_t CapacityUsable_ = {}, uint64_t CapacityAllocated_ = {}) noexcept : Buckets{Buckets_}, Entries{Entries_}, FreeHead{FreeHead_}, UsedCount{UsedCount_}, FreeCount{FreeCount_}, CapacityUsable{CapacityUsable_}, CapacityAllocated{CapacityAllocated_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Fusion.Sockets.NetPeerGroupMap/Entry** Buckets
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPeerGroupMap::Entry**& dyn_Buckets();
    // Get instance field reference: public Fusion.Sockets.NetPeerGroupMap/Entry* Entries
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPeerGroupMap::Entry*& dyn_Entries();
    // Get instance field reference: public Fusion.Sockets.NetPeerGroupMap/Entry* FreeHead
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPeerGroupMap::Entry*& dyn_FreeHead();
    // Get instance field reference: public System.UInt64 UsedCount
    [[deprecated("Use field access instead!")]] uint64_t& dyn_UsedCount();
    // Get instance field reference: public System.UInt64 FreeCount
    [[deprecated("Use field access instead!")]] uint64_t& dyn_FreeCount();
    // Get instance field reference: public System.UInt64 CapacityUsable
    [[deprecated("Use field access instead!")]] uint64_t& dyn_CapacityUsable();
    // Get instance field reference: public System.UInt64 CapacityAllocated
    [[deprecated("Use field access instead!")]] uint64_t& dyn_CapacityAllocated();
    // static public System.Void Dispose(Fusion.Sockets.NetPeerGroupMap* map)
    // Offset: 0x2B93AA0
    static void Dispose(::Fusion::Sockets::NetPeerGroupMap* map);
    // static public Fusion.Sockets.NetPeerGroupMap* Allocate(System.Int32 capacity)
    // Offset: 0x2B93680
    static ::Fusion::Sockets::NetPeerGroupMap* Allocate(int capacity);
    // public System.Int32 Remove(Fusion.Sockets.NetAddress address)
    // Offset: 0x2B92DE4
    int Remove(::Fusion::Sockets::NetAddress address);
    // public System.Boolean Insert(Fusion.Sockets.NetAddress address, System.Int16 group)
    // Offset: 0x2B92F2C
    bool Insert(::Fusion::Sockets::NetAddress address, int16_t group);
    // public System.Int16 Find(Fusion.Sockets.NetAddress address)
    // Offset: 0x2B93CF4
    int16_t Find(::Fusion::Sockets::NetAddress address);
  }; // Fusion.Sockets.NetPeerGroupMap
  #pragma pack(pop)
  static check_size<sizeof(NetPeerGroupMap), 48 + sizeof(uint64_t)> __Fusion_Sockets_NetPeerGroupMapSizeCheck;
  static_assert(sizeof(NetPeerGroupMap) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetPeerGroupMap::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroupMap*)>(&Fusion::Sockets::NetPeerGroupMap::Dispose)> {
  static const MethodInfo* get() {
    static auto* map = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetPeerGroupMap"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeerGroupMap), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{map});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeerGroupMap::Allocate
// Il2CppName: Allocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetPeerGroupMap* (*)(int)>(&Fusion::Sockets::NetPeerGroupMap::Allocate)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeerGroupMap), "Allocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeerGroupMap::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress)>(&Fusion::Sockets::NetPeerGroupMap::Remove)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeerGroupMap), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeerGroupMap::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress, int16_t)>(&Fusion::Sockets::NetPeerGroupMap::Insert)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeerGroupMap), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, group});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetPeerGroupMap::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress)>(&Fusion::Sockets::NetPeerGroupMap::Find)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetPeerGroupMap), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};