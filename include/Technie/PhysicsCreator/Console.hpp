// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Logger
  class Logger;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: Console
  class Console;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Console);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Console*, "Technie.PhysicsCreator", "Console");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Console
  // [TokenAttribute] Offset: FFFFFFFF
  class Console : public ::Il2CppObject {
    public:
    // static field const value: static public System.Boolean IS_DEBUG_OUTPUT_ENABLED
    static constexpr const bool IS_DEBUG_OUTPUT_ENABLED = false;
    // Get static field: static public System.Boolean IS_DEBUG_OUTPUT_ENABLED
    static bool _get_IS_DEBUG_OUTPUT_ENABLED();
    // Set static field: static public System.Boolean IS_DEBUG_OUTPUT_ENABLED
    static void _set_IS_DEBUG_OUTPUT_ENABLED(bool value);
    // static field const value: static public System.Boolean SHOW_SHADOW_HIERARCHY
    static constexpr const bool SHOW_SHADOW_HIERARCHY = false;
    // Get static field: static public System.Boolean SHOW_SHADOW_HIERARCHY
    static bool _get_SHOW_SHADOW_HIERARCHY();
    // Set static field: static public System.Boolean SHOW_SHADOW_HIERARCHY
    static void _set_SHOW_SHADOW_HIERARCHY(bool value);
    // static field const value: static public System.Boolean ENABLE_JOINT_SUPPORT
    static constexpr const bool ENABLE_JOINT_SUPPORT = false;
    // Get static field: static public System.Boolean ENABLE_JOINT_SUPPORT
    static bool _get_ENABLE_JOINT_SUPPORT();
    // Set static field: static public System.Boolean ENABLE_JOINT_SUPPORT
    static void _set_ENABLE_JOINT_SUPPORT(bool value);
    // Get static field: static public System.String Technie
    static ::StringW _get_Technie();
    // Set static field: static public System.String Technie
    static void _set_Technie(::StringW value);
    // Get static field: static public UnityEngine.Logger output
    static ::UnityEngine::Logger* _get_output();
    // Set static field: static public UnityEngine.Logger output
    static void _set_output(::UnityEngine::Logger* value);
    // static private System.Void .cctor()
    // Offset: 0x5022700
    static void _cctor();
  }; // Technie.PhysicsCreator.Console
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Console::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Technie::PhysicsCreator::Console::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::Console*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};