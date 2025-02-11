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
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // Forward declaring type: LineBreakState
  struct LineBreakState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Internal::LineBreakState, "VYaml.Internal", "LineBreakState");
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Internal.LineBreakState
  // [TokenAttribute] Offset: FFFFFFFF
  struct LineBreakState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LineBreakState
    constexpr LineBreakState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VYaml.Internal.LineBreakState None
    static constexpr const int None = 0;
    // Get static field: static public VYaml.Internal.LineBreakState None
    static ::VYaml::Internal::LineBreakState _get_None();
    // Set static field: static public VYaml.Internal.LineBreakState None
    static void _set_None(::VYaml::Internal::LineBreakState value);
    // static field const value: static public VYaml.Internal.LineBreakState Lf
    static constexpr const int Lf = 1;
    // Get static field: static public VYaml.Internal.LineBreakState Lf
    static ::VYaml::Internal::LineBreakState _get_Lf();
    // Set static field: static public VYaml.Internal.LineBreakState Lf
    static void _set_Lf(::VYaml::Internal::LineBreakState value);
    // static field const value: static public VYaml.Internal.LineBreakState CrLf
    static constexpr const int CrLf = 2;
    // Get static field: static public VYaml.Internal.LineBreakState CrLf
    static ::VYaml::Internal::LineBreakState _get_CrLf();
    // Set static field: static public VYaml.Internal.LineBreakState CrLf
    static void _set_CrLf(::VYaml::Internal::LineBreakState value);
    // static field const value: static public VYaml.Internal.LineBreakState Cr
    static constexpr const int Cr = 3;
    // Get static field: static public VYaml.Internal.LineBreakState Cr
    static ::VYaml::Internal::LineBreakState _get_Cr();
    // Set static field: static public VYaml.Internal.LineBreakState Cr
    static void _set_Cr(::VYaml::Internal::LineBreakState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VYaml.Internal.LineBreakState
  #pragma pack(pop)
  static check_size<sizeof(LineBreakState), 0 + sizeof(int)> __VYaml_Internal_LineBreakStateSizeCheck;
  static_assert(sizeof(LineBreakState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
