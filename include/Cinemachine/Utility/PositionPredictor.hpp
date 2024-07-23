// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Forward declaring type: PositionPredictor
  class PositionPredictor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::Utility::PositionPredictor);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::Utility::PositionPredictor*, "Cinemachine.Utility", "PositionPredictor");
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.Utility.PositionPredictor
  // [TokenAttribute] Offset: FFFFFFFF
  class PositionPredictor : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Vector3 m_Velocity
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_Velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_SmoothDampVelocity
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 m_SmoothDampVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Pos
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 m_Pos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean m_HavePos
    // Size: 0x1
    // Offset: 0x34
    bool m_HavePos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_HavePos and: Smoothing
    char __padding3[0x3] = {};
    // public System.Single Smoothing
    // Size: 0x4
    // Offset: 0x38
    float Smoothing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Vector3 m_Velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Velocity();
    // Get instance field reference: private UnityEngine.Vector3 m_SmoothDampVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_SmoothDampVelocity();
    // Get instance field reference: private UnityEngine.Vector3 m_Pos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Pos();
    // Get instance field reference: private System.Boolean m_HavePos
    [[deprecated("Use field access instead!")]] bool& dyn_m_HavePos();
    // Get instance field reference: public System.Single Smoothing
    [[deprecated("Use field access instead!")]] float& dyn_Smoothing();
    // public System.Boolean IsEmpty()
    // Offset: 0x2ACD4B8
    bool IsEmpty();
    // public System.Void ApplyTransformDelta(UnityEngine.Vector3 positionDelta)
    // Offset: 0x2ACD4C8
    void ApplyTransformDelta(::UnityEngine::Vector3 positionDelta);
    // public System.Void Reset()
    // Offset: 0x2ACD4E8
    void Reset();
    // public System.Void AddPosition(UnityEngine.Vector3 pos, System.Single deltaTime, System.Single lookaheadTime)
    // Offset: 0x2ACD558
    void AddPosition(::UnityEngine::Vector3 pos, float deltaTime, float lookaheadTime);
    // public UnityEngine.Vector3 PredictPositionDelta(System.Single lookaheadTime)
    // Offset: 0x2ACD650
    ::UnityEngine::Vector3 PredictPositionDelta(float lookaheadTime);
    // public UnityEngine.Vector3 PredictPosition(System.Single lookaheadTime)
    // Offset: 0x2ACD66C
    ::UnityEngine::Vector3 PredictPosition(float lookaheadTime);
    // public System.Void .ctor()
    // Offset: 0x2ACD694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PositionPredictor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::Utility::PositionPredictor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PositionPredictor*, creationType>()));
    }
  }; // Cinemachine.Utility.PositionPredictor
  #pragma pack(pop)
  static check_size<sizeof(PositionPredictor), 56 + sizeof(float)> __Cinemachine_Utility_PositionPredictorSizeCheck;
  static_assert(sizeof(PositionPredictor) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::Utility::PositionPredictor::*)()>(&Cinemachine::Utility::PositionPredictor::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::ApplyTransformDelta
// Il2CppName: ApplyTransformDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Utility::PositionPredictor::*)(::UnityEngine::Vector3)>(&Cinemachine::Utility::PositionPredictor::ApplyTransformDelta)> {
  static const MethodInfo* get() {
    static auto* positionDelta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "ApplyTransformDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionDelta});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Utility::PositionPredictor::*)()>(&Cinemachine::Utility::PositionPredictor::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::AddPosition
// Il2CppName: AddPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::Utility::PositionPredictor::*)(::UnityEngine::Vector3, float, float)>(&Cinemachine::Utility::PositionPredictor::AddPosition)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lookaheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "AddPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, deltaTime, lookaheadTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::PredictPositionDelta
// Il2CppName: PredictPositionDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Cinemachine::Utility::PositionPredictor::*)(float)>(&Cinemachine::Utility::PositionPredictor::PredictPositionDelta)> {
  static const MethodInfo* get() {
    static auto* lookaheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "PredictPositionDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookaheadTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::PredictPosition
// Il2CppName: PredictPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Cinemachine::Utility::PositionPredictor::*)(float)>(&Cinemachine::Utility::PositionPredictor::PredictPosition)> {
  static const MethodInfo* get() {
    static auto* lookaheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::PositionPredictor*), "PredictPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookaheadTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::PositionPredictor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!