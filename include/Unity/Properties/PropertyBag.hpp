// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties
namespace Unity::Properties {
  // Forward declaring type: PropertyBag`1<TContainer>
  template<typename TContainer>
  class PropertyBag_1;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: PropertyBag
  class PropertyBag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyBag*, "Unity.Properties", "PropertyBag");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.PropertyBag
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyBag : public ::Il2CppObject {
    public:
    // static public System.Void Register(Unity.Properties.PropertyBag`1<TContainer> propertyBag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TContainer>
    static void Register(::Unity::Properties::PropertyBag_1<TContainer>* propertyBag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag::Register");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Properties", "PropertyBag", "Register", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyBag)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, propertyBag);
    }
  }; // Unity.Properties.PropertyBag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::PropertyBag::Register
// Il2CppName: Register
// Cannot write MetadataGetter for generic methods!
