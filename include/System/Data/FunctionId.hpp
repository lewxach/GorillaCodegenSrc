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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: FunctionId
  struct FunctionId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::FunctionId, "System.Data", "FunctionId");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.FunctionId
  // [TokenAttribute] Offset: FFFFFFFF
  struct FunctionId/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FunctionId
    constexpr FunctionId(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.FunctionId none
    static constexpr const int none = -1;
    // Get static field: static public System.Data.FunctionId none
    static ::System::Data::FunctionId _get_none();
    // Set static field: static public System.Data.FunctionId none
    static void _set_none(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Ascii
    static constexpr const int Ascii = 0;
    // Get static field: static public System.Data.FunctionId Ascii
    static ::System::Data::FunctionId _get_Ascii();
    // Set static field: static public System.Data.FunctionId Ascii
    static void _set_Ascii(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Char
    static constexpr const int Char = 1;
    // Get static field: static public System.Data.FunctionId Char
    static ::System::Data::FunctionId _get_Char();
    // Set static field: static public System.Data.FunctionId Char
    static void _set_Char(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Charindex
    static constexpr const int Charindex = 2;
    // Get static field: static public System.Data.FunctionId Charindex
    static ::System::Data::FunctionId _get_Charindex();
    // Set static field: static public System.Data.FunctionId Charindex
    static void _set_Charindex(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Difference
    static constexpr const int Difference = 3;
    // Get static field: static public System.Data.FunctionId Difference
    static ::System::Data::FunctionId _get_Difference();
    // Set static field: static public System.Data.FunctionId Difference
    static void _set_Difference(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Len
    static constexpr const int Len = 4;
    // Get static field: static public System.Data.FunctionId Len
    static ::System::Data::FunctionId _get_Len();
    // Set static field: static public System.Data.FunctionId Len
    static void _set_Len(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Lower
    static constexpr const int Lower = 5;
    // Get static field: static public System.Data.FunctionId Lower
    static ::System::Data::FunctionId _get_Lower();
    // Set static field: static public System.Data.FunctionId Lower
    static void _set_Lower(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId LTrim
    static constexpr const int LTrim = 6;
    // Get static field: static public System.Data.FunctionId LTrim
    static ::System::Data::FunctionId _get_LTrim();
    // Set static field: static public System.Data.FunctionId LTrim
    static void _set_LTrim(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Patindex
    static constexpr const int Patindex = 7;
    // Get static field: static public System.Data.FunctionId Patindex
    static ::System::Data::FunctionId _get_Patindex();
    // Set static field: static public System.Data.FunctionId Patindex
    static void _set_Patindex(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Replicate
    static constexpr const int Replicate = 8;
    // Get static field: static public System.Data.FunctionId Replicate
    static ::System::Data::FunctionId _get_Replicate();
    // Set static field: static public System.Data.FunctionId Replicate
    static void _set_Replicate(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Reverse
    static constexpr const int Reverse = 9;
    // Get static field: static public System.Data.FunctionId Reverse
    static ::System::Data::FunctionId _get_Reverse();
    // Set static field: static public System.Data.FunctionId Reverse
    static void _set_Reverse(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Right
    static constexpr const int Right = 10;
    // Get static field: static public System.Data.FunctionId Right
    static ::System::Data::FunctionId _get_Right();
    // Set static field: static public System.Data.FunctionId Right
    static void _set_Right(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId RTrim
    static constexpr const int RTrim = 11;
    // Get static field: static public System.Data.FunctionId RTrim
    static ::System::Data::FunctionId _get_RTrim();
    // Set static field: static public System.Data.FunctionId RTrim
    static void _set_RTrim(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Soundex
    static constexpr const int Soundex = 12;
    // Get static field: static public System.Data.FunctionId Soundex
    static ::System::Data::FunctionId _get_Soundex();
    // Set static field: static public System.Data.FunctionId Soundex
    static void _set_Soundex(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Space
    static constexpr const int Space = 13;
    // Get static field: static public System.Data.FunctionId Space
    static ::System::Data::FunctionId _get_Space();
    // Set static field: static public System.Data.FunctionId Space
    static void _set_Space(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Str
    static constexpr const int Str = 14;
    // Get static field: static public System.Data.FunctionId Str
    static ::System::Data::FunctionId _get_Str();
    // Set static field: static public System.Data.FunctionId Str
    static void _set_Str(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Stuff
    static constexpr const int Stuff = 15;
    // Get static field: static public System.Data.FunctionId Stuff
    static ::System::Data::FunctionId _get_Stuff();
    // Set static field: static public System.Data.FunctionId Stuff
    static void _set_Stuff(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Substring
    static constexpr const int Substring = 16;
    // Get static field: static public System.Data.FunctionId Substring
    static ::System::Data::FunctionId _get_Substring();
    // Set static field: static public System.Data.FunctionId Substring
    static void _set_Substring(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Upper
    static constexpr const int Upper = 17;
    // Get static field: static public System.Data.FunctionId Upper
    static ::System::Data::FunctionId _get_Upper();
    // Set static field: static public System.Data.FunctionId Upper
    static void _set_Upper(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId IsNull
    static constexpr const int IsNull = 18;
    // Get static field: static public System.Data.FunctionId IsNull
    static ::System::Data::FunctionId _get_IsNull();
    // Set static field: static public System.Data.FunctionId IsNull
    static void _set_IsNull(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Iif
    static constexpr const int Iif = 19;
    // Get static field: static public System.Data.FunctionId Iif
    static ::System::Data::FunctionId _get_Iif();
    // Set static field: static public System.Data.FunctionId Iif
    static void _set_Iif(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Convert
    static constexpr const int Convert = 20;
    // Get static field: static public System.Data.FunctionId Convert
    static ::System::Data::FunctionId _get_Convert();
    // Set static field: static public System.Data.FunctionId Convert
    static void _set_Convert(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId cInt
    static constexpr const int cInt = 21;
    // Get static field: static public System.Data.FunctionId cInt
    static ::System::Data::FunctionId _get_cInt();
    // Set static field: static public System.Data.FunctionId cInt
    static void _set_cInt(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId cBool
    static constexpr const int cBool = 22;
    // Get static field: static public System.Data.FunctionId cBool
    static ::System::Data::FunctionId _get_cBool();
    // Set static field: static public System.Data.FunctionId cBool
    static void _set_cBool(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId cDate
    static constexpr const int cDate = 23;
    // Get static field: static public System.Data.FunctionId cDate
    static ::System::Data::FunctionId _get_cDate();
    // Set static field: static public System.Data.FunctionId cDate
    static void _set_cDate(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId cDbl
    static constexpr const int cDbl = 24;
    // Get static field: static public System.Data.FunctionId cDbl
    static ::System::Data::FunctionId _get_cDbl();
    // Set static field: static public System.Data.FunctionId cDbl
    static void _set_cDbl(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId cStr
    static constexpr const int cStr = 25;
    // Get static field: static public System.Data.FunctionId cStr
    static ::System::Data::FunctionId _get_cStr();
    // Set static field: static public System.Data.FunctionId cStr
    static void _set_cStr(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Abs
    static constexpr const int Abs = 26;
    // Get static field: static public System.Data.FunctionId Abs
    static ::System::Data::FunctionId _get_Abs();
    // Set static field: static public System.Data.FunctionId Abs
    static void _set_Abs(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Acos
    static constexpr const int Acos = 27;
    // Get static field: static public System.Data.FunctionId Acos
    static ::System::Data::FunctionId _get_Acos();
    // Set static field: static public System.Data.FunctionId Acos
    static void _set_Acos(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId In
    static constexpr const int In = 28;
    // Get static field: static public System.Data.FunctionId In
    static ::System::Data::FunctionId _get_In();
    // Set static field: static public System.Data.FunctionId In
    static void _set_In(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Trim
    static constexpr const int Trim = 29;
    // Get static field: static public System.Data.FunctionId Trim
    static ::System::Data::FunctionId _get_Trim();
    // Set static field: static public System.Data.FunctionId Trim
    static void _set_Trim(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Sum
    static constexpr const int Sum = 30;
    // Get static field: static public System.Data.FunctionId Sum
    static ::System::Data::FunctionId _get_Sum();
    // Set static field: static public System.Data.FunctionId Sum
    static void _set_Sum(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Avg
    static constexpr const int Avg = 31;
    // Get static field: static public System.Data.FunctionId Avg
    static ::System::Data::FunctionId _get_Avg();
    // Set static field: static public System.Data.FunctionId Avg
    static void _set_Avg(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Min
    static constexpr const int Min = 32;
    // Get static field: static public System.Data.FunctionId Min
    static ::System::Data::FunctionId _get_Min();
    // Set static field: static public System.Data.FunctionId Min
    static void _set_Min(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Max
    static constexpr const int Max = 33;
    // Get static field: static public System.Data.FunctionId Max
    static ::System::Data::FunctionId _get_Max();
    // Set static field: static public System.Data.FunctionId Max
    static void _set_Max(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Count
    static constexpr const int Count = 34;
    // Get static field: static public System.Data.FunctionId Count
    static ::System::Data::FunctionId _get_Count();
    // Set static field: static public System.Data.FunctionId Count
    static void _set_Count(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId StDev
    static constexpr const int StDev = 35;
    // Get static field: static public System.Data.FunctionId StDev
    static ::System::Data::FunctionId _get_StDev();
    // Set static field: static public System.Data.FunctionId StDev
    static void _set_StDev(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId Var
    static constexpr const int Var = 37;
    // Get static field: static public System.Data.FunctionId Var
    static ::System::Data::FunctionId _get_Var();
    // Set static field: static public System.Data.FunctionId Var
    static void _set_Var(::System::Data::FunctionId value);
    // static field const value: static public System.Data.FunctionId DateTimeOffset
    static constexpr const int DateTimeOffset = 38;
    // Get static field: static public System.Data.FunctionId DateTimeOffset
    static ::System::Data::FunctionId _get_DateTimeOffset();
    // Set static field: static public System.Data.FunctionId DateTimeOffset
    static void _set_DateTimeOffset(::System::Data::FunctionId value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Data.FunctionId
  #pragma pack(pop)
  static check_size<sizeof(FunctionId), 0 + sizeof(int)> __System_Data_FunctionIdSizeCheck;
  static_assert(sizeof(FunctionId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
