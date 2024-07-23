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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: ByteArraySlicePool
  class ByteArraySlicePool;
  // Forward declaring type: StreamBuffer
  class StreamBuffer;
  // Forward declaring type: EventData
  class EventData;
  // Forward declaring type: ParameterDictionary
  class ParameterDictionary;
  // Forward declaring type: OperationResponse
  class OperationResponse;
  // Forward declaring type: OperationRequest
  class OperationRequest;
  // Forward declaring type: DisconnectMessage
  class DisconnectMessage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: IProtocol
  class IProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::IProtocol);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::IProtocol*, "ExitGames.Client.Photon", "IProtocol");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.IProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  class IProtocol : public ::Il2CppObject {
    public:
    // Nested type: ::ExitGames::Client::Photon::IProtocol::DeserializationFlags
    struct DeserializationFlags;
    public:
    // public readonly ExitGames.Client.Photon.ByteArraySlicePool ByteArraySlicePool
    // Size: 0x8
    // Offset: 0x10
    ::ExitGames::Client::Photon::ByteArraySlicePool* ByteArraySlicePool;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::ByteArraySlicePool*) == 0x8);
    public:
    // Creating conversion operator: operator ::ExitGames::Client::Photon::ByteArraySlicePool*
    constexpr operator ::ExitGames::Client::Photon::ByteArraySlicePool*() const noexcept {
      return ByteArraySlicePool;
    }
    // Get instance field reference: public readonly ExitGames.Client.Photon.ByteArraySlicePool ByteArraySlicePool
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::ByteArraySlicePool*& dyn_ByteArraySlicePool();
    // public System.String get_ProtocolType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_ProtocolType();
    // public System.Byte[] get_VersionBytes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> get_VersionBytes();
    // public System.Void Serialize(ExitGames.Client.Photon.StreamBuffer dout, System.Object serObject, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::Il2CppObject* serObject, bool setType);
    // public System.Void SerializeShort(ExitGames.Client.Photon.StreamBuffer dout, System.Int16 serObject, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType);
    // public System.Void SerializeString(ExitGames.Client.Photon.StreamBuffer dout, System.String serObject, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeString(::ExitGames::Client::Photon::StreamBuffer* dout, ::StringW serObject, bool setType);
    // public System.Void SerializeEventData(ExitGames.Client.Photon.StreamBuffer stream, ExitGames.Client.Photon.EventData serObject, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType);
    // public System.Void SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer stream, System.Byte operationCode, System.Collections.Generic.Dictionary`2<System.Byte,System.Object> parameters, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>* parameters, bool setType);
    // public System.Void SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer stream, System.Byte operationCode, ExitGames.Client.Photon.ParameterDictionary parameters, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode, ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType);
    // public System.Void SerializeOperationResponse(ExitGames.Client.Photon.StreamBuffer stream, ExitGames.Client.Photon.OperationResponse serObject, System.Boolean setType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject, bool setType);
    // public System.Object Deserialize(ExitGames.Client.Photon.StreamBuffer din, System.Byte type, ExitGames.Client.Photon.IProtocol/DeserializationFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags flags);
    // public System.Int16 DeserializeShort(ExitGames.Client.Photon.StreamBuffer din)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din);
    // public System.Byte DeserializeByte(ExitGames.Client.Photon.StreamBuffer din)
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din);
    // public ExitGames.Client.Photon.EventData DeserializeEventData(ExitGames.Client.Photon.StreamBuffer din, ExitGames.Client.Photon.EventData target, ExitGames.Client.Photon.IProtocol/DeserializationFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din, ::ExitGames::Client::Photon::EventData* target, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags flags);
    // public ExitGames.Client.Photon.OperationRequest DeserializeOperationRequest(ExitGames.Client.Photon.StreamBuffer din, ExitGames.Client.Photon.IProtocol/DeserializationFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags flags);
    // public ExitGames.Client.Photon.OperationResponse DeserializeOperationResponse(ExitGames.Client.Photon.StreamBuffer stream, ExitGames.Client.Photon.IProtocol/DeserializationFlags flags)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags flags);
    // public ExitGames.Client.Photon.DisconnectMessage DeserializeDisconnectMessage(ExitGames.Client.Photon.StreamBuffer stream)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream);
    // public System.Byte[] Serialize(System.Object obj)
    // Offset: 0x49D62D8
    ::ArrayW<uint8_t> Serialize(::Il2CppObject* obj);
    // public System.Object Deserialize(ExitGames.Client.Photon.StreamBuffer stream)
    // Offset: 0x49D6368
    ::Il2CppObject* Deserialize(::ExitGames::Client::Photon::StreamBuffer* stream);
    // public System.Object Deserialize(System.Byte[] serializedData)
    // Offset: 0x49D63B4
    ::Il2CppObject* Deserialize(::ArrayW<uint8_t> serializedData);
    // public System.Object DeserializeMessage(ExitGames.Client.Photon.StreamBuffer stream)
    // Offset: 0x49D6448
    ::Il2CppObject* DeserializeMessage(::ExitGames::Client::Photon::StreamBuffer* stream);
    // System.Void SerializeMessage(ExitGames.Client.Photon.StreamBuffer ms, System.Object msg)
    // Offset: 0x49D6494
    void SerializeMessage(::ExitGames::Client::Photon::StreamBuffer* ms, ::Il2CppObject* msg);
    // protected System.Void .ctor()
    // Offset: 0x49D64A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IProtocol* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::IProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IProtocol*, creationType>()));
    }
  }; // ExitGames.Client.Photon.IProtocol
  #pragma pack(pop)
  static check_size<sizeof(IProtocol), 16 + sizeof(::ExitGames::Client::Photon::ByteArraySlicePool*)> __ExitGames_Client_Photon_IProtocolSizeCheck;
  static_assert(sizeof(IProtocol) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::get_ProtocolType
// Il2CppName: get_ProtocolType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::IProtocol::*)()>(&ExitGames::Client::Photon::IProtocol::get_ProtocolType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "get_ProtocolType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::get_VersionBytes
// Il2CppName: get_VersionBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::IProtocol::*)()>(&ExitGames::Client::Photon::IProtocol::get_VersionBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "get_VersionBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::Il2CppObject*, bool)>(&ExitGames::Client::Photon::IProtocol::Serialize)> {
  static const MethodInfo* get() {
    static auto* dout = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* serObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dout, serObject, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeShort
// Il2CppName: SerializeShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeShort)> {
  static const MethodInfo* get() {
    static auto* dout = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* serObject = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dout, serObject, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeString
// Il2CppName: SerializeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeString)> {
  static const MethodInfo* get() {
    static auto* dout = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* serObject = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dout, serObject, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeEventData
// Il2CppName: SerializeEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeEventData)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* serObject = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EventData")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, serObject, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeOperationRequest
// Il2CppName: SerializeOperationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* operationCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* parameters = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeOperationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, operationCode, parameters, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeOperationRequest
// Il2CppName: SerializeOperationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* operationCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "ParameterDictionary")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeOperationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, operationCode, parameters, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeOperationResponse
// Il2CppName: SerializeOperationResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&ExitGames::Client::Photon::IProtocol::SerializeOperationResponse)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* serObject = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "OperationResponse")->byval_arg;
    static auto* setType = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeOperationResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, serObject, setType});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags)>(&ExitGames::Client::Photon::IProtocol::Deserialize)> {
  static const MethodInfo* get() {
    static auto* din = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "IProtocol/DeserializationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{din, type, flags});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeShort
// Il2CppName: DeserializeShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&ExitGames::Client::Photon::IProtocol::DeserializeShort)> {
  static const MethodInfo* get() {
    static auto* din = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{din});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeByte
// Il2CppName: DeserializeByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&ExitGames::Client::Photon::IProtocol::DeserializeByte)> {
  static const MethodInfo* get() {
    static auto* din = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{din});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeEventData
// Il2CppName: DeserializeEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::EventData* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags)>(&ExitGames::Client::Photon::IProtocol::DeserializeEventData)> {
  static const MethodInfo* get() {
    static auto* din = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EventData")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "IProtocol/DeserializationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{din, target, flags});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest
// Il2CppName: DeserializeOperationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationRequest* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags)>(&ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest)> {
  static const MethodInfo* get() {
    static auto* din = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "IProtocol/DeserializationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeOperationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{din, flags});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse
// Il2CppName: DeserializeOperationResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationResponse* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::IProtocol::DeserializationFlags)>(&ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "IProtocol/DeserializationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeOperationResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, flags});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage
// Il2CppName: DeserializeDisconnectMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeDisconnectMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::IProtocol::*)(::Il2CppObject*)>(&ExitGames::Client::Photon::IProtocol::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&ExitGames::Client::Photon::IProtocol::Deserialize)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::IProtocol::*)(::ArrayW<uint8_t>)>(&ExitGames::Client::Photon::IProtocol::Deserialize)> {
  static const MethodInfo* get() {
    static auto* serializedData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedData});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::DeserializeMessage
// Il2CppName: DeserializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&ExitGames::Client::Photon::IProtocol::DeserializeMessage)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "DeserializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::SerializeMessage
// Il2CppName: SerializeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::Il2CppObject*)>(&ExitGames::Client::Photon::IProtocol::SerializeMessage)> {
  static const MethodInfo* get() {
    static auto* ms = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "StreamBuffer")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::IProtocol*), "SerializeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ms, msg});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::IProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!