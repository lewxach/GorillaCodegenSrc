// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.GTAppState
#include "GorillaTag/GTAppState.hpp"
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
NEED_NO_BOX(::GorillaTag::GTAppState::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GTAppState::$$c*, "GorillaTag", "GTAppState/<>c");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GTAppState/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GTAppState::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GorillaTag.GTAppState/<>c <>9
    static ::GorillaTag::GTAppState::$$c* _get_$$9();
    // Set static field: static public readonly GorillaTag.GTAppState/<>c <>9
    static void _set_$$9(::GorillaTag::GTAppState::$$c* value);
    // Get static field: static public System.Action <>9__4_0
    static ::System::Action* _get_$$9__4_0();
    // Set static field: static public System.Action <>9__4_0
    static void _set_$$9__4_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x2879590
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x28795F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GTAppState::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::GTAppState::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GTAppState::$$c*, creationType>()));
    }
    // System.Void <HandleOnSubsystemRegistration>b__4_0()
    // Offset: 0x2879600
    void $HandleOnSubsystemRegistration$b__4_0();
  }; // GorillaTag.GTAppState/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GTAppState::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaTag::GTAppState::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTAppState::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTAppState::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaTag::GTAppState::$$c::$HandleOnSubsystemRegistration$b__4_0
// Il2CppName: <HandleOnSubsystemRegistration>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GTAppState::$$c::*)()>(&GorillaTag::GTAppState::$$c::$HandleOnSubsystemRegistration$b__4_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTAppState::$$c*), "<HandleOnSubsystemRegistration>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};