// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpListenerRequestUriBuilder
#include "System/Net/HttpListenerRequestUriBuilder.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequestUriBuilder::ParsingResult, "System.Net", "HttpListenerRequestUriBuilder/ParsingResult");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequestUriBuilder/ParsingResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct HttpListenerRequestUriBuilder::ParsingResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParsingResult
    constexpr ParsingResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult Success
    static constexpr const int Success = 0;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult Success
    static ::System::Net::HttpListenerRequestUriBuilder::ParsingResult _get_Success();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult Success
    static void _set_Success(::System::Net::HttpListenerRequestUriBuilder::ParsingResult value);
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult InvalidString
    static constexpr const int InvalidString = 1;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult InvalidString
    static ::System::Net::HttpListenerRequestUriBuilder::ParsingResult _get_InvalidString();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult InvalidString
    static void _set_InvalidString(::System::Net::HttpListenerRequestUriBuilder::ParsingResult value);
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult EncodingError
    static constexpr const int EncodingError = 2;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult EncodingError
    static ::System::Net::HttpListenerRequestUriBuilder::ParsingResult _get_EncodingError();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/ParsingResult EncodingError
    static void _set_EncodingError(::System::Net::HttpListenerRequestUriBuilder::ParsingResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.HttpListenerRequestUriBuilder/ParsingResult
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerRequestUriBuilder::ParsingResult), 0 + sizeof(int)> __System_Net_HttpListenerRequestUriBuilder_ParsingResultSizeCheck;
  static_assert(sizeof(HttpListenerRequestUriBuilder::ParsingResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"