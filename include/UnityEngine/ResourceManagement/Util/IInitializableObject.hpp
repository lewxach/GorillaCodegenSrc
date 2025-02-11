// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: IInitializableObject
  class IInitializableObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IInitializableObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IInitializableObject*, "UnityEngine.ResourceManagement.Util", "IInitializableObject");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.IInitializableObject
  // [TokenAttribute] Offset: FFFFFFFF
  class IInitializableObject {
    public:
    // public System.Boolean Initialize(System.String id, System.String data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Initialize(::StringW id, ::StringW data);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);
  }; // UnityEngine.ResourceManagement.Util.IInitializableObject
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::Util::IInitializableObject::*)(::StringW, ::StringW)>(&UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IInitializableObject*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync
// Il2CppName: InitializeAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::ResourceManagement::Util::IInitializableObject::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(&UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync)> {
  static const MethodInfo* get() {
    static auto* rm = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IInitializableObject*), "InitializeAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rm, id, data});
  }
};
