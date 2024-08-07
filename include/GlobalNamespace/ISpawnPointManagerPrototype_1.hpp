// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISpawnPointPrototype
  class ISpawnPointPrototype;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ISpawnPointManagerPrototype`1<T>
  template<typename T>
  class ISpawnPointManagerPrototype_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISpawnPointManagerPrototype_1, "", "ISpawnPointManagerPrototype`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ISpawnPointManagerPrototype`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ISpawnPointManagerPrototype_1 {
    public:
    // public System.Void CollectSpawnPoints(Fusion.NetworkRunner runner)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CollectSpawnPoints(::Fusion::NetworkRunner* runner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ISpawnPointManagerPrototype_1::CollectSpawnPoints");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::ISpawnPointManagerPrototype_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, runner);
    }
    // public UnityEngine.Transform GetNextSpawnPoint(Fusion.NetworkRunner runner, Fusion.PlayerRef player, System.Boolean skipIfBlocked)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* GetNextSpawnPoint(::Fusion::NetworkRunner* runner, ::Fusion::PlayerRef player, bool skipIfBlocked) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ISpawnPointManagerPrototype_1::GetNextSpawnPoint");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::ISpawnPointManagerPrototype_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal__method, runner, player, skipIfBlocked);
    }
  }; // ISpawnPointManagerPrototype`1
  // Could not write size check! Type: ISpawnPointManagerPrototype`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
