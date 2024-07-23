// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineExtension
#include "Cinemachine/CinemachineExtension.hpp"
// Including type: Cinemachine.CinemachineCore/Stage
#include "Cinemachine/CinemachineCore_Stage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineVirtualCameraBase
  class CinemachineVirtualCameraBase;
  // Forward declaring type: CameraState
  struct CameraState;
  // Forward declaring type: NoiseSettings
  class NoiseSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineImpulseListener
  class CinemachineImpulseListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineImpulseListener);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineImpulseListener*, "Cinemachine", "CinemachineImpulseListener");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineImpulseListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  class CinemachineImpulseListener : public ::Cinemachine::CinemachineExtension {
    public:
    // Nested type: ::Cinemachine::CinemachineImpulseListener::ImpulseReaction
    struct ImpulseReaction;
    // Size: 0x30
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.CinemachineImpulseListener/ImpulseReaction
    // [TokenAttribute] Offset: FFFFFFFF
    struct ImpulseReaction/*, public ::System::ValueType*/ {
      public:
      public:
      // public Cinemachine.NoiseSettings m_SecondaryNoise
      // Size: 0x8
      // Offset: 0x0
      ::Cinemachine::NoiseSettings* m_SecondaryNoise;
      // Field size check
      static_assert(sizeof(::Cinemachine::NoiseSettings*) == 0x8);
      // public System.Single m_AmplitudeGain
      // Size: 0x4
      // Offset: 0x8
      float m_AmplitudeGain;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single m_FrequencyGain
      // Size: 0x4
      // Offset: 0xC
      float m_FrequencyGain;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single m_Duration
      // Size: 0x4
      // Offset: 0x10
      float m_Duration;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_CurrentAmount
      // Size: 0x4
      // Offset: 0x14
      float m_CurrentAmount;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_CurrentTime
      // Size: 0x4
      // Offset: 0x18
      float m_CurrentTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_CurrentDamping
      // Size: 0x4
      // Offset: 0x1C
      float m_CurrentDamping;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Boolean m_Initialized
      // Size: 0x1
      // Offset: 0x20
      bool m_Initialized;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: m_Initialized and: m_NoiseOffsets
      char __padding7[0x3] = {};
      // private UnityEngine.Vector3 m_NoiseOffsets
      // Size: 0xC
      // Offset: 0x24
      ::UnityEngine::Vector3 m_NoiseOffsets;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      public:
      // Creating value type constructor for type: ImpulseReaction
      constexpr ImpulseReaction(::Cinemachine::NoiseSettings* m_SecondaryNoise_ = {}, float m_AmplitudeGain_ = {}, float m_FrequencyGain_ = {}, float m_Duration_ = {}, float m_CurrentAmount_ = {}, float m_CurrentTime_ = {}, float m_CurrentDamping_ = {}, bool m_Initialized_ = {}, ::UnityEngine::Vector3 m_NoiseOffsets_ = {}) noexcept : m_SecondaryNoise{m_SecondaryNoise_}, m_AmplitudeGain{m_AmplitudeGain_}, m_FrequencyGain{m_FrequencyGain_}, m_Duration{m_Duration_}, m_CurrentAmount{m_CurrentAmount_}, m_CurrentTime{m_CurrentTime_}, m_CurrentDamping{m_CurrentDamping_}, m_Initialized{m_Initialized_}, m_NoiseOffsets{m_NoiseOffsets_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Cinemachine.NoiseSettings m_SecondaryNoise
      [[deprecated("Use field access instead!")]] ::Cinemachine::NoiseSettings*& dyn_m_SecondaryNoise();
      // Get instance field reference: public System.Single m_AmplitudeGain
      [[deprecated("Use field access instead!")]] float& dyn_m_AmplitudeGain();
      // Get instance field reference: public System.Single m_FrequencyGain
      [[deprecated("Use field access instead!")]] float& dyn_m_FrequencyGain();
      // Get instance field reference: public System.Single m_Duration
      [[deprecated("Use field access instead!")]] float& dyn_m_Duration();
      // Get instance field reference: private System.Single m_CurrentAmount
      [[deprecated("Use field access instead!")]] float& dyn_m_CurrentAmount();
      // Get instance field reference: private System.Single m_CurrentTime
      [[deprecated("Use field access instead!")]] float& dyn_m_CurrentTime();
      // Get instance field reference: private System.Single m_CurrentDamping
      [[deprecated("Use field access instead!")]] float& dyn_m_CurrentDamping();
      // Get instance field reference: private System.Boolean m_Initialized
      [[deprecated("Use field access instead!")]] bool& dyn_m_Initialized();
      // Get instance field reference: private UnityEngine.Vector3 m_NoiseOffsets
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_NoiseOffsets();
      // public System.Void ReSeed()
      // Offset: 0x2ABAFA0
      void ReSeed();
      // public System.Boolean GetReaction(System.Single deltaTime, UnityEngine.Vector3 impulsePos, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
      // Offset: 0x2ABAC00
      bool GetReaction(float deltaTime, ::UnityEngine::Vector3 impulsePos, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
    }; // Cinemachine.CinemachineImpulseListener/ImpulseReaction
    #pragma pack(pop)
    static check_size<sizeof(CinemachineImpulseListener::ImpulseReaction), 36 + sizeof(::UnityEngine::Vector3)> __Cinemachine_CinemachineImpulseListener_ImpulseReactionSizeCheck;
    static_assert(sizeof(CinemachineImpulseListener::ImpulseReaction) == 0x30);
    public:
    // public Cinemachine.CinemachineCore/Stage m_ApplyAfter
    // Size: 0x4
    // Offset: 0x30
    ::Cinemachine::CinemachineCore::Stage m_ApplyAfter;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineCore::Stage) == 0x4);
    // public System.Int32 m_ChannelMask
    // Size: 0x4
    // Offset: 0x34
    int m_ChannelMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single m_Gain
    // Size: 0x4
    // Offset: 0x38
    float m_Gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean m_Use2DDistance
    // Size: 0x1
    // Offset: 0x3C
    bool m_Use2DDistance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean m_UseCameraSpace
    // Size: 0x1
    // Offset: 0x3D
    bool m_UseCameraSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseCameraSpace and: m_ReactionSettings
    char __padding4[0x2] = {};
    // public Cinemachine.CinemachineImpulseListener/ImpulseReaction m_ReactionSettings
    // Size: 0x30
    // Offset: 0x40
    ::Cinemachine::CinemachineImpulseListener::ImpulseReaction m_ReactionSettings;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineImpulseListener::ImpulseReaction) == 0x30);
    public:
    // Get instance field reference: public Cinemachine.CinemachineCore/Stage m_ApplyAfter
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineCore::Stage& dyn_m_ApplyAfter();
    // Get instance field reference: public System.Int32 m_ChannelMask
    [[deprecated("Use field access instead!")]] int& dyn_m_ChannelMask();
    // Get instance field reference: public System.Single m_Gain
    [[deprecated("Use field access instead!")]] float& dyn_m_Gain();
    // Get instance field reference: public System.Boolean m_Use2DDistance
    [[deprecated("Use field access instead!")]] bool& dyn_m_Use2DDistance();
    // Get instance field reference: public System.Boolean m_UseCameraSpace
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseCameraSpace();
    // Get instance field reference: public Cinemachine.CinemachineImpulseListener/ImpulseReaction m_ReactionSettings
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineImpulseListener::ImpulseReaction& dyn_m_ReactionSettings();
    // private System.Void Reset()
    // Offset: 0x2ABA4F4
    void Reset();
    // protected override System.Void PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0x2ABA538
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2ABAF90
    // Implemented from: Cinemachine.CinemachineExtension
    // Base method: System.Void CinemachineExtension::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineImpulseListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineImpulseListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineImpulseListener*, creationType>()));
    }
  }; // Cinemachine.CinemachineImpulseListener
  #pragma pack(pop)
  static check_size<sizeof(CinemachineImpulseListener), 64 + sizeof(::Cinemachine::CinemachineImpulseListener::ImpulseReaction)> __Cinemachine_CinemachineImpulseListenerSizeCheck;
  static_assert(sizeof(CinemachineImpulseListener) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineImpulseListener::ImpulseReaction, "Cinemachine", "CinemachineImpulseListener/ImpulseReaction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseListener::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineImpulseListener::*)()>(&Cinemachine::CinemachineImpulseListener::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineImpulseListener*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseListener::PostPipelineStageCallback
// Il2CppName: PostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineImpulseListener::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineImpulseListener::PostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineImpulseListener*), "PostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!