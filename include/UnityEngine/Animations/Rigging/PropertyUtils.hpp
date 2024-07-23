// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: PropertyUtils
  class PropertyUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::PropertyUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::PropertyUtils*, "UnityEngine.Animations.Rigging", "PropertyUtils");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.PropertyUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class PropertyUtils : public ::Il2CppObject {
    public:
    // static public System.String ConstructConstraintDataPropertyName(System.String property)
    // Offset: 0x507F468
    static ::StringW ConstructConstraintDataPropertyName(::StringW property);
    // static public System.String ConstructCustomPropertyName(UnityEngine.Component component, System.String property)
    // Offset: 0x507F46C
    static ::StringW ConstructCustomPropertyName(::UnityEngine::Component* component, ::StringW property);
  }; // UnityEngine.Animations.Rigging.PropertyUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::PropertyUtils::ConstructConstraintDataPropertyName
// Il2CppName: ConstructConstraintDataPropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::Animations::Rigging::PropertyUtils::ConstructConstraintDataPropertyName)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::PropertyUtils*), "ConstructConstraintDataPropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::PropertyUtils::ConstructCustomPropertyName
// Il2CppName: ConstructCustomPropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Component*, ::StringW)>(&UnityEngine::Animations::Rigging::PropertyUtils::ConstructCustomPropertyName)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::PropertyUtils*), "ConstructCustomPropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, property});
  }
};