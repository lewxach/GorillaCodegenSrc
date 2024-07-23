// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets::Stun
namespace Fusion::Sockets::Stun {
  // Forward declaring type: StunErrorAttribute
  class StunErrorAttribute;
  // Skipping declaration: StunMessageType because it is already included!
  // Skipping declaration: AttributeType because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: Fusion.Sockets.Stun
namespace Fusion::Sockets::Stun {
  // Forward declaring type: StunMessage
  class StunMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Sockets::Stun::StunMessage);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::Stun::StunMessage*, "Fusion.Sockets.Stun", "StunMessage");
// Type namespace: Fusion.Sockets.Stun
namespace Fusion::Sockets::Stun {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Sockets.Stun.StunMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class StunMessage : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::Sockets::Stun::StunMessage::StunMessageType
    struct StunMessageType;
    // Nested type: ::Fusion::Sockets::Stun::StunMessage::AttributeType
    struct AttributeType;
    // Nested type: ::Fusion::Sockets::Stun::StunMessage::IPFamily
    struct IPFamily;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Fusion.Sockets.Stun.StunMessage/StunMessageType
    // [TokenAttribute] Offset: FFFFFFFF
    struct StunMessageType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StunMessageType
      constexpr StunMessageType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingRequest
      static constexpr const int BindingRequest = 1;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingRequest
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_BindingRequest();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingRequest
      static void _set_BindingRequest(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingResponse
      static constexpr const int BindingResponse = 257;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingResponse
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_BindingResponse();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingResponse
      static void _set_BindingResponse(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingErrorResponse
      static constexpr const int BindingErrorResponse = 273;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingErrorResponse
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_BindingErrorResponse();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType BindingErrorResponse
      static void _set_BindingErrorResponse(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretRequest
      static constexpr const int SharedSecretRequest = 2;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretRequest
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_SharedSecretRequest();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretRequest
      static void _set_SharedSecretRequest(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretResponse
      static constexpr const int SharedSecretResponse = 258;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretResponse
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_SharedSecretResponse();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretResponse
      static void _set_SharedSecretResponse(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretErrorResponse
      static constexpr const int SharedSecretErrorResponse = 274;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretErrorResponse
      static ::Fusion::Sockets::Stun::StunMessage::StunMessageType _get_SharedSecretErrorResponse();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/StunMessageType SharedSecretErrorResponse
      static void _set_SharedSecretErrorResponse(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Fusion.Sockets.Stun.StunMessage/StunMessageType
    #pragma pack(pop)
    static check_size<sizeof(StunMessage::StunMessageType), 0 + sizeof(int)> __Fusion_Sockets_Stun_StunMessage_StunMessageTypeSizeCheck;
    static_assert(sizeof(StunMessage::StunMessageType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Fusion.Sockets.Stun.StunMessage/AttributeType
    // [TokenAttribute] Offset: FFFFFFFF
    struct AttributeType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AttributeType
      constexpr AttributeType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType MappedAddress
      static constexpr const int MappedAddress = 1;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType MappedAddress
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_MappedAddress();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType MappedAddress
      static void _set_MappedAddress(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType Username
      static constexpr const int Username = 6;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Username
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_Username();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Username
      static void _set_Username(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType MessageIntegrity
      static constexpr const int MessageIntegrity = 8;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType MessageIntegrity
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_MessageIntegrity();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType MessageIntegrity
      static void _set_MessageIntegrity(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType ErrorCode
      static constexpr const int ErrorCode = 9;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType ErrorCode
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_ErrorCode();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType ErrorCode
      static void _set_ErrorCode(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType UnknownAttribute
      static constexpr const int UnknownAttribute = 10;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType UnknownAttribute
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_UnknownAttribute();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType UnknownAttribute
      static void _set_UnknownAttribute(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType Realm
      static constexpr const int Realm = 20;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Realm
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_Realm();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Realm
      static void _set_Realm(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType Nonce
      static constexpr const int Nonce = 21;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Nonce
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_Nonce();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType Nonce
      static void _set_Nonce(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // static field const value: static public Fusion.Sockets.Stun.StunMessage/AttributeType XorMappedAddress
      static constexpr const int XorMappedAddress = 32;
      // Get static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType XorMappedAddress
      static ::Fusion::Sockets::Stun::StunMessage::AttributeType _get_XorMappedAddress();
      // Set static field: static public Fusion.Sockets.Stun.StunMessage/AttributeType XorMappedAddress
      static void _set_XorMappedAddress(::Fusion::Sockets::Stun::StunMessage::AttributeType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Fusion.Sockets.Stun.StunMessage/AttributeType
    #pragma pack(pop)
    static check_size<sizeof(StunMessage::AttributeType), 0 + sizeof(int)> __Fusion_Sockets_Stun_StunMessage_AttributeTypeSizeCheck;
    static_assert(sizeof(StunMessage::AttributeType) == 0x4);
    public:
    // private Fusion.Sockets.Stun.StunMessage/StunMessageType <Type>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::Fusion::Sockets::Stun::StunMessage::StunMessageType Type;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::Stun::StunMessage::StunMessageType) == 0x4);
    // Padding between fields: Type and: TransactionID
    char __padding0[0x4] = {};
    // private System.Byte[] <TransactionID>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> TransactionID;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Fusion.Sockets.Stun.StunErrorAttribute <ErrorCode>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Sockets::Stun::StunErrorAttribute* ErrorCode;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::Stun::StunErrorAttribute*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> <Attributes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>* Attributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>*) == 0x8);
    // private System.Guid _id
    // Size: 0x10
    // Offset: 0x30
    ::System::Guid id;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Get static field: static private System.Collections.Generic.HashSet`1<System.Int32> _stunMessageTypeValues
    static ::System::Collections::Generic::HashSet_1<int>* _get__stunMessageTypeValues();
    // Set static field: static private System.Collections.Generic.HashSet`1<System.Int32> _stunMessageTypeValues
    static void _set__stunMessageTypeValues(::System::Collections::Generic::HashSet_1<int>* value);
    // Get instance field reference: private Fusion.Sockets.Stun.StunMessage/StunMessageType <Type>k__BackingField
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::Stun::StunMessage::StunMessageType& dyn_$Type$k__BackingField();
    // Get instance field reference: private System.Byte[] <TransactionID>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$TransactionID$k__BackingField();
    // Get instance field reference: private Fusion.Sockets.Stun.StunErrorAttribute <ErrorCode>k__BackingField
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::Stun::StunErrorAttribute*& dyn_$ErrorCode$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> <Attributes>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>*& dyn_$Attributes$k__BackingField();
    // Get instance field reference: private System.Guid _id
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn__id();
    // static private System.Collections.Generic.HashSet`1<System.Int32> get_StunMessageTypeValues()
    // Offset: 0x2B99F8C
    static ::System::Collections::Generic::HashSet_1<int>* get_StunMessageTypeValues();
    // public Fusion.Sockets.Stun.StunMessage/StunMessageType get_Type()
    // Offset: 0x2B9A388
    ::Fusion::Sockets::Stun::StunMessage::StunMessageType get_Type();
    // private System.Void set_Type(Fusion.Sockets.Stun.StunMessage/StunMessageType value)
    // Offset: 0x2B9A390
    void set_Type(::Fusion::Sockets::Stun::StunMessage::StunMessageType value);
    // public System.Guid get_ID()
    // Offset: 0x2B98E38
    ::System::Guid get_ID();
    // private System.Byte[] get_TransactionID()
    // Offset: 0x2B9A398
    ::ArrayW<uint8_t> get_TransactionID();
    // private System.Void set_TransactionID(System.Byte[] value)
    // Offset: 0x2B9A3A0
    void set_TransactionID(::ArrayW<uint8_t> value);
    // public System.Net.IPEndPoint get_MappedAddress()
    // Offset: 0x2B98D68
    ::System::Net::IPEndPoint* get_MappedAddress();
    // public System.Void set_MappedAddress(System.Net.IPEndPoint value)
    // Offset: 0x2B9A3A8
    void set_MappedAddress(::System::Net::IPEndPoint* value);
    // public Fusion.Sockets.Stun.StunErrorAttribute get_ErrorCode()
    // Offset: 0x2B9A404
    ::Fusion::Sockets::Stun::StunErrorAttribute* get_ErrorCode();
    // private System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> get_Attributes()
    // Offset: 0x2B9A40C
    ::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>* get_Attributes();
    // private System.Void set_Attributes(System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> value)
    // Offset: 0x2B9A414
    void set_Attributes(::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>* value);
    // public System.Void .ctor(System.Guid msgID, Fusion.Sockets.Stun.StunMessage/StunMessageType messageType)
    // Offset: 0x2B99A54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StunMessage* New_ctor(::System::Guid msgID, ::Fusion::Sockets::Stun::StunMessage::StunMessageType messageType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Sockets::Stun::StunMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StunMessage*, creationType>(msgID, messageType)));
    }
    // static public System.Boolean IsStunMessage(System.Byte* data, System.Int32 length)
    // Offset: 0x2B986BC
    static bool IsStunMessage(uint8_t* data, int length);
    // static public Fusion.Sockets.Stun.StunMessage TryParse(System.Byte* data, System.Int32 length)
    // Offset: 0x2B98AD8
    static ::Fusion::Sockets::Stun::StunMessage* TryParse(uint8_t* data, int length);
    // public System.Byte[] Serialize()
    // Offset: 0x2B99BA0
    ::ArrayW<uint8_t> Serialize();
    // private System.Void WriteAttributes(System.Byte[] msg, ref System.Int32 offset)
    // Offset: 0x2B9A5A4
    void WriteAttributes(::ArrayW<uint8_t> msg, ByRef<int> offset);
    // private System.Void ReadAttribute(System.Byte* data, ref System.Int32 offset)
    // Offset: 0x2B9A41C
    void ReadAttribute(uint8_t* data, ByRef<int> offset);
    // private System.Net.IPEndPoint ParseXorEndPoint(System.Byte* data, ref System.Int32 offset)
    // Offset: 0x2B9AD44
    ::System::Net::IPEndPoint* ParseXorEndPoint(uint8_t* data, ByRef<int> offset);
    // private System.Void StoreEndPoint(Fusion.Sockets.Stun.StunMessage/AttributeType type, System.Net.IPEndPoint endPoint, System.Byte[] message, ref System.Int32 offset)
    // Offset: 0x2B9AB3C
    void StoreEndPoint(::Fusion::Sockets::Stun::StunMessage::AttributeType type, ::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t> message, ByRef<int> offset);
  }; // Fusion.Sockets.Stun.StunMessage
  #pragma pack(pop)
  static check_size<sizeof(StunMessage), 48 + sizeof(::System::Guid)> __Fusion_Sockets_Stun_StunMessageSizeCheck;
  static_assert(sizeof(StunMessage) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::Stun::StunMessage::AttributeType, "Fusion.Sockets.Stun", "StunMessage/AttributeType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::Stun::StunMessage::StunMessageType, "Fusion.Sockets.Stun", "StunMessage/StunMessageType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_StunMessageTypeValues
// Il2CppName: get_StunMessageTypeValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<int>* (*)()>(&Fusion::Sockets::Stun::StunMessage::get_StunMessageTypeValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_StunMessageTypeValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::Stun::StunMessage::StunMessageType (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::Fusion::Sockets::Stun::StunMessage::StunMessageType)>(&Fusion::Sockets::Stun::StunMessage::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Fusion.Sockets.Stun", "StunMessage/StunMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_TransactionID
// Il2CppName: get_TransactionID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_TransactionID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_TransactionID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::set_TransactionID
// Il2CppName: set_TransactionID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::ArrayW<uint8_t>)>(&Fusion::Sockets::Stun::StunMessage::set_TransactionID)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "set_TransactionID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_MappedAddress
// Il2CppName: get_MappedAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_MappedAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_MappedAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::set_MappedAddress
// Il2CppName: set_MappedAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::System::Net::IPEndPoint*)>(&Fusion::Sockets::Stun::StunMessage::set_MappedAddress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "set_MappedAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_ErrorCode
// Il2CppName: get_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::Stun::StunErrorAttribute* (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_ErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>* (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::set_Attributes
// Il2CppName: set_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::System::Collections::Generic::Dictionary_2<::Fusion::Sockets::Stun::StunMessage::AttributeType, ::Il2CppObject*>*)>(&Fusion::Sockets::Stun::StunMessage::set_Attributes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion.Sockets.Stun", "StunMessage/AttributeType"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "set_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::IsStunMessage
// Il2CppName: IsStunMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t*, int)>(&Fusion::Sockets::Stun::StunMessage::IsStunMessage)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "IsStunMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::Stun::StunMessage* (*)(uint8_t*, int)>(&Fusion::Sockets::Stun::StunMessage::TryParse)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Fusion::Sockets::Stun::StunMessage::*)()>(&Fusion::Sockets::Stun::StunMessage::Serialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::WriteAttributes
// Il2CppName: WriteAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::ArrayW<uint8_t>, ByRef<int>)>(&Fusion::Sockets::Stun::StunMessage::WriteAttributes)> {
  static const MethodInfo* get() {
    static auto* msg = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "WriteAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, offset});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::ReadAttribute
// Il2CppName: ReadAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(uint8_t*, ByRef<int>)>(&Fusion::Sockets::Stun::StunMessage::ReadAttribute)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "ReadAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::ParseXorEndPoint
// Il2CppName: ParseXorEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (Fusion::Sockets::Stun::StunMessage::*)(uint8_t*, ByRef<int>)>(&Fusion::Sockets::Stun::StunMessage::ParseXorEndPoint)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "ParseXorEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::Stun::StunMessage::StoreEndPoint
// Il2CppName: StoreEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::Stun::StunMessage::*)(::Fusion::Sockets::Stun::StunMessage::AttributeType, ::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ByRef<int>)>(&Fusion::Sockets::Stun::StunMessage::StoreEndPoint)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Fusion.Sockets.Stun", "StunMessage/AttributeType")->byval_arg;
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::Stun::StunMessage*), "StoreEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, endPoint, message, offset});
  }
};