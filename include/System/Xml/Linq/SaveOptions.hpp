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
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: SaveOptions
  struct SaveOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::SaveOptions, "System.Xml.Linq", "SaveOptions");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.SaveOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SaveOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SaveOptions
    constexpr SaveOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Linq.SaveOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Linq.SaveOptions None
    static ::System::Xml::Linq::SaveOptions _get_None();
    // Set static field: static public System.Xml.Linq.SaveOptions None
    static void _set_None(::System::Xml::Linq::SaveOptions value);
    // static field const value: static public System.Xml.Linq.SaveOptions DisableFormatting
    static constexpr const int DisableFormatting = 1;
    // Get static field: static public System.Xml.Linq.SaveOptions DisableFormatting
    static ::System::Xml::Linq::SaveOptions _get_DisableFormatting();
    // Set static field: static public System.Xml.Linq.SaveOptions DisableFormatting
    static void _set_DisableFormatting(::System::Xml::Linq::SaveOptions value);
    // static field const value: static public System.Xml.Linq.SaveOptions OmitDuplicateNamespaces
    static constexpr const int OmitDuplicateNamespaces = 2;
    // Get static field: static public System.Xml.Linq.SaveOptions OmitDuplicateNamespaces
    static ::System::Xml::Linq::SaveOptions _get_OmitDuplicateNamespaces();
    // Set static field: static public System.Xml.Linq.SaveOptions OmitDuplicateNamespaces
    static void _set_OmitDuplicateNamespaces(::System::Xml::Linq::SaveOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Linq.SaveOptions
  #pragma pack(pop)
  static check_size<sizeof(SaveOptions), 0 + sizeof(int)> __System_Xml_Linq_SaveOptionsSizeCheck;
  static_assert(sizeof(SaveOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
