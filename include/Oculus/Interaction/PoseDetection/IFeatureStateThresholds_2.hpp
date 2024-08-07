// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: IFeatureStateThreshold`1<TFeatureState>
  template<typename TFeatureState>
  class IFeatureStateThreshold_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: IFeatureStateThresholds`2<TFeature, TFeatureState>
  template<typename TFeature, typename TFeatureState>
  class IFeatureStateThresholds_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2, "Oculus.Interaction.PoseDetection", "IFeatureStateThresholds`2");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TFeature, typename TFeatureState>
  class IFeatureStateThresholds_2 {
    public:
    // public TFeature get_Feature()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TFeature get_Feature() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2::get_Feature");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TFeature, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<TFeatureState>> get_Thresholds()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>* get_Thresholds() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2::get_Thresholds");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature, TFeatureState>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*, false>(this, ___internal__method);
    }
  }; // Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2
  // Could not write size check! Type: Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
