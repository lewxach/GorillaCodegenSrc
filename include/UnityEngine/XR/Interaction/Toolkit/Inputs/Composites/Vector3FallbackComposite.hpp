// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.FallbackComposite`1
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/FallbackComposite_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Skipping declaration: InputBindingCompositeContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
  // Forward declaring type: Vector3FallbackComposite
  class Vector3FallbackComposite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "Vector3FallbackComposite");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.Vector3FallbackComposite
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class Vector3FallbackComposite : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<::UnityEngine::Vector3> {
    public:
    public:
    // public System.Int32 first
    // Size: 0x4
    // Offset: 0x10
    int first;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 second
    // Size: 0x4
    // Offset: 0x14
    int second;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 third
    // Size: 0x4
    // Offset: 0x18
    int third;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 first
    [[deprecated("Use field access instead!")]] int& dyn_first();
    // Get instance field reference: public System.Int32 second
    [[deprecated("Use field access instead!")]] int& dyn_second();
    // Get instance field reference: public System.Int32 third
    [[deprecated("Use field access instead!")]] int& dyn_third();
    // public UnityEngine.Vector3 ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x543C748
    ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // static private System.Void Initialize()
    // Offset: 0x543C800
    static void Initialize();
    // static private System.Void .cctor()
    // Offset: 0x543C804
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x543C86C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.FallbackComposite`1
    // Base method: System.Void FallbackComposite_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3FallbackComposite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3FallbackComposite*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.Vector3FallbackComposite
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::ReadValue
// Il2CppName: ReadValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::ReadValue)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*), "ReadValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::Vector3FallbackComposite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
