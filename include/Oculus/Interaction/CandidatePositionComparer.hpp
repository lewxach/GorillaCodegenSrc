// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.CandidateComparer`1
#include "Oculus/Interaction/CandidateComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ICandidatePosition
  class ICandidatePosition;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: CandidatePositionComparer
  class CandidatePositionComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::CandidatePositionComparer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::CandidatePositionComparer*, "Oculus.Interaction", "CandidatePositionComparer");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.CandidatePositionComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CandidatePositionComparer : public ::Oculus::Interaction::CandidateComparer_1<::Oculus::Interaction::ICandidatePosition*> {
    public:
    public:
    // private UnityEngine.Transform _compareOrigin
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* compareOrigin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform _compareOrigin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__compareOrigin();
    // public System.Int32 Compare(Oculus.Interaction.ICandidatePosition a, Oculus.Interaction.ICandidatePosition b)
    // Offset: 0x47814E8
    int Compare(::Oculus::Interaction::ICandidatePosition* a, ::Oculus::Interaction::ICandidatePosition* b);
    // public System.Void .ctor()
    // Offset: 0x47816C4
    // Implemented from: Oculus.Interaction.CandidateComparer`1
    // Base method: System.Void CandidateComparer_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CandidatePositionComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::CandidatePositionComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CandidatePositionComparer*, creationType>()));
    }
  }; // Oculus.Interaction.CandidatePositionComparer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::CandidatePositionComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::CandidatePositionComparer::*)(::Oculus::Interaction::ICandidatePosition*, ::Oculus::Interaction::ICandidatePosition*)>(&Oculus::Interaction::CandidatePositionComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ICandidatePosition")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ICandidatePosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::CandidatePositionComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::CandidatePositionComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
