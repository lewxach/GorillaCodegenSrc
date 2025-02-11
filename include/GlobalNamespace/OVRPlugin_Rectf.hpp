// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Including type: OVRPlugin/Sizef
#include "GlobalNamespace/OVRPlugin_Sizef.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Rectf, "", "OVRPlugin/Rectf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Rectf
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Rectf/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/Vector2f Pos
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Vector2f Pos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Sizef Size
    // Size: 0x8
    // Offset: 0x8
    ::GlobalNamespace::OVRPlugin::Sizef Size;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Sizef) == 0x8);
    public:
    // Creating value type constructor for type: Rectf
    constexpr Rectf(::GlobalNamespace::OVRPlugin::Vector2f Pos_ = {}, ::GlobalNamespace::OVRPlugin::Sizef Size_ = {}) noexcept : Pos{Pos_}, Size{Size_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/Vector2f Pos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_Pos();
    // Get instance field reference: public OVRPlugin/Sizef Size
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Sizef& dyn_Size();
  }; // OVRPlugin/Rectf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Rectf), 8 + sizeof(::GlobalNamespace::OVRPlugin::Sizef)> __GlobalNamespace_OVRPlugin_RectfSizeCheck;
  static_assert(sizeof(OVRPlugin::Rectf) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
