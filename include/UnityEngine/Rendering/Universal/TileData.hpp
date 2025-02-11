// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: TileData
  struct TileData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TileData, "UnityEngine.Rendering.Universal", "TileData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.TileData
  // [TokenAttribute] Offset: FFFFFFFF
  struct TileData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 tileID
    // Size: 0x4
    // Offset: 0x0
    uint tileID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 listBitMask
    // Size: 0x4
    // Offset: 0x4
    uint listBitMask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 relLightOffset
    // Size: 0x4
    // Offset: 0x8
    uint relLightOffset;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 unused
    // Size: 0x4
    // Offset: 0xC
    uint unused;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: TileData
    constexpr TileData(uint tileID_ = {}, uint listBitMask_ = {}, uint relLightOffset_ = {}, uint unused_ = {}) noexcept : tileID{tileID_}, listBitMask{listBitMask_}, relLightOffset{relLightOffset_}, unused{unused_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 tileID
    [[deprecated("Use field access instead!")]] uint& dyn_tileID();
    // Get instance field reference: public System.UInt32 listBitMask
    [[deprecated("Use field access instead!")]] uint& dyn_listBitMask();
    // Get instance field reference: public System.UInt32 relLightOffset
    [[deprecated("Use field access instead!")]] uint& dyn_relLightOffset();
    // Get instance field reference: public System.UInt32 unused
    [[deprecated("Use field access instead!")]] uint& dyn_unused();
  }; // UnityEngine.Rendering.Universal.TileData
  #pragma pack(pop)
  static check_size<sizeof(TileData), 12 + sizeof(uint)> __UnityEngine_Rendering_Universal_TileDataSizeCheck;
  static_assert(sizeof(TileData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
