// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVirtualKeyboard
#include "GlobalNamespace/OVRVirtualKeyboard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::$$c*, "", "OVRVirtualKeyboard/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRVirtualKeyboard/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboard::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRVirtualKeyboard/<>c <>9
    static ::GlobalNamespace::OVRVirtualKeyboard::$$c* _get_$$9();
    // Set static field: static public readonly OVRVirtualKeyboard/<>c <>9
    static void _set_$$9(::GlobalNamespace::OVRVirtualKeyboard::$$c* value);
    // Get static field: static public System.Func`2<System.String,System.Boolean> <>9__75_0
    static ::System::Func_2<::StringW, bool>* _get_$$9__75_0();
    // Set static field: static public System.Func`2<System.String,System.Boolean> <>9__75_0
    static void _set_$$9__75_0(::System::Func_2<::StringW, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.MeshFilter,System.Boolean> <>9__77_0
    static ::System::Func_2<::UnityEngine::MeshFilter*, bool>* _get_$$9__77_0();
    // Set static field: static public System.Func`2<UnityEngine.MeshFilter,System.Boolean> <>9__77_0
    static void _set_$$9__77_0(::System::Func_2<::UnityEngine::MeshFilter*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x493BEE4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x493BF4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboard::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboard::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboard::$$c*, creationType>()));
    }
    // System.Boolean <LoadRuntimeVirtualKeyboardMesh>b__75_0(System.String p)
    // Offset: 0x493BF54
    bool $LoadRuntimeVirtualKeyboardMesh$b__75_0(::StringW p);
    // System.Boolean <PopulateCollision>b__77_0(UnityEngine.MeshFilter mesh)
    // Offset: 0x493BFE0
    bool $PopulateCollision$b__77_0(::UnityEngine::MeshFilter* mesh);
  }; // OVRVirtualKeyboard/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRVirtualKeyboard::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::$$c::$LoadRuntimeVirtualKeyboardMesh$b__75_0
// Il2CppName: <LoadRuntimeVirtualKeyboardMesh>b__75_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVirtualKeyboard::$$c::*)(::StringW)>(&GlobalNamespace::OVRVirtualKeyboard::$$c::$LoadRuntimeVirtualKeyboardMesh$b__75_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::$$c*), "<LoadRuntimeVirtualKeyboardMesh>b__75_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::$$c::$PopulateCollision$b__77_0
// Il2CppName: <PopulateCollision>b__77_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVirtualKeyboard::$$c::*)(::UnityEngine::MeshFilter*)>(&GlobalNamespace::OVRVirtualKeyboard::$$c::$PopulateCollision$b__77_0)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::$$c*), "<PopulateCollision>b__77_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};