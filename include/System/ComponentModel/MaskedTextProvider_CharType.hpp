// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.MaskedTextProvider
#include "System/ComponentModel/MaskedTextProvider.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MaskedTextProvider::CharType, "System.ComponentModel", "MaskedTextProvider/CharType");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MaskedTextProvider/CharType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MaskedTextProvider::CharType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CharType
    constexpr CharType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.MaskedTextProvider/CharType EditOptional
    static constexpr const int EditOptional = 1;
    // Get static field: static public System.ComponentModel.MaskedTextProvider/CharType EditOptional
    static ::System::ComponentModel::MaskedTextProvider::CharType _get_EditOptional();
    // Set static field: static public System.ComponentModel.MaskedTextProvider/CharType EditOptional
    static void _set_EditOptional(::System::ComponentModel::MaskedTextProvider::CharType value);
    // static field const value: static public System.ComponentModel.MaskedTextProvider/CharType EditRequired
    static constexpr const int EditRequired = 2;
    // Get static field: static public System.ComponentModel.MaskedTextProvider/CharType EditRequired
    static ::System::ComponentModel::MaskedTextProvider::CharType _get_EditRequired();
    // Set static field: static public System.ComponentModel.MaskedTextProvider/CharType EditRequired
    static void _set_EditRequired(::System::ComponentModel::MaskedTextProvider::CharType value);
    // static field const value: static public System.ComponentModel.MaskedTextProvider/CharType Separator
    static constexpr const int Separator = 4;
    // Get static field: static public System.ComponentModel.MaskedTextProvider/CharType Separator
    static ::System::ComponentModel::MaskedTextProvider::CharType _get_Separator();
    // Set static field: static public System.ComponentModel.MaskedTextProvider/CharType Separator
    static void _set_Separator(::System::ComponentModel::MaskedTextProvider::CharType value);
    // static field const value: static public System.ComponentModel.MaskedTextProvider/CharType Literal
    static constexpr const int Literal = 8;
    // Get static field: static public System.ComponentModel.MaskedTextProvider/CharType Literal
    static ::System::ComponentModel::MaskedTextProvider::CharType _get_Literal();
    // Set static field: static public System.ComponentModel.MaskedTextProvider/CharType Literal
    static void _set_Literal(::System::ComponentModel::MaskedTextProvider::CharType value);
    // static field const value: static public System.ComponentModel.MaskedTextProvider/CharType Modifier
    static constexpr const int Modifier = 16;
    // Get static field: static public System.ComponentModel.MaskedTextProvider/CharType Modifier
    static ::System::ComponentModel::MaskedTextProvider::CharType _get_Modifier();
    // Set static field: static public System.ComponentModel.MaskedTextProvider/CharType Modifier
    static void _set_Modifier(::System::ComponentModel::MaskedTextProvider::CharType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.MaskedTextProvider/CharType
  #pragma pack(pop)
  static check_size<sizeof(MaskedTextProvider::CharType), 0 + sizeof(int)> __System_ComponentModel_MaskedTextProvider_CharTypeSizeCheck;
  static_assert(sizeof(MaskedTextProvider::CharType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
