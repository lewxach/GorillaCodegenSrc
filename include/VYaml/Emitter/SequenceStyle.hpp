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
// Type namespace: VYaml.Emitter
namespace VYaml::Emitter {
  // Forward declaring type: SequenceStyle
  struct SequenceStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Emitter::SequenceStyle, "VYaml.Emitter", "SequenceStyle");
// Type namespace: VYaml.Emitter
namespace VYaml::Emitter {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Emitter.SequenceStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct SequenceStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SequenceStyle
    constexpr SequenceStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VYaml.Emitter.SequenceStyle Block
    static constexpr const int Block = 0;
    // Get static field: static public VYaml.Emitter.SequenceStyle Block
    static ::VYaml::Emitter::SequenceStyle _get_Block();
    // Set static field: static public VYaml.Emitter.SequenceStyle Block
    static void _set_Block(::VYaml::Emitter::SequenceStyle value);
    // static field const value: static public VYaml.Emitter.SequenceStyle Flow
    static constexpr const int Flow = 1;
    // Get static field: static public VYaml.Emitter.SequenceStyle Flow
    static ::VYaml::Emitter::SequenceStyle _get_Flow();
    // Set static field: static public VYaml.Emitter.SequenceStyle Flow
    static void _set_Flow(::VYaml::Emitter::SequenceStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VYaml.Emitter.SequenceStyle
  #pragma pack(pop)
  static check_size<sizeof(SequenceStyle), 0 + sizeof(int)> __VYaml_Emitter_SequenceStyleSizeCheck;
  static_assert(sizeof(SequenceStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
