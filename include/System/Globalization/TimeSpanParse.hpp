// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: TimeSpanStyles
  struct TimeSpanStyles;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: TimeSpanParse
  class TimeSpanParse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanParse
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSpanParse : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::TimeSpanParse::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles
    struct TimeSpanStandardStyles;
    // Nested type: ::System::Globalization::TimeSpanParse::TTT
    struct TTT;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanToken
    struct TimeSpanToken;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanTokenizer
    struct TimeSpanTokenizer;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanRawInfo
    struct TimeSpanRawInfo;
    // Nested type: ::System::Globalization::TimeSpanParse::TimeSpanResult
    struct TimeSpanResult;
    // Nested type: ::System::Globalization::TimeSpanParse::StringParser
    struct StringParser;
    // static System.Int64 Pow10(System.Int32 pow)
    // Offset: 0x45F244C
    static int64_t Pow10(int pow);
    // static private System.Boolean TryTimeToTicks(System.Boolean positive, System.Globalization.TimeSpanParse/TimeSpanToken days, System.Globalization.TimeSpanParse/TimeSpanToken hours, System.Globalization.TimeSpanParse/TimeSpanToken minutes, System.Globalization.TimeSpanParse/TimeSpanToken seconds, System.Globalization.TimeSpanParse/TimeSpanToken fraction, out System.Int64 result)
    // Offset: 0x45F287C
    static bool TryTimeToTicks(bool positive, ::System::Globalization::TimeSpanParse::TimeSpanToken days, ::System::Globalization::TimeSpanParse::TimeSpanToken hours, ::System::Globalization::TimeSpanParse::TimeSpanToken minutes, ::System::Globalization::TimeSpanParse::TimeSpanToken seconds, ::System::Globalization::TimeSpanParse::TimeSpanToken fraction, ByRef<int64_t> result);
    // static System.TimeSpan Parse(System.ReadOnlySpan`1<System.Char> input, System.IFormatProvider formatProvider)
    // Offset: 0x45F2A34
    static ::System::TimeSpan Parse(::System::ReadOnlySpan_1<::Il2CppChar> input, ::System::IFormatProvider* formatProvider);
    // static System.Boolean TryParseExact(System.ReadOnlySpan`1<System.Char> input, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider formatProvider, System.Globalization.TimeSpanStyles styles, out System.TimeSpan result)
    // Offset: 0x45F2C14
    static bool TryParseExact(::System::ReadOnlySpan_1<::Il2CppChar> input, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ByRef<::System::TimeSpan> result);
    // static private System.Boolean TryParseTimeSpan(System.ReadOnlySpan`1<System.Char> input, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, System.IFormatProvider formatProvider, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F2A8C
    static bool TryParseTimeSpan(::System::ReadOnlySpan_1<::Il2CppChar> input, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ::System::IFormatProvider* formatProvider, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminalState(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F3208
    static bool ProcessTerminalState(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_DHMSF(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F53FC
    static bool ProcessTerminal_DHMSF(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HMS_F_D(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F4844
    static bool ProcessTerminal_HMS_F_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HM_S_D(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F39EC
    static bool ProcessTerminal_HM_S_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_HM(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F36B0
    static bool ProcessTerminal_HM(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ProcessTerminal_D(ref System.Globalization.TimeSpanParse/TimeSpanRawInfo raw, System.Globalization.TimeSpanParse/TimeSpanStandardStyles style, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F333C
    static bool ProcessTerminal_D(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles style, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean TryParseExactTimeSpan(System.ReadOnlySpan`1<System.Char> input, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider formatProvider, System.Globalization.TimeSpanStyles styles, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F2CA8
    static bool TryParseExactTimeSpan(::System::ReadOnlySpan_1<::Il2CppChar> input, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean TryParseByFormat(System.ReadOnlySpan`1<System.Char> input, System.ReadOnlySpan`1<System.Char> format, System.Globalization.TimeSpanStyles styles, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F7460
    static bool TryParseByFormat(::System::ReadOnlySpan_1<::Il2CppChar> input, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::Globalization::TimeSpanStyles styles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
    // static private System.Boolean ParseExactDigits(ref System.Globalization.TimeSpanParse/TimeSpanTokenizer tokenizer, System.Int32 minDigitLength, out System.Int32 result)
    // Offset: 0x45F7B68
    static bool ParseExactDigits(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer> tokenizer, int minDigitLength, ByRef<int> result);
    // static private System.Boolean ParseExactDigits(ref System.Globalization.TimeSpanParse/TimeSpanTokenizer tokenizer, System.Int32 minDigitLength, System.Int32 maxDigitLength, out System.Int32 zeroes, out System.Int32 result)
    // Offset: 0x45F7B98
    static bool ParseExactDigits(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer> tokenizer, int minDigitLength, int maxDigitLength, ByRef<int> zeroes, ByRef<int> result);
    // static private System.Boolean ParseExactLiteral(ref System.Globalization.TimeSpanParse/TimeSpanTokenizer tokenizer, System.Text.StringBuilder enquotedString)
    // Offset: 0x45F7C5C
    static bool ParseExactLiteral(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer> tokenizer, ::System::Text::StringBuilder* enquotedString);
    // static private System.Boolean TryParseTimeSpanConstant(System.ReadOnlySpan`1<System.Char> input, ref System.Globalization.TimeSpanParse/TimeSpanResult result)
    // Offset: 0x45F7428
    static bool TryParseTimeSpanConstant(::System::ReadOnlySpan_1<::Il2CppChar> input, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult> result);
  }; // System.Globalization.TimeSpanParse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::Pow10
// Il2CppName: Pow10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int)>(&System::Globalization::TimeSpanParse::Pow10)> {
  static const MethodInfo* get() {
    static auto* pow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "Pow10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pow});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryTimeToTicks
// Il2CppName: TryTimeToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ::System::Globalization::TimeSpanParse::TimeSpanToken, ByRef<int64_t>)>(&System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  static const MethodInfo* get() {
    static auto* positive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* days = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* hours = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* minutes = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* fraction = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanToken")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryTimeToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positive, days, hours, minutes, seconds, fraction, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*)>(&System::Globalization::TimeSpanParse::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseExact
// Il2CppName: TryParseExact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ByRef<::System::TimeSpan>)>(&System::Globalization::TimeSpanParse::TryParseExact)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* styles = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseExact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, format, formatProvider, styles, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseTimeSpan
// Il2CppName: TryParseTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ::System::IFormatProvider*, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, style, formatProvider, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminalState
// Il2CppName: ProcessTerminalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF
// Il2CppName: ProcessTerminal_DHMSF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_DHMSF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D
// Il2CppName: ProcessTerminal_HMS_F_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HMS_F_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D
// Il2CppName: ProcessTerminal_HM_S_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HM_S_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_HM
// Il2CppName: ProcessTerminal_HM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_HM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ProcessTerminal_D
// Il2CppName: ProcessTerminal_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse::TimeSpanStandardStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  static const MethodInfo* get() {
    static auto* raw = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanRawInfo")->this_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanStandardStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ProcessTerminal_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raw, style, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseExactTimeSpan
// Il2CppName: TryParseExactTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TryParseExactTimeSpan)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* styles = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseExactTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, format, formatProvider, styles, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseByFormat
// Il2CppName: TryParseByFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Globalization::TimeSpanStyles, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TryParseByFormat)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* styles = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseByFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, format, styles, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ParseExactDigits
// Il2CppName: ParseExactDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer>, int, ByRef<int>)>(&System::Globalization::TimeSpanParse::ParseExactDigits)> {
  static const MethodInfo* get() {
    static auto* tokenizer = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanTokenizer")->this_arg;
    static auto* minDigitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ParseExactDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tokenizer, minDigitLength, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ParseExactDigits
// Il2CppName: ParseExactDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer>, int, int, ByRef<int>, ByRef<int>)>(&System::Globalization::TimeSpanParse::ParseExactDigits)> {
  static const MethodInfo* get() {
    static auto* tokenizer = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanTokenizer")->this_arg;
    static auto* minDigitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDigitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zeroes = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ParseExactDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tokenizer, minDigitLength, maxDigitLength, zeroes, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::ParseExactLiteral
// Il2CppName: ParseExactLiteral
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::TimeSpanParse::TimeSpanTokenizer>, ::System::Text::StringBuilder*)>(&System::Globalization::TimeSpanParse::ParseExactLiteral)> {
  static const MethodInfo* get() {
    static auto* tokenizer = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanTokenizer")->this_arg;
    static auto* enquotedString = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "ParseExactLiteral", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tokenizer, enquotedString});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TryParseTimeSpanConstant
// Il2CppName: TryParseTimeSpanConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ByRef<::System::Globalization::TimeSpanParse::TimeSpanResult>)>(&System::Globalization::TimeSpanParse::TryParseTimeSpanConstant)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse*), "TryParseTimeSpanConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
