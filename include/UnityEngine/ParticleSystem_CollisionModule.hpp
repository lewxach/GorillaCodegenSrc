// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::CollisionModule, "UnityEngine", "ParticleSystem/CollisionModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/CollisionModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::CollisionModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: CollisionModule
    constexpr CollisionModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x551F39C
    // ABORTED: conflicts with another method.  CollisionModule(::UnityEngine::ParticleSystem* particleSystem);
  }; // UnityEngine.ParticleSystem/CollisionModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::CollisionModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_CollisionModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::CollisionModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::CollisionModule::CollisionModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
