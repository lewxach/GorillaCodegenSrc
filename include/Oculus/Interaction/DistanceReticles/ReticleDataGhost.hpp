// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.DistanceReticles.IReticleData
#include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: ReticleDataGhost
  class ReticleDataGhost;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::ReticleDataGhost);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*, "Oculus.Interaction.DistanceReticles", "ReticleDataGhost");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.ReticleDataGhost
  // [TokenAttribute] Offset: FFFFFFFF
  class ReticleDataGhost : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::DistanceReticles::IReticleData*/ {
    public:
    public:
    // private UnityEngine.Transform _targetPoint
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* targetPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::DistanceReticles::IReticleData
    operator ::Oculus::Interaction::DistanceReticles::IReticleData() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform _targetPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__targetPoint();
    // public UnityEngine.Vector3 ProcessHitPoint(UnityEngine.Vector3 hitPoint)
    // Offset: 0x483E190
    ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3 hitPoint);
    // public System.Void .ctor()
    // Offset: 0x483E218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReticleDataGhost* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::ReticleDataGhost::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReticleDataGhost*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.ReticleDataGhost
  #pragma pack(pop)
  static check_size<sizeof(ReticleDataGhost), 32 + sizeof(::UnityEngine::Transform*)> __Oculus_Interaction_DistanceReticles_ReticleDataGhostSizeCheck;
  static_assert(sizeof(ReticleDataGhost) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataGhost::ProcessHitPoint
// Il2CppName: ProcessHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::ReticleDataGhost::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::DistanceReticles::ReticleDataGhost::ProcessHitPoint)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataGhost*), "ProcessHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataGhost::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
