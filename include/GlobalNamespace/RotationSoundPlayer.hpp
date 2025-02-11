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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SoundBankPlayer
  class SoundBankPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RotationSoundPlayer
  class RotationSoundPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RotationSoundPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationSoundPlayer*, "", "RotationSoundPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RotationSoundPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class RotationSoundPlayer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::RotationSoundPlayer::$$c
    class $$c;
    public:
    // private UnityEngine.Transform[] transforms
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private SoundBankPlayer soundBankPlayer
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SoundBankPlayer* soundBankPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SoundBankPlayer*) == 0x8);
    // private System.Single rotationAmountThreshold
    // Size: 0x4
    // Offset: 0x30
    float rotationAmountThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotationSpeedThreshold
    // Size: 0x4
    // Offset: 0x34
    float rotationSpeedThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cooldown
    // Size: 0x4
    // Offset: 0x38
    float cooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single cooldownTimer
    // Size: 0x4
    // Offset: 0x3C
    float cooldownTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] initialUpAxis
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector3> initialUpAxis;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] lastUpAxis
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Vector3> lastUpAxis;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Single[] lastRotationSpeeds
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<float> lastRotationSpeeds;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform[] transforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_transforms();
    // Get instance field reference: private SoundBankPlayer soundBankPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SoundBankPlayer*& dyn_soundBankPlayer();
    // Get instance field reference: private System.Single rotationAmountThreshold
    [[deprecated("Use field access instead!")]] float& dyn_rotationAmountThreshold();
    // Get instance field reference: private System.Single rotationSpeedThreshold
    [[deprecated("Use field access instead!")]] float& dyn_rotationSpeedThreshold();
    // Get instance field reference: private System.Single cooldown
    [[deprecated("Use field access instead!")]] float& dyn_cooldown();
    // Get instance field reference: private System.Single cooldownTimer
    [[deprecated("Use field access instead!")]] float& dyn_cooldownTimer();
    // Get instance field reference: private UnityEngine.Vector3[] initialUpAxis
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_initialUpAxis();
    // Get instance field reference: private UnityEngine.Vector3[] lastUpAxis
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_lastUpAxis();
    // Get instance field reference: private System.Single[] lastRotationSpeeds
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_lastRotationSpeeds();
    // private System.Void Awake()
    // Offset: 0x26A17B4
    void Awake();
    // private System.Void Update()
    // Offset: 0x26A1B18
    void Update();
    // public System.Void .ctor()
    // Offset: 0x26A1E8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationSoundPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RotationSoundPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationSoundPlayer*, creationType>()));
    }
  }; // RotationSoundPlayer
  #pragma pack(pop)
  static check_size<sizeof(RotationSoundPlayer), 80 + sizeof(::ArrayW<float>)> __GlobalNamespace_RotationSoundPlayerSizeCheck;
  static_assert(sizeof(RotationSoundPlayer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RotationSoundPlayer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotationSoundPlayer::*)()>(&GlobalNamespace::RotationSoundPlayer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotationSoundPlayer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotationSoundPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotationSoundPlayer::*)()>(&GlobalNamespace::RotationSoundPlayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotationSoundPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotationSoundPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
