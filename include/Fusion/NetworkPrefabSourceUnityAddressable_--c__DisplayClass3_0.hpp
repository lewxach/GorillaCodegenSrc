// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPrefabSourceUnityAddressable
#include "Fusion/NetworkPrefabSourceUnityAddressable.hpp"
// Including type: Fusion.NetworkPrefabLoadContext
#include "Fusion/NetworkPrefabLoadContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0*, "Fusion", "NetworkPrefabSourceUnityAddressable/<>c__DisplayClass3_0");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkPrefabSourceUnityAddressable/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public Fusion.NetworkPrefabLoadContext c
    // Size: 0x18
    // Offset: 0x10
    ::Fusion::NetworkPrefabLoadContext c;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabLoadContext) == 0x18);
    public:
    // Creating conversion operator: operator ::Fusion::NetworkPrefabLoadContext
    constexpr operator ::Fusion::NetworkPrefabLoadContext() const noexcept {
      return c;
    }
    // Get instance field reference: public Fusion.NetworkPrefabLoadContext c
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabLoadContext& dyn_c();
    // public System.Void .ctor()
    // Offset: 0x2AD2E24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0*, creationType>()));
    }
    // System.Void <Load>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> _op)
    // Offset: 0x2AD2E58
    void $Load$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> _op);
  }; // Fusion.NetworkPrefabSourceUnityAddressable/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0), 16 + sizeof(::Fusion::NetworkPrefabLoadContext)> __Fusion_NetworkPrefabSourceUnityAddressable_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0::$Load$b__0
// Il2CppName: <Load>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>)>(&Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0::$Load$b__0)> {
  static const MethodInfo* get() {
    static auto* _op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabSourceUnityAddressable::$$c__DisplayClass3_0*), "<Load>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_op});
  }
};