// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider
#include "Oculus/Interaction/PoseDetection/FingerFeatureStateProvider.hpp"
// Including type: Oculus.Interaction.Input.HandFinger
#include "Oculus/Interaction/Input/HandFinger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FingerFeature
  struct FingerFeature;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/<>c__DisplayClass20_0");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FingerFeatureStateProvider::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Interaction.Input.HandFinger finger
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::Input::HandFinger finger;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandFinger) == 0x4);
    // Padding between fields: finger and: $$4__this
    char __padding0[0x4] = {};
    // public Oculus.Interaction.PoseDetection.FingerFeatureStateProvider <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider* $$4__this;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*) == 0x8);
    public:
    // Get instance field reference: public Oculus.Interaction.Input.HandFinger finger
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandFinger& dyn_finger();
    // Get instance field reference: public Oculus.Interaction.PoseDetection.FingerFeatureStateProvider <>4__this
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x47E9ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerFeatureStateProvider::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerFeatureStateProvider::$$c__DisplayClass20_0*, creationType>()));
    }
    // System.Nullable`1<System.Single> <ReadStateThresholds>b__0(Oculus.Interaction.PoseDetection.FingerFeature feature)
    // Offset: 0x47EA17C
    ::System::Nullable_1<float> $ReadStateThresholds$b__0(::Oculus::Interaction::PoseDetection::FingerFeature feature);
  }; // Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(FingerFeatureStateProvider::$$c__DisplayClass20_0), 24 + sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*)> __Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(FingerFeatureStateProvider::$$c__DisplayClass20_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0::$ReadStateThresholds$b__0
// Il2CppName: <ReadStateThresholds>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float> (Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0::*)(::Oculus::Interaction::PoseDetection::FingerFeature)>(&Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0::$ReadStateThresholds$b__0)> {
  static const MethodInfo* get() {
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "FingerFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::$$c__DisplayClass20_0*), "<ReadStateThresholds>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{feature});
  }
};