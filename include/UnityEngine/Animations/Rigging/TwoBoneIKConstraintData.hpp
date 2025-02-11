// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IAnimationJobData
#include "UnityEngine/Animations/Rigging/IAnimationJobData.hpp"
// Including type: UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData
#include "UnityEngine/Animations/Rigging/ITwoBoneIKConstraintData.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: TwoBoneIKConstraintData
  struct TwoBoneIKConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::TwoBoneIKConstraintData, "UnityEngine.Animations.Rigging", "TwoBoneIKConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x36
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.TwoBoneIKConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  struct TwoBoneIKConstraintData/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IAnimationJobData, public ::UnityEngine::Animations::Rigging::ITwoBoneIKConstraintData*/ {
    public:
    public:
    // private UnityEngine.Transform m_Root
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* m_Root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform m_Mid
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Transform* m_Mid;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform m_Tip
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* m_Tip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform m_Target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* m_Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform m_Hint
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* m_Hint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single m_TargetPositionWeight
    // Size: 0x4
    // Offset: 0x28
    float m_TargetPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_TargetRotationWeight
    // Size: 0x4
    // Offset: 0x2C
    float m_TargetRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_HintWeight
    // Size: 0x4
    // Offset: 0x30
    float m_HintWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_MaintainTargetPositionOffset
    // Size: 0x1
    // Offset: 0x34
    bool m_MaintainTargetPositionOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_MaintainTargetRotationOffset
    // Size: 0x1
    // Offset: 0x35
    bool m_MaintainTargetRotationOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: TwoBoneIKConstraintData
    constexpr TwoBoneIKConstraintData(::UnityEngine::Transform* m_Root_ = {}, ::UnityEngine::Transform* m_Mid_ = {}, ::UnityEngine::Transform* m_Tip_ = {}, ::UnityEngine::Transform* m_Target_ = {}, ::UnityEngine::Transform* m_Hint_ = {}, float m_TargetPositionWeight_ = {}, float m_TargetRotationWeight_ = {}, float m_HintWeight_ = {}, bool m_MaintainTargetPositionOffset_ = {}, bool m_MaintainTargetRotationOffset_ = {}) noexcept : m_Root{m_Root_}, m_Mid{m_Mid_}, m_Tip{m_Tip_}, m_Target{m_Target_}, m_Hint{m_Hint_}, m_TargetPositionWeight{m_TargetPositionWeight_}, m_TargetRotationWeight{m_TargetRotationWeight_}, m_HintWeight{m_HintWeight_}, m_MaintainTargetPositionOffset{m_MaintainTargetPositionOffset_}, m_MaintainTargetRotationOffset{m_MaintainTargetRotationOffset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimationJobData
    operator ::UnityEngine::Animations::Rigging::IAnimationJobData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimationJobData*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::ITwoBoneIKConstraintData
    operator ::UnityEngine::Animations::Rigging::ITwoBoneIKConstraintData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::ITwoBoneIKConstraintData*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform m_Root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Root();
    // Get instance field reference: private UnityEngine.Transform m_Mid
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Mid();
    // Get instance field reference: private UnityEngine.Transform m_Tip
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Tip();
    // Get instance field reference: private UnityEngine.Transform m_Target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Target();
    // Get instance field reference: private UnityEngine.Transform m_Hint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Hint();
    // Get instance field reference: private System.Single m_TargetPositionWeight
    [[deprecated("Use field access instead!")]] float& dyn_m_TargetPositionWeight();
    // Get instance field reference: private System.Single m_TargetRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_m_TargetRotationWeight();
    // Get instance field reference: private System.Single m_HintWeight
    [[deprecated("Use field access instead!")]] float& dyn_m_HintWeight();
    // Get instance field reference: private System.Boolean m_MaintainTargetPositionOffset
    [[deprecated("Use field access instead!")]] bool& dyn_m_MaintainTargetPositionOffset();
    // Get instance field reference: private System.Boolean m_MaintainTargetRotationOffset
    [[deprecated("Use field access instead!")]] bool& dyn_m_MaintainTargetRotationOffset();
    // public UnityEngine.Transform get_root()
    // Offset: 0x5076AC8
    ::UnityEngine::Transform* get_root();
    // public System.Void set_root(UnityEngine.Transform value)
    // Offset: 0x5076AD0
    void set_root(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_mid()
    // Offset: 0x5076AD8
    ::UnityEngine::Transform* get_mid();
    // public System.Void set_mid(UnityEngine.Transform value)
    // Offset: 0x5076AE0
    void set_mid(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_tip()
    // Offset: 0x5076AE8
    ::UnityEngine::Transform* get_tip();
    // public System.Void set_tip(UnityEngine.Transform value)
    // Offset: 0x5076AF0
    void set_tip(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_target()
    // Offset: 0x5076AF8
    ::UnityEngine::Transform* get_target();
    // public System.Void set_target(UnityEngine.Transform value)
    // Offset: 0x5076B00
    void set_target(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_hint()
    // Offset: 0x5076B08
    ::UnityEngine::Transform* get_hint();
    // public System.Void set_hint(UnityEngine.Transform value)
    // Offset: 0x5076B10
    void set_hint(::UnityEngine::Transform* value);
    // public System.Single get_targetPositionWeight()
    // Offset: 0x5076B18
    float get_targetPositionWeight();
    // public System.Void set_targetPositionWeight(System.Single value)
    // Offset: 0x5076B20
    void set_targetPositionWeight(float value);
    // public System.Single get_targetRotationWeight()
    // Offset: 0x5076B3C
    float get_targetRotationWeight();
    // public System.Void set_targetRotationWeight(System.Single value)
    // Offset: 0x5076B44
    void set_targetRotationWeight(float value);
    // public System.Single get_hintWeight()
    // Offset: 0x5076B60
    float get_hintWeight();
    // public System.Void set_hintWeight(System.Single value)
    // Offset: 0x5076B68
    void set_hintWeight(float value);
    // public System.Boolean get_maintainTargetPositionOffset()
    // Offset: 0x5076B84
    bool get_maintainTargetPositionOffset();
    // public System.Void set_maintainTargetPositionOffset(System.Boolean value)
    // Offset: 0x5076B8C
    void set_maintainTargetPositionOffset(bool value);
    // public System.Boolean get_maintainTargetRotationOffset()
    // Offset: 0x5076B98
    bool get_maintainTargetRotationOffset();
    // public System.Void set_maintainTargetRotationOffset(System.Boolean value)
    // Offset: 0x5076BA0
    void set_maintainTargetRotationOffset(bool value);
    // private System.String UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetPositionWeightFloatProperty()
    // Offset: 0x5076BAC
    ::StringW UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetPositionWeightFloatProperty();
    // private System.String UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetRotationWeightFloatProperty()
    // Offset: 0x5076BEC
    ::StringW UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetRotationWeightFloatProperty();
    // private System.String UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_hintWeightFloatProperty()
    // Offset: 0x5076C2C
    ::StringW UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_hintWeightFloatProperty();
    // private System.Boolean UnityEngine.Animations.Rigging.IAnimationJobData.IsValid()
    // Offset: 0x5076C6C
    bool UnityEngine_Animations_Rigging_IAnimationJobData_IsValid();
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues()
    // Offset: 0x5076D88
    void UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues();
  }; // UnityEngine.Animations.Rigging.TwoBoneIKConstraintData
  #pragma pack(pop)
  static check_size<sizeof(TwoBoneIKConstraintData), 53 + sizeof(bool)> __UnityEngine_Animations_Rigging_TwoBoneIKConstraintDataSizeCheck;
  static_assert(sizeof(TwoBoneIKConstraintData) == 0x36);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_root
// Il2CppName: get_root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_root
// Il2CppName: set_root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_root)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_mid
// Il2CppName: get_mid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_mid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_mid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_mid
// Il2CppName: set_mid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_mid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_mid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_tip
// Il2CppName: get_tip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_tip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_tip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_tip
// Il2CppName: set_tip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_tip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_tip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_target
// Il2CppName: get_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_target
// Il2CppName: set_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_hint
// Il2CppName: get_hint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_hint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_hint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_hint
// Il2CppName: set_hint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_hint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_hint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_targetPositionWeight
// Il2CppName: get_targetPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_targetPositionWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_targetPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_targetPositionWeight
// Il2CppName: set_targetPositionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(float)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_targetPositionWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_targetPositionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_targetRotationWeight
// Il2CppName: get_targetRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_targetRotationWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_targetRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_targetRotationWeight
// Il2CppName: set_targetRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(float)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_targetRotationWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_targetRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_hintWeight
// Il2CppName: get_hintWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_hintWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_hintWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_hintWeight
// Il2CppName: set_hintWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(float)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_hintWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_hintWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_maintainTargetPositionOffset
// Il2CppName: get_maintainTargetPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_maintainTargetPositionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_maintainTargetPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_maintainTargetPositionOffset
// Il2CppName: set_maintainTargetPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_maintainTargetPositionOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_maintainTargetPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_maintainTargetRotationOffset
// Il2CppName: get_maintainTargetRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::get_maintainTargetRotationOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "get_maintainTargetRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_maintainTargetRotationOffset
// Il2CppName: set_maintainTargetRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::set_maintainTargetRotationOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "set_maintainTargetRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetPositionWeightFloatProperty
// Il2CppName: UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetPositionWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetPositionWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetPositionWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetRotationWeightFloatProperty
// Il2CppName: UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetRotationWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_targetRotationWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_targetRotationWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_hintWeightFloatProperty
// Il2CppName: UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_hintWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_ITwoBoneIKConstraintData_get_hintWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "UnityEngine.Animations.Rigging.ITwoBoneIKConstraintData.get_hintWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
