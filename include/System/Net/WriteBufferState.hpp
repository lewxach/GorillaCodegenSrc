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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WriteBufferState
  struct WriteBufferState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WriteBufferState, "System.Net", "WriteBufferState");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WriteBufferState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WriteBufferState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WriteBufferState
    constexpr WriteBufferState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WriteBufferState Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public System.Net.WriteBufferState Disabled
    static ::System::Net::WriteBufferState _get_Disabled();
    // Set static field: static public System.Net.WriteBufferState Disabled
    static void _set_Disabled(::System::Net::WriteBufferState value);
    // static field const value: static public System.Net.WriteBufferState Headers
    static constexpr const int Headers = 1;
    // Get static field: static public System.Net.WriteBufferState Headers
    static ::System::Net::WriteBufferState _get_Headers();
    // Set static field: static public System.Net.WriteBufferState Headers
    static void _set_Headers(::System::Net::WriteBufferState value);
    // static field const value: static public System.Net.WriteBufferState Buffer
    static constexpr const int Buffer = 2;
    // Get static field: static public System.Net.WriteBufferState Buffer
    static ::System::Net::WriteBufferState _get_Buffer();
    // Set static field: static public System.Net.WriteBufferState Buffer
    static void _set_Buffer(::System::Net::WriteBufferState value);
    // static field const value: static public System.Net.WriteBufferState Playback
    static constexpr const int Playback = 3;
    // Get static field: static public System.Net.WriteBufferState Playback
    static ::System::Net::WriteBufferState _get_Playback();
    // Set static field: static public System.Net.WriteBufferState Playback
    static void _set_Playback(::System::Net::WriteBufferState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.WriteBufferState
  #pragma pack(pop)
  static check_size<sizeof(WriteBufferState), 0 + sizeof(int)> __System_Net_WriteBufferStateSizeCheck;
  static_assert(sizeof(WriteBufferState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
