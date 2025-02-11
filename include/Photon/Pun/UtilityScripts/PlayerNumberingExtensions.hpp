// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: PlayerNumberingExtensions
  class PlayerNumberingExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*, "Photon.Pun.UtilityScripts", "PlayerNumberingExtensions");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.PlayerNumberingExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PlayerNumberingExtensions : public ::Il2CppObject {
    public:
    // static public System.Int32 GetPlayerNumber(Photon.Realtime.Player player)
    // Offset: 0x4A51BF4
    static int GetPlayerNumber(::Photon::Realtime::Player* player);
    // static public System.Void SetPlayerNumber(Photon.Realtime.Player player, System.Int32 playerNumber)
    // Offset: 0x4A51D44
    static void SetPlayerNumber(::Photon::Realtime::Player* player, int playerNumber);
  }; // Photon.Pun.UtilityScripts.PlayerNumberingExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumberingExtensions::GetPlayerNumber
// Il2CppName: GetPlayerNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Photon::Realtime::Player*)>(&Photon::Pun::UtilityScripts::PlayerNumberingExtensions::GetPlayerNumber)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumberingExtensions*), "GetPlayerNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PlayerNumberingExtensions::SetPlayerNumber
// Il2CppName: SetPlayerNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, int)>(&Photon::Pun::UtilityScripts::PlayerNumberingExtensions::SetPlayerNumber)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* playerNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PlayerNumberingExtensions*), "SetPlayerNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player, playerNumber});
  }
};
