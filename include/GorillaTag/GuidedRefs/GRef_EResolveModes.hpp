// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.GuidedRefs.GRef
#include "GorillaTag/GuidedRefs/GRef.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GuidedRefs::GRef::EResolveModes, "GorillaTag.GuidedRefs", "GRef/EResolveModes");
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GuidedRefs.GRef/EResolveModes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct GRef::EResolveModes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EResolveModes
    constexpr EResolveModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaTag.GuidedRefs.GRef/EResolveModes None
    static constexpr const int None = 0;
    // Get static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes None
    static ::GorillaTag::GuidedRefs::GRef::EResolveModes _get_None();
    // Set static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes None
    static void _set_None(::GorillaTag::GuidedRefs::GRef::EResolveModes value);
    // static field const value: static public GorillaTag.GuidedRefs.GRef/EResolveModes Runtime
    static constexpr const int Runtime = 1;
    // Get static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes Runtime
    static ::GorillaTag::GuidedRefs::GRef::EResolveModes _get_Runtime();
    // Set static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes Runtime
    static void _set_Runtime(::GorillaTag::GuidedRefs::GRef::EResolveModes value);
    // static field const value: static public GorillaTag.GuidedRefs.GRef/EResolveModes SceneProcessing
    static constexpr const int SceneProcessing = 2;
    // Get static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes SceneProcessing
    static ::GorillaTag::GuidedRefs::GRef::EResolveModes _get_SceneProcessing();
    // Set static field: static public GorillaTag.GuidedRefs.GRef/EResolveModes SceneProcessing
    static void _set_SceneProcessing(::GorillaTag::GuidedRefs::GRef::EResolveModes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaTag.GuidedRefs.GRef/EResolveModes
  #pragma pack(pop)
  static check_size<sizeof(GRef::EResolveModes), 0 + sizeof(int)> __GorillaTag_GuidedRefs_GRef_EResolveModesSizeCheck;
  static_assert(sizeof(GRef::EResolveModes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"