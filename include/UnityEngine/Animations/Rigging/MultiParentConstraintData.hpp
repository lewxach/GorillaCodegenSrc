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
// Including type: UnityEngine.Animations.Rigging.IMultiParentConstraintData
#include "UnityEngine/Animations/Rigging/IMultiParentConstraintData.hpp"
// Including type: UnityEngine.Animations.Rigging.WeightedTransformArray
#include "UnityEngine/Animations/Rigging/WeightedTransformArray.hpp"
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
  // Forward declaring type: MultiParentConstraintData
  struct MultiParentConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::MultiParentConstraintData, "UnityEngine.Animations.Rigging", "MultiParentConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x98
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.MultiParentConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiParentConstraintData/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IAnimationJobData, public ::UnityEngine::Animations::Rigging::IMultiParentConstraintData*/ {
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
    // Padding between fields: m_SourceObjects and: m_ConstrainedPositionAxes
    char __padding1[0x4] = {};
    // private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedPositionAxes
    // Size: 0x3
    // Offset: 0x90
    ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedPositionAxes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Bool) == 0x3);
    // private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedRotationAxes
    // Size: 0x3
    // Offset: 0x93
    ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedRotationAxes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Bool) == 0x3);
    // private System.Boolean m_MaintainPositionOffset
    // Size: 0x1
    // Offset: 0x96
    bool m_MaintainPositionOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_MaintainRotationOffset
    // Size: 0x1
    // Offset: 0x97
    bool m_MaintainRotationOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MultiParentConstraintData
    constexpr MultiParentConstraintData(::UnityEngine::Transform* m_ConstrainedObject_ = {}, ::UnityEngine::Animations::Rigging::WeightedTransformArray m_SourceObjects_ = {}, ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedPositionAxes_ = {}, ::UnityEngine::Animations::Rigging::Vector3Bool m_ConstrainedRotationAxes_ = {}, bool m_MaintainPositionOffset_ = {}, bool m_MaintainRotationOffset_ = {}) noexcept : m_ConstrainedObject{m_ConstrainedObject_}, m_SourceObjects{m_SourceObjects_}, m_ConstrainedPositionAxes{m_ConstrainedPositionAxes_}, m_ConstrainedRotationAxes{m_ConstrainedRotationAxes_}, m_MaintainPositionOffset{m_MaintainPositionOffset_}, m_MaintainRotationOffset{m_MaintainRotationOffset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimationJobData
    operator ::UnityEngine::Animations::Rigging::IAnimationJobData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimationJobData*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IMultiParentConstraintData
    operator ::UnityEngine::Animations::Rigging::IMultiParentConstraintData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IMultiParentConstraintData*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform m_ConstrainedObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_ConstrainedObject();
    // Get instance field reference: private UnityEngine.Animations.Rigging.WeightedTransformArray m_SourceObjects
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::WeightedTransformArray& dyn_m_SourceObjects();
    // Get instance field reference: private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedPositionAxes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Bool& dyn_m_ConstrainedPositionAxes();
    // Get instance field reference: private UnityEngine.Animations.Rigging.Vector3Bool m_ConstrainedRotationAxes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Bool& dyn_m_ConstrainedRotationAxes();
    // Get instance field reference: private System.Boolean m_MaintainPositionOffset
    [[deprecated("Use field access instead!")]] bool& dyn_m_MaintainPositionOffset();
    // Get instance field reference: private System.Boolean m_MaintainRotationOffset
    [[deprecated("Use field access instead!")]] bool& dyn_m_MaintainRotationOffset();
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0x5074B20
    ::UnityEngine::Transform* get_constrainedObject();
    // public System.Void set_constrainedObject(UnityEngine.Transform value)
    // Offset: 0x5074B28
    void set_constrainedObject(::UnityEngine::Transform* value);
    // public UnityEngine.Animations.Rigging.WeightedTransformArray get_sourceObjects()
    // Offset: 0x5074B30
    ::UnityEngine::Animations::Rigging::WeightedTransformArray get_sourceObjects();
    // public System.Void set_sourceObjects(UnityEngine.Animations.Rigging.WeightedTransformArray value)
    // Offset: 0x5074B40
    void set_sourceObjects(::UnityEngine::Animations::Rigging::WeightedTransformArray value);
    // public System.Boolean get_maintainPositionOffset()
    // Offset: 0x5074B64
    bool get_maintainPositionOffset();
    // public System.Void set_maintainPositionOffset(System.Boolean value)
    // Offset: 0x5074B6C
    void set_maintainPositionOffset(bool value);
    // public System.Boolean get_maintainRotationOffset()
    // Offset: 0x5074B78
    bool get_maintainRotationOffset();
    // public System.Void set_maintainRotationOffset(System.Boolean value)
    // Offset: 0x5074B80
    void set_maintainRotationOffset(bool value);
    // public System.Boolean get_constrainedPositionXAxis()
    // Offset: 0x5074B8C
    bool get_constrainedPositionXAxis();
    // public System.Void set_constrainedPositionXAxis(System.Boolean value)
    // Offset: 0x5074B94
    void set_constrainedPositionXAxis(bool value);
    // public System.Boolean get_constrainedPositionYAxis()
    // Offset: 0x5074BA0
    bool get_constrainedPositionYAxis();
    // public System.Void set_constrainedPositionYAxis(System.Boolean value)
    // Offset: 0x5074BA8
    void set_constrainedPositionYAxis(bool value);
    // public System.Boolean get_constrainedPositionZAxis()
    // Offset: 0x5074BB4
    bool get_constrainedPositionZAxis();
    // public System.Void set_constrainedPositionZAxis(System.Boolean value)
    // Offset: 0x5074BBC
    void set_constrainedPositionZAxis(bool value);
    // public System.Boolean get_constrainedRotationXAxis()
    // Offset: 0x5074BC8
    bool get_constrainedRotationXAxis();
    // public System.Void set_constrainedRotationXAxis(System.Boolean value)
    // Offset: 0x5074BD0
    void set_constrainedRotationXAxis(bool value);
    // public System.Boolean get_constrainedRotationYAxis()
    // Offset: 0x5074BDC
    bool get_constrainedRotationYAxis();
    // public System.Void set_constrainedRotationYAxis(System.Boolean value)
    // Offset: 0x5074BE4
    void set_constrainedRotationYAxis(bool value);
    // public System.Boolean get_constrainedRotationZAxis()
    // Offset: 0x5074BF0
    bool get_constrainedRotationZAxis();
    // public System.Void set_constrainedRotationZAxis(System.Boolean value)
    // Offset: 0x5074BF8
    void set_constrainedRotationZAxis(bool value);
    // private System.String UnityEngine.Animations.Rigging.IMultiParentConstraintData.get_sourceObjectsProperty()
    // Offset: 0x5074C04
    ::StringW UnityEngine_Animations_Rigging_IMultiParentConstraintData_get_sourceObjectsProperty();
    // private System.Boolean UnityEngine.Animations.Rigging.IAnimationJobData.IsValid()
    // Offset: 0x5074C44
    bool UnityEngine_Animations_Rigging_IAnimationJobData_IsValid();
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues()
    // Offset: 0x5074F30
    void UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues();
  }; // UnityEngine.Animations.Rigging.MultiParentConstraintData
  #pragma pack(pop)
  static check_size<sizeof(MultiParentConstraintData), 151 + sizeof(bool)> __UnityEngine_Animations_Rigging_MultiParentConstraintDataSizeCheck;
  static_assert(sizeof(MultiParentConstraintData) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedObject
// Il2CppName: set_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_sourceObjects
// Il2CppName: get_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::WeightedTransformArray (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_sourceObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_sourceObjects
// Il2CppName: set_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(::UnityEngine::Animations::Rigging::WeightedTransformArray)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_sourceObjects)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "WeightedTransformArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_maintainPositionOffset
// Il2CppName: get_maintainPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_maintainPositionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_maintainPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_maintainPositionOffset
// Il2CppName: set_maintainPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_maintainPositionOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_maintainPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_maintainRotationOffset
// Il2CppName: get_maintainRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_maintainRotationOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_maintainRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_maintainRotationOffset
// Il2CppName: set_maintainRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_maintainRotationOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_maintainRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionXAxis
// Il2CppName: get_constrainedPositionXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionXAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedPositionXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionXAxis
// Il2CppName: set_constrainedPositionXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionXAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedPositionXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionYAxis
// Il2CppName: get_constrainedPositionYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionYAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedPositionYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionYAxis
// Il2CppName: set_constrainedPositionYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionYAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedPositionYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionZAxis
// Il2CppName: get_constrainedPositionZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedPositionZAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedPositionZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionZAxis
// Il2CppName: set_constrainedPositionZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedPositionZAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedPositionZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationXAxis
// Il2CppName: get_constrainedRotationXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationXAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedRotationXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationXAxis
// Il2CppName: set_constrainedRotationXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationXAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedRotationXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationYAxis
// Il2CppName: get_constrainedRotationYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationYAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedRotationYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationYAxis
// Il2CppName: set_constrainedRotationYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationYAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedRotationYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationZAxis
// Il2CppName: get_constrainedRotationZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::get_constrainedRotationZAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "get_constrainedRotationZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationZAxis
// Il2CppName: set_constrainedRotationZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)(bool)>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::set_constrainedRotationZAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "set_constrainedRotationZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IMultiParentConstraintData_get_sourceObjectsProperty
// Il2CppName: UnityEngine.Animations.Rigging.IMultiParentConstraintData.get_sourceObjectsProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IMultiParentConstraintData_get_sourceObjectsProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "UnityEngine.Animations.Rigging.IMultiParentConstraintData.get_sourceObjectsProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiParentConstraintData::*)()>(&UnityEngine::Animations::Rigging::MultiParentConstraintData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiParentConstraintData), "UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};