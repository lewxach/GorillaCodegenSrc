// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/BaseAffordanceTheme_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/ColorBlendMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
  // Forward declaring type: ColorAffordanceTheme
  class ColorAffordanceTheme;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorAffordanceTheme");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorAffordanceTheme : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color> {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode m_ColorBlendMode
    // Size: 0x1
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode m_ColorBlendMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode) == 0x1);
    // private System.Single m_BlendAmount
    // Size: 0x4
    // Offset: 0x24
    float m_BlendAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode m_ColorBlendMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode& dyn_m_ColorBlendMode();
    // Get instance field reference: private System.Single m_BlendAmount
    [[deprecated("Use field access instead!")]] float& dyn_m_BlendAmount();
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode get_colorBlendMode()
    // Offset: 0x543CBC0
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode get_colorBlendMode();
    // public System.Void set_colorBlendMode(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode value)
    // Offset: 0x543CBC8
    void set_colorBlendMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);
    // public System.Single get_blendAmount()
    // Offset: 0x543CBD0
    float get_blendAmount();
    // public System.Void set_blendAmount(System.Single value)
    // Offset: 0x543CBD8
    void set_blendAmount(float value);
    // public System.Void CopyFrom(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<UnityEngine.Color> other)
    // Offset: 0x543CBE0
    void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* other);
    // public System.Void .ctor()
    // Offset: 0x543CC9C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1
    // Base method: System.Void BaseAffordanceTheme_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorAffordanceTheme* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorAffordanceTheme*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::get_colorBlendMode
// Il2CppName: get_colorBlendMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::get_colorBlendMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*), "get_colorBlendMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::set_colorBlendMode
// Il2CppName: set_colorBlendMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::set_colorBlendMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorBlendMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*), "set_colorBlendMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::get_blendAmount
// Il2CppName: get_blendAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::get_blendAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*), "get_blendAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::set_blendAmount
// Il2CppName: set_blendAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::set_blendAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*), "set_blendAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme", "BaseAffordanceTheme`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
