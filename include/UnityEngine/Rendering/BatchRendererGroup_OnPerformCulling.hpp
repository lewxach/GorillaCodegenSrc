// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.BatchRendererGroup
#include "UnityEngine/Rendering/BatchRendererGroup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingContext
  struct BatchCullingContext;
  // Forward declaring type: BatchCullingOutput
  struct BatchCullingOutput;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
  // [TokenAttribute] Offset: FFFFFFFF
  class BatchRendererGroup::OnPerformCulling : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x54EFB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BatchRendererGroup::OnPerformCulling* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BatchRendererGroup::OnPerformCulling*, creationType>(object, method)));
    }
    // public Unity.Jobs.JobHandle Invoke(UnityEngine.Rendering.BatchRendererGroup rendererGroup, UnityEngine.Rendering.BatchCullingContext cullingContext, UnityEngine.Rendering.BatchCullingOutput cullingOutput, System.IntPtr userContext)
    // Offset: 0x54EFC78
    ::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext);
  }; // UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(&UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling::Invoke)> {
  static const MethodInfo* get() {
    static auto* rendererGroup = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchRendererGroup")->byval_arg;
    static auto* cullingContext = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchCullingContext")->byval_arg;
    static auto* cullingOutput = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchCullingOutput")->byval_arg;
    static auto* userContext = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rendererGroup, cullingContext, cullingOutput, userContext});
  }
};