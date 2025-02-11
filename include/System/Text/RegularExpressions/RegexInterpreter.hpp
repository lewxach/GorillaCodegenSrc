// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.RegexRunner
#include "System/Text/RegularExpressions/RegexRunner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexInterpreter
  class RegexInterpreter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexInterpreter*, "System.Text.RegularExpressions", "RegexInterpreter");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x9A
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexInterpreter
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexInterpreter : public ::System::Text::RegularExpressions::RegexRunner {
    public:
    public:
    // private readonly System.Text.RegularExpressions.RegexCode _code
    // Size: 0x8
    // Offset: 0x80
    ::System::Text::RegularExpressions::RegexCode* code;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexCode*) == 0x8);
    // private readonly System.Globalization.CultureInfo _culture
    // Size: 0x8
    // Offset: 0x88
    ::System::Globalization::CultureInfo* culture;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    // private System.Int32 _operator
    // Size: 0x4
    // Offset: 0x90
    int _operator;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _codepos
    // Size: 0x4
    // Offset: 0x94
    int codepos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _rightToLeft
    // Size: 0x1
    // Offset: 0x98
    bool rightToLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _caseInsensitive
    // Size: 0x1
    // Offset: 0x99
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Text.RegularExpressions.RegexCode _code
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexCode*& dyn__code();
    // Get instance field reference: private readonly System.Globalization.CultureInfo _culture
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn__culture();
    // Get instance field reference: private System.Int32 _operator
    [[deprecated("Use field access instead!")]] int& dyn__operator();
    // Get instance field reference: private System.Int32 _codepos
    [[deprecated("Use field access instead!")]] int& dyn__codepos();
    // Get instance field reference: private System.Boolean _rightToLeft
    [[deprecated("Use field access instead!")]] bool& dyn__rightToLeft();
    // Get instance field reference: private System.Boolean _caseInsensitive
    [[deprecated("Use field access instead!")]] bool& dyn__caseInsensitive();
    // public System.Void .ctor(System.Text.RegularExpressions.RegexCode code, System.Globalization.CultureInfo culture)
    // Offset: 0x4F794E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexInterpreter* New_ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexInterpreter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexInterpreter*, creationType>(code, culture)));
    }
    // private System.Void Advance(System.Int32 i)
    // Offset: 0x4F79550
    void Advance(int i);
    // private System.Void Goto(System.Int32 newpos)
    // Offset: 0x4F795D4
    void Goto(int newpos);
    // private System.Void Textto(System.Int32 newpos)
    // Offset: 0x4F79694
    void Textto(int newpos);
    // private System.Void Trackto(System.Int32 newpos)
    // Offset: 0x4F7969C
    void Trackto(int newpos);
    // private System.Int32 Textstart()
    // Offset: 0x4F796C0
    int Textstart();
    // private System.Int32 Textpos()
    // Offset: 0x4F796C8
    int Textpos();
    // private System.Int32 Trackpos()
    // Offset: 0x4F796D0
    int Trackpos();
    // private System.Void TrackPush()
    // Offset: 0x4F796F4
    void TrackPush();
    // private System.Void TrackPush(System.Int32 I1)
    // Offset: 0x4F79734
    void TrackPush(int I1);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x4F79790
    void TrackPush(int I1, int I2);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2, System.Int32 I3)
    // Offset: 0x4F79808
    void TrackPush(int I1, int I2, int I3);
    // private System.Void TrackPush2(System.Int32 I1)
    // Offset: 0x4F7989C
    void TrackPush2(int I1);
    // private System.Void TrackPush2(System.Int32 I1, System.Int32 I2)
    // Offset: 0x4F798FC
    void TrackPush2(int I1, int I2);
    // private System.Void Backtrack()
    // Offset: 0x4F79978
    void Backtrack();
    // private System.Void SetOperator(System.Int32 op)
    // Offset: 0x4F795B4
    void SetOperator(int op);
    // private System.Void TrackPop()
    // Offset: 0x4F79A6C
    void TrackPop();
    // private System.Void TrackPop(System.Int32 framesize)
    // Offset: 0x4F79A7C
    void TrackPop(int framesize);
    // private System.Int32 TrackPeek()
    // Offset: 0x4F79A8C
    int TrackPeek();
    // private System.Int32 TrackPeek(System.Int32 i)
    // Offset: 0x4F79AC4
    int TrackPeek(int i);
    // private System.Void StackPush(System.Int32 I1)
    // Offset: 0x4F79B00
    void StackPush(int I1);
    // private System.Void StackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x4F79B3C
    void StackPush(int I1, int I2);
    // private System.Void StackPop()
    // Offset: 0x4F79B94
    void StackPop();
    // private System.Void StackPop(System.Int32 framesize)
    // Offset: 0x4F79BA4
    void StackPop(int framesize);
    // private System.Int32 StackPeek()
    // Offset: 0x4F79BB4
    int StackPeek();
    // private System.Int32 StackPeek(System.Int32 i)
    // Offset: 0x4F79BEC
    int StackPeek(int i);
    // private System.Int32 Operator()
    // Offset: 0x4F79C28
    int Operator();
    // private System.Int32 Operand(System.Int32 i)
    // Offset: 0x4F79C30
    int Operand(int i);
    // private System.Int32 Leftchars()
    // Offset: 0x4F79C74
    int Leftchars();
    // private System.Int32 Rightchars()
    // Offset: 0x4F79C84
    int Rightchars();
    // private System.Int32 Bump()
    // Offset: 0x4F79C94
    int Bump();
    // private System.Int32 Forwardchars()
    // Offset: 0x4F79CA8
    int Forwardchars();
    // private System.Char Forwardcharnext()
    // Offset: 0x4F79CD4
    ::Il2CppChar Forwardcharnext();
    // private System.Boolean Stringmatch(System.String str)
    // Offset: 0x4F79D64
    bool Stringmatch(::StringW str);
    // private System.Boolean Refmatch(System.Int32 index, System.Int32 len)
    // Offset: 0x4F79ED0
    bool Refmatch(int index, int len);
    // private System.Void Backwardnext()
    // Offset: 0x4F7A06C
    void Backwardnext();
    // private System.Char CharAt(System.Int32 j)
    // Offset: 0x4F7A09C
    ::Il2CppChar CharAt(int j);
    // protected override System.Void InitTrackCount()
    // Offset: 0x4F79530
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::InitTrackCount()
    void InitTrackCount();
    // protected override System.Boolean FindFirstChar()
    // Offset: 0x4F7A0B8
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Boolean RegexRunner::FindFirstChar()
    bool FindFirstChar();
    // protected override System.Void Go()
    // Offset: 0x4F7A418
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::Go()
    void Go();
  }; // System.Text.RegularExpressions.RegexInterpreter
  #pragma pack(pop)
  static check_size<sizeof(RegexInterpreter), 153 + sizeof(bool)> __System_Text_RegularExpressions_RegexInterpreterSizeCheck;
  static_assert(sizeof(RegexInterpreter) == 0x9A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Advance
// Il2CppName: Advance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::Advance)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Advance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Goto
// Il2CppName: Goto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::Goto)> {
  static const MethodInfo* get() {
    static auto* newpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Goto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Textto
// Il2CppName: Textto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::Textto)> {
  static const MethodInfo* get() {
    static auto* newpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Textto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Trackto
// Il2CppName: Trackto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::Trackto)> {
  static const MethodInfo* get() {
    static auto* newpos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Trackto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newpos});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Textstart
// Il2CppName: Textstart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Textstart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Textstart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Textpos
// Il2CppName: Textpos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Textpos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Textpos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Trackpos
// Il2CppName: Trackpos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Trackpos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Trackpos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush
// Il2CppName: TrackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush
// Il2CppName: TrackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush
// Il2CppName: TrackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int, int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* I2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1, I2});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush
// Il2CppName: TrackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int, int, int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* I2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* I3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1, I2, I3});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush2
// Il2CppName: TrackPush2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush2)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPush2
// Il2CppName: TrackPush2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int, int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPush2)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* I2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPush2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1, I2});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Backtrack
// Il2CppName: Backtrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Backtrack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Backtrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::SetOperator
// Il2CppName: SetOperator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::SetOperator)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "SetOperator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPop
// Il2CppName: TrackPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::TrackPop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPop
// Il2CppName: TrackPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPop)> {
  static const MethodInfo* get() {
    static auto* framesize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{framesize});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPeek
// Il2CppName: TrackPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::TrackPeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::TrackPeek
// Il2CppName: TrackPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::TrackPeek)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "TrackPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPush
// Il2CppName: StackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::StackPush)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPush
// Il2CppName: StackPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int, int)>(&System::Text::RegularExpressions::RegexInterpreter::StackPush)> {
  static const MethodInfo* get() {
    static auto* I1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* I2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{I1, I2});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPop
// Il2CppName: StackPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::StackPop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPop
// Il2CppName: StackPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::StackPop)> {
  static const MethodInfo* get() {
    static auto* framesize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{framesize});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPeek
// Il2CppName: StackPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::StackPeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::StackPeek
// Il2CppName: StackPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::StackPeek)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "StackPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Operator
// Il2CppName: Operator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Operator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Operator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Operand
// Il2CppName: Operand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::Operand)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Operand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Leftchars
// Il2CppName: Leftchars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Leftchars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Leftchars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Rightchars
// Il2CppName: Rightchars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Rightchars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Rightchars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Bump
// Il2CppName: Bump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Bump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Bump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Forwardchars
// Il2CppName: Forwardchars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Forwardchars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Forwardchars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Forwardcharnext
// Il2CppName: Forwardcharnext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Forwardcharnext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Forwardcharnext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Stringmatch
// Il2CppName: Stringmatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexInterpreter::*)(::StringW)>(&System::Text::RegularExpressions::RegexInterpreter::Stringmatch)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Stringmatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Refmatch
// Il2CppName: Refmatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexInterpreter::*)(int, int)>(&System::Text::RegularExpressions::RegexInterpreter::Refmatch)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Refmatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, len});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Backwardnext
// Il2CppName: Backwardnext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Backwardnext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Backwardnext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::CharAt
// Il2CppName: CharAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::RegularExpressions::RegexInterpreter::*)(int)>(&System::Text::RegularExpressions::RegexInterpreter::CharAt)> {
  static const MethodInfo* get() {
    static auto* j = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "CharAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{j});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::InitTrackCount
// Il2CppName: InitTrackCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::InitTrackCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "InitTrackCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::FindFirstChar
// Il2CppName: FindFirstChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::FindFirstChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "FindFirstChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexInterpreter::Go
// Il2CppName: Go
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexInterpreter::*)()>(&System::Text::RegularExpressions::RegexInterpreter::Go)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexInterpreter*), "Go", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
