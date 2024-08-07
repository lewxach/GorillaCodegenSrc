// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.StringUtils
#include "Newtonsoft/Json/Utilities/StringUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1, "Newtonsoft.Json.Utilities", "StringUtils/<>c__DisplayClass14_0`1");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class StringUtils::$$c__DisplayClass14_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`2<TSource,System.String> valueSelector
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TSource, ::StringW>* valueSelector;
    // Field size check
    static_assert(sizeof(::System::Func_2<TSource, ::StringW>*) == 0x8);
    // public System.String testValue
    // Size: 0x8
    // Offset: 0x0
    ::StringW testValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<TSource,System.String> valueSelector
    [[deprecated("Use field access instead!")]] ::System::Func_2<TSource, ::StringW>*& dyn_valueSelector() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1::dyn_valueSelector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "valueSelector"))->offset;
      return *reinterpret_cast<::System::Func_2<TSource, ::StringW>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String testValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_testValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1::dyn_testValue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "testValue"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringUtils::$$c__DisplayClass14_0_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringUtils::$$c__DisplayClass14_0_1<TSource>*, creationType>()));
    }
    // System.Boolean <ForgivingCaseSensitiveFind>b__0(TSource s)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool $ForgivingCaseSensitiveFind$b__0(TSource s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1::<ForgivingCaseSensitiveFind>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ForgivingCaseSensitiveFind>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(s)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, s);
    }
    // System.Boolean <ForgivingCaseSensitiveFind>b__1(TSource s)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool $ForgivingCaseSensitiveFind$b__1(TSource s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::StringUtils::$$c__DisplayClass14_0_1::<ForgivingCaseSensitiveFind>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ForgivingCaseSensitiveFind>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(s)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, s);
    }
  }; // Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1
  // Could not write size check! Type: Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
