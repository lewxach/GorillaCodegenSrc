// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: Oculus.Interaction.TubePoint
#include "Oculus/Interaction/TubePoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: TubeRenderer
  class TubeRenderer;
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Forward declaring type: LocomotionTutorialTurnVisual
  class LocomotionTutorialTurnVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*, "Oculus.Interaction.Samples", "LocomotionTutorialTurnVisual");
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.LocomotionTutorialTurnVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class LocomotionTutorialTurnVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x20
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _progress
    // Size: 0x4
    // Offset: 0x24
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Renderer _leftArrow
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Renderer* leftArrow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Renderer _rightArrow
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* rightArrow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private Oculus.Interaction.TubeRenderer _leftTrail
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::TubeRenderer* leftTrail;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::TubeRenderer*) == 0x8);
    // private Oculus.Interaction.TubeRenderer _rightTrail
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::TubeRenderer* rightTrail;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::TubeRenderer*) == 0x8);
    // private Oculus.Interaction.MaterialPropertyBlockEditor _leftMaterialBlock
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Interaction::MaterialPropertyBlockEditor* leftMaterialBlock;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private Oculus.Interaction.MaterialPropertyBlockEditor _rightMaterialBlock
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Interaction::MaterialPropertyBlockEditor* rightMaterialBlock;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private System.Single _verticalOffset
    // Size: 0x4
    // Offset: 0x58
    float verticalOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x5C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _margin
    // Size: 0x4
    // Offset: 0x60
    float margin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _trailLength
    // Size: 0x4
    // Offset: 0x64
    float trailLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAngle
    // Size: 0x4
    // Offset: 0x68
    float maxAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _railGap
    // Size: 0x4
    // Offset: 0x6C
    float railGap;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _squeezeLength
    // Size: 0x4
    // Offset: 0x70
    float squeezeLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _disabledColor
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Color disabledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _enabledColor
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Color enabledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highligtedColor
    // Size: 0x10
    // Offset: 0x94
    ::UnityEngine::Color highligtedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0xA4
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Single _degreesPerSegment
    static constexpr const float _degreesPerSegment = 1;
    // Get static field: static private System.Single _degreesPerSegment
    static float _get__degreesPerSegment();
    // Set static field: static private System.Single _degreesPerSegment
    static void _set__degreesPerSegment(float value);
    // Get static field: static private readonly UnityEngine.Quaternion _rotationCorrectionLeft
    static ::UnityEngine::Quaternion _get__rotationCorrectionLeft();
    // Set static field: static private readonly UnityEngine.Quaternion _rotationCorrectionLeft
    static void _set__rotationCorrectionLeft(::UnityEngine::Quaternion value);
    // Get static field: static private readonly System.Int32 _colorShaderPropertyID
    static int _get__colorShaderPropertyID();
    // Set static field: static private readonly System.Int32 _colorShaderPropertyID
    static void _set__colorShaderPropertyID(int value);
    // Get instance field reference: private System.Single _value
    [[deprecated("Use field access instead!")]] float& dyn__value();
    // Get instance field reference: private System.Single _progress
    [[deprecated("Use field access instead!")]] float& dyn__progress();
    // Get instance field reference: private UnityEngine.Renderer _leftArrow
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__leftArrow();
    // Get instance field reference: private UnityEngine.Renderer _rightArrow
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__rightArrow();
    // Get instance field reference: private Oculus.Interaction.TubeRenderer _leftTrail
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::TubeRenderer*& dyn__leftTrail();
    // Get instance field reference: private Oculus.Interaction.TubeRenderer _rightTrail
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::TubeRenderer*& dyn__rightTrail();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _leftMaterialBlock
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__leftMaterialBlock();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _rightMaterialBlock
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__rightMaterialBlock();
    // Get instance field reference: private System.Single _verticalOffset
    [[deprecated("Use field access instead!")]] float& dyn__verticalOffset();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // Get instance field reference: private System.Single _margin
    [[deprecated("Use field access instead!")]] float& dyn__margin();
    // Get instance field reference: private System.Single _trailLength
    [[deprecated("Use field access instead!")]] float& dyn__trailLength();
    // Get instance field reference: private System.Single _maxAngle
    [[deprecated("Use field access instead!")]] float& dyn__maxAngle();
    // Get instance field reference: private System.Single _railGap
    [[deprecated("Use field access instead!")]] float& dyn__railGap();
    // Get instance field reference: private System.Single _squeezeLength
    [[deprecated("Use field access instead!")]] float& dyn__squeezeLength();
    // Get instance field reference: private UnityEngine.Color _disabledColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__disabledColor();
    // Get instance field reference: private UnityEngine.Color _enabledColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__enabledColor();
    // Get instance field reference: private UnityEngine.Color _highligtedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__highligtedColor();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public System.Single get_VerticalOffset()
    // Offset: 0x479F5D8
    float get_VerticalOffset();
    // public System.Void set_VerticalOffset(System.Single value)
    // Offset: 0x479F5E0
    void set_VerticalOffset(float value);
    // public UnityEngine.Color get_DisabledColor()
    // Offset: 0x479F5E8
    ::UnityEngine::Color get_DisabledColor();
    // public System.Void set_DisabledColor(UnityEngine.Color value)
    // Offset: 0x479F5F4
    void set_DisabledColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_EnabledColor()
    // Offset: 0x479F600
    ::UnityEngine::Color get_EnabledColor();
    // public System.Void set_EnabledColor(UnityEngine.Color value)
    // Offset: 0x479F60C
    void set_EnabledColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_HighligtedColor()
    // Offset: 0x479F618
    ::UnityEngine::Color get_HighligtedColor();
    // public System.Void set_HighligtedColor(UnityEngine.Color value)
    // Offset: 0x479F624
    void set_HighligtedColor(::UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0x479F630
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x479F6D4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x479F734
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x479F794
    void Update();
    // private System.Void InitializeVisuals()
    // Offset: 0x479F670
    void InitializeVisuals();
    // private System.Void UpdateArrows()
    // Offset: 0x479F7AC
    void UpdateArrows();
    // private System.Void UpdateArrowPosition(System.Single angle, UnityEngine.Transform arrow)
    // Offset: 0x479FDB4
    void UpdateArrowPosition(float angle, ::UnityEngine::Transform* arrow);
    // private System.Void RotateTrail(System.Single angle, Oculus.Interaction.TubeRenderer trail)
    // Offset: 0x479FF6C
    void RotateTrail(float angle, ::Oculus::Interaction::TubeRenderer* trail);
    // private System.Void UpdateTrail(System.Single angle, Oculus.Interaction.TubeRenderer trail)
    // Offset: 0x479FFF4
    void UpdateTrail(float angle, ::Oculus::Interaction::TubeRenderer* trail);
    // private System.Void UpdateColors()
    // Offset: 0x479F8CC
    void UpdateColors();
    // private Oculus.Interaction.TubePoint[] InitializeSegment(UnityEngine.Vector2 minMax)
    // Offset: 0x479FA58
    ::ArrayW<::Oculus::Interaction::TubePoint> InitializeSegment(::UnityEngine::Vector2 minMax);
    // public System.Void .ctor()
    // Offset: 0x47A0048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionTutorialTurnVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionTutorialTurnVisual*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x47A0090
    static void _cctor();
  }; // Oculus.Interaction.Samples.LocomotionTutorialTurnVisual
  #pragma pack(pop)
  static check_size<sizeof(LocomotionTutorialTurnVisual), 164 + sizeof(bool)> __Oculus_Interaction_Samples_LocomotionTutorialTurnVisualSizeCheck;
  static_assert(sizeof(LocomotionTutorialTurnVisual) == 0xA5);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_VerticalOffset
// Il2CppName: get_VerticalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_VerticalOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "get_VerticalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_VerticalOffset
// Il2CppName: set_VerticalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_VerticalOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "set_VerticalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_DisabledColor
// Il2CppName: get_DisabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_DisabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "get_DisabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_DisabledColor
// Il2CppName: set_DisabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_DisabledColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "set_DisabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_EnabledColor
// Il2CppName: get_EnabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_EnabledColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "get_EnabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_EnabledColor
// Il2CppName: set_EnabledColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_EnabledColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "set_EnabledColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_HighligtedColor
// Il2CppName: get_HighligtedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_HighligtedColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "get_HighligtedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_HighligtedColor
// Il2CppName: set_HighligtedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_HighligtedColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "set_HighligtedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeVisuals
// Il2CppName: InitializeVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "InitializeVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrows
// Il2CppName: UpdateArrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrows)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "UpdateArrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrowPosition
// Il2CppName: UpdateArrowPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float, ::UnityEngine::Transform*)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrowPosition)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* arrow = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "UpdateArrowPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, arrow});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::RotateTrail
// Il2CppName: RotateTrail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float, ::Oculus::Interaction::TubeRenderer*)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::RotateTrail)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* trail = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "TubeRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "RotateTrail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, trail});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateTrail
// Il2CppName: UpdateTrail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float, ::Oculus::Interaction::TubeRenderer*)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateTrail)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* trail = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "TubeRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "UpdateTrail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, trail});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeSegment
// Il2CppName: InitializeSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Oculus::Interaction::TubePoint> (Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Vector2)>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeSegment)> {
  static const MethodInfo* get() {
    static auto* minMax = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), "InitializeSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minMax});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};