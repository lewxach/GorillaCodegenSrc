// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRRig
#include "GlobalNamespace/VRRig.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRRig::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRRig::$$c*, "", "VRRig/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRRig/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VRRig::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly VRRig/<>c <>9
    static ::GlobalNamespace::VRRig::$$c* _get_$$9();
    // Set static field: static public readonly VRRig/<>c <>9
    static void _set_$$9(::GlobalNamespace::VRRig::$$c* value);
    // Get static field: static public System.Predicate`1<System.Char> <>9__262_0
    static ::System::Predicate_1<::Il2CppChar>* _get_$$9__262_0();
    // Set static field: static public System.Predicate`1<System.Char> <>9__262_0
    static void _set_$$9__262_0(::System::Predicate_1<::Il2CppChar>* value);
    // Get static field: static public System.Action`1<UnityEngine.Color> <>9__307_0
    static ::System::Action_1<::UnityEngine::Color>* _get_$$9__307_0();
    // Set static field: static public System.Action`1<UnityEngine.Color> <>9__307_0
    static void _set_$$9__307_0(::System::Action_1<::UnityEngine::Color>* value);
    // static private System.Void .cctor()
    // Offset: 0x26A6B6C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x26A6BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRRig::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRRig::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRRig::$$c*, creationType>()));
    }
    // System.Boolean <NormalizeName>b__262_0(System.Char c)
    // Offset: 0x26A6BDC
    bool $NormalizeName$b__262_0(::Il2CppChar c);
    // System.Void <SetColor>b__307_0(UnityEngine.Color color1)
    // Offset: 0x26A6C34
    void $SetColor$b__307_0(::UnityEngine::Color color1);
  }; // VRRig/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRRig::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::VRRig::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRRig::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRRig::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRRig::$$c::$NormalizeName$b__262_0
// Il2CppName: <NormalizeName>b__262_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VRRig::$$c::*)(::Il2CppChar)>(&GlobalNamespace::VRRig::$$c::$NormalizeName$b__262_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRRig::$$c*), "<NormalizeName>b__262_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRRig::$$c::$SetColor$b__307_0
// Il2CppName: <SetColor>b__307_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRRig::$$c::*)(::UnityEngine::Color)>(&GlobalNamespace::VRRig::$$c::$SetColor$b__307_0)> {
  static const MethodInfo* get() {
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRRig::$$c*), "<SetColor>b__307_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color1});
  }
};