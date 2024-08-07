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
// Completed includes
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaZiplineSegment
  class GorillaZiplineSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::GorillaZiplineSegment);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::GorillaZiplineSegment*, "GorillaLocomotion.Gameplay", "GorillaZiplineSegment");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Gameplay.GorillaZiplineSegment
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaZiplineSegment : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single startT
    // Size: 0x4
    // Offset: 0x20
    float startT;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single startT
    [[deprecated("Use field access instead!")]] float& dyn_startT();
    // public System.Void .ctor()
    // Offset: 0x27EA980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaZiplineSegment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::GorillaZiplineSegment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaZiplineSegment*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.GorillaZiplineSegment
  #pragma pack(pop)
  static check_size<sizeof(GorillaZiplineSegment), 32 + sizeof(float)> __GorillaLocomotion_Gameplay_GorillaZiplineSegmentSizeCheck;
  static_assert(sizeof(GorillaZiplineSegment) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaZiplineSegment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
