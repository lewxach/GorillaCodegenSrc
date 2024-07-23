// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.WebParseErrorSection
#include "System/Net/WebParseErrorSection.hpp"
// Including type: System.Net.WebParseErrorCode
#include "System/Net/WebParseErrorCode.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebParseError
  struct WebParseError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebParseError, "System.Net", "WebParseError");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.WebParseError
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebParseError/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Net.WebParseErrorSection Section
    // Size: 0x4
    // Offset: 0x0
    ::System::Net::WebParseErrorSection Section;
    // Field size check
    static_assert(sizeof(::System::Net::WebParseErrorSection) == 0x4);
    // public System.Net.WebParseErrorCode Code
    // Size: 0x4
    // Offset: 0x4
    ::System::Net::WebParseErrorCode Code;
    // Field size check
    static_assert(sizeof(::System::Net::WebParseErrorCode) == 0x4);
    public:
    // Creating value type constructor for type: WebParseError
    constexpr WebParseError(::System::Net::WebParseErrorSection Section_ = {}, ::System::Net::WebParseErrorCode Code_ = {}) noexcept : Section{Section_}, Code{Code_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Net.WebParseErrorSection Section
    [[deprecated("Use field access instead!")]] ::System::Net::WebParseErrorSection& dyn_Section();
    // Get instance field reference: public System.Net.WebParseErrorCode Code
    [[deprecated("Use field access instead!")]] ::System::Net::WebParseErrorCode& dyn_Code();
  }; // System.Net.WebParseError
  #pragma pack(pop)
  static check_size<sizeof(WebParseError), 4 + sizeof(::System::Net::WebParseErrorCode)> __System_Net_WebParseErrorSizeCheck;
  static_assert(sizeof(WebParseError) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"