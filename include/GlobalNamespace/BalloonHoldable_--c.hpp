// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BalloonHoldable
#include "GlobalNamespace/BalloonHoldable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BalloonHoldable::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BalloonHoldable::$$c*, "", "BalloonHoldable/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BalloonHoldable/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BalloonHoldable::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BalloonHoldable/<>c <>9
    static ::GlobalNamespace::BalloonHoldable::$$c* _get_$$9();
    // Set static field: static public readonly BalloonHoldable/<>c <>9
    static void _set_$$9(::GlobalNamespace::BalloonHoldable::$$c* value);
    // Get static field: static public System.Action <>9__48_0
    static ::System::Action* _get_$$9__48_0();
    // Set static field: static public System.Action <>9__48_0
    static void _set_$$9__48_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x29666E8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2966750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BalloonHoldable::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BalloonHoldable::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BalloonHoldable::$$c*, creationType>()));
    }
    // System.Void <OnTriggerEnter>b__48_0()
    // Offset: 0x2966758
    void $OnTriggerEnter$b__48_0();
  }; // BalloonHoldable/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BalloonHoldable::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BalloonHoldable::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BalloonHoldable::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BalloonHoldable::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BalloonHoldable::$$c::$OnTriggerEnter$b__48_0
// Il2CppName: <OnTriggerEnter>b__48_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BalloonHoldable::$$c::*)()>(&GlobalNamespace::BalloonHoldable::$$c::$OnTriggerEnter$b__48_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BalloonHoldable::$$c*), "<OnTriggerEnter>b__48_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
