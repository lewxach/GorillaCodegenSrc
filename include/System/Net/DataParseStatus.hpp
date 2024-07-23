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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DataParseStatus
  struct DataParseStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DataParseStatus, "System.Net", "DataParseStatus");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DataParseStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct DataParseStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DataParseStatus
    constexpr DataParseStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.DataParseStatus NeedMoreData
    static constexpr const int NeedMoreData = 0;
    // Get static field: static public System.Net.DataParseStatus NeedMoreData
    static ::System::Net::DataParseStatus _get_NeedMoreData();
    // Set static field: static public System.Net.DataParseStatus NeedMoreData
    static void _set_NeedMoreData(::System::Net::DataParseStatus value);
    // static field const value: static public System.Net.DataParseStatus ContinueParsing
    static constexpr const int ContinueParsing = 1;
    // Get static field: static public System.Net.DataParseStatus ContinueParsing
    static ::System::Net::DataParseStatus _get_ContinueParsing();
    // Set static field: static public System.Net.DataParseStatus ContinueParsing
    static void _set_ContinueParsing(::System::Net::DataParseStatus value);
    // static field const value: static public System.Net.DataParseStatus Done
    static constexpr const int Done = 2;
    // Get static field: static public System.Net.DataParseStatus Done
    static ::System::Net::DataParseStatus _get_Done();
    // Set static field: static public System.Net.DataParseStatus Done
    static void _set_Done(::System::Net::DataParseStatus value);
    // static field const value: static public System.Net.DataParseStatus Invalid
    static constexpr const int Invalid = 3;
    // Get static field: static public System.Net.DataParseStatus Invalid
    static ::System::Net::DataParseStatus _get_Invalid();
    // Set static field: static public System.Net.DataParseStatus Invalid
    static void _set_Invalid(::System::Net::DataParseStatus value);
    // static field const value: static public System.Net.DataParseStatus DataTooBig
    static constexpr const int DataTooBig = 4;
    // Get static field: static public System.Net.DataParseStatus DataTooBig
    static ::System::Net::DataParseStatus _get_DataTooBig();
    // Set static field: static public System.Net.DataParseStatus DataTooBig
    static void _set_DataTooBig(::System::Net::DataParseStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.DataParseStatus
  #pragma pack(pop)
  static check_size<sizeof(DataParseStatus), 0 + sizeof(int)> __System_Net_DataParseStatusSizeCheck;
  static_assert(sizeof(DataParseStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"