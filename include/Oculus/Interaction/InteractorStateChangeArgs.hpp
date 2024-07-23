// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Interaction.InteractorState
#include "Oculus/Interaction/InteractorState.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::InteractorStateChangeArgs, "Oculus.Interaction", "InteractorStateChangeArgs");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.InteractorStateChangeArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct InteractorStateChangeArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly Oculus.Interaction.InteractorState <PreviousState>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::Oculus::Interaction::InteractorState PreviousState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::InteractorState) == 0x4);
    // private readonly Oculus.Interaction.InteractorState <NewState>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    ::Oculus::Interaction::InteractorState NewState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::InteractorState) == 0x4);
    public:
    // Creating value type constructor for type: InteractorStateChangeArgs
    constexpr InteractorStateChangeArgs(::Oculus::Interaction::InteractorState PreviousState_ = {}, ::Oculus::Interaction::InteractorState NewState_ = {}) noexcept : PreviousState{PreviousState_}, NewState{NewState_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly Oculus.Interaction.InteractorState <PreviousState>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::InteractorState& dyn_$PreviousState$k__BackingField();
    // Get instance field reference: private readonly Oculus.Interaction.InteractorState <NewState>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::InteractorState& dyn_$NewState$k__BackingField();
    // public Oculus.Interaction.InteractorState get_PreviousState()
    // Offset: 0x4783368
    ::Oculus::Interaction::InteractorState get_PreviousState();
    // public Oculus.Interaction.InteractorState get_NewState()
    // Offset: 0x4783370
    ::Oculus::Interaction::InteractorState get_NewState();
    // public System.Void .ctor(Oculus.Interaction.InteractorState previousState, Oculus.Interaction.InteractorState newState)
    // Offset: 0x477B4A0
    // ABORTED: conflicts with another method.  InteractorStateChangeArgs(::Oculus::Interaction::InteractorState previousState, ::Oculus::Interaction::InteractorState newState);
  }; // Oculus.Interaction.InteractorStateChangeArgs
  #pragma pack(pop)
  static check_size<sizeof(InteractorStateChangeArgs), 4 + sizeof(::Oculus::Interaction::InteractorState)> __Oculus_Interaction_InteractorStateChangeArgsSizeCheck;
  static_assert(sizeof(InteractorStateChangeArgs) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::InteractorStateChangeArgs::get_PreviousState
// Il2CppName: get_PreviousState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::InteractorState (Oculus::Interaction::InteractorStateChangeArgs::*)()>(&Oculus::Interaction::InteractorStateChangeArgs::get_PreviousState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorStateChangeArgs), "get_PreviousState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorStateChangeArgs::get_NewState
// Il2CppName: get_NewState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::InteractorState (Oculus::Interaction::InteractorStateChangeArgs::*)()>(&Oculus::Interaction::InteractorStateChangeArgs::get_NewState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InteractorStateChangeArgs), "get_NewState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InteractorStateChangeArgs::InteractorStateChangeArgs
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!