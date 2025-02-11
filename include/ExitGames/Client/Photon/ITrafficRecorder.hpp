// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: IPhotonSocket
  class IPhotonSocket;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: ITrafficRecorder
  class ITrafficRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::ITrafficRecorder);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::ITrafficRecorder*, "ExitGames.Client.Photon", "ITrafficRecorder");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.ITrafficRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class ITrafficRecorder {
    public:
    // public System.Boolean get_Enabled()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Enabled();
    // public System.Void set_Enabled(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Enabled(bool value);
    // public System.Void Record(System.Byte[] inBuffer, System.Int32 length, System.Boolean incoming, System.Int16 peerId, ExitGames.Client.Photon.IPhotonSocket connection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Record(::ArrayW<uint8_t> inBuffer, int length, bool incoming, int16_t peerId, ::ExitGames::Client::Photon::IPhotonSocket* connection);
  }; // ExitGames.Client.Photon.ITrafficRecorder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::ITrafficRecorder::get_Enabled
// Il2CppName: get_Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::ITrafficRecorder::*)()>(&ExitGames::Client::Photon::ITrafficRecorder::get_Enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::ITrafficRecorder*), "get_Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::ITrafficRecorder::set_Enabled
// Il2CppName: set_Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::ITrafficRecorder::*)(bool)>(&ExitGames::Client::Photon::ITrafficRecorder::set_Enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::ITrafficRecorder*), "set_Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::ITrafficRecorder::Record
// Il2CppName: Record
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::ITrafficRecorder::*)(::ArrayW<uint8_t>, int, bool, int16_t, ::ExitGames::Client::Photon::IPhotonSocket*)>(&ExitGames::Client::Photon::ITrafficRecorder::Record)> {
  static const MethodInfo* get() {
    static auto* inBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* incoming = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peerId = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* connection = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "IPhotonSocket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::ITrafficRecorder*), "Record", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBuffer, length, incoming, peerId, connection});
  }
};
