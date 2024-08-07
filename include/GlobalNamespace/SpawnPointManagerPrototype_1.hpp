// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Behaviour
#include "Fusion/Behaviour.hpp"
// Including type: ISpawnPointManagerPrototype`1
#include "GlobalNamespace/ISpawnPointManagerPrototype_1.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: Fusion.NetworkRNG
#include "Fusion/NetworkRNG.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: SpawnSequence because it is already included!
  // Forward declaring type: ISpawnPointPrototype
  class ISpawnPointPrototype;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpawnPointManagerPrototype`1<T>
  template<typename T>
  class SpawnPointManagerPrototype_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SpawnPointManagerPrototype_1, "", "SpawnPointManagerPrototype`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SpawnPointManagerPrototype`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [ScriptHelpAttribute] Offset: FFFFFFFF
  template<typename T>
  class SpawnPointManagerPrototype_1 : public ::Fusion::Behaviour/*, public ::GlobalNamespace::ISpawnPointManagerPrototype_1<T>*/ {
    public:
    // Nested type: ::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence<T>
    struct SpawnSequence;
    // WARNING Size may be invalid!
    // Autogenerated type: SpawnPointManagerPrototype`1/SpawnSequence
    // [TokenAttribute] Offset: FFFFFFFF
    struct SpawnSequence : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public ::System::Enum*/ {
      public:
      using declaring_type = SpawnPointManagerPrototype_1<T>*;
      static constexpr std::string_view NESTED_NAME = "SpawnSequence";
      static constexpr bool IS_VALUE_TYPE = true;
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SpawnSequence
      constexpr SpawnSequence(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // Autogenerated static field getter
      // Get static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> PlayerId
      static typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence _get_PlayerId() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_get_PlayerId");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "PlayerId"));
      }
      // Autogenerated static field setter
      // Set static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> PlayerId
      static void _set_PlayerId(typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_set_PlayerId");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "PlayerId", value));
      }
      // Autogenerated static field getter
      // Get static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> RoundRobin
      static typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence _get_RoundRobin() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_get_RoundRobin");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "RoundRobin"));
      }
      // Autogenerated static field setter
      // Set static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> RoundRobin
      static void _set_RoundRobin(typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_set_RoundRobin");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "RoundRobin", value));
      }
      // Autogenerated static field getter
      // Get static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> Random
      static typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence _get_Random() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_get_Random");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "Random"));
      }
      // Autogenerated static field setter
      // Set static field: static public SpawnPointManagerPrototype`1/SpawnSequence<T> Random
      static void _set_Random(typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::_set_Random");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SpawnPointManagerPrototype_1<T>::SpawnSequence>::get(), "Random", value));
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::SpawnSequence::dyn_value__");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value__"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
    }; // SpawnPointManagerPrototype`1/SpawnSequence
    // Could not write size check! Type: SpawnPointManagerPrototype`1/SpawnSequence is generic, or has no fields that are valid for size checks!
    public:
    // public SpawnPointManagerPrototype`1/SpawnSequence<T> Sequence
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence Sequence;
    // public UnityEngine.LayerMask BlockingLayers
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::LayerMask BlockingLayers;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Single BlockedCheckRadius
    // Size: 0x4
    // Offset: 0x0
    float BlockedCheckRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Collections.Generic.List`1<UnityEngine.Component> _spawnPoints
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::Component*>* spawnPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Component*>*) == 0x8);
    // public System.Int32 LastSpawnIndex
    // Size: 0x4
    // Offset: 0x0
    int LastSpawnIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Fusion.NetworkRNG rng
    // Size: 0x10
    // Offset: 0x0
    ::Fusion::NetworkRNG rng;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkRNG) == 0x10);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISpawnPointManagerPrototype_1<T>
    operator ::GlobalNamespace::ISpawnPointManagerPrototype_1<T>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISpawnPointManagerPrototype_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static protected UnityEngine.Collider[] blocked3D
    static ::ArrayW<::UnityEngine::Collider*> _get_blocked3D() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::_get_blocked3D");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::ArrayW<::UnityEngine::Collider*>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SpawnPointManagerPrototype_1<T>*>::get(), "blocked3D"));
    }
    // Autogenerated static field setter
    // Set static field: static protected UnityEngine.Collider[] blocked3D
    static void _set_blocked3D(::ArrayW<::UnityEngine::Collider*> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::_set_blocked3D");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SpawnPointManagerPrototype_1<T>*>::get(), "blocked3D", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public SpawnPointManagerPrototype`1/SpawnSequence<T> Sequence
    [[deprecated("Use field access instead!")]] typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence& dyn_Sequence() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn_Sequence");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Sequence"))->offset;
      return *reinterpret_cast<typename ::GlobalNamespace::SpawnPointManagerPrototype_1<T>::SpawnSequence*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.LayerMask BlockingLayers
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_BlockingLayers() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn_BlockingLayers");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "BlockingLayers"))->offset;
      return *reinterpret_cast<::UnityEngine::LayerMask*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Single BlockedCheckRadius
    [[deprecated("Use field access instead!")]] float& dyn_BlockedCheckRadius() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn_BlockedCheckRadius");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "BlockedCheckRadius"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Collections.Generic.List`1<UnityEngine.Component> _spawnPoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Component*>*& dyn__spawnPoints() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn__spawnPoints");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_spawnPoints"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::UnityEngine::Component*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 LastSpawnIndex
    [[deprecated("Use field access instead!")]] int& dyn_LastSpawnIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn_LastSpawnIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "LastSpawnIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Fusion.NetworkRNG rng
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkRNG& dyn_rng() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::dyn_rng");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "rng"))->offset;
      return *reinterpret_cast<::Fusion::NetworkRNG*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void Awake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void CollectSpawnPoints(Fusion.NetworkRunner runner)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CollectSpawnPoints(::Fusion::NetworkRunner* runner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::CollectSpawnPoints");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SpawnPointManagerPrototype_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, runner);
    }
    // public UnityEngine.Transform GetNextSpawnPoint(Fusion.NetworkRunner runner, Fusion.PlayerRef player, System.Boolean skipIfBlocked)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* GetNextSpawnPoint(::Fusion::NetworkRunner* runner, ::Fusion::PlayerRef player, bool skipIfBlocked) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::GetNextSpawnPoint");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SpawnPointManagerPrototype_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal__method, runner, player, skipIfBlocked);
    }
    // public UnityEngine.Transform AllSpawnPointsBlockedFallback()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* AllSpawnPointsBlockedFallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::AllSpawnPointsBlockedFallback");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SpawnPointManagerPrototype_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal__method);
    }
    // public System.ValueTuple`2<System.Int32,UnityEngine.Component> GetNextUnblocked(System.Int32 failedIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ValueTuple_2<int, ::UnityEngine::Component*> GetNextUnblocked(int failedIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::GetNextUnblocked");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SpawnPointManagerPrototype_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::ValueTuple_2<int, ::UnityEngine::Component*>, false>(this, ___internal__method, failedIndex);
    }
    // public System.Boolean IsBlocked(UnityEngine.Component spawnPoint)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsBlocked(::UnityEngine::Component* spawnPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::IsBlocked");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SpawnPointManagerPrototype_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, spawnPoint);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnPointManagerPrototype_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnPointManagerPrototype_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnPointManagerPrototype_1<T>*, creationType>()));
    }
  }; // SpawnPointManagerPrototype`1
  // Could not write size check! Type: SpawnPointManagerPrototype`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
