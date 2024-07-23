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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CrystalOctave
  struct CrystalOctave;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrystalOctave, "", "CrystalOctave");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: CrystalOctave
  // [TokenAttribute] Offset: FFFFFFFF
  struct CrystalOctave/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CrystalOctave
    constexpr CrystalOctave(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public CrystalOctave Low
    static constexpr const int Low = 0;
    // Get static field: static public CrystalOctave Low
    static ::GlobalNamespace::CrystalOctave _get_Low();
    // Set static field: static public CrystalOctave Low
    static void _set_Low(::GlobalNamespace::CrystalOctave value);
    // static field const value: static public CrystalOctave Middle
    static constexpr const int Middle = 1;
    // Get static field: static public CrystalOctave Middle
    static ::GlobalNamespace::CrystalOctave _get_Middle();
    // Set static field: static public CrystalOctave Middle
    static void _set_Middle(::GlobalNamespace::CrystalOctave value);
    // static field const value: static public CrystalOctave High
    static constexpr const int High = 2;
    // Get static field: static public CrystalOctave High
    static ::GlobalNamespace::CrystalOctave _get_High();
    // Set static field: static public CrystalOctave High
    static void _set_High(::GlobalNamespace::CrystalOctave value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // CrystalOctave
  #pragma pack(pop)
  static check_size<sizeof(CrystalOctave), 0 + sizeof(int)> __GlobalNamespace_CrystalOctaveSizeCheck;
  static_assert(sizeof(CrystalOctave) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"