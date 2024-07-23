// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1
#include "Oculus/Interaction/PoseDetection/IFeatureStateThreshold_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FingerFeatureStateThreshold
  class FingerFeatureStateThreshold;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateThreshold");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerFeatureStateThreshold : public ::Il2CppObject/*, public ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*/ {
    public:
    public:
    // private System.Single _thresholdMidpoint
    // Size: 0x4
    // Offset: 0x10
    float thresholdMidpoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _thresholdWidth
    // Size: 0x4
    // Offset: 0x14
    float thresholdWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.String _firstState
    // Size: 0x8
    // Offset: 0x18
    ::StringW firstState;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _secondState
    // Size: 0x8
    // Offset: 0x20
    ::StringW secondState;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>
    operator ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>(this);
    }
    // Get instance field reference: private System.Single _thresholdMidpoint
    [[deprecated("Use field access instead!")]] float& dyn__thresholdMidpoint();
    // Get instance field reference: private System.Single _thresholdWidth
    [[deprecated("Use field access instead!")]] float& dyn__thresholdWidth();
    // Get instance field reference: private System.String _firstState
    [[deprecated("Use field access instead!")]] ::StringW& dyn__firstState();
    // Get instance field reference: private System.String _secondState
    [[deprecated("Use field access instead!")]] ::StringW& dyn__secondState();
    // public System.Void .ctor()
    // Offset: 0x47EA1A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureStateThreshold* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureStateThreshold*, creationType>()));
    }
    // public System.Void .ctor(System.Single thresholdMidpoint, System.Single thresholdWidth, System.String firstState, System.String secondState)
    // Offset: 0x47EA1A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureStateThreshold* New_ctor(float thresholdMidpoint, float thresholdWidth, ::StringW firstState, ::StringW secondState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureStateThreshold*, creationType>(thresholdMidpoint, thresholdWidth, firstState, secondState)));
    }
    // public System.Single get_ThresholdMidpoint()
    // Offset: 0x47EA200
    float get_ThresholdMidpoint();
    // public System.Single get_ThresholdWidth()
    // Offset: 0x47EA208
    float get_ThresholdWidth();
    // public System.Single get_ToFirstWhenBelow()
    // Offset: 0x47EA210
    float get_ToFirstWhenBelow();
    // public System.Single get_ToSecondWhenAbove()
    // Offset: 0x47EA224
    float get_ToSecondWhenAbove();
    // public System.String get_FirstState()
    // Offset: 0x47EA238
    ::StringW get_FirstState();
    // public System.String get_SecondState()
    // Offset: 0x47EA240
    ::StringW get_SecondState();
  }; // Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold
  #pragma pack(pop)
  static check_size<sizeof(FingerFeatureStateThreshold), 32 + sizeof(::StringW)> __Oculus_Interaction_PoseDetection_FingerFeatureStateThresholdSizeCheck;
  static_assert(sizeof(FingerFeatureStateThreshold) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ThresholdMidpoint
// Il2CppName: get_ThresholdMidpoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ThresholdMidpoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_ThresholdMidpoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ThresholdWidth
// Il2CppName: get_ThresholdWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ThresholdWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_ThresholdWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ToFirstWhenBelow
// Il2CppName: get_ToFirstWhenBelow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ToFirstWhenBelow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_ToFirstWhenBelow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ToSecondWhenAbove
// Il2CppName: get_ToSecondWhenAbove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_ToSecondWhenAbove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_ToSecondWhenAbove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_FirstState
// Il2CppName: get_FirstState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_FirstState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_FirstState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_SecondState
// Il2CppName: get_SecondState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::*)()>(&Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold::get_SecondState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*), "get_SecondState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};