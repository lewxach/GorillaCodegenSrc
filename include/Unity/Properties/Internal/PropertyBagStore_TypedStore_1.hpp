// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.Internal.PropertyBagStore
#include "Unity/Properties/Internal/PropertyBagStore.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties
namespace Unity::Properties {
  // Forward declaring type: IPropertyBag`1<TContainer>
  template<typename TContainer>
  class IPropertyBag_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::Internal::PropertyBagStore::TypedStore_1, "Unity.Properties.Internal", "PropertyBagStore/TypedStore`1");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Properties.Internal.PropertyBagStore/TypedStore`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContainer>
  struct PropertyBagStore::TypedStore_1/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: TypedStore_1
    constexpr TypedStore_1() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static public Unity.Properties.IPropertyBag`1<TContainer> PropertyBag
    static ::Unity::Properties::IPropertyBag_1<TContainer>* _get_PropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::PropertyBagStore::TypedStore_1::_get_PropertyBag");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Unity::Properties::IPropertyBag_1<TContainer>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertyBagStore::TypedStore_1<TContainer>>::get(), "PropertyBag"));
    }
    // Autogenerated static field setter
    // Set static field: static public Unity.Properties.IPropertyBag`1<TContainer> PropertyBag
    static void _set_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::PropertyBagStore::TypedStore_1::_set_PropertyBag");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertyBagStore::TypedStore_1<TContainer>>::get(), "PropertyBag", value));
    }
  }; // Unity.Properties.Internal.PropertyBagStore/TypedStore`1
  // Could not write size check! Type: Unity.Properties.Internal.PropertyBagStore/TypedStore`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
