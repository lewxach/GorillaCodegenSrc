// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkTransform
#include "Fusion/NetworkTransform.hpp"
// Including type: Fusion.NetworkTransform/IInterpolationImplementation
#include "Fusion/NetworkTransform_IInterpolationImplementation.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkTransform::LegacyIntermittentStateInterp);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkTransform::LegacyIntermittentStateInterp*, "Fusion", "NetworkTransform/LegacyIntermittentStateInterp");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkTransform/LegacyIntermittentStateInterp
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkTransform::LegacyIntermittentStateInterp : public ::Il2CppObject/*, public ::Fusion::NetworkTransform::IInterpolationImplementation*/ {
    public:
    public:
    // private Fusion.NetworkTransform _nt
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::NetworkTransform* nt;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkTransform*) == 0x8);
    // private UnityEngine.Vector3 _interpErrorPos
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 interpErrorPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _interpErrorRot
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Quaternion interpErrorRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _interpLinearVel
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 interpLinearVel;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _deltaStateRot
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Quaternion deltaStateRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private Fusion.Tick _latestTeleportPosTick
    // Size: 0x4
    // Offset: 0x50
    ::Fusion::Tick latestTeleportPosTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // private Fusion.Tick _latestTeleportRotTick
    // Size: 0x4
    // Offset: 0x54
    ::Fusion::Tick latestTeleportRotTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // private Fusion.PlayerRef _latestStateAuth
    // Size: 0x4
    // Offset: 0x58
    ::Fusion::PlayerRef latestStateAuth;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // private Fusion.Tick _latestStateTick
    // Size: 0x4
    // Offset: 0x5C
    ::Fusion::Tick latestStateTick;
    // Field size check
    static_assert(sizeof(::Fusion::Tick) == 0x4);
    // private UnityEngine.Vector3 _latestStatePos
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 latestStatePos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _latestStateRot
    // Size: 0x10
    // Offset: 0x6C
    ::UnityEngine::Quaternion latestStateRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _latestInterpPos
    // Size: 0xC
    // Offset: 0x7C
    ::UnityEngine::Vector3 latestInterpPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _latestInterpRot
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Quaternion latestInterpRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single _timeBetweenStates
    // Size: 0x4
    // Offset: 0x98
    float timeBetweenStates;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Fusion::NetworkTransform::IInterpolationImplementation
    operator ::Fusion::NetworkTransform::IInterpolationImplementation() noexcept {
      return *reinterpret_cast<::Fusion::NetworkTransform::IInterpolationImplementation*>(this);
    }
    // Get instance field reference: private Fusion.NetworkTransform _nt
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkTransform*& dyn__nt();
    // Get instance field reference: private UnityEngine.Vector3 _interpErrorPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__interpErrorPos();
    // Get instance field reference: private UnityEngine.Quaternion _interpErrorRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__interpErrorRot();
    // Get instance field reference: private UnityEngine.Vector3 _interpLinearVel
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__interpLinearVel();
    // Get instance field reference: private UnityEngine.Quaternion _deltaStateRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__deltaStateRot();
    // Get instance field reference: private Fusion.Tick _latestTeleportPosTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn__latestTeleportPosTick();
    // Get instance field reference: private Fusion.Tick _latestTeleportRotTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn__latestTeleportRotTick();
    // Get instance field reference: private Fusion.PlayerRef _latestStateAuth
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn__latestStateAuth();
    // Get instance field reference: private Fusion.Tick _latestStateTick
    [[deprecated("Use field access instead!")]] ::Fusion::Tick& dyn__latestStateTick();
    // Get instance field reference: private UnityEngine.Vector3 _latestStatePos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__latestStatePos();
    // Get instance field reference: private UnityEngine.Quaternion _latestStateRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__latestStateRot();
    // Get instance field reference: private UnityEngine.Vector3 _latestInterpPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__latestInterpPos();
    // Get instance field reference: private UnityEngine.Quaternion _latestInterpRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__latestInterpRot();
    // Get instance field reference: private System.Single _timeBetweenStates
    [[deprecated("Use field access instead!")]] float& dyn__timeBetweenStates();
    // public System.Void Reset(Fusion.NetworkTransform nt)
    // Offset: 0x2B2494C
    void Reset(::Fusion::NetworkTransform* nt);
    // public System.Boolean TryComputeInterpolatedTransform(out Fusion.NetworkTransform/InterpolatedTransformParameters param)
    // Offset: 0x2B249F8
    bool TryComputeInterpolatedTransform(ByRef<::Fusion::NetworkTransform::InterpolatedTransformParameters> param);
    // public System.Void AfterApplyInterpolatedTransform()
    // Offset: 0x2B254C0
    void AfterApplyInterpolatedTransform();
    // public System.Void .ctor()
    // Offset: 0x2B204EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkTransform::LegacyIntermittentStateInterp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkTransform::LegacyIntermittentStateInterp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkTransform::LegacyIntermittentStateInterp*, creationType>()));
    }
  }; // Fusion.NetworkTransform/LegacyIntermittentStateInterp
  #pragma pack(pop)
  static check_size<sizeof(NetworkTransform::LegacyIntermittentStateInterp), 152 + sizeof(float)> __Fusion_NetworkTransform_LegacyIntermittentStateInterpSizeCheck;
  static_assert(sizeof(NetworkTransform::LegacyIntermittentStateInterp) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkTransform::LegacyIntermittentStateInterp::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkTransform::LegacyIntermittentStateInterp::*)(::Fusion::NetworkTransform*)>(&Fusion::NetworkTransform::LegacyIntermittentStateInterp::Reset)> {
  static const MethodInfo* get() {
    static auto* nt = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkTransform::LegacyIntermittentStateInterp*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nt});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkTransform::LegacyIntermittentStateInterp::TryComputeInterpolatedTransform
// Il2CppName: TryComputeInterpolatedTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkTransform::LegacyIntermittentStateInterp::*)(ByRef<::Fusion::NetworkTransform::InterpolatedTransformParameters>)>(&Fusion::NetworkTransform::LegacyIntermittentStateInterp::TryComputeInterpolatedTransform)> {
  static const MethodInfo* get() {
    static auto* param = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkTransform/InterpolatedTransformParameters")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkTransform::LegacyIntermittentStateInterp*), "TryComputeInterpolatedTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkTransform::LegacyIntermittentStateInterp::AfterApplyInterpolatedTransform
// Il2CppName: AfterApplyInterpolatedTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkTransform::LegacyIntermittentStateInterp::*)()>(&Fusion::NetworkTransform::LegacyIntermittentStateInterp::AfterApplyInterpolatedTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkTransform::LegacyIntermittentStateInterp*), "AfterApplyInterpolatedTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkTransform::LegacyIntermittentStateInterp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!