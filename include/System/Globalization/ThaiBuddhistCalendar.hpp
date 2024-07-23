// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendarHelper
  class GregorianCalendarHelper;
  // Forward declaring type: EraInfo
  class EraInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: ThaiBuddhistCalendar
  class ThaiBuddhistCalendar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::ThaiBuddhistCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::ThaiBuddhistCalendar*, "System.Globalization", "ThaiBuddhistCalendar");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.ThaiBuddhistCalendar
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class ThaiBuddhistCalendar : public ::System::Globalization::Calendar {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    public:
    // System.Globalization.GregorianCalendarHelper helper
    // Size: 0x8
    // Offset: 0x20
    ::System::Globalization::GregorianCalendarHelper* helper;
    // Field size check
    static_assert(sizeof(::System::Globalization::GregorianCalendarHelper*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Globalization::GregorianCalendarHelper*
    constexpr operator ::System::Globalization::GregorianCalendarHelper*() const noexcept {
      return helper;
    }
    // Get static field: static System.Globalization.EraInfo[] thaiBuddhistEraInfo
    static ::ArrayW<::System::Globalization::EraInfo*> _get_thaiBuddhistEraInfo();
    // Set static field: static System.Globalization.EraInfo[] thaiBuddhistEraInfo
    static void _set_thaiBuddhistEraInfo(::ArrayW<::System::Globalization::EraInfo*> value);
    // Get instance field reference: System.Globalization.GregorianCalendarHelper helper
    [[deprecated("Use field access instead!")]] ::System::Globalization::GregorianCalendarHelper*& dyn_helper();
    // static private System.Void .cctor()
    // Offset: 0x4604750
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x460424C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    ::System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x46042A4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    ::System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x46042FC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThaiBuddhistCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::ThaiBuddhistCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThaiBuddhistCalendar*, creationType>()));
    }
    // override System.Int32 get_ID()
    // Offset: 0x46043A8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x46043B0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetDaysInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x46043C8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInYear(System.Int32 year, System.Int32 era)
    int GetDaysInYear(int year, int era);
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x46043E0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(::System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x4604428
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x4604440
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x4604464
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(::System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x460447C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(::System::DateTime time);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x46044C4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(::System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x46044DC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x46044F4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    ::System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // public override System.Int32[] get_Eras()
    // Offset: 0x4604514
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::ArrayW<int> get_Eras();
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x460452C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
    // public override System.Void set_TwoDigitYearMax(System.Int32 value)
    // Offset: 0x4604570
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::set_TwoDigitYearMax(System.Int32 value)
    void set_TwoDigitYearMax(int value);
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x46046A8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
  }; // System.Globalization.ThaiBuddhistCalendar
  #pragma pack(pop)
  static check_size<sizeof(ThaiBuddhistCalendar), 32 + sizeof(::System::Globalization::GregorianCalendarHelper*)> __System_Globalization_ThaiBuddhistCalendarSizeCheck;
  static_assert(sizeof(ThaiBuddhistCalendar) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::ThaiBuddhistCalendar::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::get_MinSupportedDateTime
// Il2CppName: get_MinSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::ThaiBuddhistCalendar::*)()>(&System::Globalization::ThaiBuddhistCalendar::get_MinSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "get_MinSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::get_MaxSupportedDateTime
// Il2CppName: get_MaxSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::ThaiBuddhistCalendar::*)()>(&System::Globalization::ThaiBuddhistCalendar::get_MaxSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "get_MaxSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)()>(&System::Globalization::ThaiBuddhistCalendar::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(int, int, int)>(&System::Globalization::ThaiBuddhistCalendar::GetDaysInMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetDaysInYear
// Il2CppName: GetDaysInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(int, int)>(&System::Globalization::ThaiBuddhistCalendar::GetDaysInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetDaysInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&System::Globalization::ThaiBuddhistCalendar::GetDayOfMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&System::Globalization::ThaiBuddhistCalendar::GetDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(int, int)>(&System::Globalization::ThaiBuddhistCalendar::GetMonthsInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&System::Globalization::ThaiBuddhistCalendar::GetEra)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&System::Globalization::ThaiBuddhistCalendar::GetMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&System::Globalization::ThaiBuddhistCalendar::GetYear)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::ThaiBuddhistCalendar::*)(int, int)>(&System::Globalization::ThaiBuddhistCalendar::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Globalization::ThaiBuddhistCalendar::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::ThaiBuddhistCalendar::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (System::Globalization::ThaiBuddhistCalendar::*)()>(&System::Globalization::ThaiBuddhistCalendar::get_Eras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::get_TwoDigitYearMax
// Il2CppName: get_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)()>(&System::Globalization::ThaiBuddhistCalendar::get_TwoDigitYearMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "get_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::set_TwoDigitYearMax
// Il2CppName: set_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::ThaiBuddhistCalendar::*)(int)>(&System::Globalization::ThaiBuddhistCalendar::set_TwoDigitYearMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "set_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Globalization::ThaiBuddhistCalendar::ToFourDigitYear
// Il2CppName: ToFourDigitYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::ThaiBuddhistCalendar::*)(int)>(&System::Globalization::ThaiBuddhistCalendar::ToFourDigitYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::ThaiBuddhistCalendar*), "ToFourDigitYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year});
  }
};