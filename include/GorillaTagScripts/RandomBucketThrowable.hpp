// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: RandomBucketThrowable
  class RandomBucketThrowable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::RandomBucketThrowable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::RandomBucketThrowable*, "GorillaTagScripts", "RandomBucketThrowable");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.RandomBucketThrowable
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomBucketThrowable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject projectilePrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* projectilePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single weightedChance
    // Size: 0x4
    // Offset: 0x28
    float weightedChance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.GameObject projectilePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_projectilePrefab();
    // Get instance field reference: public System.Single weightedChance
    [[deprecated("Use field access instead!")]] float& dyn_weightedChance();
    // public System.Void .ctor()
    // Offset: 0x2810DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomBucketThrowable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::RandomBucketThrowable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomBucketThrowable*, creationType>()));
    }
  }; // GorillaTagScripts.RandomBucketThrowable
  #pragma pack(pop)
  static check_size<sizeof(RandomBucketThrowable), 40 + sizeof(float)> __GorillaTagScripts_RandomBucketThrowableSizeCheck;
  static_assert(sizeof(RandomBucketThrowable) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::RandomBucketThrowable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
