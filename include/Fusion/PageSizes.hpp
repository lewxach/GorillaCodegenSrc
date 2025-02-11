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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: PageSizes
  struct PageSizes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::PageSizes, "Fusion", "PageSizes");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.PageSizes
  // [TokenAttribute] Offset: FFFFFFFF
  struct PageSizes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PageSizes
    constexpr PageSizes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.PageSizes _1Kb
    static constexpr const int _1Kb = 10;
    // Get static field: static public Fusion.PageSizes _1Kb
    static ::Fusion::PageSizes _get__1Kb();
    // Set static field: static public Fusion.PageSizes _1Kb
    static void _set__1Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _2Kb
    static constexpr const int _2Kb = 11;
    // Get static field: static public Fusion.PageSizes _2Kb
    static ::Fusion::PageSizes _get__2Kb();
    // Set static field: static public Fusion.PageSizes _2Kb
    static void _set__2Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _4Kb
    static constexpr const int _4Kb = 12;
    // Get static field: static public Fusion.PageSizes _4Kb
    static ::Fusion::PageSizes _get__4Kb();
    // Set static field: static public Fusion.PageSizes _4Kb
    static void _set__4Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _8Kb
    static constexpr const int _8Kb = 13;
    // Get static field: static public Fusion.PageSizes _8Kb
    static ::Fusion::PageSizes _get__8Kb();
    // Set static field: static public Fusion.PageSizes _8Kb
    static void _set__8Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _16Kb
    static constexpr const int _16Kb = 14;
    // Get static field: static public Fusion.PageSizes _16Kb
    static ::Fusion::PageSizes _get__16Kb();
    // Set static field: static public Fusion.PageSizes _16Kb
    static void _set__16Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _32Kb
    static constexpr const int _32Kb = 15;
    // Get static field: static public Fusion.PageSizes _32Kb
    static ::Fusion::PageSizes _get__32Kb();
    // Set static field: static public Fusion.PageSizes _32Kb
    static void _set__32Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _64Kb
    static constexpr const int _64Kb = 16;
    // Get static field: static public Fusion.PageSizes _64Kb
    static ::Fusion::PageSizes _get__64Kb();
    // Set static field: static public Fusion.PageSizes _64Kb
    static void _set__64Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _128Kb
    static constexpr const int _128Kb = 17;
    // Get static field: static public Fusion.PageSizes _128Kb
    static ::Fusion::PageSizes _get__128Kb();
    // Set static field: static public Fusion.PageSizes _128Kb
    static void _set__128Kb(::Fusion::PageSizes value);
    // static field const value: static public Fusion.PageSizes _256Kb
    static constexpr const int _256Kb = 18;
    // Get static field: static public Fusion.PageSizes _256Kb
    static ::Fusion::PageSizes _get__256Kb();
    // Set static field: static public Fusion.PageSizes _256Kb
    static void _set__256Kb(::Fusion::PageSizes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.PageSizes
  #pragma pack(pop)
  static check_size<sizeof(PageSizes), 0 + sizeof(int)> __Fusion_PageSizesSizeCheck;
  static_assert(sizeof(PageSizes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
