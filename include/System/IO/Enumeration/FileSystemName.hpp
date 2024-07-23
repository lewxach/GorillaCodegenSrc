// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.IO.Enumeration
namespace System::IO::Enumeration {
  // Forward declaring type: FileSystemName
  class FileSystemName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Enumeration::FileSystemName);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemName*, "System.IO.Enumeration", "FileSystemName");
// Type namespace: System.IO.Enumeration
namespace System::IO::Enumeration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Enumeration.FileSystemName
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemName : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Char[] s_wildcardChars
    static ::ArrayW<::Il2CppChar> _get_s_wildcardChars();
    // Set static field: static private readonly System.Char[] s_wildcardChars
    static void _set_s_wildcardChars(::ArrayW<::Il2CppChar> value);
    // Get static field: static private readonly System.Char[] s_simpleWildcardChars
    static ::ArrayW<::Il2CppChar> _get_s_simpleWildcardChars();
    // Set static field: static private readonly System.Char[] s_simpleWildcardChars
    static void _set_s_simpleWildcardChars(::ArrayW<::Il2CppChar> value);
    // static public System.String TranslateWin32Expression(System.String expression)
    // Offset: 0x45E24DC
    static ::StringW TranslateWin32Expression(::StringW expression);
    // static public System.Boolean MatchesWin32Expression(System.ReadOnlySpan`1<System.Char> expression, System.ReadOnlySpan`1<System.Char> name, System.Boolean ignoreCase)
    // Offset: 0x45E2B04
    static bool MatchesWin32Expression(::System::ReadOnlySpan_1<::Il2CppChar> expression, ::System::ReadOnlySpan_1<::Il2CppChar> name, bool ignoreCase);
    // static public System.Boolean MatchesSimpleExpression(System.ReadOnlySpan`1<System.Char> expression, System.ReadOnlySpan`1<System.Char> name, System.Boolean ignoreCase)
    // Offset: 0x45E2A7C
    static bool MatchesSimpleExpression(::System::ReadOnlySpan_1<::Il2CppChar> expression, ::System::ReadOnlySpan_1<::Il2CppChar> name, bool ignoreCase);
    // static private System.Boolean MatchPattern(System.ReadOnlySpan`1<System.Char> expression, System.ReadOnlySpan`1<System.Char> name, System.Boolean ignoreCase, System.Boolean useExtendedWildcards)
    // Offset: 0x45E3D3C
    static bool MatchPattern(::System::ReadOnlySpan_1<::Il2CppChar> expression, ::System::ReadOnlySpan_1<::Il2CppChar> name, bool ignoreCase, bool useExtendedWildcards);
    // static private System.Void .cctor()
    // Offset: 0x45E4474
    static void _cctor();
  }; // System.IO.Enumeration.FileSystemName
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemName::TranslateWin32Expression
// Il2CppName: TranslateWin32Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Enumeration::FileSystemName::TranslateWin32Expression)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemName*), "TranslateWin32Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression});
  }
};
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemName::MatchesWin32Expression
// Il2CppName: MatchesWin32Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, bool)>(&System::IO::Enumeration::FileSystemName::MatchesWin32Expression)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* name = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemName*), "MatchesWin32Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression, name, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemName::MatchesSimpleExpression
// Il2CppName: MatchesSimpleExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, bool)>(&System::IO::Enumeration::FileSystemName::MatchesSimpleExpression)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* name = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemName*), "MatchesSimpleExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression, name, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemName::MatchPattern
// Il2CppName: MatchPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<::Il2CppChar>, bool, bool)>(&System::IO::Enumeration::FileSystemName::MatchPattern)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* name = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useExtendedWildcards = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemName*), "MatchPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression, name, ignoreCase, useExtendedWildcards});
  }
};
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemName::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Enumeration::FileSystemName::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemName*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};