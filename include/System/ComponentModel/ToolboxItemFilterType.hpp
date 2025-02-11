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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ToolboxItemFilterType
  struct ToolboxItemFilterType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ToolboxItemFilterType, "System.ComponentModel", "ToolboxItemFilterType");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ToolboxItemFilterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ToolboxItemFilterType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ToolboxItemFilterType
    constexpr ToolboxItemFilterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.ToolboxItemFilterType Allow
    static constexpr const int Allow = 0;
    // Get static field: static public System.ComponentModel.ToolboxItemFilterType Allow
    static ::System::ComponentModel::ToolboxItemFilterType _get_Allow();
    // Set static field: static public System.ComponentModel.ToolboxItemFilterType Allow
    static void _set_Allow(::System::ComponentModel::ToolboxItemFilterType value);
    // static field const value: static public System.ComponentModel.ToolboxItemFilterType Custom
    static constexpr const int Custom = 1;
    // Get static field: static public System.ComponentModel.ToolboxItemFilterType Custom
    static ::System::ComponentModel::ToolboxItemFilterType _get_Custom();
    // Set static field: static public System.ComponentModel.ToolboxItemFilterType Custom
    static void _set_Custom(::System::ComponentModel::ToolboxItemFilterType value);
    // static field const value: static public System.ComponentModel.ToolboxItemFilterType Prevent
    static constexpr const int Prevent = 2;
    // Get static field: static public System.ComponentModel.ToolboxItemFilterType Prevent
    static ::System::ComponentModel::ToolboxItemFilterType _get_Prevent();
    // Set static field: static public System.ComponentModel.ToolboxItemFilterType Prevent
    static void _set_Prevent(::System::ComponentModel::ToolboxItemFilterType value);
    // static field const value: static public System.ComponentModel.ToolboxItemFilterType Require
    static constexpr const int Require = 3;
    // Get static field: static public System.ComponentModel.ToolboxItemFilterType Require
    static ::System::ComponentModel::ToolboxItemFilterType _get_Require();
    // Set static field: static public System.ComponentModel.ToolboxItemFilterType Require
    static void _set_Require(::System::ComponentModel::ToolboxItemFilterType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.ToolboxItemFilterType
  #pragma pack(pop)
  static check_size<sizeof(ToolboxItemFilterType), 0 + sizeof(int)> __System_ComponentModel_ToolboxItemFilterTypeSizeCheck;
  static_assert(sizeof(ToolboxItemFilterType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
