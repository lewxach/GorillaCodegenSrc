// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Forward declaring type: BurstDiscardAttribute
  class BurstDiscardAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstDiscardAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstDiscardAttribute*, "Unity.Burst", "BurstDiscardAttribute");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstDiscardAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class BurstDiscardAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x5479DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstDiscardAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Burst::BurstDiscardAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstDiscardAttribute*, creationType>()));
    }
  }; // Unity.Burst.BurstDiscardAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstDiscardAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
