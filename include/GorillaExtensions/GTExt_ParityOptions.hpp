// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaExtensions.GTExt
#include "GorillaExtensions/GTExt.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaExtensions::GTExt::ParityOptions, "GorillaExtensions", "GTExt/ParityOptions");
// Type namespace: GorillaExtensions
namespace GorillaExtensions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaExtensions.GTExt/ParityOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct GTExt::ParityOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParityOptions
    constexpr ParityOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaExtensions.GTExt/ParityOptions XFlip
    static constexpr const int XFlip = 0;
    // Get static field: static public GorillaExtensions.GTExt/ParityOptions XFlip
    static ::GorillaExtensions::GTExt::ParityOptions _get_XFlip();
    // Set static field: static public GorillaExtensions.GTExt/ParityOptions XFlip
    static void _set_XFlip(::GorillaExtensions::GTExt::ParityOptions value);
    // static field const value: static public GorillaExtensions.GTExt/ParityOptions YFlip
    static constexpr const int YFlip = 1;
    // Get static field: static public GorillaExtensions.GTExt/ParityOptions YFlip
    static ::GorillaExtensions::GTExt::ParityOptions _get_YFlip();
    // Set static field: static public GorillaExtensions.GTExt/ParityOptions YFlip
    static void _set_YFlip(::GorillaExtensions::GTExt::ParityOptions value);
    // static field const value: static public GorillaExtensions.GTExt/ParityOptions ZFlip
    static constexpr const int ZFlip = 2;
    // Get static field: static public GorillaExtensions.GTExt/ParityOptions ZFlip
    static ::GorillaExtensions::GTExt::ParityOptions _get_ZFlip();
    // Set static field: static public GorillaExtensions.GTExt/ParityOptions ZFlip
    static void _set_ZFlip(::GorillaExtensions::GTExt::ParityOptions value);
    // static field const value: static public GorillaExtensions.GTExt/ParityOptions AllFlip
    static constexpr const int AllFlip = 3;
    // Get static field: static public GorillaExtensions.GTExt/ParityOptions AllFlip
    static ::GorillaExtensions::GTExt::ParityOptions _get_AllFlip();
    // Set static field: static public GorillaExtensions.GTExt/ParityOptions AllFlip
    static void _set_AllFlip(::GorillaExtensions::GTExt::ParityOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaExtensions.GTExt/ParityOptions
  #pragma pack(pop)
  static check_size<sizeof(GTExt::ParityOptions), 0 + sizeof(int)> __GorillaExtensions_GTExt_ParityOptionsSizeCheck;
  static_assert(sizeof(GTExt::ParityOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
