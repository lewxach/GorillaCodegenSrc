// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnPlayChange_BaseAttribute
#include "GlobalNamespace/OnPlayChange_BaseAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OnExitPlay_Attribute
  class OnExitPlay_Attribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnExitPlay_Attribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnExitPlay_Attribute*, "", "OnExitPlay_Attribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnExitPlay_Attribute
  // [TokenAttribute] Offset: FFFFFFFF
  class OnExitPlay_Attribute : public ::GlobalNamespace::OnPlayChange_BaseAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2779A58
    // Implemented from: OnPlayChange_BaseAttribute
    // Base method: System.Void OnPlayChange_BaseAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnExitPlay_Attribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OnExitPlay_Attribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnExitPlay_Attribute*, creationType>()));
    }
  }; // OnExitPlay_Attribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnExitPlay_Attribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!