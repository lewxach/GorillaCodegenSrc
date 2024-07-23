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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ColumnDataType
  struct ColumnDataType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnDataType, "UnityEngine.UIElements", "ColumnDataType");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ColumnDataType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColumnDataType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ColumnDataType
    constexpr ColumnDataType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Name
    static constexpr const int Name = 0;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Name
    static ::UnityEngine::UIElements::ColumnDataType _get_Name();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Name
    static void _set_Name(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Title
    static constexpr const int Title = 1;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Title
    static ::UnityEngine::UIElements::ColumnDataType _get_Title();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Title
    static void _set_Title(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Icon
    static constexpr const int Icon = 2;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Icon
    static ::UnityEngine::UIElements::ColumnDataType _get_Icon();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Icon
    static void _set_Icon(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Visibility
    static constexpr const int Visibility = 3;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Visibility
    static ::UnityEngine::UIElements::ColumnDataType _get_Visibility();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Visibility
    static void _set_Visibility(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Width
    static constexpr const int Width = 4;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Width
    static ::UnityEngine::UIElements::ColumnDataType _get_Width();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Width
    static void _set_Width(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType MaxWidth
    static constexpr const int MaxWidth = 5;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType MaxWidth
    static ::UnityEngine::UIElements::ColumnDataType _get_MaxWidth();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType MaxWidth
    static void _set_MaxWidth(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType MinWidth
    static constexpr const int MinWidth = 6;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType MinWidth
    static ::UnityEngine::UIElements::ColumnDataType _get_MinWidth();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType MinWidth
    static void _set_MinWidth(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Stretchable
    static constexpr const int Stretchable = 7;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Stretchable
    static ::UnityEngine::UIElements::ColumnDataType _get_Stretchable();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Stretchable
    static void _set_Stretchable(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Sortable
    static constexpr const int Sortable = 8;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Sortable
    static ::UnityEngine::UIElements::ColumnDataType _get_Sortable();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Sortable
    static void _set_Sortable(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Optional
    static constexpr const int Optional = 9;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Optional
    static ::UnityEngine::UIElements::ColumnDataType _get_Optional();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Optional
    static void _set_Optional(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType Resizable
    static constexpr const int Resizable = 10;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType Resizable
    static ::UnityEngine::UIElements::ColumnDataType _get_Resizable();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType Resizable
    static void _set_Resizable(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType HeaderTemplate
    static constexpr const int HeaderTemplate = 11;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType HeaderTemplate
    static ::UnityEngine::UIElements::ColumnDataType _get_HeaderTemplate();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType HeaderTemplate
    static void _set_HeaderTemplate(::UnityEngine::UIElements::ColumnDataType value);
    // static field const value: static public UnityEngine.UIElements.ColumnDataType CellTemplate
    static constexpr const int CellTemplate = 12;
    // Get static field: static public UnityEngine.UIElements.ColumnDataType CellTemplate
    static ::UnityEngine::UIElements::ColumnDataType _get_CellTemplate();
    // Set static field: static public UnityEngine.UIElements.ColumnDataType CellTemplate
    static void _set_CellTemplate(::UnityEngine::UIElements::ColumnDataType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.ColumnDataType
  #pragma pack(pop)
  static check_size<sizeof(ColumnDataType), 0 + sizeof(int)> __UnityEngine_UIElements_ColumnDataTypeSizeCheck;
  static_assert(sizeof(ColumnDataType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"