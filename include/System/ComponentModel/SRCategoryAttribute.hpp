// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.CategoryAttribute
#include "System/ComponentModel/CategoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: SRCategoryAttribute
  class SRCategoryAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::SRCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SRCategoryAttribute*, "System.ComponentModel", "SRCategoryAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.SRCategoryAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class SRCategoryAttribute : public ::System::ComponentModel::CategoryAttribute {
    public:
    // public System.Void .ctor(System.String category)
    // Offset: 0x4F479D8
    // Implemented from: System.ComponentModel.CategoryAttribute
    // Base method: System.Void CategoryAttribute::.ctor(System.String category)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SRCategoryAttribute* New_ctor(::StringW category) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::SRCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SRCategoryAttribute*, creationType>(category)));
    }
  }; // System.ComponentModel.SRCategoryAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::SRCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
