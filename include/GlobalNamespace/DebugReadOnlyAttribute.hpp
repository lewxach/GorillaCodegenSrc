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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DebugReadOnlyAttribute
  class DebugReadOnlyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugReadOnlyAttribute*, "", "DebugReadOnlyAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DebugReadOnlyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [IncludeMyAttributesAttribute] Offset: FFFFFFFF
  class DebugReadOnlyAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x274D9D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugReadOnlyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugReadOnlyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugReadOnlyAttribute*, creationType>()));
    }
  }; // DebugReadOnlyAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugReadOnlyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
