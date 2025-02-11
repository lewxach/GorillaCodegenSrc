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
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
  // Forward declaring type: INetBitWriteStream
  class INetBitWriteStream;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: PlayerRef
  struct PlayerRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::PlayerRef, "Fusion", "PlayerRef");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.PlayerRef
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct PlayerRef/*, public ::System::ValueType, public ::Fusion::INetworkStruct*/ {
    public:
    public:
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayerRef
    constexpr PlayerRef(int index_ = {}) noexcept : index{index_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 4;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // static public Fusion.PlayerRef get_None()
    // Offset: 0x2B49644
    static ::Fusion::PlayerRef get_None();
    // public System.Boolean get_IsValid()
    // Offset: 0x2B4964C
    bool get_IsValid();
    // public System.Boolean get_IsNone()
    // Offset: 0x2B4965C
    bool get_IsNone();
    // public System.Int32 get_RawEncoded()
    // Offset: 0x2B4966C
    int get_RawEncoded();
    // public System.Int32 get_PlayerId()
    // Offset: 0x2B49674
    int get_PlayerId();
    // static public System.Void Write(Fusion.Sockets.NetBitBuffer* buffer, Fusion.PlayerRef playerRef)
    // Offset: 0x2B497D0
    static void Write(::Fusion::Sockets::NetBitBuffer* buffer, ::Fusion::PlayerRef playerRef);
    // static public System.Void Write(T* buffer, Fusion.PlayerRef playerRef)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Write(T* buffer, ::Fusion::PlayerRef playerRef) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::Sockets::INetBitWriteStream>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::PlayerRef::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "PlayerRef", "Write", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(buffer), ::il2cpp_utils::ExtractType(playerRef)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, buffer, playerRef);
    }
    // static public Fusion.PlayerRef Read(Fusion.Sockets.NetBitBuffer* buffer)
    // Offset: 0x2B4981C
    static ::Fusion::PlayerRef Read(::Fusion::Sockets::NetBitBuffer* buffer);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B49680
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B496F8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B49700
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.PlayerRef
  #pragma pack(pop)
  static check_size<sizeof(PlayerRef), 0 + sizeof(int)> __Fusion_PlayerRefSizeCheck;
  static_assert(sizeof(PlayerRef) == 0x4);
  // static public System.Boolean op_Equality(Fusion.PlayerRef a, Fusion.PlayerRef b)
  // Offset: 0x2B497B8
  bool operator ==(const ::Fusion::PlayerRef& a, const ::Fusion::PlayerRef& b);
  // static public System.Boolean op_Inequality(Fusion.PlayerRef a, Fusion.PlayerRef b)
  // Offset: 0x2B497C4
  bool operator !=(const ::Fusion::PlayerRef& a, const ::Fusion::PlayerRef& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::PlayerRef::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::PlayerRef (*)()>(&Fusion::PlayerRef::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::get_IsNone
// Il2CppName: get_IsNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::get_IsNone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "get_IsNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::get_RawEncoded
// Il2CppName: get_RawEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::get_RawEncoded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "get_RawEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::get_PlayerId
// Il2CppName: get_PlayerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::get_PlayerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "get_PlayerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetBitBuffer*, ::Fusion::PlayerRef)>(&Fusion::PlayerRef::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    static auto* playerRef = &::il2cpp_utils::GetClassFromName("Fusion", "PlayerRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, playerRef});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::Write
// Il2CppName: Write
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::PlayerRef::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::PlayerRef (*)(::Fusion::Sockets::NetBitBuffer*)>(&Fusion::PlayerRef::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::PlayerRef::*)(::Il2CppObject*)>(&Fusion::PlayerRef::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::PlayerRef::*)()>(&Fusion::PlayerRef::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRef), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRef::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::PlayerRef::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
