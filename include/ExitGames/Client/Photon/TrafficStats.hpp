// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: TrafficStats
  class TrafficStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::TrafficStats);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TrafficStats*, "ExitGames.Client.Photon", "TrafficStats");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.TrafficStats
  // [TokenAttribute] Offset: FFFFFFFF
  class TrafficStats : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <PackageHeaderSize>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int PackageHeaderSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <ReliableCommandCount>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int ReliableCommandCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <UnreliableCommandCount>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int UnreliableCommandCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <FragmentCommandCount>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int FragmentCommandCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <ControlCommandCount>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int ControlCommandCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <TotalPacketCount>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int TotalPacketCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <TotalCommandsInPackets>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int TotalCommandsInPackets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <ReliableCommandBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int ReliableCommandBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <UnreliableCommandBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int UnreliableCommandBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <FragmentCommandBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int FragmentCommandBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <ControlCommandBytes>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int ControlCommandBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <TimestampOfLastAck>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int TimestampOfLastAck;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <TimestampOfLastReliableCommand>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int TimestampOfLastReliableCommand;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 <PackageHeaderSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$PackageHeaderSize$k__BackingField();
    // Get instance field reference: private System.Int32 <ReliableCommandCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ReliableCommandCount$k__BackingField();
    // Get instance field reference: private System.Int32 <UnreliableCommandCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$UnreliableCommandCount$k__BackingField();
    // Get instance field reference: private System.Int32 <FragmentCommandCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$FragmentCommandCount$k__BackingField();
    // Get instance field reference: private System.Int32 <ControlCommandCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ControlCommandCount$k__BackingField();
    // Get instance field reference: private System.Int32 <TotalPacketCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TotalPacketCount$k__BackingField();
    // Get instance field reference: private System.Int32 <TotalCommandsInPackets>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TotalCommandsInPackets$k__BackingField();
    // Get instance field reference: private System.Int32 <ReliableCommandBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ReliableCommandBytes$k__BackingField();
    // Get instance field reference: private System.Int32 <UnreliableCommandBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$UnreliableCommandBytes$k__BackingField();
    // Get instance field reference: private System.Int32 <FragmentCommandBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$FragmentCommandBytes$k__BackingField();
    // Get instance field reference: private System.Int32 <ControlCommandBytes>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ControlCommandBytes$k__BackingField();
    // Get instance field reference: private System.Int32 <TimestampOfLastAck>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TimestampOfLastAck$k__BackingField();
    // Get instance field reference: private System.Int32 <TimestampOfLastReliableCommand>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$TimestampOfLastReliableCommand$k__BackingField();
    // public System.Int32 get_PackageHeaderSize()
    // Offset: 0x4A01530
    int get_PackageHeaderSize();
    // System.Void set_PackageHeaderSize(System.Int32 value)
    // Offset: 0x4A01538
    void set_PackageHeaderSize(int value);
    // public System.Int32 get_ReliableCommandCount()
    // Offset: 0x4A01540
    int get_ReliableCommandCount();
    // System.Void set_ReliableCommandCount(System.Int32 value)
    // Offset: 0x4A01548
    void set_ReliableCommandCount(int value);
    // public System.Int32 get_UnreliableCommandCount()
    // Offset: 0x4A01550
    int get_UnreliableCommandCount();
    // System.Void set_UnreliableCommandCount(System.Int32 value)
    // Offset: 0x4A01558
    void set_UnreliableCommandCount(int value);
    // public System.Int32 get_FragmentCommandCount()
    // Offset: 0x4A01560
    int get_FragmentCommandCount();
    // System.Void set_FragmentCommandCount(System.Int32 value)
    // Offset: 0x4A01568
    void set_FragmentCommandCount(int value);
    // public System.Int32 get_ControlCommandCount()
    // Offset: 0x4A01570
    int get_ControlCommandCount();
    // System.Void set_ControlCommandCount(System.Int32 value)
    // Offset: 0x4A01578
    void set_ControlCommandCount(int value);
    // public System.Int32 get_TotalPacketCount()
    // Offset: 0x4A01580
    int get_TotalPacketCount();
    // System.Void set_TotalPacketCount(System.Int32 value)
    // Offset: 0x4A01588
    void set_TotalPacketCount(int value);
    // public System.Int32 get_TotalCommandsInPackets()
    // Offset: 0x4A01590
    int get_TotalCommandsInPackets();
    // System.Void set_TotalCommandsInPackets(System.Int32 value)
    // Offset: 0x4A01598
    void set_TotalCommandsInPackets(int value);
    // public System.Int32 get_ReliableCommandBytes()
    // Offset: 0x4A015A0
    int get_ReliableCommandBytes();
    // System.Void set_ReliableCommandBytes(System.Int32 value)
    // Offset: 0x4A015A8
    void set_ReliableCommandBytes(int value);
    // public System.Int32 get_UnreliableCommandBytes()
    // Offset: 0x4A015B0
    int get_UnreliableCommandBytes();
    // System.Void set_UnreliableCommandBytes(System.Int32 value)
    // Offset: 0x4A015B8
    void set_UnreliableCommandBytes(int value);
    // public System.Int32 get_FragmentCommandBytes()
    // Offset: 0x4A015C0
    int get_FragmentCommandBytes();
    // System.Void set_FragmentCommandBytes(System.Int32 value)
    // Offset: 0x4A015C8
    void set_FragmentCommandBytes(int value);
    // public System.Int32 get_ControlCommandBytes()
    // Offset: 0x4A015D0
    int get_ControlCommandBytes();
    // System.Void set_ControlCommandBytes(System.Int32 value)
    // Offset: 0x4A015D8
    void set_ControlCommandBytes(int value);
    // System.Void .ctor(System.Int32 packageHeaderSize)
    // Offset: 0x4A015E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrafficStats* New_ctor(int packageHeaderSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::TrafficStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrafficStats*, creationType>(packageHeaderSize)));
    }
    // public System.Int32 get_TotalCommandCount()
    // Offset: 0x4A01608
    int get_TotalCommandCount();
    // public System.Int32 get_TotalCommandBytes()
    // Offset: 0x4A01618
    int get_TotalCommandBytes();
    // public System.Int32 get_TotalPacketBytes()
    // Offset: 0x4A01628
    int get_TotalPacketBytes();
    // public System.Int32 get_TimestampOfLastAck()
    // Offset: 0x4A01644
    int get_TimestampOfLastAck();
    // public System.Void set_TimestampOfLastAck(System.Int32 value)
    // Offset: 0x4A0164C
    void set_TimestampOfLastAck(int value);
    // public System.Int32 get_TimestampOfLastReliableCommand()
    // Offset: 0x4A01654
    int get_TimestampOfLastReliableCommand();
    // public System.Void set_TimestampOfLastReliableCommand(System.Int32 value)
    // Offset: 0x4A0165C
    void set_TimestampOfLastReliableCommand(int value);
    // System.Void CountControlCommand(System.Int32 size)
    // Offset: 0x49FFABC
    void CountControlCommand(int size);
    // System.Void CountReliableOpCommand(System.Int32 size)
    // Offset: 0x49F4530
    void CountReliableOpCommand(int size);
    // System.Void CountUnreliableOpCommand(System.Int32 size)
    // Offset: 0x49F454C
    void CountUnreliableOpCommand(int size);
    // System.Void CountFragmentOpCommand(System.Int32 size)
    // Offset: 0x4A01664
    void CountFragmentOpCommand(int size);
    // public override System.String ToString()
    // Offset: 0x4A01680
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ExitGames.Client.Photon.TrafficStats
  #pragma pack(pop)
  static check_size<sizeof(TrafficStats), 64 + sizeof(int)> __ExitGames_Client_Photon_TrafficStatsSizeCheck;
  static_assert(sizeof(TrafficStats) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_PackageHeaderSize
// Il2CppName: get_PackageHeaderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_PackageHeaderSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_PackageHeaderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_PackageHeaderSize
// Il2CppName: set_PackageHeaderSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_PackageHeaderSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_PackageHeaderSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_ReliableCommandCount
// Il2CppName: get_ReliableCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_ReliableCommandCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_ReliableCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_ReliableCommandCount
// Il2CppName: set_ReliableCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_ReliableCommandCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_ReliableCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_UnreliableCommandCount
// Il2CppName: get_UnreliableCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_UnreliableCommandCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_UnreliableCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_UnreliableCommandCount
// Il2CppName: set_UnreliableCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_UnreliableCommandCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_UnreliableCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_FragmentCommandCount
// Il2CppName: get_FragmentCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_FragmentCommandCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_FragmentCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_FragmentCommandCount
// Il2CppName: set_FragmentCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_FragmentCommandCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_FragmentCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_ControlCommandCount
// Il2CppName: get_ControlCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_ControlCommandCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_ControlCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_ControlCommandCount
// Il2CppName: set_ControlCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_ControlCommandCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_ControlCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TotalPacketCount
// Il2CppName: get_TotalPacketCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TotalPacketCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TotalPacketCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_TotalPacketCount
// Il2CppName: set_TotalPacketCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_TotalPacketCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_TotalPacketCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TotalCommandsInPackets
// Il2CppName: get_TotalCommandsInPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TotalCommandsInPackets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TotalCommandsInPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_TotalCommandsInPackets
// Il2CppName: set_TotalCommandsInPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_TotalCommandsInPackets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_TotalCommandsInPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_ReliableCommandBytes
// Il2CppName: get_ReliableCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_ReliableCommandBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_ReliableCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_ReliableCommandBytes
// Il2CppName: set_ReliableCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_ReliableCommandBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_ReliableCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_UnreliableCommandBytes
// Il2CppName: get_UnreliableCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_UnreliableCommandBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_UnreliableCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_UnreliableCommandBytes
// Il2CppName: set_UnreliableCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_UnreliableCommandBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_UnreliableCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_FragmentCommandBytes
// Il2CppName: get_FragmentCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_FragmentCommandBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_FragmentCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_FragmentCommandBytes
// Il2CppName: set_FragmentCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_FragmentCommandBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_FragmentCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_ControlCommandBytes
// Il2CppName: get_ControlCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_ControlCommandBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_ControlCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_ControlCommandBytes
// Il2CppName: set_ControlCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_ControlCommandBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_ControlCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TotalCommandCount
// Il2CppName: get_TotalCommandCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TotalCommandCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TotalCommandCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TotalCommandBytes
// Il2CppName: get_TotalCommandBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TotalCommandBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TotalCommandBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TotalPacketBytes
// Il2CppName: get_TotalPacketBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TotalPacketBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TotalPacketBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TimestampOfLastAck
// Il2CppName: get_TimestampOfLastAck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TimestampOfLastAck)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TimestampOfLastAck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_TimestampOfLastAck
// Il2CppName: set_TimestampOfLastAck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_TimestampOfLastAck)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_TimestampOfLastAck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::get_TimestampOfLastReliableCommand
// Il2CppName: get_TimestampOfLastReliableCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::get_TimestampOfLastReliableCommand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "get_TimestampOfLastReliableCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::set_TimestampOfLastReliableCommand
// Il2CppName: set_TimestampOfLastReliableCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::set_TimestampOfLastReliableCommand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "set_TimestampOfLastReliableCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::CountControlCommand
// Il2CppName: CountControlCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::CountControlCommand)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "CountControlCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::CountReliableOpCommand
// Il2CppName: CountReliableOpCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::CountReliableOpCommand)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "CountReliableOpCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::CountUnreliableOpCommand
// Il2CppName: CountUnreliableOpCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::CountUnreliableOpCommand)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "CountUnreliableOpCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::CountFragmentOpCommand
// Il2CppName: CountFragmentOpCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::TrafficStats::*)(int)>(&ExitGames::Client::Photon::TrafficStats::CountFragmentOpCommand)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "CountFragmentOpCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::TrafficStats::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::TrafficStats::*)()>(&ExitGames::Client::Photon::TrafficStats::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::TrafficStats*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
