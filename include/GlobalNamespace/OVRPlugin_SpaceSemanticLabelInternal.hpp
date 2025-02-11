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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SpaceSemanticLabelInternal, "", "OVRPlugin/SpaceSemanticLabelInternal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/SpaceSemanticLabelInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SpaceSemanticLabelInternal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 byteCapacityInput
    // Size: 0x4
    // Offset: 0x0
    int byteCapacityInput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 byteCountOutput
    // Size: 0x4
    // Offset: 0x4
    int byteCountOutput;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IntPtr labels
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr labels;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: SpaceSemanticLabelInternal
    constexpr SpaceSemanticLabelInternal(int byteCapacityInput_ = {}, int byteCountOutput_ = {}, ::System::IntPtr labels_ = {}) noexcept : byteCapacityInput{byteCapacityInput_}, byteCountOutput{byteCountOutput_}, labels{labels_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 byteCapacityInput
    [[deprecated("Use field access instead!")]] int& dyn_byteCapacityInput();
    // Get instance field reference: public System.Int32 byteCountOutput
    [[deprecated("Use field access instead!")]] int& dyn_byteCountOutput();
    // Get instance field reference: public System.IntPtr labels
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_labels();
  }; // OVRPlugin/SpaceSemanticLabelInternal
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SpaceSemanticLabelInternal), 8 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_SpaceSemanticLabelInternalSizeCheck;
  static_assert(sizeof(OVRPlugin::SpaceSemanticLabelInternal) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
