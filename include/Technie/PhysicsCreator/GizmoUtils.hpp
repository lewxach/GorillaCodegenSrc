// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: GizmoUtils
  class GizmoUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::GizmoUtils);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::GizmoUtils*, "Technie.PhysicsCreator", "GizmoUtils");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.GizmoUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class GizmoUtils : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Color[] HULL_COLOURS
    static ::ArrayW<::UnityEngine::Color> _get_HULL_COLOURS();
    // Set static field: static public readonly UnityEngine.Color[] HULL_COLOURS
    static void _set_HULL_COLOURS(::ArrayW<::UnityEngine::Color> value);
    // static public UnityEngine.Color GetHullColour(System.Int32 index)
    // Offset: 0x5027DF0
    static ::UnityEngine::Color GetHullColour(int index);
    // static public System.Void ToggleGizmos(System.Boolean gizmosOn)
    // Offset: 0x5027E7C
    static void ToggleGizmos(bool gizmosOn);
    // public System.Void .ctor()
    // Offset: 0x5027E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GizmoUtils* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::GizmoUtils::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GizmoUtils*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5027E88
    static void _cctor();
  }; // Technie.PhysicsCreator.GizmoUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::GizmoUtils::GetHullColour
// Il2CppName: GetHullColour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(int)>(&Technie::PhysicsCreator::GizmoUtils::GetHullColour)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::GizmoUtils*), "GetHullColour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::GizmoUtils::ToggleGizmos
// Il2CppName: ToggleGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Technie::PhysicsCreator::GizmoUtils::ToggleGizmos)> {
  static const MethodInfo* get() {
    static auto* gizmosOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::GizmoUtils*), "ToggleGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gizmosOn});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::GizmoUtils::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Technie::PhysicsCreator::GizmoUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Technie::PhysicsCreator::GizmoUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::GizmoUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};