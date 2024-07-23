// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.SignalSourceAsset
#include "Cinemachine/SignalSourceAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineFixedSignal
  class CinemachineFixedSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineFixedSignal);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineFixedSignal*, "Cinemachine", "CinemachineFixedSignal");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineFixedSignal
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  class CinemachineFixedSignal : public ::Cinemachine::SignalSourceAsset {
    public:
    public:
    // public UnityEngine.AnimationCurve m_XCurve
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimationCurve* m_XCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve m_YCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* m_YCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve m_ZCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* m_ZCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AnimationCurve m_XCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_XCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve m_YCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_YCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve m_ZCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_ZCurve();
    // private System.Single AxisDuration(UnityEngine.AnimationCurve axis)
    // Offset: 0x2AB86B8
    float AxisDuration(::UnityEngine::AnimationCurve* axis);
    // private System.Single AxisValue(UnityEngine.AnimationCurve axis, System.Single time)
    // Offset: 0x2AB8820
    float AxisValue(::UnityEngine::AnimationCurve* axis, float time);
    // public override System.Single get_SignalDuration()
    // Offset: 0x2AB8670
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Single SignalSourceAsset::get_SignalDuration()
    float get_SignalDuration();
    // public override System.Void GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x2AB8778
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Void SignalSourceAsset::GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    void GetSignal(float timeSinceSignalStart, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
    // public System.Void .ctor()
    // Offset: 0x2AB886C
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Void SignalSourceAsset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineFixedSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineFixedSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineFixedSignal*, creationType>()));
    }
  }; // Cinemachine.CinemachineFixedSignal
  #pragma pack(pop)
  static check_size<sizeof(CinemachineFixedSignal), 40 + sizeof(::UnityEngine::AnimationCurve*)> __Cinemachine_CinemachineFixedSignalSizeCheck;
  static_assert(sizeof(CinemachineFixedSignal) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineFixedSignal::AxisDuration
// Il2CppName: AxisDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineFixedSignal::*)(::UnityEngine::AnimationCurve*)>(&Cinemachine::CinemachineFixedSignal::AxisDuration)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFixedSignal*), "AxisDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFixedSignal::AxisValue
// Il2CppName: AxisValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineFixedSignal::*)(::UnityEngine::AnimationCurve*, float)>(&Cinemachine::CinemachineFixedSignal::AxisValue)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFixedSignal*), "AxisValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, time});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFixedSignal::get_SignalDuration
// Il2CppName: get_SignalDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineFixedSignal::*)()>(&Cinemachine::CinemachineFixedSignal::get_SignalDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFixedSignal*), "get_SignalDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFixedSignal::GetSignal
// Il2CppName: GetSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineFixedSignal::*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&Cinemachine::CinemachineFixedSignal::GetSignal)> {
  static const MethodInfo* get() {
    static auto* timeSinceSignalStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFixedSignal*), "GetSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSinceSignalStart, pos, rot});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFixedSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!