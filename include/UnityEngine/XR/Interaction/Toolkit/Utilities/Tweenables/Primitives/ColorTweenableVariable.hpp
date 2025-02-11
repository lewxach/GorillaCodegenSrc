// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableAsyncBase_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/ColorBlendMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Skipping declaration: JobHandle because it is already included!
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
  // Skipping declaration: TweenJobData`1 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
  // Forward declaring type: ColorTweenableVariable
  class ColorTweenableVariable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "ColorTweenableVariable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.ColorTweenableVariable
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<::UnityEngine::Color> {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode <colorBlendMode>k__BackingField
    // Size: 0x1
    // Offset: 0xB8
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode colorBlendMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode) == 0x1);
    // private System.Single <colorBlendAmount>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    float colorBlendAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode <colorBlendMode>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode& dyn_$colorBlendMode$k__BackingField();
    // Get instance field reference: private System.Single <colorBlendAmount>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$colorBlendAmount$k__BackingField();
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode get_colorBlendMode()
    // Offset: 0x5418DB4
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode get_colorBlendMode();
    // private System.Void set_colorBlendMode(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode value)
    // Offset: 0x5418DBC
    void set_colorBlendMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);
    // private System.Single get_colorBlendAmount()
    // Offset: 0x5418DC4
    float get_colorBlendAmount();
    // private System.Void set_colorBlendAmount(System.Single value)
    // Offset: 0x5418DCC
    void set_colorBlendAmount(float value);
    // protected Unity.Jobs.JobHandle ScheduleTweenJob(ref UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color> jobData)
    // Offset: 0x5418DD4
    ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>> jobData);
    // public System.Void .ctor()
    // Offset: 0x5418EB4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
    // Base method: System.Void TweenableVariableAsyncBase_1::.ctor()
    // Base method: System.Void TweenableVariableBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTweenableVariable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTweenableVariable*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.ColorTweenableVariable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::get_colorBlendMode
// Il2CppName: get_colorBlendMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)()>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::get_colorBlendMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*), "get_colorBlendMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::set_colorBlendMode
// Il2CppName: set_colorBlendMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::set_colorBlendMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorBlendMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*), "set_colorBlendMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::get_colorBlendAmount
// Il2CppName: get_colorBlendAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)()>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::get_colorBlendAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*), "get_colorBlendAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::set_colorBlendAmount
// Il2CppName: set_colorBlendAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::set_colorBlendAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*), "set_colorBlendAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::ScheduleTweenJob
// Il2CppName: ScheduleTweenJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::ScheduleTweenJob)> {
  static const MethodInfo* get() {
    static auto* jobData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "TweenJobData`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*), "ScheduleTweenJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jobData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
