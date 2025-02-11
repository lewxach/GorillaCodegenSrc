// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter*, "System.IO", "TextWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class TextWriter : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::IO::TextWriter::NullTextWriter
    class NullTextWriter;
    // Nested type: ::System::IO::TextWriter::SyncTextWriter
    class SyncTextWriter;
    // Nested type: ::System::IO::TextWriter::$$c
    class $$c;
    public:
    // protected System.Char[] CoreNewLine
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppChar> CoreNewLine;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.String CoreNewLineStr
    // Size: 0x8
    // Offset: 0x20
    ::StringW CoreNewLineStr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IFormatProvider _internalFormatProvider
    // Size: 0x8
    // Offset: 0x28
    ::System::IFormatProvider* internalFormatProvider;
    // Field size check
    static_assert(sizeof(::System::IFormatProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.TextWriter Null
    static ::System::IO::TextWriter* _get_Null();
    // Set static field: static public readonly System.IO.TextWriter Null
    static void _set_Null(::System::IO::TextWriter* value);
    // Get static field: static private readonly System.Char[] s_coreNewLine
    static ::ArrayW<::Il2CppChar> _get_s_coreNewLine();
    // Set static field: static private readonly System.Char[] s_coreNewLine
    static void _set_s_coreNewLine(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: protected System.Char[] CoreNewLine
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_CoreNewLine();
    // Get instance field reference: private System.String CoreNewLineStr
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CoreNewLineStr();
    // Get instance field reference: private System.IFormatProvider _internalFormatProvider
    [[deprecated("Use field access instead!")]] ::System::IFormatProvider*& dyn__internalFormatProvider();
    // protected System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x45A2E64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor(::System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>(formatProvider)));
    }
    // public System.IFormatProvider get_FormatProvider()
    // Offset: 0x45A8808
    ::System::IFormatProvider* get_FormatProvider();
    // public System.Void Close()
    // Offset: 0x45A8870
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x45A88DC
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x45A88E0
    void Dispose();
    // public System.Void Flush()
    // Offset: 0x45A894C
    void Flush();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Text::Encoding* get_Encoding();
    // public System.String get_NewLine()
    // Offset: 0x45A8950
    ::StringW get_NewLine();
    // public System.Void Write(System.Char value)
    // Offset: 0x45A8958
    void Write(::Il2CppChar value);
    // public System.Void Write(System.Char[] buffer)
    // Offset: 0x45A895C
    void Write(::ArrayW<::Il2CppChar> buffer);
    // public System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45A897C
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void Write(System.Boolean value)
    // Offset: 0x45A8B20
    void Write(bool value);
    // public System.Void Write(System.Decimal value)
    // Offset: 0x45A8B9C
    void Write(::System::Decimal value);
    // public System.Void Write(System.String value)
    // Offset: 0x45A8C14
    void Write(::StringW value);
    // public System.Void Write(System.String format, System.Object arg0)
    // Offset: 0x45A8C4C
    void Write(::StringW format, ::Il2CppObject* arg0);
    // public System.Void Write(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x45A8CA0
    void Write(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Void WriteLine()
    // Offset: 0x45A8D0C
    void WriteLine();
    // public System.Void WriteLine(System.Char value)
    // Offset: 0x45A8D20
    void WriteLine(::Il2CppChar value);
    // public System.Void WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45A8D50
    void WriteLine(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void WriteLine(System.String value)
    // Offset: 0x45A8D80
    void WriteLine(::StringW value);
    // public System.Void WriteLine(System.Object value)
    // Offset: 0x45A8DBC
    void WriteLine(::Il2CppObject* value);
    // public System.Void WriteLine(System.String format, System.Object arg0)
    // Offset: 0x45A8EDC
    void WriteLine(::StringW format, ::Il2CppObject* arg0);
    // public System.Void WriteLine(System.String format, params System.Object[] arg)
    // Offset: 0x45A8F30
    void WriteLine(::StringW format, ::ArrayW<::Il2CppObject*> arg);
    // public System.Threading.Tasks.Task WriteAsync(System.Char value)
    // Offset: 0x45A420C
    ::System::Threading::Tasks::Task* WriteAsync(::Il2CppChar value);
    // public System.Threading.Tasks.Task WriteAsync(System.String value)
    // Offset: 0x45A47BC
    ::System::Threading::Tasks::Task* WriteAsync(::StringW value);
    // public System.Threading.Tasks.Task WriteAsync(System.Char[] buffer)
    // Offset: 0x45A8F84
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<::Il2CppChar> buffer);
    // public System.Threading.Tasks.Task WriteAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45A4E64
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Threading.Tasks.Task WriteLineAsync(System.Char value)
    // Offset: 0x45A55DC
    ::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppChar value);
    // public System.Threading.Tasks.Task WriteLineAsync(System.String value)
    // Offset: 0x45A59F0
    ::System::Threading::Tasks::Task* WriteLineAsync(::StringW value);
    // public System.Threading.Tasks.Task WriteLineAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45A5F30
    ::System::Threading::Tasks::Task* WriteLineAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Threading.Tasks.Task WriteLineAsync()
    // Offset: 0x45A542C
    ::System::Threading::Tasks::Task* WriteLineAsync();
    // public System.Threading.Tasks.Task FlushAsync()
    // Offset: 0x45A62D0
    ::System::Threading::Tasks::Task* FlushAsync();
    // static public System.IO.TextWriter Synchronized(System.IO.TextWriter writer)
    // Offset: 0x45A9040
    static ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* writer);
    // static private System.Void .cctor()
    // Offset: 0x45A9178
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x45A3648
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>()));
    }
  }; // System.IO.TextWriter
  #pragma pack(pop)
  static check_size<sizeof(TextWriter), 40 + sizeof(::System::IFormatProvider*)> __System_IO_TextWriterSizeCheck;
  static_assert(sizeof(TextWriter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextWriter::get_FormatProvider
// Il2CppName: get_FormatProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::get_FormatProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_FormatProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(bool)>(&System::IO::TextWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::get_NewLine
// Il2CppName: get_NewLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::TextWriter::*)()>(&System::IO::TextWriter::get_NewLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_NewLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(bool)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::System::Decimal)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::Il2CppObject*)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::TextWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::FlushAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Synchronized
// Il2CppName: Synchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)(::System::IO::TextWriter*)>(&System::IO::TextWriter::Synchronized)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Synchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::TextWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
