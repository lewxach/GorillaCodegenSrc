// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Surfaces.ISurfacePatch
#include "Oculus/Interaction/Surfaces/ISurfacePatch.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: PlaneSurface
  class PlaneSurface;
  // Skipping declaration: ISurface because it is already included!
  // Forward declaring type: SurfaceHit
  struct SurfaceHit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: CircleSurface
  class CircleSurface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Surfaces::CircleSurface);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Surfaces::CircleSurface*, "Oculus.Interaction.Surfaces", "CircleSurface");
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Surfaces.CircleSurface
  // [TokenAttribute] Offset: FFFFFFFF
  class CircleSurface : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Surfaces::ISurfacePatch*/ {
    public:
    public:
    // private Oculus.Interaction.Surfaces.PlaneSurface _planeSurface
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::PlaneSurface*) == 0x8);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x28
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Surfaces::ISurfacePatch
    operator ::Oculus::Interaction::Surfaces::ISurfacePatch() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.Surfaces.PlaneSurface _planeSurface
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::PlaneSurface*& dyn__planeSurface();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // public UnityEngine.Transform get_Transform()
    // Offset: 0x48002A4
    ::UnityEngine::Transform* get_Transform();
    // public Oculus.Interaction.Surfaces.ISurface get_BackingSurface()
    // Offset: 0x48002C8
    ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface();
    // protected System.Void Start()
    // Offset: 0x48002D0
    void Start();
    // public System.Boolean Raycast(in UnityEngine.Ray ray, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x48002D4
    bool Raycast(ByRef<::UnityEngine::Ray> ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // public System.Boolean ClosestSurfacePoint(in UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x48005D8
    bool ClosestSurfacePoint(ByRef<::UnityEngine::Vector3> point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // public System.Void InjectAllCircleProximityField(Oculus.Interaction.Surfaces.PlaneSurface planeSurface)
    // Offset: 0x48008DC
    void InjectAllCircleProximityField(::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface);
    // public System.Void InjectPlaneSurface(Oculus.Interaction.Surfaces.PlaneSurface planeSurface)
    // Offset: 0x48008E4
    void InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface* planeSurface);
    // public System.Void InjectOptionalRadius(System.Single radius)
    // Offset: 0x48008EC
    void InjectOptionalRadius(float radius);
    // public System.Void .ctor()
    // Offset: 0x48008F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CircleSurface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Surfaces::CircleSurface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CircleSurface*, creationType>()));
    }
    // private System.Boolean Oculus.Interaction.Surfaces.ISurface.Raycast(in UnityEngine.Ray ray, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x4800908
    bool Oculus_Interaction_Surfaces_ISurface_Raycast(ByRef<::UnityEngine::Ray> ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
    // private System.Boolean Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint(in UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit, System.Single maxDistance)
    // Offset: 0x480090C
    bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(ByRef<::UnityEngine::Vector3> point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, float maxDistance);
  }; // Oculus.Interaction.Surfaces.CircleSurface
  #pragma pack(pop)
  static check_size<sizeof(CircleSurface), 40 + sizeof(float)> __Oculus_Interaction_Surfaces_CircleSurfaceSizeCheck;
  static_assert(sizeof(CircleSurface) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::get_Transform
// Il2CppName: get_Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::Surfaces::CircleSurface::*)()>(&Oculus::Interaction::Surfaces::CircleSurface::get_Transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "get_Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::get_BackingSurface
// Il2CppName: get_BackingSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (Oculus::Interaction::Surfaces::CircleSurface::*)()>(&Oculus::Interaction::Surfaces::CircleSurface::get_BackingSurface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "get_BackingSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CircleSurface::*)()>(&Oculus::Interaction::Surfaces::CircleSurface::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CircleSurface::*)(ByRef<::UnityEngine::Ray>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::CircleSurface::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::ClosestSurfacePoint
// Il2CppName: ClosestSurfacePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CircleSurface::*)(ByRef<::UnityEngine::Vector3>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::CircleSurface::ClosestSurfacePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "ClosestSurfacePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleProximityField
// Il2CppName: InjectAllCircleProximityField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CircleSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleProximityField)> {
  static const MethodInfo* get() {
    static auto* planeSurface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "PlaneSurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "InjectAllCircleProximityField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeSurface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::InjectPlaneSurface
// Il2CppName: InjectPlaneSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CircleSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&Oculus::Interaction::Surfaces::CircleSurface::InjectPlaneSurface)> {
  static const MethodInfo* get() {
    static auto* planeSurface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "PlaneSurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "InjectPlaneSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{planeSurface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::InjectOptionalRadius
// Il2CppName: InjectOptionalRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CircleSurface::*)(float)>(&Oculus::Interaction::Surfaces::CircleSurface::InjectOptionalRadius)> {
  static const MethodInfo* get() {
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "InjectOptionalRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radius});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_Raycast
// Il2CppName: Oculus.Interaction.Surfaces.ISurface.Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CircleSurface::*)(ByRef<::UnityEngine::Ray>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "Oculus.Interaction.Surfaces.ISurface.Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hit, maxDistance});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
// Il2CppName: Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CircleSurface::*)(ByRef<::UnityEngine::Vector3>, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, float)>(&Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CircleSurface*), "Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit, maxDistance});
  }
};