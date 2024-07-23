// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.BehaviourActionAttribute
#include "Fusion/BehaviourActionAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BehaviourToggleAttribute
  class BehaviourToggleAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::BehaviourToggleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BehaviourToggleAttribute*, "Fusion", "BehaviourToggleAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.BehaviourToggleAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class BehaviourToggleAttribute : public ::Fusion::BehaviourActionAttribute {
    public:
    // public System.Void .ctor(System.String conditionMember, Fusion.BehaviourActionAttribute/ActionFlags flags)
    // Offset: 0x2AFEC58
    // Implemented from: Fusion.BehaviourActionAttribute
    // Base method: System.Void BehaviourActionAttribute::.ctor(System.String conditionMember, Fusion.BehaviourActionAttribute/ActionFlags flags)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BehaviourToggleAttribute* New_ctor(::StringW conditionMember, ::Fusion::BehaviourActionAttribute::ActionFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::BehaviourToggleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BehaviourToggleAttribute*, creationType>(conditionMember, flags)));
    }
  }; // Fusion.BehaviourToggleAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BehaviourToggleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!