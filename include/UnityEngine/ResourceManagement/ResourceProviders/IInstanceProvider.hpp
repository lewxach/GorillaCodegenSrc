// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: InstantiationParameters
  struct InstantiationParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IInstanceProvider
  class IInstanceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "IInstanceProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IInstanceProvider {
    public:
    // public UnityEngine.GameObject ProvideInstance(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> prefabHandle, UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::GameObject* ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> prefabHandle, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);
    // public System.Void ReleaseInstance(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.GameObject instance)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::GameObject* instance);
  }; // UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance
// Il2CppName: ProvideInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ProvideInstance)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* prefabHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    static auto* instantiateParameters = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*), "ProvideInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, prefabHandle, instantiateParameters});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance
// Il2CppName: ReleaseInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider::ReleaseInstance)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*), "ReleaseInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, instance});
  }
};