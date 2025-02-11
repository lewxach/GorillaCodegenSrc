// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
  // Forward declaring type: NetworkObject
  class NetworkObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkSceneManagerObjectResolver
  class INetworkSceneManagerObjectResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::INetworkSceneManagerObjectResolver);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::INetworkSceneManagerObjectResolver*, "Fusion", "INetworkSceneManagerObjectResolver");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.INetworkSceneManagerObjectResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class INetworkSceneManagerObjectResolver {
    public:
    // public System.Boolean TryResolveSceneObject(Fusion.NetworkRunner runner, System.Guid sceneObjectGuid, out Fusion.NetworkObject instance)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryResolveSceneObject(::Fusion::NetworkRunner* runner, ::System::Guid sceneObjectGuid, ByRef<::Fusion::NetworkObject*> instance);
  }; // Fusion.INetworkSceneManagerObjectResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::INetworkSceneManagerObjectResolver::TryResolveSceneObject
// Il2CppName: TryResolveSceneObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::INetworkSceneManagerObjectResolver::*)(::Fusion::NetworkRunner*, ::System::Guid, ByRef<::Fusion::NetworkObject*>)>(&Fusion::INetworkSceneManagerObjectResolver::TryResolveSceneObject)> {
  static const MethodInfo* get() {
    static auto* runner = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkRunner")->byval_arg;
    static auto* sceneObjectGuid = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::INetworkSceneManagerObjectResolver*), "TryResolveSceneObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runner, sceneObjectGuid, instance});
  }
};
