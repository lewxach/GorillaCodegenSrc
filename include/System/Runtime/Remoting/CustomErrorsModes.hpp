// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: CustomErrorsModes
  struct CustomErrorsModes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::CustomErrorsModes, "System.Runtime.Remoting", "CustomErrorsModes");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.CustomErrorsModes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  struct CustomErrorsModes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CustomErrorsModes
    constexpr CustomErrorsModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Remoting.CustomErrorsModes On
    static constexpr const int On = 0;
    // Get static field: static public System.Runtime.Remoting.CustomErrorsModes On
    static ::System::Runtime::Remoting::CustomErrorsModes _get_On();
    // Set static field: static public System.Runtime.Remoting.CustomErrorsModes On
    static void _set_On(::System::Runtime::Remoting::CustomErrorsModes value);
    // static field const value: static public System.Runtime.Remoting.CustomErrorsModes Off
    static constexpr const int Off = 1;
    // Get static field: static public System.Runtime.Remoting.CustomErrorsModes Off
    static ::System::Runtime::Remoting::CustomErrorsModes _get_Off();
    // Set static field: static public System.Runtime.Remoting.CustomErrorsModes Off
    static void _set_Off(::System::Runtime::Remoting::CustomErrorsModes value);
    // static field const value: static public System.Runtime.Remoting.CustomErrorsModes RemoteOnly
    static constexpr const int RemoteOnly = 2;
    // Get static field: static public System.Runtime.Remoting.CustomErrorsModes RemoteOnly
    static ::System::Runtime::Remoting::CustomErrorsModes _get_RemoteOnly();
    // Set static field: static public System.Runtime.Remoting.CustomErrorsModes RemoteOnly
    static void _set_RemoteOnly(::System::Runtime::Remoting::CustomErrorsModes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Remoting.CustomErrorsModes
  #pragma pack(pop)
  static check_size<sizeof(CustomErrorsModes), 0 + sizeof(int)> __System_Runtime_Remoting_CustomErrorsModesSizeCheck;
  static_assert(sizeof(CustomErrorsModes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
