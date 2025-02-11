// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Forward declaring type: MovementUtilities
  class MovementUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Util::MovementUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::MovementUtilities*, "Pathfinding.Util", "MovementUtilities");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Util.MovementUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class MovementUtilities : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector2 ClampVelocity(UnityEngine.Vector2 velocity, System.Single maxSpeed, System.Single slowdownFactor, System.Boolean slowWhenNotFacingTarget, UnityEngine.Vector2 forward)
    // Offset: 0x2A27CB8
    static ::UnityEngine::Vector2 ClampVelocity(::UnityEngine::Vector2 velocity, float maxSpeed, float slowdownFactor, bool slowWhenNotFacingTarget, ::UnityEngine::Vector2 forward);
    // static public UnityEngine.Vector2 CalculateAccelerationToReachPoint(UnityEngine.Vector2 deltaPosition, UnityEngine.Vector2 targetVelocity, UnityEngine.Vector2 currentVelocity, System.Single forwardsAcceleration, System.Single rotationSpeed, System.Single maxSpeed, UnityEngine.Vector2 forwardsVector)
    // Offset: 0x2A27E78
    static ::UnityEngine::Vector2 CalculateAccelerationToReachPoint(::UnityEngine::Vector2 deltaPosition, ::UnityEngine::Vector2 targetVelocity, ::UnityEngine::Vector2 currentVelocity, float forwardsAcceleration, float rotationSpeed, float maxSpeed, ::UnityEngine::Vector2 forwardsVector);
  }; // Pathfinding.Util.MovementUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Util::MovementUtilities::ClampVelocity
// Il2CppName: ClampVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float, float, bool, ::UnityEngine::Vector2)>(&Pathfinding::Util::MovementUtilities::ClampVelocity)> {
  static const MethodInfo* get() {
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* maxSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* slowdownFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* slowWhenNotFacingTarget = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* forward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::MovementUtilities*), "ClampVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{velocity, maxSpeed, slowdownFactor, slowWhenNotFacingTarget, forward});
  }
};
// Writing MetadataGetter for method: Pathfinding::Util::MovementUtilities::CalculateAccelerationToReachPoint
// Il2CppName: CalculateAccelerationToReachPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float, float, float, ::UnityEngine::Vector2)>(&Pathfinding::Util::MovementUtilities::CalculateAccelerationToReachPoint)> {
  static const MethodInfo* get() {
    static auto* deltaPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* targetVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* currentVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* forwardsAcceleration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotationSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forwardsVector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::MovementUtilities*), "CalculateAccelerationToReachPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaPosition, targetVelocity, currentVelocity, forwardsAcceleration, rotationSpeed, maxSpeed, forwardsVector});
  }
};
