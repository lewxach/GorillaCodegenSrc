// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.Sockets.NetPacketType
#include "Fusion/Sockets/NetPacketType.hpp"
// Including type: Fusion.Sockets.NetCommands
#include "Fusion/Sockets/NetCommands.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetCommandHeader
  struct NetCommandHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetCommandHeader, "Fusion.Sockets", "NetCommandHeader");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetCommandHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetCommandHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.Sockets.NetPacketType PacketType
    // Size: 0x1
    // Offset: 0x0
    ::Fusion::Sockets::NetPacketType PacketType;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetPacketType) == 0x1);
    // public Fusion.Sockets.NetCommands Command
    // Size: 0x1
    // Offset: 0x1
    ::Fusion::Sockets::NetCommands Command;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetCommands) == 0x1);
    public:
    // Creating value type constructor for type: NetCommandHeader
    constexpr NetCommandHeader(::Fusion::Sockets::NetPacketType PacketType_ = {}, ::Fusion::Sockets::NetCommands Command_ = {}) noexcept : PacketType{PacketType_}, Command{Command_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 SIZE_BYTES
    static constexpr const int SIZE_BYTES = 2;
    // Get static field: static public System.Int32 SIZE_BYTES
    static int _get_SIZE_BYTES();
    // Set static field: static public System.Int32 SIZE_BYTES
    static void _set_SIZE_BYTES(int value);
    // static field const value: static public System.Int32 SIZE_BITS
    static constexpr const int SIZE_BITS = 16;
    // Get static field: static public System.Int32 SIZE_BITS
    static int _get_SIZE_BITS();
    // Set static field: static public System.Int32 SIZE_BITS
    static void _set_SIZE_BITS(int value);
    // Get instance field reference: public Fusion.Sockets.NetPacketType PacketType
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetPacketType& dyn_PacketType();
    // Get instance field reference: public Fusion.Sockets.NetCommands Command
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetCommands& dyn_Command();
    // static public Fusion.Sockets.NetCommandHeader Create(Fusion.Sockets.NetCommands command)
    // Offset: 0x2B90DBC
    static ::Fusion::Sockets::NetCommandHeader Create(::Fusion::Sockets::NetCommands command);
  }; // Fusion.Sockets.NetCommandHeader
  #pragma pack(pop)
  static check_size<sizeof(NetCommandHeader), 1 + sizeof(::Fusion::Sockets::NetCommands)> __Fusion_Sockets_NetCommandHeaderSizeCheck;
  static_assert(sizeof(NetCommandHeader) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetCommandHeader::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetCommandHeader (*)(::Fusion::Sockets::NetCommands)>(&Fusion::Sockets::NetCommandHeader::Create)> {
  static const MethodInfo* get() {
    static auto* command = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetCommands")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetCommandHeader), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{command});
  }
};
