// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ConvertUtils
#include "Newtonsoft/Json/Utilities/ConvertUtils.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  struct ConvertUtils::ConvertResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConvertResult
    constexpr ConvertResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult Success
    static constexpr const int Success = 0;
    // Get static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult Success
    static ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult _get_Success();
    // Set static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult Success
    static void _set_Success(::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult CannotConvertNull
    static constexpr const int CannotConvertNull = 1;
    // Get static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult CannotConvertNull
    static ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult _get_CannotConvertNull();
    // Set static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult CannotConvertNull
    static void _set_CannotConvertNull(::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NotInstantiableType
    static constexpr const int NotInstantiableType = 2;
    // Get static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NotInstantiableType
    static ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult _get_NotInstantiableType();
    // Set static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NotInstantiableType
    static void _set_NotInstantiableType(::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult value);
    // static field const value: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NoValidConversion
    static constexpr const int NoValidConversion = 3;
    // Get static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NoValidConversion
    static ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult _get_NoValidConversion();
    // Set static field: static public Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult NoValidConversion
    static void _set_NoValidConversion(::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
  #pragma pack(pop)
  static check_size<sizeof(ConvertUtils::ConvertResult), 0 + sizeof(int)> __Newtonsoft_Json_Utilities_ConvertUtils_ConvertResultSizeCheck;
  static_assert(sizeof(ConvertUtils::ConvertResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"