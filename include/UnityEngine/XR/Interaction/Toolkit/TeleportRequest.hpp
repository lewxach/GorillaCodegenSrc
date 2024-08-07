// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.MatchOrientation
#include "UnityEngine/XR/Interaction/Toolkit/MatchOrientation.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TeleportRequest
  struct TeleportRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, "UnityEngine.XR.Interaction.Toolkit", "TeleportRequest");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TeleportRequest
  // [TokenAttribute] Offset: FFFFFFFF
  struct TeleportRequest/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 destinationPosition
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 destinationPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion destinationRotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion destinationRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Single requestTime
    // Size: 0x4
    // Offset: 0x1C
    float requestTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.XR.Interaction.Toolkit.MatchOrientation matchOrientation
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation) == 0x4);
    public:
    // Creating value type constructor for type: TeleportRequest
    constexpr TeleportRequest(::UnityEngine::Vector3 destinationPosition_ = {}, ::UnityEngine::Quaternion destinationRotation_ = {}, float requestTime_ = {}, ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation_ = {}) noexcept : destinationPosition{destinationPosition_}, destinationRotation{destinationRotation_}, requestTime{requestTime_}, matchOrientation{matchOrientation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 destinationPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_destinationPosition();
    // Get instance field reference: public UnityEngine.Quaternion destinationRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_destinationRotation();
    // Get instance field reference: public System.Single requestTime
    [[deprecated("Use field access instead!")]] float& dyn_requestTime();
    // Get instance field reference: public UnityEngine.XR.Interaction.Toolkit.MatchOrientation matchOrientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation& dyn_matchOrientation();
  }; // UnityEngine.XR.Interaction.Toolkit.TeleportRequest
  #pragma pack(pop)
  static check_size<sizeof(TeleportRequest), 32 + sizeof(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation)> __UnityEngine_XR_Interaction_Toolkit_TeleportRequestSizeCheck;
  static_assert(sizeof(TeleportRequest) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
