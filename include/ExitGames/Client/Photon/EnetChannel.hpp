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
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: NonAllocDictionary`2<K, V>
  template<typename K, typename V>
  class NonAllocDictionary_2;
  // Forward declaring type: NCommand
  class NCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: EnetChannel
  class EnetChannel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::EnetChannel);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::EnetChannel*, "ExitGames.Client.Photon", "EnetChannel");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.EnetChannel
  // [TokenAttribute] Offset: FFFFFFFF
  class EnetChannel : public ::Il2CppObject {
    public:
    public:
    // System.Byte ChannelNumber
    // Size: 0x1
    // Offset: 0x10
    uint8_t ChannelNumber;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: ChannelNumber and: incomingReliableCommandsList
    char __padding0[0x7] = {};
    // ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingReliableCommandsList
    // Size: 0x8
    // Offset: 0x18
    ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>* incomingReliableCommandsList;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingUnreliableCommandsList
    // Size: 0x8
    // Offset: 0x20
    ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>* incomingUnreliableCommandsList;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> incomingUnsequencedCommandsList
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* incomingUnsequencedCommandsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingUnsequencedFragments
    // Size: 0x8
    // Offset: 0x30
    ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>* incomingUnsequencedFragments;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> outgoingReliableCommandsList
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* outgoingReliableCommandsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> outgoingUnreliableCommandsList
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* outgoingUnreliableCommandsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*) == 0x8);
    // System.Int32 incomingReliableSequenceNumber
    // Size: 0x4
    // Offset: 0x48
    int incomingReliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 incomingUnreliableSequenceNumber
    // Size: 0x4
    // Offset: 0x4C
    int incomingUnreliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 outgoingReliableSequenceNumber
    // Size: 0x4
    // Offset: 0x50
    int outgoingReliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 outgoingUnreliableSequenceNumber
    // Size: 0x4
    // Offset: 0x54
    int outgoingUnreliableSequenceNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 outgoingReliableUnsequencedNumber
    // Size: 0x4
    // Offset: 0x58
    int outgoingReliableUnsequencedNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 reliableUnsequencedNumbersCompletelyReceived
    // Size: 0x4
    // Offset: 0x5C
    int reliableUnsequencedNumbersCompletelyReceived;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.HashSet`1<System.Int32> reliableUnsequencedNumbersReceived
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::HashSet_1<int>* reliableUnsequencedNumbersReceived;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // System.Int32 highestReceivedAck
    // Size: 0x4
    // Offset: 0x68
    int highestReceivedAck;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Byte ChannelNumber
    [[deprecated("Use field access instead!")]] uint8_t& dyn_ChannelNumber();
    // Get instance field reference: ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingReliableCommandsList
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*& dyn_incomingReliableCommandsList();
    // Get instance field reference: ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingUnreliableCommandsList
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*& dyn_incomingUnreliableCommandsList();
    // Get instance field reference: System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> incomingUnsequencedCommandsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& dyn_incomingUnsequencedCommandsList();
    // Get instance field reference: ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> incomingUnsequencedFragments
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::NonAllocDictionary_2<int, ::ExitGames::Client::Photon::NCommand*>*& dyn_incomingUnsequencedFragments();
    // Get instance field reference: System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> outgoingReliableCommandsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& dyn_outgoingReliableCommandsList();
    // Get instance field reference: System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> outgoingUnreliableCommandsList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& dyn_outgoingUnreliableCommandsList();
    // Get instance field reference: System.Int32 incomingReliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_incomingReliableSequenceNumber();
    // Get instance field reference: System.Int32 incomingUnreliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_incomingUnreliableSequenceNumber();
    // Get instance field reference: System.Int32 outgoingReliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_outgoingReliableSequenceNumber();
    // Get instance field reference: System.Int32 outgoingUnreliableSequenceNumber
    [[deprecated("Use field access instead!")]] int& dyn_outgoingUnreliableSequenceNumber();
    // Get instance field reference: System.Int32 outgoingReliableUnsequencedNumber
    [[deprecated("Use field access instead!")]] int& dyn_outgoingReliableUnsequencedNumber();
    // Get instance field reference: private System.Int32 reliableUnsequencedNumbersCompletelyReceived
    [[deprecated("Use field access instead!")]] int& dyn_reliableUnsequencedNumbersCompletelyReceived();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> reliableUnsequencedNumbersReceived
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<int>*& dyn_reliableUnsequencedNumbersReceived();
    // Get instance field reference: System.Int32 highestReceivedAck
    [[deprecated("Use field access instead!")]] int& dyn_highestReceivedAck();
    // public System.Void .ctor(System.Byte channelNumber, System.Int32 commandBufferSize)
    // Offset: 0x49CA4E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnetChannel* New_ctor(uint8_t channelNumber, int commandBufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::EnetChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnetChannel*, creationType>(channelNumber, commandBufferSize)));
    }
    // public System.Boolean ContainsUnreliableSequenceNumber(System.Int32 unreliableSequenceNumber)
    // Offset: 0x49CA6E4
    bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber);
    // public ExitGames.Client.Photon.NCommand FetchUnreliableSequenceNumber(System.Int32 unreliableSequenceNumber)
    // Offset: 0x49CA73C
    ::ExitGames::Client::Photon::NCommand* FetchUnreliableSequenceNumber(int unreliableSequenceNumber);
    // public System.Boolean ContainsReliableSequenceNumber(System.Int32 reliableSequenceNumber)
    // Offset: 0x49CA794
    bool ContainsReliableSequenceNumber(int reliableSequenceNumber);
    // public ExitGames.Client.Photon.NCommand FetchReliableSequenceNumber(System.Int32 reliableSequenceNumber)
    // Offset: 0x49CA7EC
    ::ExitGames::Client::Photon::NCommand* FetchReliableSequenceNumber(int reliableSequenceNumber);
    // public System.Boolean TryGetFragment(System.Int32 reliableSequenceNumber, System.Boolean isSequenced, out ExitGames.Client.Photon.NCommand fragment)
    // Offset: 0x49CA844
    bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, ByRef<::ExitGames::Client::Photon::NCommand*> fragment);
    // public System.Void RemoveFragment(System.Int32 reliableSequenceNumber, System.Boolean isSequenced)
    // Offset: 0x49CA8BC
    void RemoveFragment(int reliableSequenceNumber, bool isSequenced);
    // public System.Void clearAll()
    // Offset: 0x49CA92C
    void clearAll();
    // public System.Boolean QueueIncomingReliableUnsequenced(ExitGames.Client.Photon.NCommand command)
    // Offset: 0x49CAAA8
    bool QueueIncomingReliableUnsequenced(::ExitGames::Client::Photon::NCommand* command);
  }; // ExitGames.Client.Photon.EnetChannel
  #pragma pack(pop)
  static check_size<sizeof(EnetChannel), 104 + sizeof(int)> __ExitGames_Client_Photon_EnetChannelSizeCheck;
  static_assert(sizeof(EnetChannel) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber
// Il2CppName: ContainsUnreliableSequenceNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::EnetChannel::*)(int)>(&ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber)> {
  static const MethodInfo* get() {
    static auto* unreliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "ContainsUnreliableSequenceNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unreliableSequenceNumber});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber
// Il2CppName: FetchUnreliableSequenceNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NCommand* (ExitGames::Client::Photon::EnetChannel::*)(int)>(&ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber)> {
  static const MethodInfo* get() {
    static auto* unreliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "FetchUnreliableSequenceNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unreliableSequenceNumber});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber
// Il2CppName: ContainsReliableSequenceNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::EnetChannel::*)(int)>(&ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber)> {
  static const MethodInfo* get() {
    static auto* reliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "ContainsReliableSequenceNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reliableSequenceNumber});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber
// Il2CppName: FetchReliableSequenceNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NCommand* (ExitGames::Client::Photon::EnetChannel::*)(int)>(&ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber)> {
  static const MethodInfo* get() {
    static auto* reliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "FetchReliableSequenceNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reliableSequenceNumber});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::TryGetFragment
// Il2CppName: TryGetFragment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::EnetChannel::*)(int, bool, ByRef<::ExitGames::Client::Photon::NCommand*>)>(&ExitGames::Client::Photon::EnetChannel::TryGetFragment)> {
  static const MethodInfo* get() {
    static auto* reliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSequenced = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fragment = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "NCommand")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "TryGetFragment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reliableSequenceNumber, isSequenced, fragment});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::RemoveFragment
// Il2CppName: RemoveFragment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::EnetChannel::*)(int, bool)>(&ExitGames::Client::Photon::EnetChannel::RemoveFragment)> {
  static const MethodInfo* get() {
    static auto* reliableSequenceNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSequenced = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "RemoveFragment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reliableSequenceNumber, isSequenced});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::clearAll
// Il2CppName: clearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::EnetChannel::*)()>(&ExitGames::Client::Photon::EnetChannel::clearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "clearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced
// Il2CppName: QueueIncomingReliableUnsequenced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::EnetChannel::*)(::ExitGames::Client::Photon::NCommand*)>(&ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced)> {
  static const MethodInfo* get() {
    static auto* command = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "NCommand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::EnetChannel*), "QueueIncomingReliableUnsequenced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{command});
  }
};