// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: JsonType
  struct JsonType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LitJson::JsonType, "LitJson", "JsonType");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.JsonType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JsonType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JsonType
    constexpr JsonType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LitJson.JsonType None
    static constexpr const int None = 0;
    // Get static field: static public LitJson.JsonType None
    static ::LitJson::JsonType _get_None();
    // Set static field: static public LitJson.JsonType None
    static void _set_None(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Object
    static constexpr const int Object = 1;
    // Get static field: static public LitJson.JsonType Object
    static ::LitJson::JsonType _get_Object();
    // Set static field: static public LitJson.JsonType Object
    static void _set_Object(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Array
    static constexpr const int Array = 2;
    // Get static field: static public LitJson.JsonType Array
    static ::LitJson::JsonType _get_Array();
    // Set static field: static public LitJson.JsonType Array
    static void _set_Array(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType String
    static constexpr const int String = 3;
    // Get static field: static public LitJson.JsonType String
    static ::LitJson::JsonType _get_String();
    // Set static field: static public LitJson.JsonType String
    static void _set_String(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Int
    static constexpr const int Int = 4;
    // Get static field: static public LitJson.JsonType Int
    static ::LitJson::JsonType _get_Int();
    // Set static field: static public LitJson.JsonType Int
    static void _set_Int(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Long
    static constexpr const int Long = 5;
    // Get static field: static public LitJson.JsonType Long
    static ::LitJson::JsonType _get_Long();
    // Set static field: static public LitJson.JsonType Long
    static void _set_Long(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Double
    static constexpr const int Double = 6;
    // Get static field: static public LitJson.JsonType Double
    static ::LitJson::JsonType _get_Double();
    // Set static field: static public LitJson.JsonType Double
    static void _set_Double(::LitJson::JsonType value);
    // static field const value: static public LitJson.JsonType Boolean
    static constexpr const int Boolean = 7;
    // Get static field: static public LitJson.JsonType Boolean
    static ::LitJson::JsonType _get_Boolean();
    // Set static field: static public LitJson.JsonType Boolean
    static void _set_Boolean(::LitJson::JsonType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LitJson.JsonType
  #pragma pack(pop)
  static check_size<sizeof(JsonType), 0 + sizeof(int)> __LitJson_JsonTypeSizeCheck;
  static_assert(sizeof(JsonType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
