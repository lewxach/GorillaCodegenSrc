// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CheatUpdate
  class CheatUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CheatUpdate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CheatUpdate*, "", "CheatUpdate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CheatUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class CheatUpdate : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CheatUpdate::$UpdateNumberOfPlayers$d__1
    class $UpdateNumberOfPlayers$d__1;
    // Nested type: ::GlobalNamespace::CheatUpdate::$UpdatePlayerCount$d__2
    class $UpdatePlayerCount$d__2;
    // private System.Void Start()
    // Offset: 0x26EF70C
    void Start();
    // public System.Collections.IEnumerator UpdateNumberOfPlayers()
    // Offset: 0x26EF72C
    ::System::Collections::IEnumerator* UpdateNumberOfPlayers();
    // private System.Collections.IEnumerator UpdatePlayerCount()
    // Offset: 0x26EF7C0
    ::System::Collections::IEnumerator* UpdatePlayerCount();
    // public System.Void .ctor()
    // Offset: 0x26EF840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CheatUpdate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CheatUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CheatUpdate*, creationType>()));
    }
  }; // CheatUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CheatUpdate::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CheatUpdate::*)()>(&GlobalNamespace::CheatUpdate::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CheatUpdate*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CheatUpdate::UpdateNumberOfPlayers
// Il2CppName: UpdateNumberOfPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CheatUpdate::*)()>(&GlobalNamespace::CheatUpdate::UpdateNumberOfPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CheatUpdate*), "UpdateNumberOfPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CheatUpdate::UpdatePlayerCount
// Il2CppName: UpdatePlayerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CheatUpdate::*)()>(&GlobalNamespace::CheatUpdate::UpdatePlayerCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CheatUpdate*), "UpdatePlayerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CheatUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
