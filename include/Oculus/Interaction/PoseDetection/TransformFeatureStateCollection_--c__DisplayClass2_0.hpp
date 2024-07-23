// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection
#include "Oculus/Interaction/PoseDetection/TransformFeatureStateCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformJointData
  class TransformJointData;
  // Forward declaring type: TransformConfig
  class TransformConfig;
  // Forward declaring type: TransformFeature
  struct TransformFeature;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateCollection/<>c__DisplayClass2_0");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TransformFeatureStateCollection::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Interaction.PoseDetection.TransformJointData jointData
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::PoseDetection::TransformJointData* jointData;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformJointData*) == 0x8);
    // public Oculus.Interaction.PoseDetection.TransformConfig transformConfig
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Interaction::PoseDetection::TransformConfig* transformConfig;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformConfig*) == 0x8);
    public:
    // Get instance field reference: public Oculus.Interaction.PoseDetection.TransformJointData jointData
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformJointData*& dyn_jointData();
    // Get instance field reference: public Oculus.Interaction.PoseDetection.TransformConfig transformConfig
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::TransformConfig*& dyn_transformConfig();
    // public System.Void .ctor()
    // Offset: 0x47F4134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureStateCollection::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureStateCollection::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Nullable`1<System.Single> <RegisterConfig>b__0(Oculus.Interaction.PoseDetection.TransformFeature feature)
    // Offset: 0x47F45E4
    ::System::Nullable_1<float> $RegisterConfig$b__0(::Oculus::Interaction::PoseDetection::TransformFeature feature);
  }; // Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureStateCollection::$$c__DisplayClass2_0), 24 + sizeof(::Oculus::Interaction::PoseDetection::TransformConfig*)> __Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(TransformFeatureStateCollection::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0::$RegisterConfig$b__0
// Il2CppName: <RegisterConfig>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float> (Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0::*)(::Oculus::Interaction::PoseDetection::TransformFeature)>(&Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0::$RegisterConfig$b__0)> {
  static const MethodInfo* get() {
    static auto* feature = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "TransformFeature")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureStateCollection::$$c__DisplayClass2_0*), "<RegisterConfig>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{feature});
  }
};