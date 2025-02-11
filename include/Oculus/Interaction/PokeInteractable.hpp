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
  // Forward declaring type: PokeInteractor
  class PokeInteractor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: ISurfacePatch
  class ISurfacePatch;
  // Forward declaring type: SurfaceHit
  struct SurfaceHit;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PokeInteractable
  class PokeInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PokeInteractable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PokeInteractable*, "Oculus.Interaction", "PokeInteractable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PokeInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class PokeInteractable : public ::Oculus::Interaction::PointerInteractable_2<::Oculus::Interaction::PokeInteractor*, ::Oculus::Interaction::PokeInteractable*> {
    public:
    // Nested type: ::Oculus::Interaction::PokeInteractable::MinThresholdsConfig
    class MinThresholdsConfig;
    // Nested type: ::Oculus::Interaction::PokeInteractable::DragThresholdsConfig
    class DragThresholdsConfig;
    // Nested type: ::Oculus::Interaction::PokeInteractable::PositionPinningConfig
    class PositionPinningConfig;
    // Nested type: ::Oculus::Interaction::PokeInteractable::RecoilAssistConfig
    class RecoilAssistConfig;
    public:
    // private UnityEngine.Object _surfacePatch
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Object* surfacePatch;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Surfaces.ISurfacePatch <SurfacePatch>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    ::Oculus::Interaction::Surfaces::ISurfacePatch* SurfacePatch;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Surfaces::ISurfacePatch*) == 0x8);
    // private System.Single _enterHoverNormal
    // Size: 0x4
    // Offset: 0xD8
    float enterHoverNormal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _enterHoverTangent
    // Size: 0x4
    // Offset: 0xDC
    float enterHoverTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _exitHoverNormal
    // Size: 0x4
    // Offset: 0xE0
    float exitHoverNormal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _exitHoverTangent
    // Size: 0x4
    // Offset: 0xE4
    float exitHoverTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cancelSelectNormal
    // Size: 0x4
    // Offset: 0xE8
    float cancelSelectNormal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cancelSelectTangent
    // Size: 0x4
    // Offset: 0xEC
    float cancelSelectTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Interaction.PokeInteractable/MinThresholdsConfig _minThresholds
    // Size: 0x8
    // Offset: 0xF0
    ::Oculus::Interaction::PokeInteractable::MinThresholdsConfig* minThresholds;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PokeInteractable::MinThresholdsConfig*) == 0x8);
    // private Oculus.Interaction.PokeInteractable/DragThresholdsConfig _dragThresholds
    // Size: 0x8
    // Offset: 0xF8
    ::Oculus::Interaction::PokeInteractable::DragThresholdsConfig* dragThresholds;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PokeInteractable::DragThresholdsConfig*) == 0x8);
    // private Oculus.Interaction.PokeInteractable/PositionPinningConfig _positionPinning
    // Size: 0x8
    // Offset: 0x100
    ::Oculus::Interaction::PokeInteractable::PositionPinningConfig* positionPinning;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PokeInteractable::PositionPinningConfig*) == 0x8);
    // private Oculus.Interaction.PokeInteractable/RecoilAssistConfig _recoilAssist
    // Size: 0x8
    // Offset: 0x108
    ::Oculus::Interaction::PokeInteractable::RecoilAssistConfig* recoilAssist;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PokeInteractable::RecoilAssistConfig*) == 0x8);
    // private System.Single _closeDistanceThreshold
    // Size: 0x4
    // Offset: 0x110
    float closeDistanceThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _tiebreakerScore
    // Size: 0x4
    // Offset: 0x114
    int tiebreakerScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Object _surfacePatch
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__surfacePatch();
    // Get instance field reference: private Oculus.Interaction.Surfaces.ISurfacePatch <SurfacePatch>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::ISurfacePatch*& dyn_$SurfacePatch$k__BackingField();
    // Get instance field reference: private System.Single _enterHoverNormal
    [[deprecated("Use field access instead!")]] float& dyn__enterHoverNormal();
    // Get instance field reference: private System.Single _enterHoverTangent
    [[deprecated("Use field access instead!")]] float& dyn__enterHoverTangent();
    // Get instance field reference: private System.Single _exitHoverNormal
    [[deprecated("Use field access instead!")]] float& dyn__exitHoverNormal();
    // Get instance field reference: private System.Single _exitHoverTangent
    [[deprecated("Use field access instead!")]] float& dyn__exitHoverTangent();
    // Get instance field reference: private System.Single _cancelSelectNormal
    [[deprecated("Use field access instead!")]] float& dyn__cancelSelectNormal();
    // Get instance field reference: private System.Single _cancelSelectTangent
    [[deprecated("Use field access instead!")]] float& dyn__cancelSelectTangent();
    // Get instance field reference: private Oculus.Interaction.PokeInteractable/MinThresholdsConfig _minThresholds
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PokeInteractable::MinThresholdsConfig*& dyn__minThresholds();
    // Get instance field reference: private Oculus.Interaction.PokeInteractable/DragThresholdsConfig _dragThresholds
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PokeInteractable::DragThresholdsConfig*& dyn__dragThresholds();
    // Get instance field reference: private Oculus.Interaction.PokeInteractable/PositionPinningConfig _positionPinning
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PokeInteractable::PositionPinningConfig*& dyn__positionPinning();
    // Get instance field reference: private Oculus.Interaction.PokeInteractable/RecoilAssistConfig _recoilAssist
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PokeInteractable::RecoilAssistConfig*& dyn__recoilAssist();
    // Get instance field reference: private System.Single _closeDistanceThreshold
    [[deprecated("Use field access instead!")]] float& dyn__closeDistanceThreshold();
    // Get instance field reference: private System.Int32 _tiebreakerScore
    [[deprecated("Use field access instead!")]] int& dyn__tiebreakerScore();
    // public Oculus.Interaction.Surfaces.ISurfacePatch get_SurfacePatch()
    // Offset: 0x47ACEE0
    ::Oculus::Interaction::Surfaces::ISurfacePatch* get_SurfacePatch();
    // private System.Void set_SurfacePatch(Oculus.Interaction.Surfaces.ISurfacePatch value)
    // Offset: 0x47ACEE8
    void set_SurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch* value);
    // public System.Single get_EnterHoverNormal()
    // Offset: 0x47ACEF0
    float get_EnterHoverNormal();
    // public System.Void set_EnterHoverNormal(System.Single value)
    // Offset: 0x47ACEF8
    void set_EnterHoverNormal(float value);
    // public System.Single get_EnterHoverTangent()
    // Offset: 0x47ACF00
    float get_EnterHoverTangent();
    // public System.Void set_EnterHoverTangent(System.Single value)
    // Offset: 0x47ACF08
    void set_EnterHoverTangent(float value);
    // public System.Single get_ExitHoverNormal()
    // Offset: 0x47ACF10
    float get_ExitHoverNormal();
    // public System.Void set_ExitHoverNormal(System.Single value)
    // Offset: 0x47ACF18
    void set_ExitHoverNormal(float value);
    // public System.Single get_ExitHoverTangent()
    // Offset: 0x47ACF20
    float get_ExitHoverTangent();
    // public System.Void set_ExitHoverTangent(System.Single value)
    // Offset: 0x47ACF28
    void set_ExitHoverTangent(float value);
    // public System.Single get_CancelSelectNormal()
    // Offset: 0x47ACF30
    float get_CancelSelectNormal();
    // public System.Void set_CancelSelectNormal(System.Single value)
    // Offset: 0x47ACF38
    void set_CancelSelectNormal(float value);
    // public System.Single get_CancelSelectTangent()
    // Offset: 0x47ACF40
    float get_CancelSelectTangent();
    // public System.Void set_CancelSelectTangent(System.Single value)
    // Offset: 0x47ACF48
    void set_CancelSelectTangent(float value);
    // public System.Single get_CloseDistanceThreshold()
    // Offset: 0x47ACF50
    float get_CloseDistanceThreshold();
    // public System.Void set_CloseDistanceThreshold(System.Single value)
    // Offset: 0x47ACF58
    void set_CloseDistanceThreshold(float value);
    // public System.Int32 get_TiebreakerScore()
    // Offset: 0x47ACF60
    int get_TiebreakerScore();
    // public System.Void set_TiebreakerScore(System.Int32 value)
    // Offset: 0x47ACF68
    void set_TiebreakerScore(int value);
    // public Oculus.Interaction.PokeInteractable/MinThresholdsConfig get_MinThresholds()
    // Offset: 0x47ACF70
    ::Oculus::Interaction::PokeInteractable::MinThresholdsConfig* get_MinThresholds();
    // public System.Void set_MinThresholds(Oculus.Interaction.PokeInteractable/MinThresholdsConfig value)
    // Offset: 0x47ACF78
    void set_MinThresholds(::Oculus::Interaction::PokeInteractable::MinThresholdsConfig* value);
    // public Oculus.Interaction.PokeInteractable/DragThresholdsConfig get_DragThresholds()
    // Offset: 0x47ACF80
    ::Oculus::Interaction::PokeInteractable::DragThresholdsConfig* get_DragThresholds();
    // public System.Void set_DragThresholds(Oculus.Interaction.PokeInteractable/DragThresholdsConfig value)
    // Offset: 0x47ACF88
    void set_DragThresholds(::Oculus::Interaction::PokeInteractable::DragThresholdsConfig* value);
    // public Oculus.Interaction.PokeInteractable/PositionPinningConfig get_PositionPinning()
    // Offset: 0x47ACF90
    ::Oculus::Interaction::PokeInteractable::PositionPinningConfig* get_PositionPinning();
    // public System.Void set_PositionPinning(Oculus.Interaction.PokeInteractable/PositionPinningConfig value)
    // Offset: 0x47ACF98
    void set_PositionPinning(::Oculus::Interaction::PokeInteractable::PositionPinningConfig* value);
    // public Oculus.Interaction.PokeInteractable/RecoilAssistConfig get_RecoilAssist()
    // Offset: 0x47ACFA8
    ::Oculus::Interaction::PokeInteractable::RecoilAssistConfig* get_RecoilAssist();
    // public System.Void set_RecoilAssist(Oculus.Interaction.PokeInteractable/RecoilAssistConfig value)
    // Offset: 0x47ACFB0
    void set_RecoilAssist(::Oculus::Interaction::PokeInteractable::RecoilAssistConfig* value);
    // public System.Boolean ClosestSurfacePatchHit(UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit)
    // Offset: 0x47AD140
    bool ClosestSurfacePatchHit(::UnityEngine::Vector3 point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit);
    // public System.Boolean ClosestBackingSurfaceHit(UnityEngine.Vector3 point, out Oculus.Interaction.Surfaces.SurfaceHit hit)
    // Offset: 0x47AD20C
    bool ClosestBackingSurfaceHit(::UnityEngine::Vector3 point, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit);
    // public System.Void InjectAllPokeInteractable(Oculus.Interaction.Surfaces.ISurfacePatch surfacePatch)
    // Offset: 0x47AD34C
    void InjectAllPokeInteractable(::Oculus::Interaction::Surfaces::ISurfacePatch* surfacePatch);
    // public System.Void InjectSurfacePatch(Oculus.Interaction.Surfaces.ISurfacePatch surfacePatch)
    // Offset: 0x47AD350
    void InjectSurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch* surfacePatch);
    // private System.Void <Start>b__58_0()
    // Offset: 0x47AD820
    void $Start$b__58_0();
    // protected override System.Void Awake()
    // Offset: 0x47ACFC0
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0x47AD040
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::Start()
    void Start();
    // public System.Void .ctor()
    // Offset: 0x47AD420
    // Implemented from: Oculus.Interaction.PointerInteractable`2
    // Base method: System.Void PointerInteractable_2::.ctor()
    // Base method: System.Void Interactable_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PokeInteractable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PokeInteractable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PokeInteractable*, creationType>()));
    }
  }; // Oculus.Interaction.PokeInteractable
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_SurfacePatch
// Il2CppName: get_SurfacePatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch* (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_SurfacePatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_SurfacePatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_SurfacePatch
// Il2CppName: set_SurfacePatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&Oculus::Interaction::PokeInteractable::set_SurfacePatch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurfacePatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_SurfacePatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_EnterHoverNormal
// Il2CppName: get_EnterHoverNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_EnterHoverNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_EnterHoverNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_EnterHoverNormal
// Il2CppName: set_EnterHoverNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_EnterHoverNormal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_EnterHoverNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_EnterHoverTangent
// Il2CppName: get_EnterHoverTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_EnterHoverTangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_EnterHoverTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_EnterHoverTangent
// Il2CppName: set_EnterHoverTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_EnterHoverTangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_EnterHoverTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_ExitHoverNormal
// Il2CppName: get_ExitHoverNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_ExitHoverNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_ExitHoverNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_ExitHoverNormal
// Il2CppName: set_ExitHoverNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_ExitHoverNormal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_ExitHoverNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_ExitHoverTangent
// Il2CppName: get_ExitHoverTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_ExitHoverTangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_ExitHoverTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_ExitHoverTangent
// Il2CppName: set_ExitHoverTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_ExitHoverTangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_ExitHoverTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_CancelSelectNormal
// Il2CppName: get_CancelSelectNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_CancelSelectNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_CancelSelectNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_CancelSelectNormal
// Il2CppName: set_CancelSelectNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_CancelSelectNormal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_CancelSelectNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_CancelSelectTangent
// Il2CppName: get_CancelSelectTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_CancelSelectTangent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_CancelSelectTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_CancelSelectTangent
// Il2CppName: set_CancelSelectTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_CancelSelectTangent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_CancelSelectTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_CloseDistanceThreshold
// Il2CppName: get_CloseDistanceThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_CloseDistanceThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_CloseDistanceThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_CloseDistanceThreshold
// Il2CppName: set_CloseDistanceThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(float)>(&Oculus::Interaction::PokeInteractable::set_CloseDistanceThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_CloseDistanceThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_TiebreakerScore
// Il2CppName: get_TiebreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_TiebreakerScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_TiebreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_TiebreakerScore
// Il2CppName: set_TiebreakerScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(int)>(&Oculus::Interaction::PokeInteractable::set_TiebreakerScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_TiebreakerScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_MinThresholds
// Il2CppName: get_MinThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PokeInteractable::MinThresholdsConfig* (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_MinThresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_MinThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_MinThresholds
// Il2CppName: set_MinThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable::MinThresholdsConfig*)>(&Oculus::Interaction::PokeInteractable::set_MinThresholds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable/MinThresholdsConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_MinThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_DragThresholds
// Il2CppName: get_DragThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PokeInteractable::DragThresholdsConfig* (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_DragThresholds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_DragThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_DragThresholds
// Il2CppName: set_DragThresholds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable::DragThresholdsConfig*)>(&Oculus::Interaction::PokeInteractable::set_DragThresholds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable/DragThresholdsConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_DragThresholds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_PositionPinning
// Il2CppName: get_PositionPinning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PokeInteractable::PositionPinningConfig* (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_PositionPinning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_PositionPinning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_PositionPinning
// Il2CppName: set_PositionPinning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable::PositionPinningConfig*)>(&Oculus::Interaction::PokeInteractable::set_PositionPinning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable/PositionPinningConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_PositionPinning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::get_RecoilAssist
// Il2CppName: get_RecoilAssist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::PokeInteractable::RecoilAssistConfig* (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::get_RecoilAssist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "get_RecoilAssist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::set_RecoilAssist
// Il2CppName: set_RecoilAssist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable::RecoilAssistConfig*)>(&Oculus::Interaction::PokeInteractable::set_RecoilAssist)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable/RecoilAssistConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "set_RecoilAssist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::ClosestSurfacePatchHit
// Il2CppName: ClosestSurfacePatchHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PokeInteractable::*)(::UnityEngine::Vector3, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&Oculus::Interaction::PokeInteractable::ClosestSurfacePatchHit)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "ClosestSurfacePatchHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::ClosestBackingSurfaceHit
// Il2CppName: ClosestBackingSurfaceHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PokeInteractable::*)(::UnityEngine::Vector3, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&Oculus::Interaction::PokeInteractable::ClosestBackingSurfaceHit)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "ClosestBackingSurfaceHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::InjectAllPokeInteractable
// Il2CppName: InjectAllPokeInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&Oculus::Interaction::PokeInteractable::InjectAllPokeInteractable)> {
  static const MethodInfo* get() {
    static auto* surfacePatch = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurfacePatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "InjectAllPokeInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surfacePatch});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::InjectSurfacePatch
// Il2CppName: InjectSurfacePatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&Oculus::Interaction::PokeInteractable::InjectSurfacePatch)> {
  static const MethodInfo* get() {
    static auto* surfacePatch = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "ISurfacePatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "InjectSurfacePatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{surfacePatch});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::$Start$b__58_0
// Il2CppName: <Start>b__58_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::$Start$b__58_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "<Start>b__58_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractable::*)()>(&Oculus::Interaction::PokeInteractable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
