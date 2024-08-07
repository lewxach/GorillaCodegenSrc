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
  // Forward declaring type: IgnoreCertProblem
  struct IgnoreCertProblem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IgnoreCertProblem, "System.Net", "IgnoreCertProblem");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IgnoreCertProblem
  // [TokenAttribute] Offset: FFFFFFFF
  struct IgnoreCertProblem/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IgnoreCertProblem
    constexpr IgnoreCertProblem(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.IgnoreCertProblem not_time_valid
    static constexpr const int not_time_valid = 1;
    // Get static field: static public System.Net.IgnoreCertProblem not_time_valid
    static ::System::Net::IgnoreCertProblem _get_not_time_valid();
    // Set static field: static public System.Net.IgnoreCertProblem not_time_valid
    static void _set_not_time_valid(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem ctl_not_time_valid
    static constexpr const int ctl_not_time_valid = 2;
    // Get static field: static public System.Net.IgnoreCertProblem ctl_not_time_valid
    static ::System::Net::IgnoreCertProblem _get_ctl_not_time_valid();
    // Set static field: static public System.Net.IgnoreCertProblem ctl_not_time_valid
    static void _set_ctl_not_time_valid(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem not_time_nested
    static constexpr const int not_time_nested = 4;
    // Get static field: static public System.Net.IgnoreCertProblem not_time_nested
    static ::System::Net::IgnoreCertProblem _get_not_time_nested();
    // Set static field: static public System.Net.IgnoreCertProblem not_time_nested
    static void _set_not_time_nested(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem invalid_basic_constraints
    static constexpr const int invalid_basic_constraints = 8;
    // Get static field: static public System.Net.IgnoreCertProblem invalid_basic_constraints
    static ::System::Net::IgnoreCertProblem _get_invalid_basic_constraints();
    // Set static field: static public System.Net.IgnoreCertProblem invalid_basic_constraints
    static void _set_invalid_basic_constraints(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem all_not_time_valid
    static constexpr const int all_not_time_valid = 7;
    // Get static field: static public System.Net.IgnoreCertProblem all_not_time_valid
    static ::System::Net::IgnoreCertProblem _get_all_not_time_valid();
    // Set static field: static public System.Net.IgnoreCertProblem all_not_time_valid
    static void _set_all_not_time_valid(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem allow_unknown_ca
    static constexpr const int allow_unknown_ca = 16;
    // Get static field: static public System.Net.IgnoreCertProblem allow_unknown_ca
    static ::System::Net::IgnoreCertProblem _get_allow_unknown_ca();
    // Set static field: static public System.Net.IgnoreCertProblem allow_unknown_ca
    static void _set_allow_unknown_ca(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem wrong_usage
    static constexpr const int wrong_usage = 32;
    // Get static field: static public System.Net.IgnoreCertProblem wrong_usage
    static ::System::Net::IgnoreCertProblem _get_wrong_usage();
    // Set static field: static public System.Net.IgnoreCertProblem wrong_usage
    static void _set_wrong_usage(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem invalid_name
    static constexpr const int invalid_name = 64;
    // Get static field: static public System.Net.IgnoreCertProblem invalid_name
    static ::System::Net::IgnoreCertProblem _get_invalid_name();
    // Set static field: static public System.Net.IgnoreCertProblem invalid_name
    static void _set_invalid_name(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem invalid_policy
    static constexpr const int invalid_policy = 128;
    // Get static field: static public System.Net.IgnoreCertProblem invalid_policy
    static ::System::Net::IgnoreCertProblem _get_invalid_policy();
    // Set static field: static public System.Net.IgnoreCertProblem invalid_policy
    static void _set_invalid_policy(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem end_rev_unknown
    static constexpr const int end_rev_unknown = 256;
    // Get static field: static public System.Net.IgnoreCertProblem end_rev_unknown
    static ::System::Net::IgnoreCertProblem _get_end_rev_unknown();
    // Set static field: static public System.Net.IgnoreCertProblem end_rev_unknown
    static void _set_end_rev_unknown(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem ctl_signer_rev_unknown
    static constexpr const int ctl_signer_rev_unknown = 512;
    // Get static field: static public System.Net.IgnoreCertProblem ctl_signer_rev_unknown
    static ::System::Net::IgnoreCertProblem _get_ctl_signer_rev_unknown();
    // Set static field: static public System.Net.IgnoreCertProblem ctl_signer_rev_unknown
    static void _set_ctl_signer_rev_unknown(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem ca_rev_unknown
    static constexpr const int ca_rev_unknown = 1024;
    // Get static field: static public System.Net.IgnoreCertProblem ca_rev_unknown
    static ::System::Net::IgnoreCertProblem _get_ca_rev_unknown();
    // Set static field: static public System.Net.IgnoreCertProblem ca_rev_unknown
    static void _set_ca_rev_unknown(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem root_rev_unknown
    static constexpr const int root_rev_unknown = 2048;
    // Get static field: static public System.Net.IgnoreCertProblem root_rev_unknown
    static ::System::Net::IgnoreCertProblem _get_root_rev_unknown();
    // Set static field: static public System.Net.IgnoreCertProblem root_rev_unknown
    static void _set_root_rev_unknown(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem all_rev_unknown
    static constexpr const int all_rev_unknown = 3840;
    // Get static field: static public System.Net.IgnoreCertProblem all_rev_unknown
    static ::System::Net::IgnoreCertProblem _get_all_rev_unknown();
    // Set static field: static public System.Net.IgnoreCertProblem all_rev_unknown
    static void _set_all_rev_unknown(::System::Net::IgnoreCertProblem value);
    // static field const value: static public System.Net.IgnoreCertProblem none
    static constexpr const int none = 4095;
    // Get static field: static public System.Net.IgnoreCertProblem none
    static ::System::Net::IgnoreCertProblem _get_none();
    // Set static field: static public System.Net.IgnoreCertProblem none
    static void _set_none(::System::Net::IgnoreCertProblem value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.IgnoreCertProblem
  #pragma pack(pop)
  static check_size<sizeof(IgnoreCertProblem), 0 + sizeof(int)> __System_Net_IgnoreCertProblemSizeCheck;
  static_assert(sizeof(IgnoreCertProblem) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
