// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.HandGrab.HandGrabUseInteractor
#include "Oculus/Interaction/HandGrab/HandGrabUseInteractor.hpp"
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
// Forward declaring namespace: Oculus::Interaction::HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: IHandGrabState
  class IHandGrabState;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c*, "Oculus.Interaction.HandGrab", "HandGrabUseInteractor/<>c");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HandGrabUseInteractor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c <>9
    static ::Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c <>9
    static void _set_$$9(::Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c* value);
    // Get static field: static public System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> <>9__58_0
    static ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* _get_$$9__58_0();
    // Set static field: static public System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> <>9__58_0
    static void _set_$$9__58_0(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* value);
    // Get static field: static public System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> <>9__58_1
    static ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* _get_$$9__58_1();
    // Set static field: static public System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> <>9__58_1
    static void _set_$$9__58_1(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* value);
    // static private System.Void .cctor()
    // Offset: 0x482D554
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x482D5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandGrabUseInteractor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandGrabUseInteractor::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__58_0(Oculus.Interaction.HandGrab.IHandGrabState <p0>)
    // Offset: 0x482D5C4
    void $_ctor$b__58_0(::Oculus::Interaction::HandGrab::IHandGrabState* $p0$);
    // System.Void <.ctor>b__58_1(Oculus.Interaction.HandGrab.IHandGrabState <p0>)
    // Offset: 0x482D5C8
    void $_ctor$b__58_1(::Oculus::Interaction::HandGrab::IHandGrabState* $p0$);
  }; // Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::$_ctor$b__58_0
// Il2CppName: <.ctor>b__58_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::$_ctor$b__58_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c*), "<.ctor>b__58_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::$_ctor$b__58_1
// Il2CppName: <.ctor>b__58_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c::$_ctor$b__58_1)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "IHandGrabState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabUseInteractor::$$c*), "<.ctor>b__58_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
