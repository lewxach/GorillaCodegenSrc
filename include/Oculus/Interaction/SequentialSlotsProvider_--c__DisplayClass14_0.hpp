// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.SequentialSlotsProvider
#include "Oculus/Interaction/SequentialSlotsProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::SequentialSlotsProvider::$$c__DisplayClass14_0, "Oculus.Interaction", "SequentialSlotsProvider/<>c__DisplayClass14_0");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct SequentialSlotsProvider::$$c__DisplayClass14_0/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean forwardDirection
    // Size: 0x1
    // Offset: 0x0
    bool forwardDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: $$c__DisplayClass14_0
    constexpr $$c__DisplayClass14_0(bool forwardDirection_ = {}) noexcept : forwardDirection{forwardDirection_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return forwardDirection;
    }
    // Get instance field reference: public System.Boolean forwardDirection
    [[deprecated("Use field access instead!")]] bool& dyn_forwardDirection();
  }; // Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(SequentialSlotsProvider::$$c__DisplayClass14_0), 0 + sizeof(bool)> __Oculus_Interaction_SequentialSlotsProvider_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(SequentialSlotsProvider::$$c__DisplayClass14_0) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
