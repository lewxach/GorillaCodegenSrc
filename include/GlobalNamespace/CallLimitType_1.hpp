// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FXType
#include "GlobalNamespace/FXType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CallLimiter
  class CallLimiter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CallLimitType`1<T>
  template<typename T>
  class CallLimitType_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::CallLimitType_1, "", "CallLimitType`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CallLimitType`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CallLimitType_1 : public ::Il2CppObject {
    public:
    public:
    // public FXType Key
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::FXType Key;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FXType) == 0x4);
    // public System.Boolean UseNetWorkTime
    // Size: 0x1
    // Offset: 0x0
    bool UseNetWorkTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public T CallLimitSettings
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T CallLimitSettings;
    public:
    // Autogenerated instance field getter
    // Get instance field: public FXType Key
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FXType& dyn_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimitType_1::dyn_Key");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Key"))->offset;
      return *reinterpret_cast<::GlobalNamespace::FXType*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean UseNetWorkTime
    [[deprecated("Use field access instead!")]] bool& dyn_UseNetWorkTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimitType_1::dyn_UseNetWorkTime");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "UseNetWorkTime"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T CallLimitSettings
    [[deprecated("Use field access instead!")]] T& dyn_CallLimitSettings() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimitType_1::dyn_CallLimitSettings");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "CallLimitSettings"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallLimitType_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimitType_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallLimitType_1<T>*, creationType>()));
    }
  }; // CallLimitType`1
  // Could not write size check! Type: CallLimitType`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"