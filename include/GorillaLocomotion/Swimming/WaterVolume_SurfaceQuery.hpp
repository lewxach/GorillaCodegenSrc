// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaLocomotion.Swimming.WaterVolume
#include "GorillaLocomotion/Swimming/WaterVolume.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery, "GorillaLocomotion.Swimming", "WaterVolume/SurfaceQuery");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GorillaLocomotion.Swimming.WaterVolume/SurfaceQuery
  // [TokenAttribute] Offset: FFFFFFFF
  struct WaterVolume::SurfaceQuery/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 surfacePoint
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 surfacePoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 surfaceNormal
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 surfaceNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single maxDepth
    // Size: 0x4
    // Offset: 0x18
    float maxDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SurfaceQuery
    constexpr SurfaceQuery(::UnityEngine::Vector3 surfacePoint_ = {}, ::UnityEngine::Vector3 surfaceNormal_ = {}, float maxDepth_ = {}) noexcept : surfacePoint{surfacePoint_}, surfaceNormal{surfaceNormal_}, maxDepth{maxDepth_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 surfacePoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_surfacePoint();
    // Get instance field reference: public UnityEngine.Vector3 surfaceNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_surfaceNormal();
    // Get instance field reference: public System.Single maxDepth
    [[deprecated("Use field access instead!")]] float& dyn_maxDepth();
    // public UnityEngine.Plane get_surfacePlane()
    // Offset: 0x27E5F24
    ::UnityEngine::Plane get_surfacePlane();
  }; // GorillaLocomotion.Swimming.WaterVolume/SurfaceQuery
  #pragma pack(pop)
  static check_size<sizeof(WaterVolume::SurfaceQuery), 24 + sizeof(float)> __GorillaLocomotion_Swimming_WaterVolume_SurfaceQuerySizeCheck;
  static_assert(sizeof(WaterVolume::SurfaceQuery) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery::get_surfacePlane
// Il2CppName: get_surfacePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery::*)()>(&GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery::get_surfacePlane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::WaterVolume::SurfaceQuery), "get_surfacePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
