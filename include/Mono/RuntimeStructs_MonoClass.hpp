// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs::MonoClass, "Mono", "RuntimeStructs/MonoClass");
// Type namespace: Mono
namespace Mono {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/MonoClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::MonoClass/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: MonoClass
    constexpr MonoClass() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
  }; // Mono.RuntimeStructs/MonoClass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
