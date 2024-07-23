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
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardTextureIdsInternal, "", "OVRPlugin/VirtualKeyboardTextureIdsInternal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardTextureIdsInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardTextureIdsInternal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 TextureIdCapacityInput
    // Size: 0x4
    // Offset: 0x0
    uint TextureIdCapacityInput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 TextureIdCountOutput
    // Size: 0x4
    // Offset: 0x4
    uint TextureIdCountOutput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr TextureIdsBuffer
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr TextureIdsBuffer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: VirtualKeyboardTextureIdsInternal
    constexpr VirtualKeyboardTextureIdsInternal(uint TextureIdCapacityInput_ = {}, uint TextureIdCountOutput_ = {}, ::System::IntPtr TextureIdsBuffer_ = {}) noexcept : TextureIdCapacityInput{TextureIdCapacityInput_}, TextureIdCountOutput{TextureIdCountOutput_}, TextureIdsBuffer{TextureIdsBuffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 TextureIdCapacityInput
    [[deprecated("Use field access instead!")]] uint& dyn_TextureIdCapacityInput();
    // Get instance field reference: public System.UInt32 TextureIdCountOutput
    [[deprecated("Use field access instead!")]] uint& dyn_TextureIdCountOutput();
    // Get instance field reference: public System.IntPtr TextureIdsBuffer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_TextureIdsBuffer();
  }; // OVRPlugin/VirtualKeyboardTextureIdsInternal
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardTextureIdsInternal), 8 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_VirtualKeyboardTextureIdsInternalSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardTextureIdsInternal) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"