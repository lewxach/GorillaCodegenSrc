// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.CollectionUtils
#include "Newtonsoft/Json/Utilities/CollectionUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::CollectionUtils::EmptyArrayContainer_1, "Newtonsoft.Json.Utilities", "CollectionUtils/EmptyArrayContainer`1");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.CollectionUtils/EmptyArrayContainer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  template<typename T>
  class CollectionUtils::EmptyArrayContainer_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly T[] Empty
    static ::ArrayW<T> _get_Empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::EmptyArrayContainer_1::_get_Empty");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::ArrayW<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollectionUtils::EmptyArrayContainer_1<T>*>::get(), "Empty"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly T[] Empty
    static void _set_Empty(::ArrayW<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::EmptyArrayContainer_1::_set_Empty");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollectionUtils::EmptyArrayContainer_1<T>*>::get(), "Empty", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::CollectionUtils::EmptyArrayContainer_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CollectionUtils::EmptyArrayContainer_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Newtonsoft.Json.Utilities.CollectionUtils/EmptyArrayContainer`1
  // Could not write size check! Type: Newtonsoft.Json.Utilities.CollectionUtils/EmptyArrayContainer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
