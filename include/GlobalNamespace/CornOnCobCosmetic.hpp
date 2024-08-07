// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ThermalReceiver
  class ThermalReceiver;
  // Forward declaring type: SoundBankPlayer
  class SoundBankPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CornOnCobCosmetic
  class CornOnCobCosmetic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CornOnCobCosmetic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CornOnCobCosmetic*, "", "CornOnCobCosmetic");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: CornOnCobCosmetic
  // [TokenAttribute] Offset: FFFFFFFF
  class CornOnCobCosmetic : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public ThermalReceiver thermalReceiver
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ThermalReceiver* thermalReceiver;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ThermalReceiver*) == 0x8);
    // public UnityEngine.ParticleSystem particleSys
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::ParticleSystem* particleSys;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // public UnityEngine.AnimationCurve particleEmissionCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* particleEmissionCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public SoundBankPlayer soundBankPlayer
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SoundBankPlayer* soundBankPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SoundBankPlayer*) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule emissionModule
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::ParticleSystem::EmissionModule emissionModule;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // private System.Single maxBurstProbability
    // Size: 0x4
    // Offset: 0x48
    float maxBurstProbability;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 previousParticleCount
    // Size: 0x4
    // Offset: 0x4C
    int previousParticleCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public ThermalReceiver thermalReceiver
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ThermalReceiver*& dyn_thermalReceiver();
    // Get instance field reference: public UnityEngine.ParticleSystem particleSys
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_particleSys();
    // Get instance field reference: public UnityEngine.AnimationCurve particleEmissionCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_particleEmissionCurve();
    // Get instance field reference: public SoundBankPlayer soundBankPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SoundBankPlayer*& dyn_soundBankPlayer();
    // Get instance field reference: private UnityEngine.ParticleSystem/EmissionModule emissionModule
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmissionModule& dyn_emissionModule();
    // Get instance field reference: private System.Single maxBurstProbability
    [[deprecated("Use field access instead!")]] float& dyn_maxBurstProbability();
    // Get instance field reference: private System.Int32 previousParticleCount
    [[deprecated("Use field access instead!")]] int& dyn_previousParticleCount();
    // protected System.Void Awake()
    // Offset: 0x269C868
    void Awake();
    // protected System.Void LateUpdate()
    // Offset: 0x269C920
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x269CA58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CornOnCobCosmetic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CornOnCobCosmetic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CornOnCobCosmetic*, creationType>()));
    }
  }; // CornOnCobCosmetic
  #pragma pack(pop)
  static check_size<sizeof(CornOnCobCosmetic), 76 + sizeof(int)> __GlobalNamespace_CornOnCobCosmeticSizeCheck;
  static_assert(sizeof(CornOnCobCosmetic) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CornOnCobCosmetic::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CornOnCobCosmetic::*)()>(&GlobalNamespace::CornOnCobCosmetic::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CornOnCobCosmetic*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CornOnCobCosmetic::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CornOnCobCosmetic::*)()>(&GlobalNamespace::CornOnCobCosmetic::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CornOnCobCosmetic*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CornOnCobCosmetic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
