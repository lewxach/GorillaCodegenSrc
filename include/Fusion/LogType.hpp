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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: LogType
  struct LogType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LogType, "Fusion", "LogType");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.LogType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: LogType
    constexpr LogType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.LogType Error
    static constexpr const uint8_t Error = 0u;
    // Get static field: static public Fusion.LogType Error
    static ::Fusion::LogType _get_Error();
    // Set static field: static public Fusion.LogType Error
    static void _set_Error(::Fusion::LogType value);
    // static field const value: static public Fusion.LogType Warn
    static constexpr const uint8_t Warn = 1u;
    // Get static field: static public Fusion.LogType Warn
    static ::Fusion::LogType _get_Warn();
    // Set static field: static public Fusion.LogType Warn
    static void _set_Warn(::Fusion::LogType value);
    // static field const value: static public Fusion.LogType Info
    static constexpr const uint8_t Info = 2u;
    // Get static field: static public Fusion.LogType Info
    static ::Fusion::LogType _get_Info();
    // Set static field: static public Fusion.LogType Info
    static void _set_Info(::Fusion::LogType value);
    // static field const value: static public Fusion.LogType Debug
    static constexpr const uint8_t Debug = 3u;
    // Get static field: static public Fusion.LogType Debug
    static ::Fusion::LogType _get_Debug();
    // Set static field: static public Fusion.LogType Debug
    static void _set_Debug(::Fusion::LogType value);
    // static field const value: static public Fusion.LogType Trace
    static constexpr const uint8_t Trace = 4u;
    // Get static field: static public Fusion.LogType Trace
    static ::Fusion::LogType _get_Trace();
    // Set static field: static public Fusion.LogType Trace
    static void _set_Trace(::Fusion::LogType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Fusion.LogType
  #pragma pack(pop)
  static check_size<sizeof(LogType), 0 + sizeof(uint8_t)> __Fusion_LogTypeSizeCheck;
  static_assert(sizeof(LogType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
