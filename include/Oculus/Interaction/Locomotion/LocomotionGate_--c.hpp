// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Locomotion.LocomotionGate
#include "Oculus/Interaction/Locomotion/LocomotionGate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::LocomotionGate::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::LocomotionGate::$$c*, "Oculus.Interaction.Locomotion", "LocomotionGate/<>c");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.LocomotionGate/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocomotionGate::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.Locomotion.LocomotionGate/<>c <>9
    static ::Oculus::Interaction::Locomotion::LocomotionGate::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.Locomotion.LocomotionGate/<>c <>9
    static void _set_$$9(::Oculus::Interaction::Locomotion::LocomotionGate::$$c* value);
    // Get static field: static public System.Action`1<Oculus.Interaction.Locomotion.LocomotionGate/LocomotionModeEventArgs> <>9__65_0
    static ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionGate::LocomotionModeEventArgs>* _get_$$9__65_0();
    // Set static field: static public System.Action`1<Oculus.Interaction.Locomotion.LocomotionGate/LocomotionModeEventArgs> <>9__65_0
    static void _set_$$9__65_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionGate::LocomotionModeEventArgs>* value);
    // static private System.Void .cctor()
    // Offset: 0x4807758
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x48077C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionGate::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::LocomotionGate::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionGate::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__65_0(Oculus.Interaction.Locomotion.LocomotionGate/LocomotionModeEventArgs <p0>)
    // Offset: 0x48077C8
    void $_ctor$b__65_0(::Oculus::Interaction::Locomotion::LocomotionGate::LocomotionModeEventArgs $p0$);
  }; // Oculus.Interaction.Locomotion.LocomotionGate/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionGate::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Locomotion::LocomotionGate::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionGate::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionGate::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionGate::$$c::$_ctor$b__65_0
// Il2CppName: <.ctor>b__65_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::LocomotionGate::$$c::*)(::Oculus::Interaction::Locomotion::LocomotionGate::LocomotionModeEventArgs)>(&Oculus::Interaction::Locomotion::LocomotionGate::$$c::$_ctor$b__65_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Locomotion", "LocomotionGate/LocomotionModeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionGate::$$c*), "<.ctor>b__65_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};