// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // Forward declaring type: ConfettiPopperHoldable
  class ConfettiPopperHoldable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Cosmetics::ConfettiPopperHoldable);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Cosmetics::ConfettiPopperHoldable*, "GorillaTag.Cosmetics", "ConfettiPopperHoldable");
// Type namespace: GorillaTag.Cosmetics
namespace GorillaTag::Cosmetics {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaTag.Cosmetics.ConfettiPopperHoldable
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfettiPopperHoldable : public ::GlobalNamespace::TransferrableObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x28BEA3C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfettiPopperHoldable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Cosmetics::ConfettiPopperHoldable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfettiPopperHoldable*, creationType>()));
    }
  }; // GorillaTag.Cosmetics.ConfettiPopperHoldable
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Cosmetics::ConfettiPopperHoldable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!