// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableAsyncBase_1.hpp"
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
  // Forward declaring type: FloatTweenableVariable
  class FloatTweenableVariable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "FloatTweenableVariable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.FloatTweenableVariable
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<float> {
    public:
    // protected Unity.Jobs.JobHandle ScheduleTweenJob(ref UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<System.Single> jobData)
    // Offset: 0x5418F04
    ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float>> jobData);
    // public System.Void .ctor()
    // Offset: 0x5418F9C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1
    // Base method: System.Void TweenableVariableAsyncBase_1::.ctor()
    // Base method: System.Void TweenableVariableBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatTweenableVariable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatTweenableVariable*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.FloatTweenableVariable
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable::ScheduleTweenJob
// Il2CppName: ScheduleTweenJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float>>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable::ScheduleTweenJob)> {
  static const MethodInfo* get() {
    static auto* jobData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "TweenJobData`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*), "ScheduleTweenJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jobData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
