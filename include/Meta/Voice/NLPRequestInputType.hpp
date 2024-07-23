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
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: NLPRequestInputType
  struct NLPRequestInputType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::NLPRequestInputType, "Meta.Voice", "NLPRequestInputType");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.NLPRequestInputType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NLPRequestInputType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NLPRequestInputType
    constexpr NLPRequestInputType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Meta.Voice.NLPRequestInputType Text
    static constexpr const int Text = 0;
    // Get static field: static public Meta.Voice.NLPRequestInputType Text
    static ::Meta::Voice::NLPRequestInputType _get_Text();
    // Set static field: static public Meta.Voice.NLPRequestInputType Text
    static void _set_Text(::Meta::Voice::NLPRequestInputType value);
    // static field const value: static public Meta.Voice.NLPRequestInputType Audio
    static constexpr const int Audio = 1;
    // Get static field: static public Meta.Voice.NLPRequestInputType Audio
    static ::Meta::Voice::NLPRequestInputType _get_Audio();
    // Set static field: static public Meta.Voice.NLPRequestInputType Audio
    static void _set_Audio(::Meta::Voice::NLPRequestInputType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Meta.Voice.NLPRequestInputType
  #pragma pack(pop)
  static check_size<sizeof(NLPRequestInputType), 0 + sizeof(int)> __Meta_Voice_NLPRequestInputTypeSizeCheck;
  static_assert(sizeof(NLPRequestInputType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"