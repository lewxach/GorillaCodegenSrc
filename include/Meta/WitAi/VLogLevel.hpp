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
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: VLogLevel
  struct VLogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::VLogLevel, "Meta.WitAi", "VLogLevel");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.VLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct VLogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VLogLevel
    constexpr VLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Meta.WitAi.VLogLevel Error
    static constexpr const int Error = 0;
    // Get static field: static public Meta.WitAi.VLogLevel Error
    static ::Meta::WitAi::VLogLevel _get_Error();
    // Set static field: static public Meta.WitAi.VLogLevel Error
    static void _set_Error(::Meta::WitAi::VLogLevel value);
    // static field const value: static public Meta.WitAi.VLogLevel Warning
    static constexpr const int Warning = 1;
    // Get static field: static public Meta.WitAi.VLogLevel Warning
    static ::Meta::WitAi::VLogLevel _get_Warning();
    // Set static field: static public Meta.WitAi.VLogLevel Warning
    static void _set_Warning(::Meta::WitAi::VLogLevel value);
    // static field const value: static public Meta.WitAi.VLogLevel Log
    static constexpr const int Log = 2;
    // Get static field: static public Meta.WitAi.VLogLevel Log
    static ::Meta::WitAi::VLogLevel _get_Log();
    // Set static field: static public Meta.WitAi.VLogLevel Log
    static void _set_Log(::Meta::WitAi::VLogLevel value);
    // static field const value: static public Meta.WitAi.VLogLevel Info
    static constexpr const int Info = 3;
    // Get static field: static public Meta.WitAi.VLogLevel Info
    static ::Meta::WitAi::VLogLevel _get_Info();
    // Set static field: static public Meta.WitAi.VLogLevel Info
    static void _set_Info(::Meta::WitAi::VLogLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Meta.WitAi.VLogLevel
  #pragma pack(pop)
  static check_size<sizeof(VLogLevel), 0 + sizeof(int)> __Meta_WitAi_VLogLevelSizeCheck;
  static_assert(sizeof(VLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"