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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: Rule
  struct Rule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Rule, "System.Data", "Rule");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Rule
  // [TokenAttribute] Offset: FFFFFFFF
  struct Rule/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Rule
    constexpr Rule(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.Rule None
    static constexpr const int None = 0;
    // Get static field: static public System.Data.Rule None
    static ::System::Data::Rule _get_None();
    // Set static field: static public System.Data.Rule None
    static void _set_None(::System::Data::Rule value);
    // static field const value: static public System.Data.Rule Cascade
    static constexpr const int Cascade = 1;
    // Get static field: static public System.Data.Rule Cascade
    static ::System::Data::Rule _get_Cascade();
    // Set static field: static public System.Data.Rule Cascade
    static void _set_Cascade(::System::Data::Rule value);
    // static field const value: static public System.Data.Rule SetNull
    static constexpr const int SetNull = 2;
    // Get static field: static public System.Data.Rule SetNull
    static ::System::Data::Rule _get_SetNull();
    // Set static field: static public System.Data.Rule SetNull
    static void _set_SetNull(::System::Data::Rule value);
    // static field const value: static public System.Data.Rule SetDefault
    static constexpr const int SetDefault = 3;
    // Get static field: static public System.Data.Rule SetDefault
    static ::System::Data::Rule _get_SetDefault();
    // Set static field: static public System.Data.Rule SetDefault
    static void _set_SetDefault(::System::Data::Rule value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.Rule
  #pragma pack(pop)
  static check_size<sizeof(Rule), 0 + sizeof(int)> __System_Data_RuleSizeCheck;
  static_assert(sizeof(Rule) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
