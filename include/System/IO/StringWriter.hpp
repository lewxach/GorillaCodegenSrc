// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: StringWriter
  class StringWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::StringWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StringWriter*, "System.IO", "StringWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StringWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class StringWriter : public ::System::IO::TextWriter {
    public:
    public:
    // private System.Text.StringBuilder _sb
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x38
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Text.UnicodeEncoding m_encoding
    static ::System::Text::UnicodeEncoding* _get_m_encoding();
    // Set static field: static private System.Text.UnicodeEncoding m_encoding
    static void _set_m_encoding(::System::Text::UnicodeEncoding* value);
    // Get instance field reference: private System.Text.StringBuilder _sb
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn__sb();
    // Get instance field reference: private System.Boolean _isOpen
    [[deprecated("Use field access instead!")]] bool& dyn__isOpen();
    // public System.Void .ctor(System.Text.StringBuilder sb)
    // Offset: 0x45D83D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(::System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb)));
    }
    // public System.Void .ctor(System.Text.StringBuilder sb, System.IFormatProvider formatProvider)
    // Offset: 0x45D8274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb, formatProvider)));
    }
    // public System.Void .ctor()
    // Offset: 0x45D81E0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>()));
    }
    // public System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x45D8364
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor(System.IFormatProvider formatProvider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(::System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(formatProvider)));
    }
    // public override System.Void Close()
    // Offset: 0x45D8440
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x45D8450
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x45D8460
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    ::System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x45D8514
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45D853C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x45D86B0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::StringW value);
    // public override System.Threading.Tasks.Task WriteAsync(System.Char value)
    // Offset: 0x45D86E4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.Char value)
    ::System::Threading::Tasks::Task* WriteAsync(::Il2CppChar value);
    // public override System.Threading.Tasks.Task WriteAsync(System.String value)
    // Offset: 0x45D8794
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.String value)
    ::System::Threading::Tasks::Task* WriteAsync(::StringW value);
    // public override System.Threading.Tasks.Task WriteAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45D8844
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.Char value)
    // Offset: 0x45D890C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.Char value)
    ::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppChar value);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.String value)
    // Offset: 0x45D89BC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.String value)
    ::System::Threading::Tasks::Task* WriteLineAsync(::StringW value);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x45D8A6C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    ::System::Threading::Tasks::Task* WriteLineAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Threading.Tasks.Task FlushAsync()
    // Offset: 0x45D8B34
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::FlushAsync()
    ::System::Threading::Tasks::Task* FlushAsync();
    // public override System.String ToString()
    // Offset: 0x45D8BBC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.IO.StringWriter
  #pragma pack(pop)
  static check_size<sizeof(StringWriter), 56 + sizeof(bool)> __System_IO_StringWriterSizeCheck;
  static_assert(sizeof(StringWriter) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)()>(&System::IO::StringWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(bool)>(&System::IO::StringWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::StringWriter::*)()>(&System::IO::StringWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::Il2CppChar)>(&System::IO::StringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::StringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::StringW)>(&System::IO::StringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::Il2CppChar)>(&System::IO::StringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::StringW)>(&System::IO::StringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::StringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::Il2CppChar)>(&System::IO::StringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::StringW)>(&System::IO::StringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::StringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StringWriter::*)()>(&System::IO::StringWriter::FlushAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::StringWriter::*)()>(&System::IO::StringWriter::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
