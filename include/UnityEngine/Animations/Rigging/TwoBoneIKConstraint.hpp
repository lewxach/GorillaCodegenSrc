// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.RigConstraint`3
#include "UnityEngine/Animations/Rigging/RigConstraint_3.hpp"
// Including type: UnityEngine.Animations.Rigging.TwoBoneIKConstraintJob
#include "UnityEngine/Animations/Rigging/TwoBoneIKConstraintJob.hpp"
// Including type: UnityEngine.Animations.Rigging.TwoBoneIKConstraintData
#include "UnityEngine/Animations/Rigging/TwoBoneIKConstraintData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: TwoBoneIKConstraintJobBinder`1<T>
  template<typename T>
  class TwoBoneIKConstraintJobBinder_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: TwoBoneIKConstraint
  class TwoBoneIKConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::TwoBoneIKConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::TwoBoneIKConstraint*, "UnityEngine.Animations.Rigging", "TwoBoneIKConstraint");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Animations.Rigging.TwoBoneIKConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class TwoBoneIKConstraint : public ::UnityEngine::Animations::Rigging::RigConstraint_3<::UnityEngine::Animations::Rigging::TwoBoneIKConstraintJob, ::UnityEngine::Animations::Rigging::TwoBoneIKConstraintData, ::UnityEngine::Animations::Rigging::TwoBoneIKConstraintJobBinder_1<::UnityEngine::Animations::Rigging::TwoBoneIKConstraintData>*> {
    public:
    // protected override System.Void OnValidate()
    // Offset: 0x5076DF8
    // Implemented from: UnityEngine.Animations.Rigging.RigConstraint`3
    // Base method: System.Void RigConstraint_3::OnValidate()
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x5076E8C
    // Implemented from: UnityEngine.Animations.Rigging.RigConstraint`3
    // Base method: System.Void RigConstraint_3::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwoBoneIKConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::TwoBoneIKConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwoBoneIKConstraint*, creationType>()));
    }
  }; // UnityEngine.Animations.Rigging.TwoBoneIKConstraint
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraint::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::TwoBoneIKConstraint::*)()>(&UnityEngine::Animations::Rigging::TwoBoneIKConstraint::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::TwoBoneIKConstraint*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::TwoBoneIKConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
