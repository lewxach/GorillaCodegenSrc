// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkId
  struct NetworkId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkId, "Fusion", "NetworkId");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkId
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct NetworkId/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::NetworkId>, public ::System::IComparable, public ::System::IComparable_1<::Fusion::NetworkId>*/ {
    public:
    // Nested type: ::Fusion::NetworkId::EqualityComparer
    class EqualityComparer;
    public:
    // public System.UInt32 Raw
    // Size: 0x4
    // Offset: 0x0
    uint Raw;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: NetworkId
    constexpr NetworkId(uint Raw_ = {}) noexcept : Raw{Raw_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::NetworkId>
    operator ::System::IEquatable_1<::Fusion::NetworkId>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::NetworkId>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Fusion::NetworkId>
    operator ::System::IComparable_1<::Fusion::NetworkId>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Fusion::NetworkId>*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return Raw;
    }
    // static field const value: static public System.Int32 PREDICTED_BIT
    static constexpr const int PREDICTED_BIT = -2147483648;
    // Get static field: static public System.Int32 PREDICTED_BIT
    static int _get_PREDICTED_BIT();
    // Set static field: static public System.Int32 PREDICTED_BIT
    static void _set_PREDICTED_BIT(int value);
    // static field const value: static public System.Int32 BLOCK_SIZE
    static constexpr const int BLOCK_SIZE = 8;
    // Get static field: static public System.Int32 BLOCK_SIZE
    static int _get_BLOCK_SIZE();
    // Set static field: static public System.Int32 BLOCK_SIZE
    static void _set_BLOCK_SIZE(int value);
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 4;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // static field const value: static public System.Int32 ALIGNMENT
    static constexpr const int ALIGNMENT = 4;
    // Get static field: static public System.Int32 ALIGNMENT
    static int _get_ALIGNMENT();
    // Set static field: static public System.Int32 ALIGNMENT
    static void _set_ALIGNMENT(int value);
    // Get instance field reference: public System.UInt32 Raw
    [[deprecated("Use field access instead!")]] uint& dyn_Raw();
    // public System.Boolean get_IsValid()
    // Offset: 0x2B4B174
    bool get_IsValid();
    // static Fusion.NetworkId get_InternalState()
    // Offset: 0x2B4B184
    static ::Fusion::NetworkId get_InternalState();
    // System.Void .ctor(System.UInt32 raw)
    // Offset: 0x2B4B18C
    // ABORTED: conflicts with another method.  NetworkId(uint raw);
    // public System.Boolean Equals(Fusion.NetworkId other)
    // Offset: 0x2B4B194
    bool Equals(::Fusion::NetworkId other);
    // public System.Int32 CompareTo(Fusion.NetworkId other)
    // Offset: 0x2B4B1A4
    int CompareTo(::Fusion::NetworkId other);
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0x2B4B228
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // static public System.Void Write(Fusion.Sockets.NetBitBuffer* buffer, Fusion.NetworkId id)
    // Offset: 0x2B4B2C0
    static void Write(::Fusion::Sockets::NetBitBuffer* buffer, ::Fusion::NetworkId id);
    // static public Fusion.NetworkId Read(Fusion.Sockets.NetBitBuffer* buffer, System.UInt32 mask)
    // Offset: 0x2B4B2CC
    static ::Fusion::NetworkId Read(::Fusion::Sockets::NetBitBuffer* buffer, uint mask);
    // public System.Void Write(Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B4B2EC
    void Write(::Fusion::Sockets::NetBitBuffer* buffer);
    // public System.String ToNamePrefixString()
    // Offset: 0x2B4B3A8
    ::StringW ToNamePrefixString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B4B1B0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B4B304
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B4B30C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.NetworkId
  #pragma pack(pop)
  static check_size<sizeof(NetworkId), 0 + sizeof(uint)> __Fusion_NetworkIdSizeCheck;
  static_assert(sizeof(NetworkId) == 0x4);
  // static public System.Boolean op_Equality(Fusion.NetworkId a, Fusion.NetworkId b)
  // Offset: 0x2B4B29C
  bool operator ==(const ::Fusion::NetworkId& a, const ::Fusion::NetworkId& b);
  // static public System.Boolean op_Inequality(Fusion.NetworkId a, Fusion.NetworkId b)
  // Offset: 0x2B4B2A8
  bool operator !=(const ::Fusion::NetworkId& a, const ::Fusion::NetworkId& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkId::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkId::*)()>(&Fusion::NetworkId::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::get_InternalState
// Il2CppName: get_InternalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkId (*)()>(&Fusion::NetworkId::get_InternalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "get_InternalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::NetworkId
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkId::*)(::Fusion::NetworkId)>(&Fusion::NetworkId::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkId::*)(::Fusion::NetworkId)>(&Fusion::NetworkId::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkId::*)(::Il2CppObject*)>(&Fusion::NetworkId::System_IComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetBitBuffer*, ::Fusion::NetworkId)>(&Fusion::NetworkId::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, id});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkId (*)(::Fusion::Sockets::NetBitBuffer*, uint)>(&Fusion::NetworkId::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, mask});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkId::*)(::Fusion::Sockets::NetBitBuffer*)>(&Fusion::NetworkId::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::ToNamePrefixString
// Il2CppName: ToNamePrefixString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkId::*)()>(&Fusion::NetworkId::ToNamePrefixString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "ToNamePrefixString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkId::*)(::Il2CppObject*)>(&Fusion::NetworkId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkId::*)()>(&Fusion::NetworkId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkId::*)()>(&Fusion::NetworkId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkId), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkId::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::NetworkId::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!