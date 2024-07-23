// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/LegacyResourcesProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider/InternalOp");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider/InternalOp
  // [TokenAttribute] Offset: FFFFFFFF
  class LegacyResourcesProvider::InternalOp : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.ResourceRequest m_RequestOperation
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ResourceRequest* m_RequestOperation;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceRequest*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    // Size: 0x18
    // Offset: 0x18
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    public:
    // Get instance field reference: private UnityEngine.ResourceRequest m_RequestOperation
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceRequest*& dyn_m_RequestOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& dyn_m_ProvideHandle();
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x5338D80
    void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x5339054
    bool WaitForCompletionHandler();
    // private System.Void AsyncOperationCompleted(UnityEngine.AsyncOperation op)
    // Offset: 0x53391A8
    void AsyncOperationCompleted(::UnityEngine::AsyncOperation* op);
    // public System.Single PercentComplete()
    // Offset: 0x5339328
    float PercentComplete();
    // public System.Void .ctor()
    // Offset: 0x5338D78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyResourcesProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyResourcesProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider/InternalOp
  #pragma pack(pop)
  static check_size<sizeof(LegacyResourcesProvider::InternalOp), 24 + sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)> __UnityEngine_ResourceManagement_ResourceProviders_LegacyResourcesProvider_InternalOpSizeCheck;
  static_assert(sizeof(LegacyResourcesProvider::InternalOp) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::Start)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::WaitForCompletionHandler
// Il2CppName: WaitForCompletionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::WaitForCompletionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "WaitForCompletionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::AsyncOperationCompleted
// Il2CppName: AsyncOperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::AsyncOperationCompleted)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "AsyncOperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::PercentComplete
// Il2CppName: PercentComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::PercentComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "PercentComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!