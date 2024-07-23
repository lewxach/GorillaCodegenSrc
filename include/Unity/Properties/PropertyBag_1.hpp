// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.IPropertyBag`1
#include "Unity/Properties/IPropertyBag_1.hpp"
// Including type: Unity.Properties.Internal.IPropertyBagRegister
#include "Unity/Properties/Internal/IPropertyBagRegister.hpp"
// Including type: Unity.Properties.IConstructor`1
#include "Unity/Properties/IConstructor_1.hpp"
// Including type: Unity.Properties.InstantiationKind
#include "Unity/Properties/InstantiationKind.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties
namespace Unity::Properties {
  // Forward declaring type: ITypeVisitor
  class ITypeVisitor;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: PropertyBag`1<TContainer>
  template<typename TContainer>
  class PropertyBag_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::PropertyBag_1, "Unity.Properties", "PropertyBag`1");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.PropertyBag`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContainer>
  class PropertyBag_1 : public ::Il2CppObject/*, public ::Unity::Properties::IPropertyBag_1<TContainer>, public ::Unity::Properties::Internal::IPropertyBagRegister, public ::Unity::Properties::IConstructor_1<TContainer>*/ {
    public:
    public:
    // private readonly Unity.Properties.InstantiationKind <InstantiationKind>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::Unity::Properties::InstantiationKind InstantiationKind;
    // Field size check
    static_assert(sizeof(::Unity::Properties::InstantiationKind) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Unity::Properties::IPropertyBag_1<TContainer>
    operator ::Unity::Properties::IPropertyBag_1<TContainer>() noexcept {
      return *reinterpret_cast<::Unity::Properties::IPropertyBag_1<TContainer>*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Properties::Internal::IPropertyBagRegister
    operator ::Unity::Properties::Internal::IPropertyBagRegister() noexcept {
      return *reinterpret_cast<::Unity::Properties::Internal::IPropertyBagRegister*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Properties::IConstructor_1<TContainer>
    operator ::Unity::Properties::IConstructor_1<TContainer>() noexcept {
      return *reinterpret_cast<::Unity::Properties::IConstructor_1<TContainer>*>(this);
    }
    // Creating conversion operator: operator ::Unity::Properties::InstantiationKind
    constexpr operator ::Unity::Properties::InstantiationKind() const noexcept {
      return InstantiationKind;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Unity.Properties.InstantiationKind <InstantiationKind>k__BackingField
    [[deprecated("Use field access instead!")]] ::Unity::Properties::InstantiationKind& dyn_$InstantiationKind$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::dyn_$InstantiationKind$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<InstantiationKind>k__BackingField"))->offset;
      return *reinterpret_cast<::Unity::Properties::InstantiationKind*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertyBag_1<TContainer>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // private System.Void Unity.Properties.Internal.IPropertyBagRegister.Register()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Unity_Properties_Internal_IPropertyBagRegister_Register() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::Unity.Properties.Internal.IPropertyBagRegister.Register");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Accept(Unity.Properties.ITypeVisitor visitor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Accept(::Unity::Properties::ITypeVisitor* visitor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::Accept");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, visitor);
    }
    // private Unity.Properties.InstantiationKind Unity.Properties.IConstructor.get_InstantiationKind()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Properties::InstantiationKind Unity_Properties_IConstructor_get_InstantiationKind() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::Unity.Properties.IConstructor.get_InstantiationKind");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal__method);
    }
    // private TContainer Unity.Properties.IConstructor<TContainer>.Instantiate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TContainer Unity_Properties_IConstructor$TContainer$_Instantiate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::Unity.Properties.IConstructor<TContainer>.Instantiate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TContainer, false>(this, ___internal__method);
    }
    // protected Unity.Properties.InstantiationKind get_InstantiationKind()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Unity::Properties::InstantiationKind get_InstantiationKind() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::get_InstantiationKind");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal__method);
    }
    // protected TContainer Instantiate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TContainer Instantiate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::Instantiate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TContainer, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyBag_1<TContainer>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertyBag_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyBag_1<TContainer>*, creationType>()));
    }
  }; // Unity.Properties.PropertyBag`1
  // Could not write size check! Type: Unity.Properties.PropertyBag`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"