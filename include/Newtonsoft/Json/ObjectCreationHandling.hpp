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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: ObjectCreationHandling
  struct ObjectCreationHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ObjectCreationHandling, "Newtonsoft.Json", "ObjectCreationHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.ObjectCreationHandling
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObjectCreationHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ObjectCreationHandling
    constexpr ObjectCreationHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.ObjectCreationHandling Auto
    static constexpr const int Auto = 0;
    // Get static field: static public Newtonsoft.Json.ObjectCreationHandling Auto
    static ::Newtonsoft::Json::ObjectCreationHandling _get_Auto();
    // Set static field: static public Newtonsoft.Json.ObjectCreationHandling Auto
    static void _set_Auto(::Newtonsoft::Json::ObjectCreationHandling value);
    // static field const value: static public Newtonsoft.Json.ObjectCreationHandling Reuse
    static constexpr const int Reuse = 1;
    // Get static field: static public Newtonsoft.Json.ObjectCreationHandling Reuse
    static ::Newtonsoft::Json::ObjectCreationHandling _get_Reuse();
    // Set static field: static public Newtonsoft.Json.ObjectCreationHandling Reuse
    static void _set_Reuse(::Newtonsoft::Json::ObjectCreationHandling value);
    // static field const value: static public Newtonsoft.Json.ObjectCreationHandling Replace
    static constexpr const int Replace = 2;
    // Get static field: static public Newtonsoft.Json.ObjectCreationHandling Replace
    static ::Newtonsoft::Json::ObjectCreationHandling _get_Replace();
    // Set static field: static public Newtonsoft.Json.ObjectCreationHandling Replace
    static void _set_Replace(::Newtonsoft::Json::ObjectCreationHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.ObjectCreationHandling
  #pragma pack(pop)
  static check_size<sizeof(ObjectCreationHandling), 0 + sizeof(int)> __Newtonsoft_Json_ObjectCreationHandlingSizeCheck;
  static_assert(sizeof(ObjectCreationHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
