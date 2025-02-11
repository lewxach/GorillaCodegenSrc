// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: RopeSegment because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpiderDangler
  class SpiderDangler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpiderDangler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpiderDangler*, "", "SpiderDangler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SpiderDangler
  // [TokenAttribute] Offset: FFFFFFFF
  class SpiderDangler : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SpiderDangler::RopeSegment
    struct RopeSegment;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: SpiderDangler/RopeSegment
    // [TokenAttribute] Offset: FFFFFFFF
    struct RopeSegment/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Vector3 pos
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 pos;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Vector3 posOld
      // Size: 0xC
      // Offset: 0xC
      ::UnityEngine::Vector3 posOld;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      public:
      // Creating value type constructor for type: RopeSegment
      constexpr RopeSegment(::UnityEngine::Vector3 pos_ = {}, ::UnityEngine::Vector3 posOld_ = {}) noexcept : pos{pos_}, posOld{posOld_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Vector3 pos
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_pos();
      // Get instance field reference: public UnityEngine.Vector3 posOld
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_posOld();
      // public System.Void .ctor(UnityEngine.Vector3 pos)
      // Offset: 0x269C10C
      RopeSegment(::UnityEngine::Vector3 pos);
    }; // SpiderDangler/RopeSegment
    #pragma pack(pop)
    static check_size<sizeof(SpiderDangler::RopeSegment), 12 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_SpiderDangler_RopeSegmentSizeCheck;
    static_assert(sizeof(SpiderDangler::RopeSegment) == 0x18);
    public:
    // public UnityEngine.Transform endTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* endTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector4 spinSpeeds
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Vector4 spinSpeeds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 spinScales
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Vector4 spinScales;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private UnityEngine.LineRenderer lineRenderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private SpiderDangler/RopeSegment[] ropeSegs
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::GlobalNamespace::SpiderDangler::RopeSegment> ropeSegs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SpiderDangler::RopeSegment>) == 0x8);
    // private System.Single ropeSegLen
    // Size: 0x4
    // Offset: 0x58
    float ropeSegLen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single ropeSegLenScaled
    // Size: 0x4
    // Offset: 0x5C
    float ropeSegLenScaled;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Int32 kSegmentCount
    static constexpr const int kSegmentCount = 6;
    // Get static field: static private System.Int32 kSegmentCount
    static int _get_kSegmentCount();
    // Set static field: static private System.Int32 kSegmentCount
    static void _set_kSegmentCount(int value);
    // static field const value: static private System.Single kVelocityDamper
    static constexpr const float kVelocityDamper = 0.95;
    // Get static field: static private System.Single kVelocityDamper
    static float _get_kVelocityDamper();
    // Set static field: static private System.Single kVelocityDamper
    static void _set_kVelocityDamper(float value);
    // static field const value: static private System.Int32 kConstraintCalculationIterations
    static constexpr const int kConstraintCalculationIterations = 8;
    // Get static field: static private System.Int32 kConstraintCalculationIterations
    static int _get_kConstraintCalculationIterations();
    // Set static field: static private System.Int32 kConstraintCalculationIterations
    static void _set_kConstraintCalculationIterations(int value);
    // Get instance field reference: public UnityEngine.Transform endTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_endTransform();
    // Get instance field reference: public UnityEngine.Vector4 spinSpeeds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_spinSpeeds();
    // Get instance field reference: public UnityEngine.Vector4 spinScales
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_spinScales();
    // Get instance field reference: private UnityEngine.LineRenderer lineRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_lineRenderer();
    // Get instance field reference: private SpiderDangler/RopeSegment[] ropeSegs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SpiderDangler::RopeSegment>& dyn_ropeSegs();
    // Get instance field reference: private System.Single ropeSegLen
    [[deprecated("Use field access instead!")]] float& dyn_ropeSegLen();
    // Get instance field reference: private System.Single ropeSegLenScaled
    [[deprecated("Use field access instead!")]] float& dyn_ropeSegLenScaled();
    // protected System.Void Awake()
    // Offset: 0x269BF68
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0x269C11C
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x269C26C
    void LateUpdate();
    // private System.Void Simulate()
    // Offset: 0x269C120
    void Simulate();
    // private System.Void ApplyConstraint()
    // Offset: 0x269C5A4
    void ApplyConstraint();
    // private System.Void ApplyConstraintSegment(ref SpiderDangler/RopeSegment segA, ref SpiderDangler/RopeSegment segB, System.Single dampenA, System.Single dampenB)
    // Offset: 0x269C670
    void ApplyConstraintSegment(ByRef<::GlobalNamespace::SpiderDangler::RopeSegment> segA, ByRef<::GlobalNamespace::SpiderDangler::RopeSegment> segB, float dampenA, float dampenB);
    // private System.Void DrawRope()
    // Offset: 0x269C4D8
    void DrawRope();
    // public System.Void .ctor()
    // Offset: 0x269C848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpiderDangler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpiderDangler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpiderDangler*, creationType>()));
    }
  }; // SpiderDangler
  #pragma pack(pop)
  static check_size<sizeof(SpiderDangler), 92 + sizeof(float)> __GlobalNamespace_SpiderDanglerSizeCheck;
  static_assert(sizeof(SpiderDangler) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpiderDangler::RopeSegment, "", "SpiderDangler/RopeSegment");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::Simulate
// Il2CppName: Simulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::Simulate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "Simulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::ApplyConstraint
// Il2CppName: ApplyConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::ApplyConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "ApplyConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::ApplyConstraintSegment
// Il2CppName: ApplyConstraintSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)(ByRef<::GlobalNamespace::SpiderDangler::RopeSegment>, ByRef<::GlobalNamespace::SpiderDangler::RopeSegment>, float, float)>(&GlobalNamespace::SpiderDangler::ApplyConstraintSegment)> {
  static const MethodInfo* get() {
    static auto* segA = &::il2cpp_utils::GetClassFromName("", "SpiderDangler/RopeSegment")->this_arg;
    static auto* segB = &::il2cpp_utils::GetClassFromName("", "SpiderDangler/RopeSegment")->this_arg;
    static auto* dampenA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dampenB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "ApplyConstraintSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segA, segB, dampenA, dampenB});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::DrawRope
// Il2CppName: DrawRope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpiderDangler::*)()>(&GlobalNamespace::SpiderDangler::DrawRope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpiderDangler*), "DrawRope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpiderDangler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
