// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.OverrideTransformJob
#include "UnityEngine/Animations/Rigging/OverrideTransformJob.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::OverrideTransformJob::Space, "UnityEngine.Animations.Rigging", "OverrideTransformJob/Space");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.OverrideTransformJob/Space
  // [TokenAttribute] Offset: FFFFFFFF
  struct OverrideTransformJob::Space/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Space
    constexpr Space(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space World
    static constexpr const int World = 0;
    // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space World
    static ::UnityEngine::Animations::Rigging::OverrideTransformJob::Space _get_World();
    // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space World
    static void _set_World(::UnityEngine::Animations::Rigging::OverrideTransformJob::Space value);
    // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Local
    static constexpr const int Local = 1;
    // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Local
    static ::UnityEngine::Animations::Rigging::OverrideTransformJob::Space _get_Local();
    // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Local
    static void _set_Local(::UnityEngine::Animations::Rigging::OverrideTransformJob::Space value);
    // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Pivot
    static constexpr const int Pivot = 2;
    // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Pivot
    static ::UnityEngine::Animations::Rigging::OverrideTransformJob::Space _get_Pivot();
    // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformJob/Space Pivot
    static void _set_Pivot(::UnityEngine::Animations::Rigging::OverrideTransformJob::Space value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Animations.Rigging.OverrideTransformJob/Space
  #pragma pack(pop)
  static check_size<sizeof(OverrideTransformJob::Space), 0 + sizeof(int)> __UnityEngine_Animations_Rigging_OverrideTransformJob_SpaceSizeCheck;
  static_assert(sizeof(OverrideTransformJob::Space) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
