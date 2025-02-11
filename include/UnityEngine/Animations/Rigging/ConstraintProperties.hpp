// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.Property
#include "UnityEngine/Animations/Rigging/Property.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: ConstraintProperties
  struct ConstraintProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::ConstraintProperties, "UnityEngine.Animations.Rigging", "ConstraintProperties");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.ConstraintProperties
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConstraintProperties/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Component component
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Component* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::Component*) == 0x8);
    // public UnityEngine.Animations.Rigging.Property[] properties
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::UnityEngine::Animations::Rigging::Property> properties;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animations::Rigging::Property>) == 0x8);
    public:
    // Creating value type constructor for type: ConstraintProperties
    constexpr ConstraintProperties(::UnityEngine::Component* component_ = {}, ::ArrayW<::UnityEngine::Animations::Rigging::Property> properties_ = ::ArrayW<::UnityEngine::Animations::Rigging::Property>(static_cast<void*>(nullptr))) noexcept : component{component_}, properties{properties_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public System.String s_Weight
    static ::StringW _get_s_Weight();
    // Set static field: static public System.String s_Weight
    static void _set_s_Weight(::StringW value);
    // Get instance field reference: public UnityEngine.Component component
    [[deprecated("Use field access instead!")]] ::UnityEngine::Component*& dyn_component();
    // Get instance field reference: public UnityEngine.Animations.Rigging.Property[] properties
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animations::Rigging::Property>& dyn_properties();
    // static private System.Void .cctor()
    // Offset: 0x507F3FC
    static void _cctor();
  }; // UnityEngine.Animations.Rigging.ConstraintProperties
  #pragma pack(pop)
  static check_size<sizeof(ConstraintProperties), 8 + sizeof(::ArrayW<::UnityEngine::Animations::Rigging::Property>)> __UnityEngine_Animations_Rigging_ConstraintPropertiesSizeCheck;
  static_assert(sizeof(ConstraintProperties) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ConstraintProperties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::Rigging::ConstraintProperties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ConstraintProperties), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
