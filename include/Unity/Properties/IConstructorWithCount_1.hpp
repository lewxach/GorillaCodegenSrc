// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.IConstructor
#include "Unity/Properties/IConstructor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: IConstructorWithCount`1<T>
  template<typename T>
  class IConstructorWithCount_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IConstructorWithCount_1, "Unity.Properties", "IConstructorWithCount`1");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.IConstructorWithCount`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IConstructorWithCount_1/*, public ::Unity::Properties::IConstructor*/ {
    public:
    // Creating interface conversion operator: operator ::Unity::Properties::IConstructor
    operator ::Unity::Properties::IConstructor() noexcept {
      return *reinterpret_cast<::Unity::Properties::IConstructor*>(this);
    }
    // public T InstantiateWithCount(System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T InstantiateWithCount(int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::IConstructorWithCount_1::InstantiateWithCount");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::IConstructorWithCount_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, count);
    }
  }; // Unity.Properties.IConstructorWithCount`1
  // Could not write size check! Type: Unity.Properties.IConstructorWithCount`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
