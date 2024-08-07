// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IAnimationJobData
#include "UnityEngine/Animations/Rigging/IAnimationJobData.hpp"
// Including type: UnityEngine.Animations.Rigging.IMultiRotationConstraintData
#include "UnityEngine/Animations/Rigging/IMultiRotationConstraintData.hpp"
// Including type: UnityEngine.Animations.Rigging.WeightedTransformArray
#include "UnityEngine/Animations/Rigging/WeightedTransformArray.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Animations.Rigging.Vector3Bool
#include "UnityEngine/Animations/Rigging/Vector3Bool.hpp"
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
  // Forward declaring type: MultiRotationConstraintData
  struct MultiRotationConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::MultiRotationConstraintData, "UnityEngine.Animations.Rigging", "MultiRotationConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0xA0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.MultiRotationConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiRotationConstraintData/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IAnimationJobData, public ::UnityEngine::Animations::Rigging::IMultiRotationConstraintData*/ {
    public:
    public:
    // private UnityEngine.Transform m_ConstrainedObject
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* m_ConstrainedObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Animations.Rigging.WeightedTransformArray m_SourceObjects
    // Size: 0x84
    // Offset: 0x8
    ::UnityEngine::Animations::Rigging::WeightedTransformArray m_SourceObjects;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::WeightedTransformArray) == 0x84);
    // Padding between fields: m_SourceObjects and: m_Offset
    char __padding1[0x4] = {};
    // private UnityEngine.Vector3 m_Offset
    // Size: 0xC
    // Offset: 0x90
    ::UnityEngine::Vector3 m_Offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedAxes
    // Size: 0x3
    // Offset: 0x9C
    ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedAxes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Bool) == 0x3);
    // private System.Boolean m_MaintainOffset
    // Size: 0x1
    // Offset: 0x9F
    bool m_MaintainOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MultiRotationConstraintData
    constexpr MultiRotationConstraintData(::UnityEngine::Transform* m_ConstrainedObject_ = {}, ::UnityEngine::Animations::Rigging::WeightedTransformArray m_SourceObjects_ = {}, ::UnityEngine::Vector3 m_Offset_ = {}, ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedAxes_ = {}, bool m_MaintainOffset_ = {}) noexcept : m_ConstrainedObject{m_ConstrainedObject_}, m_SourceObjects{m_SourceObjects_}, m_Offset{m_Offset_}, m_ConstrainedAxes{m_ConstrainedAxes_}, m_MaintainOffset{m_MaintainOffset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimationJobData
    operator ::UnityEngine::Animations::Rigging::IAnimationJobData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimationJobData*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IMultiRotationConstraintData
    operator ::UnityEngine::Animations::Rigging::IMultiRotationConstraintData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IMultiRotationConstraintData*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform m_ConstrainedObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_ConstrainedObject();
    // Get instance field reference: private UnityEngine.Animations.Rigging.WeightedTransformArray m_SourceObjects
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::WeightedTransformArray& dyn_m_SourceObjects();
    // Get instance field reference: private UnityEngine.Vector3 m_Offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Offset();
    // Get instance field reference: private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedAxes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Bool& dyn_m_ConstrainedAxes();
    // Get instance field reference: private System.Boolean m_MaintainOffset
    [[deprecated("Use field access instead!")]] bool& dyn_m_MaintainOffset();
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0x5075B8C
    ::UnityEngine::Transform* get_constrainedObject();
    // public System.Void set_constrainedObject(UnityEngine.Transform value)
    // Offset: 0x5075B94
    void set_constrainedObject(::UnityEngine::Transform* value);
    // public UnityEngine.Animations.Rigging.WeightedTransformArray get_sourceObjects()
    // Offset: 0x5075B9C
    ::UnityEngine::Animations::Rigging::WeightedTransformArray get_sourceObjects();
    // public System.Void set_sourceObjects(UnityEngine.Animations.Rigging.WeightedTransformArray value)
    // Offset: 0x5075BAC
    void set_sourceObjects(::UnityEngine::Animations::Rigging::WeightedTransformArray value);
    // public System.Boolean get_maintainOffset()
    // Offset: 0x5075BD0
    bool get_maintainOffset();
    // public System.Void set_maintainOffset(System.Boolean value)
    // Offset: 0x5075BD8
    void set_maintainOffset(bool value);
    // public UnityEngine.Vector3 get_offset()
    // Offset: 0x5075BE4
    ::UnityEngine::Vector3 get_offset();
    // public System.Void set_offset(UnityEngine.Vector3 value)
    // Offset: 0x5075BF0
    void set_offset(::UnityEngine::Vector3 value);
    // public System.Boolean get_constrainedXAxis()
    // Offset: 0x5075BFC
    bool get_constrainedXAxis();
    // public System.Void set_constrainedXAxis(System.Boolean value)
    // Offset: 0x5075C04
    void set_constrainedXAxis(bool value);
    // public System.Boolean get_constrainedYAxis()
    // Offset: 0x5075C10
    bool get_constrainedYAxis();
    // public System.Void set_constrainedYAxis(System.Boolean value)
    // Offset: 0x5075C18
    void set_constrainedYAxis(bool value);
    // public System.Boolean get_constrainedZAxis()
    // Offset: 0x5075C24
    bool get_constrainedZAxis();
    // public System.Void set_constrainedZAxis(System.Boolean value)
    // Offset: 0x5075C2C
    void set_constrainedZAxis(bool value);
    // private System.String UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_offsetVector3Property()
    // Offset: 0x5075C38
    ::StringW UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_offsetVector3Property();
    // private System.String UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_sourceObjectsProperty()
    // Offset: 0x5075C78
    ::StringW UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_sourceObjectsProperty();
    // private System.Boolean UnityEngine.Animations.Rigging.IAnimationJobData.IsValid()
    // Offset: 0x5075CB8
    bool UnityEngine_Animations_Rigging_IAnimationJobData_IsValid();
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues()
    // Offset: 0x5075FA4
    void UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues();
  }; // UnityEngine.Animations.Rigging.MultiRotationConstraintData
  #pragma pack(pop)
  static check_size<sizeof(MultiRotationConstraintData), 159 + sizeof(bool)> __UnityEngine_Animations_Rigging_MultiRotationConstraintDataSizeCheck;
  static_assert(sizeof(MultiRotationConstraintData) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedObject
// Il2CppName: set_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_sourceObjects
// Il2CppName: get_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::WeightedTransformArray (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_sourceObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_sourceObjects
// Il2CppName: set_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(::UnityEngine::Animations::Rigging::WeightedTransformArray)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_sourceObjects)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "WeightedTransformArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_maintainOffset
// Il2CppName: get_maintainOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_maintainOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_maintainOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_maintainOffset
// Il2CppName: set_maintainOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_maintainOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_maintainOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_offset
// Il2CppName: set_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedXAxis
// Il2CppName: get_constrainedXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedXAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_constrainedXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedXAxis
// Il2CppName: set_constrainedXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedXAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_constrainedXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedYAxis
// Il2CppName: get_constrainedYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedYAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_constrainedYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedYAxis
// Il2CppName: set_constrainedYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedYAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_constrainedYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedZAxis
// Il2CppName: get_constrainedZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::get_constrainedZAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "get_constrainedZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedZAxis
// Il2CppName: set_constrainedZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::set_constrainedZAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "set_constrainedZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_offsetVector3Property
// Il2CppName: UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_offsetVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_offsetVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_offsetVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_sourceObjectsProperty
// Il2CppName: UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_sourceObjectsProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IMultiRotationConstraintData_get_sourceObjectsProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "UnityEngine.Animations.Rigging.IMultiRotationConstraintData.get_sourceObjectsProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
