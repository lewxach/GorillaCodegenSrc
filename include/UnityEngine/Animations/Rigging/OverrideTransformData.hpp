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
// Including type: UnityEngine.Animations.Rigging.IOverrideTransformData
#include "UnityEngine/Animations/Rigging/IOverrideTransformData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Skipping declaration: Space because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: OverrideTransformData
  struct OverrideTransformData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::OverrideTransformData, "UnityEngine.Animations.Rigging", "OverrideTransformData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.OverrideTransformData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OverrideTransformData/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IAnimationJobData, public ::UnityEngine::Animations::Rigging::IOverrideTransformData*/ {
    public:
    // Nested type: ::UnityEngine::Animations::Rigging::OverrideTransformData::Space
    struct Space;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Animations.Rigging.OverrideTransformData/Space
    // [TokenAttribute] Offset: FFFFFFFF
    struct Space/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Space
      constexpr Space(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space World
      static constexpr const int World = 0;
      // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space World
      static ::UnityEngine::Animations::Rigging::OverrideTransformData::Space _get_World();
      // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space World
      static void _set_World(::UnityEngine::Animations::Rigging::OverrideTransformData::Space value);
      // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Local
      static constexpr const int Local = 1;
      // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Local
      static ::UnityEngine::Animations::Rigging::OverrideTransformData::Space _get_Local();
      // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Local
      static void _set_Local(::UnityEngine::Animations::Rigging::OverrideTransformData::Space value);
      // static field const value: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Pivot
      static constexpr const int Pivot = 2;
      // Get static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Pivot
      static ::UnityEngine::Animations::Rigging::OverrideTransformData::Space _get_Pivot();
      // Set static field: static public UnityEngine.Animations.Rigging.OverrideTransformData/Space Pivot
      static void _set_Pivot(::UnityEngine::Animations::Rigging::OverrideTransformData::Space value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Animations.Rigging.OverrideTransformData/Space
    #pragma pack(pop)
    static check_size<sizeof(OverrideTransformData::Space), 0 + sizeof(int)> __UnityEngine_Animations_Rigging_OverrideTransformData_SpaceSizeCheck;
    static_assert(sizeof(OverrideTransformData::Space) == 0x4);
    public:
    // private UnityEngine.Transform m_ConstrainedObject
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* m_ConstrainedObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform m_OverrideSource
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Transform* m_OverrideSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 m_OverridePosition
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_OverridePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_OverrideRotation
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 m_OverrideRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_PositionWeight
    // Size: 0x4
    // Offset: 0x28
    float m_PositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_RotationWeight
    // Size: 0x4
    // Offset: 0x2C
    float m_RotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Animations.Rigging.OverrideTransformData/Space m_Space
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::Animations::Rigging::OverrideTransformData::Space m_Space;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::OverrideTransformData::Space) == 0x4);
    public:
    // Creating value type constructor for type: OverrideTransformData
    constexpr OverrideTransformData(::UnityEngine::Transform* m_ConstrainedObject_ = {}, ::UnityEngine::Transform* m_OverrideSource_ = {}, ::UnityEngine::Vector3 m_OverridePosition_ = {}, ::UnityEngine::Vector3 m_OverrideRotation_ = {}, float m_PositionWeight_ = {}, float m_RotationWeight_ = {}, ::UnityEngine::Animations::Rigging::OverrideTransformData::Space m_Space_ = {}) noexcept : m_ConstrainedObject{m_ConstrainedObject_}, m_OverrideSource{m_OverrideSource_}, m_OverridePosition{m_OverridePosition_}, m_OverrideRotation{m_OverrideRotation_}, m_PositionWeight{m_PositionWeight_}, m_RotationWeight{m_RotationWeight_}, m_Space{m_Space_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimationJobData
    operator ::UnityEngine::Animations::Rigging::IAnimationJobData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimationJobData*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IOverrideTransformData
    operator ::UnityEngine::Animations::Rigging::IOverrideTransformData() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IOverrideTransformData*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform m_ConstrainedObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_ConstrainedObject();
    // Get instance field reference: private UnityEngine.Transform m_OverrideSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_OverrideSource();
    // Get instance field reference: private UnityEngine.Vector3 m_OverridePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_OverridePosition();
    // Get instance field reference: private UnityEngine.Vector3 m_OverrideRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_OverrideRotation();
    // Get instance field reference: private System.Single m_PositionWeight
    [[deprecated("Use field access instead!")]] float& dyn_m_PositionWeight();
    // Get instance field reference: private System.Single m_RotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_m_RotationWeight();
    // Get instance field reference: private UnityEngine.Animations.Rigging.OverrideTransformData/Space m_Space
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::OverrideTransformData::Space& dyn_m_Space();
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0x5076144
    ::UnityEngine::Transform* get_constrainedObject();
    // public System.Void set_constrainedObject(UnityEngine.Transform value)
    // Offset: 0x507614C
    void set_constrainedObject(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_sourceObject()
    // Offset: 0x5076154
    ::UnityEngine::Transform* get_sourceObject();
    // public System.Void set_sourceObject(UnityEngine.Transform value)
    // Offset: 0x507615C
    void set_sourceObject(::UnityEngine::Transform* value);
    // public UnityEngine.Animations.Rigging.OverrideTransformData/Space get_space()
    // Offset: 0x5076164
    ::UnityEngine::Animations::Rigging::OverrideTransformData::Space get_space();
    // public System.Void set_space(UnityEngine.Animations.Rigging.OverrideTransformData/Space value)
    // Offset: 0x507616C
    void set_space(::UnityEngine::Animations::Rigging::OverrideTransformData::Space value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x5076174
    ::UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x5076180
    void set_position(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_rotation()
    // Offset: 0x507618C
    ::UnityEngine::Vector3 get_rotation();
    // public System.Void set_rotation(UnityEngine.Vector3 value)
    // Offset: 0x5076198
    void set_rotation(::UnityEngine::Vector3 value);
    // public System.Single get_positionWeight()
    // Offset: 0x50761A4
    float get_positionWeight();
    // public System.Void set_positionWeight(System.Single value)
    // Offset: 0x50761AC
    void set_positionWeight(float value);
    // public System.Single get_rotationWeight()
    // Offset: 0x50761C8
    float get_rotationWeight();
    // public System.Void set_rotationWeight(System.Single value)
    // Offset: 0x50761D0
    void set_rotationWeight(float value);
    // private System.Int32 UnityEngine.Animations.Rigging.IOverrideTransformData.get_space()
    // Offset: 0x50761EC
    int UnityEngine_Animations_Rigging_IOverrideTransformData_get_space();
    // private System.String UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionWeightFloatProperty()
    // Offset: 0x50761F4
    ::StringW UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionWeightFloatProperty();
    // private System.String UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationWeightFloatProperty()
    // Offset: 0x5076234
    ::StringW UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationWeightFloatProperty();
    // private System.String UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionVector3Property()
    // Offset: 0x5076274
    ::StringW UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionVector3Property();
    // private System.String UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationVector3Property()
    // Offset: 0x50762B4
    ::StringW UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationVector3Property();
    // private System.Boolean UnityEngine.Animations.Rigging.IAnimationJobData.IsValid()
    // Offset: 0x50762F4
    bool UnityEngine_Animations_Rigging_IAnimationJobData_IsValid();
    // private System.Void UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues()
    // Offset: 0x5076354
    void UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues();
  }; // UnityEngine.Animations.Rigging.OverrideTransformData
  #pragma pack(pop)
  static check_size<sizeof(OverrideTransformData), 48 + sizeof(::UnityEngine::Animations::Rigging::OverrideTransformData::Space)> __UnityEngine_Animations_Rigging_OverrideTransformDataSizeCheck;
  static_assert(sizeof(OverrideTransformData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::OverrideTransformData::Space, "UnityEngine.Animations.Rigging", "OverrideTransformData/Space");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_constrainedObject
// Il2CppName: set_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_constrainedObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_sourceObject
// Il2CppName: get_sourceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_sourceObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_sourceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_sourceObject
// Il2CppName: set_sourceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_sourceObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_sourceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_space
// Il2CppName: get_space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::OverrideTransformData::Space (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_space)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_space
// Il2CppName: set_space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(::UnityEngine::Animations::Rigging::OverrideTransformData::Space)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_space)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "OverrideTransformData/Space")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_positionWeight
// Il2CppName: get_positionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_positionWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_positionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_positionWeight
// Il2CppName: set_positionWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(float)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_positionWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_positionWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::get_rotationWeight
// Il2CppName: get_rotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::get_rotationWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "get_rotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::set_rotationWeight
// Il2CppName: set_rotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)(float)>(&UnityEngine::Animations::Rigging::OverrideTransformData::set_rotationWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "set_rotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_space
// Il2CppName: UnityEngine.Animations.Rigging.IOverrideTransformData.get_space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_space)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IOverrideTransformData.get_space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionWeightFloatProperty
// Il2CppName: UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationWeightFloatProperty
// Il2CppName: UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionVector3Property
// Il2CppName: UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_positionVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IOverrideTransformData.get_positionVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationVector3Property
// Il2CppName: UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IOverrideTransformData_get_rotationVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IOverrideTransformData.get_rotationVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IAnimationJobData_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IAnimationJobData.IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues
// Il2CppName: UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideTransformData::*)()>(&UnityEngine::Animations::Rigging::OverrideTransformData::UnityEngine_Animations_Rigging_IAnimationJobData_SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideTransformData), "UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
