// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Sockets.INetSocket
#include "Fusion/Sockets/INetSocket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConfig
  struct NetConfig;
  // Forward declaring type: NetSocket
  struct NetSocket;
  // Forward declaring type: NetAddress
  struct NetAddress;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetSocketNative
  class NetSocketNative;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Sockets::NetSocketNative);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetSocketNative*, "Fusion.Sockets", "NetSocketNative");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Sockets.NetSocketNative
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSocketNative : public ::Il2CppObject/*, public ::Fusion::Sockets::INetSocket*/ {
    public:
    // Creating interface conversion operator: operator ::Fusion::Sockets::INetSocket
    operator ::Fusion::Sockets::INetSocket() noexcept {
      return *reinterpret_cast<::Fusion::Sockets::INetSocket*>(this);
    }
    // public System.Void Initialize(Fusion.Sockets.NetConfig config)
    // Offset: 0x2B97E6C
    void Initialize(::Fusion::Sockets::NetConfig config);
    // public Fusion.Sockets.NetSocket Create(Fusion.Sockets.NetConfig config)
    // Offset: 0x2B97F44
    ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig config);
    // public Fusion.Sockets.NetAddress Bind(Fusion.Sockets.NetSocket socket, Fusion.Sockets.NetConfig config)
    // Offset: 0x2B9817C
    ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket socket, ::Fusion::Sockets::NetConfig config);
    // public System.Int32 Receive(Fusion.Sockets.NetSocket socket, Fusion.Sockets.NetAddress* address, System.Byte* buffer, System.Int32 bufferLength)
    // Offset: 0x2B98394
    int Receive(::Fusion::Sockets::NetSocket socket, ::Fusion::Sockets::NetAddress* address, uint8_t* buffer, int bufferLength);
    // public System.Int32 Send(Fusion.Sockets.NetSocket socket, Fusion.Sockets.NetAddress* address, System.Byte* buffer, System.Int32 bufferLength)
    // Offset: 0x2B98698
    int Send(::Fusion::Sockets::NetSocket socket, ::Fusion::Sockets::NetAddress* address, uint8_t* buffer, int bufferLength);
    // public System.Void Destroy(Fusion.Sockets.NetSocket netSocket)
    // Offset: 0x2B98034
    void Destroy(::Fusion::Sockets::NetSocket netSocket);
    // public System.Void .ctor()
    // Offset: 0x2B97E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSocketNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Sockets::NetSocketNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSocketNative*, creationType>()));
    }
  }; // Fusion.Sockets.NetSocketNative
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetConfig)>(&Fusion::Sockets::NetSocketNative::Initialize)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetSocket (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetConfig)>(&Fusion::Sockets::NetSocketNative::Create)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetAddress (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&Fusion::Sockets::NetSocketNative::Bind)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetSocket")->byval_arg;
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, config});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int)>(&Fusion::Sockets::NetSocketNative::Receive)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetSocket")->byval_arg;
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, address, buffer, bufferLength});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int)>(&Fusion::Sockets::NetSocketNative::Send)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetSocket")->byval_arg;
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetAddress"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, address, buffer, bufferLength});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket)>(&Fusion::Sockets::NetSocketNative::Destroy)> {
  static const MethodInfo* get() {
    static auto* netSocket = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetSocket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetSocketNative*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{netSocket});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetSocketNative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
