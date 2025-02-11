// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Sockets.NetConnectionMap/EntryState
#include "Fusion/Sockets/NetConnectionMap_EntryState.hpp"
// Including type: Fusion.Sockets.NetConnectionId
#include "Fusion/Sockets/NetConnectionId.hpp"
// Including type: Fusion.Sockets.NetAddress
#include "Fusion/Sockets/NetAddress.hpp"
// Including type: Fusion.Sockets.NetConnectionStatus
#include "Fusion/Sockets/NetConnectionStatus.hpp"
// Including type: Fusion.Sockets.NetSendEnvelopeRingBuffer
#include "Fusion/Sockets/NetSendEnvelopeRingBuffer.hpp"
// Including type: Fusion.Sockets.NetSequencer
#include "Fusion/Sockets/NetSequencer.hpp"
// Including type: Fusion.Sockets.ReliableBuffer
#include "Fusion/Sockets/ReliableBuffer.hpp"
// Including type: Fusion.TimerDelta
#include "Fusion/TimerDelta.hpp"
// Including type: Fusion.Sockets.NetConnectionStats
#include "Fusion/Sockets/NetConnectionStats.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Including type: Fusion.Sockets.NetDisconnectReason
#include "Fusion/Sockets/NetDisconnectReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConfig
  struct NetConfig;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConnection
  struct NetConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConnection, "Fusion.Sockets", "NetConnection");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x1B8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetConnection
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetConnection/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Fusion::Sockets::NetConnection::StateConnectingData
    struct StateConnectingData;
    // Nested type: ::Fusion::Sockets::NetConnection::StateShutdownData
    struct StateShutdownData;
    // Nested type: ::Fusion::Sockets::NetConnection::StateDisconnectedData
    struct StateDisconnectedData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.Sockets.NetConnection/StateConnectingData
    // [TokenAttribute] Offset: FFFFFFFF
    struct StateConnectingData/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 Attempts
      // Size: 0x4
      // Offset: 0x0
      int Attempts;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: Attempts and: AttemptTimeout
      char __padding0[0x4] = {};
      // public System.Double AttemptTimeout
      // Size: 0x8
      // Offset: 0x8
      double AttemptTimeout;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      public:
      // Creating value type constructor for type: StateConnectingData
      constexpr StateConnectingData(int Attempts_ = {}, double AttemptTimeout_ = {}) noexcept : Attempts{Attempts_}, AttemptTimeout{AttemptTimeout_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32 Attempts
      [[deprecated("Use field access instead!")]] int& dyn_Attempts();
      // Get instance field reference: public System.Double AttemptTimeout
      [[deprecated("Use field access instead!")]] double& dyn_AttemptTimeout();
    }; // Fusion.Sockets.NetConnection/StateConnectingData
    #pragma pack(pop)
    static check_size<sizeof(NetConnection::StateConnectingData), 8 + sizeof(double)> __Fusion_Sockets_NetConnection_StateConnectingDataSizeCheck;
    static_assert(sizeof(NetConnection::StateConnectingData) == 0x10);
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.Sockets.NetConnection/StateShutdownData
    // [TokenAttribute] Offset: FFFFFFFF
    struct StateShutdownData/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Double Timeout
      // Size: 0x8
      // Offset: 0x0
      double Timeout;
      // Field size check
      static_assert(sizeof(double) == 0x8);
      // public System.Int32 Unmapped
      // Size: 0x4
      // Offset: 0x8
      int Unmapped;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StateShutdownData
      constexpr StateShutdownData(double Timeout_ = {}, int Unmapped_ = {}) noexcept : Timeout{Timeout_}, Unmapped{Unmapped_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Double Timeout
      [[deprecated("Use field access instead!")]] double& dyn_Timeout();
      // Get instance field reference: public System.Int32 Unmapped
      [[deprecated("Use field access instead!")]] int& dyn_Unmapped();
    }; // Fusion.Sockets.NetConnection/StateShutdownData
    #pragma pack(pop)
    static check_size<sizeof(NetConnection::StateShutdownData), 8 + sizeof(int)> __Fusion_Sockets_NetConnection_StateShutdownDataSizeCheck;
    static_assert(sizeof(NetConnection::StateShutdownData) == 0xC);
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.Sockets.NetConnection/StateDisconnectedData
    // [TokenAttribute] Offset: FFFFFFFF
    struct StateDisconnectedData/*, public ::System::ValueType*/ {
      public:
      public:
      // public Fusion.Sockets.NetDisconnectReason Reason
      // Size: 0x1
      // Offset: 0x0
      ::Fusion::Sockets::NetDisconnectReason Reason;
      // Field size check
      static_assert(sizeof(::Fusion::Sockets::NetDisconnectReason) == 0x1);
      // Padding between fields: Reason and: CallbackInvoked
      char __padding0[0x3] = {};
      // public System.Int32 CallbackInvoked
      // Size: 0x4
      // Offset: 0x4
      int CallbackInvoked;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 SentDisconnectCommand
      // Size: 0x4
      // Offset: 0x8
      int SentDisconnectCommand;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StateDisconnectedData
      constexpr StateDisconnectedData(::Fusion::Sockets::NetDisconnectReason Reason_ = {}, int CallbackInvoked_ = {}, int SentDisconnectCommand_ = {}) noexcept : Reason{Reason_}, CallbackInvoked{CallbackInvoked_}, SentDisconnectCommand{SentDisconnectCommand_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Fusion.Sockets.NetDisconnectReason Reason
      [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetDisconnectReason& dyn_Reason();
      // Get instance field reference: public System.Int32 CallbackInvoked
      [[deprecated("Use field access instead!")]] int& dyn_CallbackInvoked();
      // Get instance field reference: public System.Int32 SentDisconnectCommand
      [[deprecated("Use field access instead!")]] int& dyn_SentDisconnectCommand();
    }; // Fusion.Sockets.NetConnection/StateDisconnectedData
    #pragma pack(pop)
    static check_size<sizeof(NetConnection::StateDisconnectedData), 8 + sizeof(int)> __Fusion_Sockets_NetConnection_StateDisconnectedDataSizeCheck;
    static_assert(sizeof(NetConnection::StateDisconnectedData) == 0xC);
    public:
    // System.UInt64 MapHash
    // Size: 0x8
    // Offset: 0x0
    uint64_t MapHash;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Fusion.Sockets.NetConnection* MapNext
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::Sockets::NetConnection* MapNext;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnection*) == 0x8);
    // Fusion.Sockets.NetConnectionMap/EntryState MapState
    // Size: 0x4
    // Offset: 0x10
    ::Fusion::Sockets::NetConnectionMap::EntryState MapState;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionMap::EntryState) == 0x4);
    // Padding between fields: MapState and: LocalId
    char __padding2[0x4] = {};
    // Fusion.Sockets.NetConnectionId LocalId
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::Sockets::NetConnectionId LocalId;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionId) == 0x8);
    // Fusion.Sockets.NetConnectionId RemoteId
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Sockets::NetConnectionId RemoteId;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionId) == 0x8);
    // Fusion.Sockets.NetAddress Address
    // Size: 0x18
    // Offset: 0x28
    ::Fusion::Sockets::NetAddress Address;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetAddress) == 0x18);
    // Fusion.Sockets.NetConnectionStatus Status
    // Size: 0x4
    // Offset: 0x40
    ::Fusion::Sockets::NetConnectionStatus Status;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionStatus) == 0x4);
    // Padding between fields: Status and: Rtt
    char __padding6[0x4] = {};
    // System.Double Rtt
    // Size: 0x8
    // Offset: 0x48
    double Rtt;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Double SendTime
    // Size: 0x8
    // Offset: 0x50
    double SendTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Double RecvTime
    // Size: 0x8
    // Offset: 0x58
    double RecvTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Fusion.Sockets.NetConnection/StateConnectingData StateConnecting
    // Size: 0x10
    // Offset: 0x60
    ::Fusion::Sockets::NetConnection::StateConnectingData StateConnecting;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnection::StateConnectingData) == 0x10);
    // Fusion.Sockets.NetConnection/StateDisconnectedData StateDisconnected
    // Size: 0xC
    // Offset: 0x70
    ::Fusion::Sockets::NetConnection::StateDisconnectedData StateDisconnected;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnection::StateDisconnectedData) == 0xC);
    // Padding between fields: StateDisconnected and: StateShutdown
    char __padding11[0x4] = {};
    // Fusion.Sockets.NetConnection/StateShutdownData StateShutdown
    // Size: 0xC
    // Offset: 0x80
    ::Fusion::Sockets::NetConnection::StateShutdownData StateShutdown;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnection::StateShutdownData) == 0xC);
    // Padding between fields: StateShutdown and: NotifySendWindow
    char __padding12[0x4] = {};
    // Fusion.Sockets.NetSendEnvelopeRingBuffer NotifySendWindow
    // Size: 0x18
    // Offset: 0x90
    ::Fusion::Sockets::NetSendEnvelopeRingBuffer NotifySendWindow;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetSendEnvelopeRingBuffer) == 0x18);
    // Fusion.Sockets.NetSequencer NotifySendSequencer
    // Size: 0x18
    // Offset: 0xA8
    ::Fusion::Sockets::NetSequencer NotifySendSequencer;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetSequencer) == 0x18);
    // System.Double NotifySendTime
    // Size: 0x8
    // Offset: 0xC0
    double NotifySendTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Double NotifyRecvAckTime
    // Size: 0x8
    // Offset: 0xC8
    double NotifyRecvAckTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Int32 NotifyRecvAckOutdatedCount
    // Size: 0x4
    // Offset: 0xD0
    int NotifyRecvAckOutdatedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: NotifyRecvAckOutdatedCount and: NotifyRecvTime
    char __padding17[0x4] = {};
    // System.Double NotifyRecvTime
    // Size: 0x8
    // Offset: 0xD8
    double NotifyRecvTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.UInt64 NotifyRecvMask
    // Size: 0x8
    // Offset: 0xE0
    uint64_t NotifyRecvMask;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt16 NotifyRecvSequence
    // Size: 0x2
    // Offset: 0xE8
    uint16_t NotifyRecvSequence;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: NotifyRecvSequence and: NotifyRecvUnackedCount
    char __padding20[0x2] = {};
    // System.Int32 NotifyRecvUnackedCount
    // Size: 0x4
    // Offset: 0xEC
    int NotifyRecvUnackedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 NotifyRecvFragment
    // Size: 0x4
    // Offset: 0xF0
    int NotifyRecvFragment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: NotifyRecvFragment and: NotifyRecvFragmentBuffer
    char __padding22[0x4] = {};
    // System.Byte* NotifyRecvFragmentBuffer
    // Size: 0x8
    // Offset: 0xF8
    uint8_t* NotifyRecvFragmentBuffer;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Int32 NotifyRecvFragmentBufferLength
    // Size: 0x4
    // Offset: 0x100
    int NotifyRecvFragmentBufferLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 NotifyRecvFragmentSequenceDistance
    // Size: 0x4
    // Offset: 0x104
    int NotifyRecvFragmentSequenceDistance;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte* ConnectionToken
    // Size: 0x8
    // Offset: 0x108
    uint8_t* ConnectionToken;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Int32 ConnectionTokenLength
    // Size: 0x4
    // Offset: 0x110
    int ConnectionTokenLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ConnectionTokenLength and: UniqueIdHash
    char __padding27[0x4] = {};
    // System.Int64 UniqueIdHash
    // Size: 0x8
    // Offset: 0x118
    int64_t UniqueIdHash;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Byte* UniqueId
    // Size: 0x8
    // Offset: 0x120
    uint8_t* UniqueId;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Int32 Mtu
    // Size: 0x4
    // Offset: 0x128
    int Mtu;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.UInt32 Counter
    // Size: 0x4
    // Offset: 0x12C
    uint Counter;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Fusion.Sockets.ReliableBuffer ReliableBuffer
    // Size: 0x38
    // Offset: 0x130
    ::Fusion::Sockets::ReliableBuffer ReliableBuffer;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableBuffer) == 0x38);
    // Fusion.Sockets.ReliableList ReliableSendList
    // Size: 0x18
    // Offset: 0x168
    ::Fusion::Sockets::ReliableList ReliableSendList;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableList) == 0x18);
    // Fusion.TimerDelta ReliableSendTimer
    // Size: 0x20
    // Offset: 0x180
    ::Fusion::TimerDelta ReliableSendTimer;
    // Field size check
    static_assert(sizeof(::Fusion::TimerDelta) == 0x20);
    // public Fusion.Sockets.NetConnectionStats StatsRoundTripTime
    // Size: 0x8
    // Offset: 0x1A0
    ::Fusion::Sockets::NetConnectionStats StatsRoundTripTime;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionStats) == 0x8);
    // public Fusion.Sockets.NetConnectionStats StatsSentPacketSizes
    // Size: 0x8
    // Offset: 0x1A8
    ::Fusion::Sockets::NetConnectionStats StatsSentPacketSizes;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionStats) == 0x8);
    // public Fusion.Sockets.NetConnectionStats StatsReceivedPacketSizes
    // Size: 0x8
    // Offset: 0x1B0
    ::Fusion::Sockets::NetConnectionStats StatsReceivedPacketSizes;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConnectionStats) == 0x8);
    public:
    // Creating value type constructor for type: NetConnection
    constexpr NetConnection(uint64_t MapHash_ = {}, ::Fusion::Sockets::NetConnection* MapNext_ = {}, ::Fusion::Sockets::NetConnectionMap::EntryState MapState_ = {}, ::Fusion::Sockets::NetConnectionId LocalId_ = {}, ::Fusion::Sockets::NetConnectionId RemoteId_ = {}, ::Fusion::Sockets::NetAddress Address_ = {}, ::Fusion::Sockets::NetConnectionStatus Status_ = {}, double Rtt_ = {}, double SendTime_ = {}, double RecvTime_ = {}, ::Fusion::Sockets::NetConnection::StateConnectingData StateConnecting_ = {}, ::Fusion::Sockets::NetConnection::StateDisconnectedData StateDisconnected_ = {}, ::Fusion::Sockets::NetConnection::StateShutdownData StateShutdown_ = {}, ::Fusion::Sockets::NetSendEnvelopeRingBuffer NotifySendWindow_ = {}, ::Fusion::Sockets::NetSequencer NotifySendSequencer_ = {}, double NotifySendTime_ = {}, double NotifyRecvAckTime_ = {}, int NotifyRecvAckOutdatedCount_ = {}, double NotifyRecvTime_ = {}, uint64_t NotifyRecvMask_ = {}, uint16_t NotifyRecvSequence_ = {}, int NotifyRecvUnackedCount_ = {}, int NotifyRecvFragment_ = {}, uint8_t* NotifyRecvFragmentBuffer_ = {}, int NotifyRecvFragmentBufferLength_ = {}, int NotifyRecvFragmentSequenceDistance_ = {}, uint8_t* ConnectionToken_ = {}, int ConnectionTokenLength_ = {}, int64_t UniqueIdHash_ = {}, uint8_t* UniqueId_ = {}, int Mtu_ = {}, uint Counter_ = {}, ::Fusion::Sockets::ReliableBuffer ReliableBuffer_ = {}, ::Fusion::Sockets::ReliableList ReliableSendList_ = {}, ::Fusion::TimerDelta ReliableSendTimer_ = {}, ::Fusion::Sockets::NetConnectionStats StatsRoundTripTime_ = {}, ::Fusion::Sockets::NetConnectionStats StatsSentPacketSizes_ = {}, ::Fusion::Sockets::NetConnectionStats StatsReceivedPacketSizes_ = {}) noexcept : MapHash{MapHash_}, MapNext{MapNext_}, MapState{MapState_}, LocalId{LocalId_}, RemoteId{RemoteId_}, Address{Address_}, Status{Status_}, Rtt{Rtt_}, SendTime{SendTime_}, RecvTime{RecvTime_}, StateConnecting{StateConnecting_}, StateDisconnected{StateDisconnected_}, StateShutdown{StateShutdown_}, NotifySendWindow{NotifySendWindow_}, NotifySendSequencer{NotifySendSequencer_}, NotifySendTime{NotifySendTime_}, NotifyRecvAckTime{NotifyRecvAckTime_}, NotifyRecvAckOutdatedCount{NotifyRecvAckOutdatedCount_}, NotifyRecvTime{NotifyRecvTime_}, NotifyRecvMask{NotifyRecvMask_}, NotifyRecvSequence{NotifyRecvSequence_}, NotifyRecvUnackedCount{NotifyRecvUnackedCount_}, NotifyRecvFragment{NotifyRecvFragment_}, NotifyRecvFragmentBuffer{NotifyRecvFragmentBuffer_}, NotifyRecvFragmentBufferLength{NotifyRecvFragmentBufferLength_}, NotifyRecvFragmentSequenceDistance{NotifyRecvFragmentSequenceDistance_}, ConnectionToken{ConnectionToken_}, ConnectionTokenLength{ConnectionTokenLength_}, UniqueIdHash{UniqueIdHash_}, UniqueId{UniqueId_}, Mtu{Mtu_}, Counter{Counter_}, ReliableBuffer{ReliableBuffer_}, ReliableSendList{ReliableSendList_}, ReliableSendTimer{ReliableSendTimer_}, StatsRoundTripTime{StatsRoundTripTime_}, StatsSentPacketSizes{StatsSentPacketSizes_}, StatsReceivedPacketSizes{StatsReceivedPacketSizes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static System.Byte UNIQUE_ID_SIZE
    static constexpr const uint8_t UNIQUE_ID_SIZE = 8u;
    // Get static field: static System.Byte UNIQUE_ID_SIZE
    static uint8_t _get_UNIQUE_ID_SIZE();
    // Set static field: static System.Byte UNIQUE_ID_SIZE
    static void _set_UNIQUE_ID_SIZE(uint8_t value);
    // Get instance field reference: System.UInt64 MapHash
    [[deprecated("Use field access instead!")]] uint64_t& dyn_MapHash();
    // Get instance field reference: Fusion.Sockets.NetConnection* MapNext
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnection*& dyn_MapNext();
    // Get instance field reference: Fusion.Sockets.NetConnectionMap/EntryState MapState
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionMap::EntryState& dyn_MapState();
    // Get instance field reference: Fusion.Sockets.NetConnectionId LocalId
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionId& dyn_LocalId();
    // Get instance field reference: Fusion.Sockets.NetConnectionId RemoteId
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionId& dyn_RemoteId();
    // Get instance field reference: Fusion.Sockets.NetAddress Address
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetAddress& dyn_Address();
    // Get instance field reference: Fusion.Sockets.NetConnectionStatus Status
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionStatus& dyn_Status();
    // Get instance field reference: System.Double Rtt
    [[deprecated("Use field access instead!")]] double& dyn_Rtt();
    // Get instance field reference: System.Double SendTime
    [[deprecated("Use field access instead!")]] double& dyn_SendTime();
    // Get instance field reference: System.Double RecvTime
    [[deprecated("Use field access instead!")]] double& dyn_RecvTime();
    // Get instance field reference: Fusion.Sockets.NetConnection/StateConnectingData StateConnecting
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnection::StateConnectingData& dyn_StateConnecting();
    // Get instance field reference: Fusion.Sockets.NetConnection/StateDisconnectedData StateDisconnected
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnection::StateDisconnectedData& dyn_StateDisconnected();
    // Get instance field reference: Fusion.Sockets.NetConnection/StateShutdownData StateShutdown
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnection::StateShutdownData& dyn_StateShutdown();
    // Get instance field reference: Fusion.Sockets.NetSendEnvelopeRingBuffer NotifySendWindow
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetSendEnvelopeRingBuffer& dyn_NotifySendWindow();
    // Get instance field reference: Fusion.Sockets.NetSequencer NotifySendSequencer
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetSequencer& dyn_NotifySendSequencer();
    // Get instance field reference: System.Double NotifySendTime
    [[deprecated("Use field access instead!")]] double& dyn_NotifySendTime();
    // Get instance field reference: System.Double NotifyRecvAckTime
    [[deprecated("Use field access instead!")]] double& dyn_NotifyRecvAckTime();
    // Get instance field reference: System.Int32 NotifyRecvAckOutdatedCount
    [[deprecated("Use field access instead!")]] int& dyn_NotifyRecvAckOutdatedCount();
    // Get instance field reference: System.Double NotifyRecvTime
    [[deprecated("Use field access instead!")]] double& dyn_NotifyRecvTime();
    // Get instance field reference: System.UInt64 NotifyRecvMask
    [[deprecated("Use field access instead!")]] uint64_t& dyn_NotifyRecvMask();
    // Get instance field reference: System.UInt16 NotifyRecvSequence
    [[deprecated("Use field access instead!")]] uint16_t& dyn_NotifyRecvSequence();
    // Get instance field reference: System.Int32 NotifyRecvUnackedCount
    [[deprecated("Use field access instead!")]] int& dyn_NotifyRecvUnackedCount();
    // Get instance field reference: System.Int32 NotifyRecvFragment
    [[deprecated("Use field access instead!")]] int& dyn_NotifyRecvFragment();
    // Get instance field reference: System.Byte* NotifyRecvFragmentBuffer
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_NotifyRecvFragmentBuffer();
    // Get instance field reference: System.Int32 NotifyRecvFragmentBufferLength
    [[deprecated("Use field access instead!")]] int& dyn_NotifyRecvFragmentBufferLength();
    // Get instance field reference: System.Int32 NotifyRecvFragmentSequenceDistance
    [[deprecated("Use field access instead!")]] int& dyn_NotifyRecvFragmentSequenceDistance();
    // Get instance field reference: System.Byte* ConnectionToken
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_ConnectionToken();
    // Get instance field reference: System.Int32 ConnectionTokenLength
    [[deprecated("Use field access instead!")]] int& dyn_ConnectionTokenLength();
    // Get instance field reference: System.Int64 UniqueIdHash
    [[deprecated("Use field access instead!")]] int64_t& dyn_UniqueIdHash();
    // Get instance field reference: System.Byte* UniqueId
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_UniqueId();
    // Get instance field reference: System.Int32 Mtu
    [[deprecated("Use field access instead!")]] int& dyn_Mtu();
    // Get instance field reference: System.UInt32 Counter
    [[deprecated("Use field access instead!")]] uint& dyn_Counter();
    // Get instance field reference: Fusion.Sockets.ReliableBuffer ReliableBuffer
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableBuffer& dyn_ReliableBuffer();
    // Get instance field reference: Fusion.Sockets.ReliableList ReliableSendList
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableList& dyn_ReliableSendList();
    // Get instance field reference: Fusion.TimerDelta ReliableSendTimer
    [[deprecated("Use field access instead!")]] ::Fusion::TimerDelta& dyn_ReliableSendTimer();
    // Get instance field reference: public Fusion.Sockets.NetConnectionStats StatsRoundTripTime
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionStats& dyn_StatsRoundTripTime();
    // Get instance field reference: public Fusion.Sockets.NetConnectionStats StatsSentPacketSizes
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionStats& dyn_StatsSentPacketSizes();
    // Get instance field reference: public Fusion.Sockets.NetConnectionStats StatsReceivedPacketSizes
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConnectionStats& dyn_StatsReceivedPacketSizes();
    // public System.Boolean get_Active()
    // Offset: 0x2B91270
    bool get_Active();
    // public System.Double get_RoundTripTime()
    // Offset: 0x2B91280
    double get_RoundTripTime();
    // public Fusion.Sockets.NetAddress get_RemoteAddress()
    // Offset: 0x2B91288
    ::Fusion::Sockets::NetAddress get_RemoteAddress();
    // public Fusion.Sockets.NetConnectionStatus get_ConnectionStatus()
    // Offset: 0x2B9129C
    ::Fusion::Sockets::NetConnectionStatus get_ConnectionStatus();
    // public Fusion.Sockets.NetConnectionId get_LocalConnectionId()
    // Offset: 0x2B912A4
    ::Fusion::Sockets::NetConnectionId get_LocalConnectionId();
    // public Fusion.Sockets.NetConnectionId get_RemoteConnectionId()
    // Offset: 0x2B912AC
    ::Fusion::Sockets::NetConnectionId get_RemoteConnectionId();
    // static System.UInt16 NextNotifySendSequence(Fusion.Sockets.NetConnection* c)
    // Offset: 0x2B912B4
    static uint16_t NextNotifySendSequence(::Fusion::Sockets::NetConnection* c);
    // static System.Void Initialize(Fusion.Sockets.NetConnection* c, System.Int16 group, System.Int16 index, Fusion.Sockets.NetConfig* config)
    // Offset: 0x2B912F4
    static void Initialize(::Fusion::Sockets::NetConnection* c, int16_t group, int16_t index, ::Fusion::Sockets::NetConfig* config);
    // static System.Void Reset(Fusion.Sockets.NetConnection* c)
    // Offset: 0x2B91524
    static void Reset(::Fusion::Sockets::NetConnection* c);
    // public override System.String ToString()
    // Offset: 0x2B91730
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.Sockets.NetConnection
  #pragma pack(pop)
  static check_size<sizeof(NetConnection), 432 + sizeof(::Fusion::Sockets::NetConnectionStats)> __Fusion_Sockets_NetConnectionSizeCheck;
  static_assert(sizeof(NetConnection) == 0x1B8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConnection::StateDisconnectedData, "Fusion.Sockets", "NetConnection/StateDisconnectedData");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConnection::StateShutdownData, "Fusion.Sockets", "NetConnection/StateShutdownData");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConnection::StateConnectingData, "Fusion.Sockets", "NetConnection/StateConnectingData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_RoundTripTime
// Il2CppName: get_RoundTripTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_RoundTripTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_RoundTripTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_RemoteAddress
// Il2CppName: get_RemoteAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetAddress (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_RemoteAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_RemoteAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_ConnectionStatus
// Il2CppName: get_ConnectionStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConnectionStatus (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_ConnectionStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_ConnectionStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_LocalConnectionId
// Il2CppName: get_LocalConnectionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConnectionId (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_LocalConnectionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_LocalConnectionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::get_RemoteConnectionId
// Il2CppName: get_RemoteConnectionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConnectionId (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::get_RemoteConnectionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "get_RemoteConnectionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::NextNotifySendSequence
// Il2CppName: NextNotifySendSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::Fusion::Sockets::NetConnection*)>(&Fusion::Sockets::NetConnection::NextNotifySendSequence)> {
  static const MethodInfo* get() {
    static auto* c = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "NextNotifySendSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetConnection*, int16_t, int16_t, ::Fusion::Sockets::NetConfig*)>(&Fusion::Sockets::NetConnection::Initialize)> {
  static const MethodInfo* get() {
    static auto* c = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* config = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, group, index, config});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetConnection*)>(&Fusion::Sockets::NetConnection::Reset)> {
  static const MethodInfo* get() {
    static auto* c = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConnection"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConnection::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Sockets::NetConnection::*)()>(&Fusion::Sockets::NetConnection::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConnection), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
