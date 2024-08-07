// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tappable
#include "GlobalNamespace/Tappable.hpp"
// Including type: CrystalOctave
#include "GlobalNamespace/CrystalOctave.hpp"
// Including type: CrystalNote
#include "GlobalNamespace/CrystalNote.hpp"
// Including type: TimeSince
#include "GlobalNamespace/TimeSince.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaCaveCrystalVisuals
  class GorillaCaveCrystalVisuals;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaCaveCrystal
  class GorillaCaveCrystal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaCaveCrystal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaCaveCrystal*, "", "GorillaCaveCrystal");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: GorillaCaveCrystal
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaCaveCrystal : public ::GlobalNamespace::Tappable {
    public:
    // Nested type: ::GlobalNamespace::GorillaCaveCrystal::GorillaCaveCrystalManager
    class GorillaCaveCrystalManager;
    // Nested type: ::GlobalNamespace::GorillaCaveCrystal::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    public:
    // public System.Boolean overrideSoundAndMaterial
    // Size: 0x1
    // Offset: 0x44
    bool overrideSoundAndMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideSoundAndMaterial and: octave
    char __padding0[0x3] = {};
    // public CrystalOctave octave
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::CrystalOctave octave;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CrystalOctave) == 0x4);
    // public CrystalNote note
    // Size: 0x4
    // Offset: 0x4C
    ::GlobalNamespace::CrystalNote note;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CrystalNote) == 0x4);
    // private UnityEngine.MeshRenderer _crystalRenderer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::MeshRenderer* crystalRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public GorillaCaveCrystalVisuals visuals
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::GorillaCaveCrystalVisuals* visuals;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaCaveCrystalVisuals*) == 0x8);
    // private System.Single _tapAnimLength
    // Size: 0x4
    // Offset: 0x60
    float tapAnimLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lerpMidpoint
    // Size: 0x4
    // Offset: 0x64
    float lerpMidpoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _lerpInCurve
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::AnimationCurve* lerpInCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _lerpOutCurve
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AnimationCurve* lerpOutCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Boolean _animating
    // Size: 0x1
    // Offset: 0x78
    bool animating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animating and: tapStrength
    char __padding9[0x3] = {};
    // private System.Single _tapStrength
    // Size: 0x4
    // Offset: 0x7C
    float tapStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TimeSince _timeSinceLastTap
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::TimeSince timeSinceLastTap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TimeSince) == 0x8);
    public:
    // Get instance field reference: public System.Boolean overrideSoundAndMaterial
    [[deprecated("Use field access instead!")]] bool& dyn_overrideSoundAndMaterial();
    // Get instance field reference: public CrystalOctave octave
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CrystalOctave& dyn_octave();
    // Get instance field reference: public CrystalNote note
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CrystalNote& dyn_note();
    // Get instance field reference: private UnityEngine.MeshRenderer _crystalRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__crystalRenderer();
    // Get instance field reference: public GorillaCaveCrystalVisuals visuals
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaCaveCrystalVisuals*& dyn_visuals();
    // Get instance field reference: private System.Single _tapAnimLength
    [[deprecated("Use field access instead!")]] float& dyn__tapAnimLength();
    // Get instance field reference: private System.Single _lerpMidpoint
    [[deprecated("Use field access instead!")]] float& dyn__lerpMidpoint();
    // Get instance field reference: private UnityEngine.AnimationCurve _lerpInCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__lerpInCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _lerpOutCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__lerpOutCurve();
    // Get instance field reference: private System.Boolean _animating
    [[deprecated("Use field access instead!")]] bool& dyn__animating();
    // Get instance field reference: private System.Single _tapStrength
    [[deprecated("Use field access instead!")]] float& dyn__tapStrength();
    // Get instance field reference: private TimeSince _timeSinceLastTap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TimeSince& dyn__timeSinceLastTap();
    // private System.Void Awake()
    // Offset: 0x2704B88
    void Awake();
    // private System.Void SetUnderwaterVisuals()
    // Offset: 0x2704DE4
    void SetUnderwaterVisuals();
    // public System.Void AddVisuals()
    // Offset: 0x27050E4
    void AddVisuals();
    // private System.Void AnimateCrystal()
    // Offset: 0x27054A4
    void AnimateCrystal();
    // public System.Void InvokeUpdate()
    // Offset: 0x2705580
    void InvokeUpdate();
    // public override System.Void OnTapLocal(System.Single tapStrength, System.Single tapTime, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x270549C
    // Implemented from: Tappable
    // Base method: System.Void Tappable::OnTapLocal(System.Single tapStrength, System.Single tapTime, Photon.Pun.PhotonMessageInfo info)
    void OnTapLocal(float tapStrength, float tapTime, ::Photon::Pun::PhotonMessageInfo info);
    // protected override System.Void OnEnable()
    // Offset: 0x2705668
    // Implemented from: Tappable
    // Base method: System.Void Tappable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x270581C
    // Implemented from: Tappable
    // Base method: System.Void Tappable::OnDisable()
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x270597C
    // Implemented from: Tappable
    // Base method: System.Void Tappable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaCaveCrystal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaCaveCrystal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaCaveCrystal*, creationType>()));
    }
  }; // GorillaCaveCrystal
  #pragma pack(pop)
  static check_size<sizeof(GorillaCaveCrystal), 128 + sizeof(::GlobalNamespace::TimeSince)> __GlobalNamespace_GorillaCaveCrystalSizeCheck;
  static_assert(sizeof(GorillaCaveCrystal) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::SetUnderwaterVisuals
// Il2CppName: SetUnderwaterVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::SetUnderwaterVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "SetUnderwaterVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::AddVisuals
// Il2CppName: AddVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::AddVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "AddVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::AnimateCrystal
// Il2CppName: AnimateCrystal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::AnimateCrystal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "AnimateCrystal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::InvokeUpdate
// Il2CppName: InvokeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::InvokeUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "InvokeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::OnTapLocal
// Il2CppName: OnTapLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)(float, float, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GorillaCaveCrystal::OnTapLocal)> {
  static const MethodInfo* get() {
    static auto* tapStrength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tapTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "OnTapLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tapStrength, tapTime, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCaveCrystal::*)()>(&GlobalNamespace::GorillaCaveCrystal::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCaveCrystal*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCaveCrystal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
