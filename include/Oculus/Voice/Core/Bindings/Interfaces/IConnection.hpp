// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Voice.Core.Bindings.Interfaces
namespace Oculus::Voice::Core::Bindings::Interfaces {
  // Forward declaring type: IConnection
  class IConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Core::Bindings::Interfaces::IConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Core::Bindings::Interfaces::IConnection*, "Oculus.Voice.Core.Bindings.Interfaces", "IConnection");
// Type namespace: Oculus.Voice.Core.Bindings.Interfaces
namespace Oculus::Voice::Core::Bindings::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Core.Bindings.Interfaces.IConnection
  // [TokenAttribute] Offset: FFFFFFFF
  class IConnection {
    public:
    // public System.Void Connect(System.String version)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Connect(::StringW version);
    // public System.Void Disconnect()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Disconnect();
    // public System.Boolean get_IsConnected()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsConnected();
  }; // Oculus.Voice.Core.Bindings.Interfaces.IConnection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Interfaces::IConnection::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Interfaces::IConnection::*)(::StringW)>(&Oculus::Voice::Core::Bindings::Interfaces::IConnection::Connect)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Interfaces::IConnection*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Interfaces::IConnection::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Interfaces::IConnection::*)()>(&Oculus::Voice::Core::Bindings::Interfaces::IConnection::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Interfaces::IConnection*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Interfaces::IConnection::get_IsConnected
// Il2CppName: get_IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Core::Bindings::Interfaces::IConnection::*)()>(&Oculus::Voice::Core::Bindings::Interfaces::IConnection::get_IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Interfaces::IConnection*), "get_IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
