// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Cinemachine.CinemachineImpulseListener/ImpulseReaction
#include "Cinemachine/CinemachineImpulseListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineIndependentImpulseListener
  class CinemachineIndependentImpulseListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineIndependentImpulseListener);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineIndependentImpulseListener*, "Cinemachine", "CinemachineIndependentImpulseListener");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineIndependentImpulseListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  class CinemachineIndependentImpulseListener : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 impulsePosLastFrame
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 impulsePosLastFrame;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion impulseRotLastFrame
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Quaternion impulseRotLastFrame;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Int32 m_ChannelMask
    // Size: 0x4
    // Offset: 0x3C
    int m_ChannelMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single m_Gain
    // Size: 0x4
    // Offset: 0x40
    float m_Gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean m_Use2DDistance
    // Size: 0x1
    // Offset: 0x44
    bool m_Use2DDistance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean m_UseLocalSpace
    // Size: 0x1
    // Offset: 0x45
    bool m_UseLocalSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseLocalSpace and: m_ReactionSettings
    char __padding5[0x2] = {};
    // public Cinemachine.CinemachineImpulseListener/ImpulseReaction m_ReactionSettings
    // Size: 0x30
    // Offset: 0x48
    ::Cinemachine::CinemachineImpulseListener::ImpulseReaction m_ReactionSettings;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineImpulseListener::ImpulseReaction) == 0x30);
    public:
    // Get instance field reference: private UnityEngine.Vector3 impulsePosLastFrame
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_impulsePosLastFrame();
    // Get instance field reference: private UnityEngine.Quaternion impulseRotLastFrame
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_impulseRotLastFrame();
    // Get instance field reference: public System.Int32 m_ChannelMask
    [[deprecated("Use field access instead!")]] int& dyn_m_ChannelMask();
    // Get instance field reference: public System.Single m_Gain
    [[deprecated("Use field access instead!")]] float& dyn_m_Gain();
    // Get instance field reference: public System.Boolean m_Use2DDistance
    [[deprecated("Use field access instead!")]] bool& dyn_m_Use2DDistance();
    // Get instance field reference: public System.Boolean m_UseLocalSpace
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseLocalSpace();
    // Get instance field reference: public Cinemachine.CinemachineImpulseListener/ImpulseReaction m_ReactionSettings
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineImpulseListener::ImpulseReaction& dyn_m_ReactionSettings();
    // private System.Void Reset()
    // Offset: 0x2ABBC28
    void Reset();
    // private System.Void OnEnable()
    // Offset: 0x2ABBC68
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x2ABBCF8
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x2ABBE24
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x2ABC10C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineIndependentImpulseListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineIndependentImpulseListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineIndependentImpulseListener*, creationType>()));
    }
  }; // Cinemachine.CinemachineIndependentImpulseListener
  #pragma pack(pop)
  static check_size<sizeof(CinemachineIndependentImpulseListener), 72 + sizeof(::Cinemachine::CinemachineImpulseListener::ImpulseReaction)> __Cinemachine_CinemachineIndependentImpulseListenerSizeCheck;
  static_assert(sizeof(CinemachineIndependentImpulseListener) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineIndependentImpulseListener::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineIndependentImpulseListener::*)()>(&Cinemachine::CinemachineIndependentImpulseListener::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineIndependentImpulseListener*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineIndependentImpulseListener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineIndependentImpulseListener::*)()>(&Cinemachine::CinemachineIndependentImpulseListener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineIndependentImpulseListener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineIndependentImpulseListener::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineIndependentImpulseListener::*)()>(&Cinemachine::CinemachineIndependentImpulseListener::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineIndependentImpulseListener*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineIndependentImpulseListener::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineIndependentImpulseListener::*)()>(&Cinemachine::CinemachineIndependentImpulseListener::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineIndependentImpulseListener*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineIndependentImpulseListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!