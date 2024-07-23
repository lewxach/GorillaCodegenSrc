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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardModelAnimationStatesInternal, "", "OVRPlugin/VirtualKeyboardModelAnimationStatesInternal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardModelAnimationStatesInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardModelAnimationStatesInternal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 StateCapacityInput
    // Size: 0x4
    // Offset: 0x0
    uint StateCapacityInput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 StateCountOutput
    // Size: 0x4
    // Offset: 0x4
    uint StateCountOutput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr StatesBuffer
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr StatesBuffer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: VirtualKeyboardModelAnimationStatesInternal
    constexpr VirtualKeyboardModelAnimationStatesInternal(uint StateCapacityInput_ = {}, uint StateCountOutput_ = {}, ::System::IntPtr StatesBuffer_ = {}) noexcept : StateCapacityInput{StateCapacityInput_}, StateCountOutput{StateCountOutput_}, StatesBuffer{StatesBuffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 StateCapacityInput
    [[deprecated("Use field access instead!")]] uint& dyn_StateCapacityInput();
    // Get instance field reference: public System.UInt32 StateCountOutput
    [[deprecated("Use field access instead!")]] uint& dyn_StateCountOutput();
    // Get instance field reference: public System.IntPtr StatesBuffer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_StatesBuffer();
  }; // OVRPlugin/VirtualKeyboardModelAnimationStatesInternal
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardModelAnimationStatesInternal), 8 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_VirtualKeyboardModelAnimationStatesInternalSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardModelAnimationStatesInternal) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"