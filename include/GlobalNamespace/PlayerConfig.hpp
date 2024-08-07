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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerConfig
  class PlayerConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerConfig*, "", "PlayerConfig");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayerConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerConfig : public ::Il2CppObject {
    public:
    // static field const value: static public System.String Player_Nickname
    static constexpr const char* Player_Nickname = "playerName";
    // Get static field: static public System.String Player_Nickname
    static ::StringW _get_Player_Nickname();
    // Set static field: static public System.String Player_Nickname
    static void _set_Player_Nickname(::StringW value);
    // static field const value: static public System.String Player_HasDoneTutorial
    static constexpr const char* Player_HasDoneTutorial = "didTutorial";
    // Get static field: static public System.String Player_HasDoneTutorial
    static ::StringW _get_Player_HasDoneTutorial();
    // Set static field: static public System.String Player_HasDoneTutorial
    static void _set_Player_HasDoneTutorial(::StringW value);
    // static field const value: static public System.String Done
    static constexpr const char* Done = "done";
    // Get static field: static public System.String Done
    static ::StringW _get_Done();
    // Set static field: static public System.String Done
    static void _set_Done(::StringW value);
    // static field const value: static public System.String Nope
    static constexpr const char* Nope = "nope";
    // Get static field: static public System.String Nope
    static ::StringW _get_Nope();
    // Set static field: static public System.String Nope
    static void _set_Nope(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x2911B00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConfig*, creationType>()));
    }
  }; // PlayerConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
