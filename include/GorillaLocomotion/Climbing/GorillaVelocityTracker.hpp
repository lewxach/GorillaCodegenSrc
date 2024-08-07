// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaLocomotion::Climbing
namespace GorillaLocomotion::Climbing {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Climbing
namespace GorillaLocomotion::Climbing {
  // Forward declaring type: GorillaVelocityTracker
  class GorillaVelocityTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Climbing::GorillaVelocityTracker);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Climbing::GorillaVelocityTracker*, "GorillaLocomotion.Climbing", "GorillaVelocityTracker");
// Type namespace: GorillaLocomotion.Climbing
namespace GorillaLocomotion::Climbing {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Climbing.GorillaVelocityTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaVelocityTracker : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint
    class VelocityDataPoint;
    // Nested type: ::GorillaLocomotion::Climbing::GorillaVelocityTracker::$$c__DisplayClass17_0
    struct $$c__DisplayClass17_0;
    public:
    // private System.Int32 maxDataPoints
    // Size: 0x4
    // Offset: 0x20
    int maxDataPoints;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxDataPoints and: relativeTo
    char __padding0[0x4] = {};
    // private UnityEngine.Transform relativeTo
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* relativeTo;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Int32 currentDataPointIndex
    // Size: 0x4
    // Offset: 0x30
    int currentDataPointIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentDataPointIndex and: localSpaceData
    char __padding2[0x4] = {};
    // private GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint[] localSpaceData
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*> localSpaceData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>) == 0x8);
    // private GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint[] worldSpaceData
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*> worldSpaceData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>) == 0x8);
    // private UnityEngine.Transform trans
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* trans;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 lastWorldSpacePos
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 lastWorldSpacePos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastLocalSpacePos
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 lastLocalSpacePos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean isRelativeTo
    // Size: 0x1
    // Offset: 0x68
    bool isRelativeTo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRelativeTo and: lastTickedFrame
    char __padding8[0x3] = {};
    // private System.Int32 lastTickedFrame
    // Size: 0x4
    // Offset: 0x6C
    int lastTickedFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 maxDataPoints
    [[deprecated("Use field access instead!")]] int& dyn_maxDataPoints();
    // Get instance field reference: private UnityEngine.Transform relativeTo
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_relativeTo();
    // Get instance field reference: private System.Int32 currentDataPointIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentDataPointIndex();
    // Get instance field reference: private GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint[] localSpaceData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>& dyn_localSpaceData();
    // Get instance field reference: private GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint[] worldSpaceData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>& dyn_worldSpaceData();
    // Get instance field reference: private UnityEngine.Transform trans
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_trans();
    // Get instance field reference: private UnityEngine.Vector3 lastWorldSpacePos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastWorldSpacePos();
    // Get instance field reference: private UnityEngine.Vector3 lastLocalSpacePos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLocalSpacePos();
    // Get instance field reference: private System.Boolean isRelativeTo
    [[deprecated("Use field access instead!")]] bool& dyn_isRelativeTo();
    // Get instance field reference: private System.Int32 lastTickedFrame
    [[deprecated("Use field access instead!")]] int& dyn_lastTickedFrame();
    // public System.Void ResetState()
    // Offset: 0x27EFBDC
    void ResetState();
    // private System.Void Awake()
    // Offset: 0x27EFE5C
    void Awake();
    // private System.Void OnDisable()
    // Offset: 0x27EFE60
    void OnDisable();
    // private UnityEngine.Vector3 GetPosition(System.Boolean worldSpace)
    // Offset: 0x27EFDF4
    ::UnityEngine::Vector3 GetPosition(bool worldSpace);
    // private System.Void Update()
    // Offset: 0x27EFE64
    void Update();
    // public System.Void Tick()
    // Offset: 0x27EFE68
    void Tick();
    // private System.Void AddToQueue(ref System.Collections.Generic.List`1<GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint> dataPoints, GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint newData)
    // Offset: 0x27F007C
    void AddToQueue(ByRef<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>*> dataPoints, ::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint* newData);
    // public UnityEngine.Vector3 GetAverageVelocity(System.Boolean worldSpace, System.Single maxTimeFromPast, System.Boolean doMagnitudeCheck)
    // Offset: 0x27F0184
    ::UnityEngine::Vector3 GetAverageVelocity(bool worldSpace, float maxTimeFromPast, bool doMagnitudeCheck);
    // public UnityEngine.Vector3 GetLatestVelocity(System.Boolean worldSpace)
    // Offset: 0x27F047C
    ::UnityEngine::Vector3 GetLatestVelocity(bool worldSpace);
    // public System.Single GetAverageSpeedChangeMagnitudeInDirection(UnityEngine.Vector3 dir, System.Boolean worldSpace, System.Single maxTimeFromPast)
    // Offset: 0x27F04CC
    float GetAverageSpeedChangeMagnitudeInDirection(::UnityEngine::Vector3 dir, bool worldSpace, float maxTimeFromPast);
    // public System.Void .ctor()
    // Offset: 0x27F0640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaVelocityTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Climbing::GorillaVelocityTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaVelocityTracker*, creationType>()));
    }
    // private System.Void <ResetState>g__PopulateArray|10_0(GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint[] array)
    // Offset: 0x27EFD08
    void $ResetState$g__PopulateArray_10_0(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*> array);
    // static System.Void <GetAverageVelocity>g__AddPoint|17_0(GorillaLocomotion.Climbing.GorillaVelocityTracker/VelocityDataPoint point, ref GorillaLocomotion.Climbing.GorillaVelocityTracker/<>c__DisplayClass17_0 )
    // Offset: 0x27F03BC
    static void $GetAverageVelocity$g__AddPoint_17_0(::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint* point, ByRef<::GorillaLocomotion::Climbing::GorillaVelocityTracker::$$c__DisplayClass17_0> param_1);
  }; // GorillaLocomotion.Climbing.GorillaVelocityTracker
  #pragma pack(pop)
  static check_size<sizeof(GorillaVelocityTracker), 108 + sizeof(int)> __GorillaLocomotion_Climbing_GorillaVelocityTrackerSizeCheck;
  static_assert(sizeof(GorillaVelocityTracker) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::ResetState
// Il2CppName: ResetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::ResetState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "ResetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::GetPosition)> {
  static const MethodInfo* get() {
    static auto* worldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldSpace});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::AddToQueue
// Il2CppName: AddToQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(ByRef<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>*>, ::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::AddToQueue)> {
  static const MethodInfo* get() {
    static auto* dataPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaVelocityTracker/VelocityDataPoint")})->this_arg;
    static auto* newData = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaVelocityTracker/VelocityDataPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "AddToQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataPoints, newData});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageVelocity
// Il2CppName: GetAverageVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool, float, bool)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageVelocity)> {
  static const MethodInfo* get() {
    static auto* worldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* maxTimeFromPast = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* doMagnitudeCheck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "GetAverageVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldSpace, maxTimeFromPast, doMagnitudeCheck});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::GetLatestVelocity
// Il2CppName: GetLatestVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::GetLatestVelocity)> {
  static const MethodInfo* get() {
    static auto* worldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "GetLatestVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldSpace});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageSpeedChangeMagnitudeInDirection
// Il2CppName: GetAverageSpeedChangeMagnitudeInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::UnityEngine::Vector3, bool, float)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageSpeedChangeMagnitudeInDirection)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* worldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* maxTimeFromPast = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "GetAverageSpeedChangeMagnitudeInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir, worldSpace, maxTimeFromPast});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::$ResetState$g__PopulateArray_10_0
// Il2CppName: <ResetState>g__PopulateArray|10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*>)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::$ResetState$g__PopulateArray_10_0)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaVelocityTracker/VelocityDataPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "<ResetState>g__PopulateArray|10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Climbing::GorillaVelocityTracker::$GetAverageVelocity$g__AddPoint_17_0
// Il2CppName: <GetAverageVelocity>g__AddPoint|17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Climbing::GorillaVelocityTracker::VelocityDataPoint*, ByRef<::GorillaLocomotion::Climbing::GorillaVelocityTracker::$$c__DisplayClass17_0>)>(&GorillaLocomotion::Climbing::GorillaVelocityTracker::$GetAverageVelocity$g__AddPoint_17_0)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaVelocityTracker/VelocityDataPoint")->byval_arg;
    static auto* param_1 = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Climbing", "GorillaVelocityTracker/<>c__DisplayClass17_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Climbing::GorillaVelocityTracker*), "<GetAverageVelocity>g__AddPoint|17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, param_1});
  }
};
