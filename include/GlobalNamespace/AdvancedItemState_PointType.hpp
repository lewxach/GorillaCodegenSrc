// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedItemState
#include "GlobalNamespace/AdvancedItemState.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdvancedItemState::PointType, "", "AdvancedItemState/PointType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedItemState/PointType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AdvancedItemState::PointType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PointType
    constexpr PointType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AdvancedItemState/PointType Standard
    static constexpr const int Standard = 0;
    // Get static field: static public AdvancedItemState/PointType Standard
    static ::GlobalNamespace::AdvancedItemState::PointType _get_Standard();
    // Set static field: static public AdvancedItemState/PointType Standard
    static void _set_Standard(::GlobalNamespace::AdvancedItemState::PointType value);
    // static field const value: static public AdvancedItemState/PointType DistanceBased
    static constexpr const int DistanceBased = 1;
    // Get static field: static public AdvancedItemState/PointType DistanceBased
    static ::GlobalNamespace::AdvancedItemState::PointType _get_DistanceBased();
    // Set static field: static public AdvancedItemState/PointType DistanceBased
    static void _set_DistanceBased(::GlobalNamespace::AdvancedItemState::PointType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AdvancedItemState/PointType
  #pragma pack(pop)
  static check_size<sizeof(AdvancedItemState::PointType), 0 + sizeof(int)> __GlobalNamespace_AdvancedItemState_PointTypeSizeCheck;
  static_assert(sizeof(AdvancedItemState::PointType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"