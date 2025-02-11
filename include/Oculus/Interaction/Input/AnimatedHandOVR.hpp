// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: AnimatedHandOVR
  class AnimatedHandOVR;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::AnimatedHandOVR);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::AnimatedHandOVR*, "Oculus.Interaction.Input", "AnimatedHandOVR");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.AnimatedHandOVR
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedHandOVR : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp
    struct AllowThumbUp;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp
    // [TokenAttribute] Offset: FFFFFFFF
    struct AllowThumbUp/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AllowThumbUp
      constexpr AllowThumbUp(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp Always
      static constexpr const int Always = 0;
      // Get static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp Always
      static ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp _get_Always();
      // Set static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp Always
      static void _set_Always(::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp value);
      // static field const value: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp GripRequired
      static constexpr const int GripRequired = 1;
      // Get static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp GripRequired
      static ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp _get_GripRequired();
      // Set static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp GripRequired
      static void _set_GripRequired(::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp value);
      // static field const value: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp TriggerAndGripRequired
      static constexpr const int TriggerAndGripRequired = 2;
      // Get static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp TriggerAndGripRequired
      static ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp _get_TriggerAndGripRequired();
      // Set static field: static public Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp TriggerAndGripRequired
      static void _set_TriggerAndGripRequired(::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp
    #pragma pack(pop)
    static check_size<sizeof(AnimatedHandOVR::AllowThumbUp), 0 + sizeof(int)> __Oculus_Interaction_Input_AnimatedHandOVR_AllowThumbUpSizeCheck;
    static_assert(sizeof(AnimatedHandOVR::AllowThumbUp) == 0x4);
    public:
    // private OVRInput/Controller _controller
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Controller controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // Padding between fields: controller and: animator
    char __padding0[0x4] = {};
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp _allowThumbUp
    // Size: 0x4
    // Offset: 0x30
    ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp allowThumbUp;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp) == 0x4);
    // private System.Single _animFlexhGain
    // Size: 0x4
    // Offset: 0x34
    float animFlexhGain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animPinchGain
    // Size: 0x4
    // Offset: 0x38
    float animPinchGain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animPointAndThumbsUpGain
    // Size: 0x4
    // Offset: 0x3C
    float animPointAndThumbsUpGain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _animLayerIndexThumb
    // Size: 0x4
    // Offset: 0x40
    int animLayerIndexThumb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _animLayerIndexPoint
    // Size: 0x4
    // Offset: 0x44
    int animLayerIndexPoint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _animParamIndexFlex
    // Size: 0x4
    // Offset: 0x48
    int animParamIndexFlex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _animParamPinch
    // Size: 0x4
    // Offset: 0x4C
    int animParamPinch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _animParamIndexSlide
    // Size: 0x4
    // Offset: 0x50
    int animParamIndexSlide;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isGivingThumbsUp
    // Size: 0x1
    // Offset: 0x54
    bool isGivingThumbsUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGivingThumbsUp and: pointBlend
    char __padding11[0x3] = {};
    // private System.Single _pointBlend
    // Size: 0x4
    // Offset: 0x58
    float pointBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _slideBlend
    // Size: 0x4
    // Offset: 0x5C
    float slideBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _thumbsUpBlend
    // Size: 0x4
    // Offset: 0x60
    float thumbsUpBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _pointTarget
    // Size: 0x4
    // Offset: 0x64
    float pointTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _slideTarget
    // Size: 0x4
    // Offset: 0x68
    float slideTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animFlex
    // Size: 0x4
    // Offset: 0x6C
    float animFlex;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animPinch
    // Size: 0x4
    // Offset: 0x70
    float animPinch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static public System.String ANIM_LAYER_NAME_POINT
    static constexpr const char* ANIM_LAYER_NAME_POINT = "Point Layer";
    // Get static field: static public System.String ANIM_LAYER_NAME_POINT
    static ::StringW _get_ANIM_LAYER_NAME_POINT();
    // Set static field: static public System.String ANIM_LAYER_NAME_POINT
    static void _set_ANIM_LAYER_NAME_POINT(::StringW value);
    // static field const value: static public System.String ANIM_LAYER_NAME_THUMB
    static constexpr const char* ANIM_LAYER_NAME_THUMB = "Thumb Layer";
    // Get static field: static public System.String ANIM_LAYER_NAME_THUMB
    static ::StringW _get_ANIM_LAYER_NAME_THUMB();
    // Set static field: static public System.String ANIM_LAYER_NAME_THUMB
    static void _set_ANIM_LAYER_NAME_THUMB(::StringW value);
    // static field const value: static public System.String ANIM_PARAM_NAME_FLEX
    static constexpr const char* ANIM_PARAM_NAME_FLEX = "Flex";
    // Get static field: static public System.String ANIM_PARAM_NAME_FLEX
    static ::StringW _get_ANIM_PARAM_NAME_FLEX();
    // Set static field: static public System.String ANIM_PARAM_NAME_FLEX
    static void _set_ANIM_PARAM_NAME_FLEX(::StringW value);
    // static field const value: static public System.String ANIM_PARAM_NAME_PINCH
    static constexpr const char* ANIM_PARAM_NAME_PINCH = "Pinch";
    // Get static field: static public System.String ANIM_PARAM_NAME_PINCH
    static ::StringW _get_ANIM_PARAM_NAME_PINCH();
    // Set static field: static public System.String ANIM_PARAM_NAME_PINCH
    static void _set_ANIM_PARAM_NAME_PINCH(::StringW value);
    // static field const value: static public System.String ANIM_PARAM_NAME_INDEX_SLIDE
    static constexpr const char* ANIM_PARAM_NAME_INDEX_SLIDE = "IndexSlide";
    // Get static field: static public System.String ANIM_PARAM_NAME_INDEX_SLIDE
    static ::StringW _get_ANIM_PARAM_NAME_INDEX_SLIDE();
    // Set static field: static public System.String ANIM_PARAM_NAME_INDEX_SLIDE
    static void _set_ANIM_PARAM_NAME_INDEX_SLIDE(::StringW value);
    // static field const value: static private System.Single TRIGGER_MAX
    static constexpr const float TRIGGER_MAX = 0.95;
    // Get static field: static private System.Single TRIGGER_MAX
    static float _get_TRIGGER_MAX();
    // Set static field: static private System.Single TRIGGER_MAX
    static void _set_TRIGGER_MAX(float value);
    // Get instance field reference: private OVRInput/Controller _controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn__controller();
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private Oculus.Interaction.Input.AnimatedHandOVR/AllowThumbUp _allowThumbUp
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp& dyn__allowThumbUp();
    // Get instance field reference: private System.Single _animFlexhGain
    [[deprecated("Use field access instead!")]] float& dyn__animFlexhGain();
    // Get instance field reference: private System.Single _animPinchGain
    [[deprecated("Use field access instead!")]] float& dyn__animPinchGain();
    // Get instance field reference: private System.Single _animPointAndThumbsUpGain
    [[deprecated("Use field access instead!")]] float& dyn__animPointAndThumbsUpGain();
    // Get instance field reference: private System.Int32 _animLayerIndexThumb
    [[deprecated("Use field access instead!")]] int& dyn__animLayerIndexThumb();
    // Get instance field reference: private System.Int32 _animLayerIndexPoint
    [[deprecated("Use field access instead!")]] int& dyn__animLayerIndexPoint();
    // Get instance field reference: private System.Int32 _animParamIndexFlex
    [[deprecated("Use field access instead!")]] int& dyn__animParamIndexFlex();
    // Get instance field reference: private System.Int32 _animParamPinch
    [[deprecated("Use field access instead!")]] int& dyn__animParamPinch();
    // Get instance field reference: private System.Int32 _animParamIndexSlide
    [[deprecated("Use field access instead!")]] int& dyn__animParamIndexSlide();
    // Get instance field reference: private System.Boolean _isGivingThumbsUp
    [[deprecated("Use field access instead!")]] bool& dyn__isGivingThumbsUp();
    // Get instance field reference: private System.Single _pointBlend
    [[deprecated("Use field access instead!")]] float& dyn__pointBlend();
    // Get instance field reference: private System.Single _slideBlend
    [[deprecated("Use field access instead!")]] float& dyn__slideBlend();
    // Get instance field reference: private System.Single _thumbsUpBlend
    [[deprecated("Use field access instead!")]] float& dyn__thumbsUpBlend();
    // Get instance field reference: private System.Single _pointTarget
    [[deprecated("Use field access instead!")]] float& dyn__pointTarget();
    // Get instance field reference: private System.Single _slideTarget
    [[deprecated("Use field access instead!")]] float& dyn__slideTarget();
    // Get instance field reference: private System.Single _animFlex
    [[deprecated("Use field access instead!")]] float& dyn__animFlex();
    // Get instance field reference: private System.Single _animPinch
    [[deprecated("Use field access instead!")]] float& dyn__animPinch();
    // protected System.Void Start()
    // Offset: 0x478EA2C
    void Start();
    // protected System.Void Update()
    // Offset: 0x478EAB8
    void Update();
    // private System.Void UpdateCapTouchStates()
    // Offset: 0x478EB9C
    void UpdateCapTouchStates();
    // private System.Void UpdateAnimStates()
    // Offset: 0x478EEA8
    void UpdateAnimStates();
    // public System.Void InjectAllAnimatedHandOVR(OVRInput/Controller controller, UnityEngine.Animator animator)
    // Offset: 0x478F154
    void InjectAllAnimatedHandOVR(::GlobalNamespace::OVRInput::Controller controller, ::UnityEngine::Animator* animator);
    // public System.Void InjectController(OVRInput/Controller controller)
    // Offset: 0x478F164
    void InjectController(::GlobalNamespace::OVRInput::Controller controller);
    // public System.Void InjectAnimator(UnityEngine.Animator animator)
    // Offset: 0x478F16C
    void InjectAnimator(::UnityEngine::Animator* animator);
    // public System.Void .ctor()
    // Offset: 0x478F174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedHandOVR* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::AnimatedHandOVR::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedHandOVR*, creationType>()));
    }
  }; // Oculus.Interaction.Input.AnimatedHandOVR
  #pragma pack(pop)
  static check_size<sizeof(AnimatedHandOVR), 112 + sizeof(float)> __Oculus_Interaction_Input_AnimatedHandOVRSizeCheck;
  static_assert(sizeof(AnimatedHandOVR) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::AnimatedHandOVR::AllowThumbUp, "Oculus.Interaction.Input", "AnimatedHandOVR/AllowThumbUp");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)()>(&Oculus::Interaction::Input::AnimatedHandOVR::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)()>(&Oculus::Interaction::Input::AnimatedHandOVR::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::UpdateCapTouchStates
// Il2CppName: UpdateCapTouchStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)()>(&Oculus::Interaction::Input::AnimatedHandOVR::UpdateCapTouchStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "UpdateCapTouchStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::UpdateAnimStates
// Il2CppName: UpdateAnimStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)()>(&Oculus::Interaction::Input::AnimatedHandOVR::UpdateAnimStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "UpdateAnimStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::InjectAllAnimatedHandOVR
// Il2CppName: InjectAllAnimatedHandOVR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)(::GlobalNamespace::OVRInput::Controller, ::UnityEngine::Animator*)>(&Oculus::Interaction::Input::AnimatedHandOVR::InjectAllAnimatedHandOVR)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "InjectAllAnimatedHandOVR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller, animator});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::InjectController
// Il2CppName: InjectController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)(::GlobalNamespace::OVRInput::Controller)>(&Oculus::Interaction::Input::AnimatedHandOVR::InjectController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "InjectController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::InjectAnimator
// Il2CppName: InjectAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::AnimatedHandOVR::*)(::UnityEngine::Animator*)>(&Oculus::Interaction::Input::AnimatedHandOVR::InjectAnimator)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::AnimatedHandOVR*), "InjectAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::AnimatedHandOVR::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
