// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.ArrayHelpers
#include "UnityEngine/InputSystem/Utilities/ArrayHelpers.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::ArrayHelpers::$$c__DisplayClass33_0_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass33_0`1");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.ArrayHelpers/<>c__DisplayClass33_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class ArrayHelpers::$$c__DisplayClass33_0_1 : public ::Il2CppObject {
    public:
    public:
    // public TValue secondValue
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TValue secondValue;
    public:
    // Autogenerated instance field getter
    // Get instance field: public TValue secondValue
    [[deprecated("Use field access instead!")]] TValue& dyn_secondValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::ArrayHelpers::$$c__DisplayClass33_0_1::dyn_secondValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "secondValue"))->offset;
      return *reinterpret_cast<TValue*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayHelpers::$$c__DisplayClass33_0_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::ArrayHelpers::$$c__DisplayClass33_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayHelpers::$$c__DisplayClass33_0_1<TValue>*, creationType>()));
    }
    // System.Boolean <Merge>b__0(TValue x)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool $Merge$b__0(TValue x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::ArrayHelpers::$$c__DisplayClass33_0_1::<Merge>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Merge>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x);
    }
  }; // UnityEngine.InputSystem.Utilities.ArrayHelpers/<>c__DisplayClass33_0`1
  // Could not write size check! Type: UnityEngine.InputSystem.Utilities.ArrayHelpers/<>c__DisplayClass33_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"