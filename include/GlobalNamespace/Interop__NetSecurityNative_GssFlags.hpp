// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Interop/NetSecurityNative
#include "GlobalNamespace/Interop__NetSecurityNative.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags, "", "Interop/NetSecurityNative/GssFlags");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Interop/NetSecurityNative/GssFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct Interop_::NetSecurityNative::GssFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: GssFlags
    constexpr GssFlags(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_FLAG
    static constexpr const uint GSS_C_DELEG_FLAG = 1u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_DELEG_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_FLAG
    static void _set_GSS_C_DELEG_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_MUTUAL_FLAG
    static constexpr const uint GSS_C_MUTUAL_FLAG = 2u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_MUTUAL_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_MUTUAL_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_MUTUAL_FLAG
    static void _set_GSS_C_MUTUAL_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_REPLAY_FLAG
    static constexpr const uint GSS_C_REPLAY_FLAG = 4u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_REPLAY_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_REPLAY_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_REPLAY_FLAG
    static void _set_GSS_C_REPLAY_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_SEQUENCE_FLAG
    static constexpr const uint GSS_C_SEQUENCE_FLAG = 8u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_SEQUENCE_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_SEQUENCE_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_SEQUENCE_FLAG
    static void _set_GSS_C_SEQUENCE_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_CONF_FLAG
    static constexpr const uint GSS_C_CONF_FLAG = 16u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_CONF_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_CONF_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_CONF_FLAG
    static void _set_GSS_C_CONF_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_INTEG_FLAG
    static constexpr const uint GSS_C_INTEG_FLAG = 32u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_INTEG_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_INTEG_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_INTEG_FLAG
    static void _set_GSS_C_INTEG_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_ANON_FLAG
    static constexpr const uint GSS_C_ANON_FLAG = 64u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_ANON_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_ANON_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_ANON_FLAG
    static void _set_GSS_C_ANON_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_PROT_READY_FLAG
    static constexpr const uint GSS_C_PROT_READY_FLAG = 128u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_PROT_READY_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_PROT_READY_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_PROT_READY_FLAG
    static void _set_GSS_C_PROT_READY_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_TRANS_FLAG
    static constexpr const uint GSS_C_TRANS_FLAG = 256u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_TRANS_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_TRANS_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_TRANS_FLAG
    static void _set_GSS_C_TRANS_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_DCE_STYLE
    static constexpr const uint GSS_C_DCE_STYLE = 4096u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DCE_STYLE
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_DCE_STYLE();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DCE_STYLE
    static void _set_GSS_C_DCE_STYLE(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_IDENTIFY_FLAG
    static constexpr const uint GSS_C_IDENTIFY_FLAG = 8192u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_IDENTIFY_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_IDENTIFY_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_IDENTIFY_FLAG
    static void _set_GSS_C_IDENTIFY_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_EXTENDED_ERROR_FLAG
    static constexpr const uint GSS_C_EXTENDED_ERROR_FLAG = 16384u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_EXTENDED_ERROR_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_EXTENDED_ERROR_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_EXTENDED_ERROR_FLAG
    static void _set_GSS_C_EXTENDED_ERROR_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // static field const value: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_POLICY_FLAG
    static constexpr const uint GSS_C_DELEG_POLICY_FLAG = 32768u;
    // Get static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_POLICY_FLAG
    static ::GlobalNamespace::Interop_::NetSecurityNative::GssFlags _get_GSS_C_DELEG_POLICY_FLAG();
    // Set static field: static public Interop/NetSecurityNative/GssFlags GSS_C_DELEG_POLICY_FLAG
    static void _set_GSS_C_DELEG_POLICY_FLAG(::GlobalNamespace::Interop_::NetSecurityNative::GssFlags value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // Interop/NetSecurityNative/GssFlags
  #pragma pack(pop)
  static check_size<sizeof(Interop_::NetSecurityNative::GssFlags), 0 + sizeof(uint)> __GlobalNamespace_Interop__NetSecurityNative_GssFlagsSizeCheck;
  static_assert(sizeof(Interop_::NetSecurityNative::GssFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
