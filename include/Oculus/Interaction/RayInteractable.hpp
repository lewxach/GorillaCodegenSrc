// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PointerInteractable`2
#include "Oculus/Interaction/PointerInteractable_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: RayInteractor
  class RayInteractor;
  // Forward declaring type: IMovementProvider
  class IMovementProvider;
  // Forward declaring type: IMovement
  class IMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Pose because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: ISurface
  class ISurface;
  // Forward declaring type: SurfaceHit
  struct SurfaceHit;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: RayInteractable
  class RayInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::RayInteractable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::RayInteractable*, "Oculus.Interaction", "RayInteractable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.RayInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class RayInteractable : public ::Oculus::Interaction::PointerInteractable_2<::Oculus::Interaction::RayInteractor*, ::Oculus::Interaction::RayInteractable*> {
    public:
    public:
    // private UnityEngine.Object _surface
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Object* surface;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Surfaces.ISurface <Surface>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::Oculus::Interaction::Surfaces::ISurface* Surface;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::ISurface*) == 0x8);
    // private UnityEngine.Object _selectSurface
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Object* selectSurface;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Surfaces.ISurface SelectSurface
    // Size: 0x8
    // Offset: 0xE0
    ::Oculus::Interaction::Surfaces::ISurface* SelectSurface;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::ISurface*) == 0x8);
    // private UnityEngine.Object _movementProvider
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::Object* movementProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IMovementProvider <MovementProvider>k__BackingField
    // Size: 0x8
    // Offset: 0xF0
    ::Oculus::Interaction::IMovementProvider* MovementProvider;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IMovementProvider*) == 0x8);
    // private System.Int32 _tiebreakerScore
    // Size: 0x4
    // Offset: 0xF8
    int tiebreakerScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Object _surface
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__surface();
    // Get instance field reference: private Oculus.Interaction.Surfaces.ISurface <Surface>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::ISurface*& dyn_$Surface$k__BackingField();
    // Get instance field reference: private UnityEngine.Object _selectSurface
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__selectSurface();
    // Get instance field reference: private Oculus.Interaction.Surfaces.ISurface SelectSurface
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::ISurface*& dyn_SelectSurface();
    // Get instance field reference: private UnityEngine.Object _movementProvider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__movementProvider();
    // Get instance field reference: private Oculus.Interaction.IMovementProvider <MovementProvider>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IMovementProvider*& dyn_$MovementProvider$k__BackingField();
    // Get instance field reference: private System.Int32 _tiebreakerScore
    [[deprecated("Use field access instead!")]] int& dyn__tiebreakerScore();
    // public Oculus.Interaction.Surfaces.ISurface get_Surface()
    // Offset: 0x47B3520
    ::Oculus::Interaction::Surfaces::ISurface* get_Surface();
    // private System.Void set_Surface(Oculus.Interaction.Surfaces.ISurface value)
    // Offset: 0x47B3528
    void set_Surface(::Oculus::Interaction::Surfaces::ISurface* value);
    // private Oculus.Interaction.IMovementProvider get_MovementProvider()
    // Offset: 0x47B3530
    ::Oculus::Interaction::IMovementProvider* get_MovementProvider();
    // private System.Void set_MovementProvider(Oculus.Interaction.IMovementProvider value)
    // Offset: 0x47B3538
    void set_MovementProvider(::Oculus::Interaction::IMovementProvider* value);
    // public System.Int32 get_TiebreakerScore()
    // Offset: 0x47B3540
    int get_TiebreakerScore();
    // public System.Void set_TiebreakerScore(System.Int32 value)
    // Offset: 0x47B3548
    void set_TiebreakerScore(int value);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out Oculus.Interaction.Surfaces.SurfaceHit hit, in System.Single maxDistance, System.Boolean selectSurface)
    // Offset: 0x47B37B4
    bool Raycast(::UnityEngine::Ray ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit, ByRef<float> maxDistance, bool selectSurface);
    // public Oculus.Interaction.IMovement GenerateMovement(in UnityEngine.Pose to, in UnityEngine.Pose source)
    // Offset: 0x47B38AC
    ::Oculus::Interaction::IMovement* GenerateMovement(ByRef<::UnityEngine::Pose> to, ByRef<::UnityEngine::Pose> source);
    // public System.Void InjectAllRayInteractable(Oculus.Interaction.Surfaces.ISurface surface)
    // Offset: 0x47B3AA0
    void InjectAllRayInteractable(::Oculus::Interaction::Surfaces::ISurface* surface);
    // public System.Void InjectSurface(Oculus.Interaction.Surfaces.ISurface surface)
    // Offset: 0x47B3AA4
    void InjectSurface(::Oculus::Interaction::Surfaces::ISurface* surface);
    // public System.Void InjectOptionalSelectSurface(Oculus.Interaction.Surfaces.ISurface surface)
    // Offset: 0x47B3B70
    void InjectOptionalSelectSurface(::Oculus::Interaction::Surfaces::ISurface* surface);
    // public System.Void InjectOptionalMovementProvider(Oculus.Interaction.IMovementProvider provider)
    // Offset: 0x47B3C3C
    void InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider* provider);
    // private System.Void <Start>b__17_0()
    // Offset: 0x47B3D54
    void $Start$b__17_0();
    // protected override System.Void Awake()
    // Offset: 0x47B3550
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0x47B3630
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::Start()
    void Start();
    // public System.Void .ctor()
    // Offset: 0x47B3D0C
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::.ctor()
    // Base method: System.Void Interactable_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RayInteractable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::RayInteractable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RayInteractable*, creationType>()));
    }
  }; // Oculus.Interaction.RayInteractable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::get_Surface
// Il2CppName: get_Surface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::get_Surface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "get_Surface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::set_Surface
// Il2CppName: set_Surface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::RayInteractable::set_Surface)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "set_Surface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::get_MovementProvider
// Il2CppName: get_MovementProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IMovementProvider* (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::get_MovementProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "get_MovementProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::set_MovementProvider
// Il2CppName: set_MovementProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&Oculus::Interaction::RayInteractable::set_MovementProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IMovementProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "set_MovementProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::get_TiebreakerScore
// Il2CppName: get_TiebreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::get_TiebreakerScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "get_TiebreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::set_TiebreakerScore
// Il2CppName: set_TiebreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(int)>(&Oculus::Interaction::RayInteractable::set_TiebreakerScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "set_TiebreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::RayInteractable::*)(::UnityEngine::Ray, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>, ByRef<float>, bool)>(&Oculus::Interaction::RayInteractable::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* selectSurface = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hit, maxDistance, selectSurface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::GenerateMovement
// Il2CppName: GenerateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IMovement* (Oculus::Interaction::RayInteractable::*)(ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::RayInteractable::GenerateMovement)> {
  static const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "GenerateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to, source});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::InjectAllRayInteractable
// Il2CppName: InjectAllRayInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::RayInteractable::InjectAllRayInteractable)> {
  static const MethodInfo* get() {
    static auto* surface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "InjectAllRayInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::InjectSurface
// Il2CppName: InjectSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::RayInteractable::InjectSurface)> {
  static const MethodInfo* get() {
    static auto* surface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "InjectSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::InjectOptionalSelectSurface
// Il2CppName: InjectOptionalSelectSurface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&Oculus::Interaction::RayInteractable::InjectOptionalSelectSurface)> {
  static const MethodInfo* get() {
    static auto* surface = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "InjectOptionalSelectSurface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surface});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::InjectOptionalMovementProvider
// Il2CppName: InjectOptionalMovementProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&Oculus::Interaction::RayInteractable::InjectOptionalMovementProvider)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IMovementProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "InjectOptionalMovementProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::$Start$b__17_0
// Il2CppName: <Start>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::$Start$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "<Start>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RayInteractable::*)()>(&Oculus::Interaction::RayInteractable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RayInteractable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RayInteractable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
