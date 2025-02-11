// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpSysSettings
  class HttpSysSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpSysSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpSysSettings*, "System.Net", "HttpSysSettings");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpSysSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpSysSettings : public ::Il2CppObject {
    public:
    // static field const value: static public System.Boolean EnableNonUtf8
    static constexpr const bool EnableNonUtf8 = true;
    // Get static field: static public System.Boolean EnableNonUtf8
    static bool _get_EnableNonUtf8();
    // Set static field: static public System.Boolean EnableNonUtf8
    static void _set_EnableNonUtf8(bool value);
    // static field const value: static public System.Boolean FavorUtf8
    static constexpr const bool FavorUtf8 = true;
    // Get static field: static public System.Boolean FavorUtf8
    static bool _get_FavorUtf8();
    // Set static field: static public System.Boolean FavorUtf8
    static void _set_FavorUtf8(bool value);
  }; // System.Net.HttpSysSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
