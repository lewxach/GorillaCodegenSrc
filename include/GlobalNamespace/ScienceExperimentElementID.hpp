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
  // Forward declaring type: ScienceExperimentElementID
  struct ScienceExperimentElementID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScienceExperimentElementID, "", "ScienceExperimentElementID");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ScienceExperimentElementID
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScienceExperimentElementID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ScienceExperimentElementID
    constexpr ScienceExperimentElementID(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ScienceExperimentElementID Platform1
    static constexpr const int Platform1 = 0;
    // Get static field: static public ScienceExperimentElementID Platform1
    static ::GlobalNamespace::ScienceExperimentElementID _get_Platform1();
    // Set static field: static public ScienceExperimentElementID Platform1
    static void _set_Platform1(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID Platform2
    static constexpr const int Platform2 = 1;
    // Get static field: static public ScienceExperimentElementID Platform2
    static ::GlobalNamespace::ScienceExperimentElementID _get_Platform2();
    // Set static field: static public ScienceExperimentElementID Platform2
    static void _set_Platform2(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID Platform3
    static constexpr const int Platform3 = 2;
    // Get static field: static public ScienceExperimentElementID Platform3
    static ::GlobalNamespace::ScienceExperimentElementID _get_Platform3();
    // Set static field: static public ScienceExperimentElementID Platform3
    static void _set_Platform3(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID Platform4
    static constexpr const int Platform4 = 3;
    // Get static field: static public ScienceExperimentElementID Platform4
    static ::GlobalNamespace::ScienceExperimentElementID _get_Platform4();
    // Set static field: static public ScienceExperimentElementID Platform4
    static void _set_Platform4(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID Platform5
    static constexpr const int Platform5 = 4;
    // Get static field: static public ScienceExperimentElementID Platform5
    static ::GlobalNamespace::ScienceExperimentElementID _get_Platform5();
    // Set static field: static public ScienceExperimentElementID Platform5
    static void _set_Platform5(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID LiquidMesh
    static constexpr const int LiquidMesh = 5;
    // Get static field: static public ScienceExperimentElementID LiquidMesh
    static ::GlobalNamespace::ScienceExperimentElementID _get_LiquidMesh();
    // Set static field: static public ScienceExperimentElementID LiquidMesh
    static void _set_LiquidMesh(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID EntryChamberLiquidMesh
    static constexpr const int EntryChamberLiquidMesh = 6;
    // Get static field: static public ScienceExperimentElementID EntryChamberLiquidMesh
    static ::GlobalNamespace::ScienceExperimentElementID _get_EntryChamberLiquidMesh();
    // Set static field: static public ScienceExperimentElementID EntryChamberLiquidMesh
    static void _set_EntryChamberLiquidMesh(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID EntryChamberBridgeQuad
    static constexpr const int EntryChamberBridgeQuad = 7;
    // Get static field: static public ScienceExperimentElementID EntryChamberBridgeQuad
    static ::GlobalNamespace::ScienceExperimentElementID _get_EntryChamberBridgeQuad();
    // Set static field: static public ScienceExperimentElementID EntryChamberBridgeQuad
    static void _set_EntryChamberBridgeQuad(::GlobalNamespace::ScienceExperimentElementID value);
    // static field const value: static public ScienceExperimentElementID DrainBlocker
    static constexpr const int DrainBlocker = 8;
    // Get static field: static public ScienceExperimentElementID DrainBlocker
    static ::GlobalNamespace::ScienceExperimentElementID _get_DrainBlocker();
    // Set static field: static public ScienceExperimentElementID DrainBlocker
    static void _set_DrainBlocker(::GlobalNamespace::ScienceExperimentElementID value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ScienceExperimentElementID
  #pragma pack(pop)
  static check_size<sizeof(ScienceExperimentElementID), 0 + sizeof(int)> __GlobalNamespace_ScienceExperimentElementIDSizeCheck;
  static_assert(sizeof(ScienceExperimentElementID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
