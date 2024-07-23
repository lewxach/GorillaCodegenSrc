// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Including type: Cysharp.Text.Utf16ValueStringBuilder
#include "Cysharp/Text/Utf16ValueStringBuilder.hpp"
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
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: ZStringWriter
  class ZStringWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cysharp::Text::ZStringWriter);
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::ZStringWriter*, "Cysharp.Text", "ZStringWriter");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Cysharp.Text.ZStringWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class ZStringWriter : public ::System::IO::TextWriter {
    public:
    public:
    // private Cysharp.Text.Utf16ValueStringBuilder sb
    // Size: 0xD
    // Offset: 0x30
    ::Cysharp::Text::Utf16ValueStringBuilder sb;
    // Field size check
    static_assert(sizeof(::Cysharp::Text::Utf16ValueStringBuilder) == 0xD);
    // Padding between fields: sb and: isOpen
    char __padding0[0x3] = {};
    // private System.Boolean isOpen
    // Size: 0x1
    // Offset: 0x40
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOpen and: encoding
    char __padding1[0x7] = {};
    // private System.Text.UnicodeEncoding encoding
    // Size: 0x8
    // Offset: 0x48
    ::System::Text::UnicodeEncoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::UnicodeEncoding*) == 0x8);
    public:
    // Get instance field reference: private Cysharp.Text.Utf16ValueStringBuilder sb
    [[deprecated("Use field access instead!")]] ::Cysharp::Text::Utf16ValueStringBuilder& dyn_sb();
    // Get instance field reference: private System.Boolean isOpen
    [[deprecated("Use field access instead!")]] bool& dyn_isOpen();
    // Get instance field reference: private System.Text.UnicodeEncoding encoding
    [[deprecated("Use field access instead!")]] ::System::Text::UnicodeEncoding*& dyn_encoding();
    // public System.Void .ctor()
    // Offset: 0x5771214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZStringWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::ZStringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZStringWriter*, creationType>()));
    }
    // public System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x5771274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZStringWriter* New_ctor(::System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::ZStringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZStringWriter*, creationType>(formatProvider)));
    }
    // private System.Void AssertNotDisposed()
    // Offset: 0x5771484
    void AssertNotDisposed();
    // public override System.Void Close()
    // Offset: 0x5771340
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x5771350
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x5771388
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    ::System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x5771400
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x57714E0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x577163C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::StringW value);
    // public override System.Threading.Tasks.Task WriteAsync(System.Char value)
    // Offset: 0x57716AC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.Char value)
    ::System::Threading::Tasks::Task* WriteAsync(::Il2CppChar value);
    // public override System.Threading.Tasks.Task WriteAsync(System.String value)
    // Offset: 0x577175C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.String value)
    ::System::Threading::Tasks::Task* WriteAsync(::StringW value);
    // public override System.Threading.Tasks.Task WriteAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x577180C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.Char value)
    // Offset: 0x57718D4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.Char value)
    ::System::Threading::Tasks::Task* WriteLineAsync(::Il2CppChar value);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.String value)
    // Offset: 0x5771984
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.String value)
    ::System::Threading::Tasks::Task* WriteLineAsync(::StringW value);
    // public override System.Threading.Tasks.Task WriteLineAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x5771A34
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteLineAsync(System.Char[] buffer, System.Int32 index, System.Int32 count)
    ::System::Threading::Tasks::Task* WriteLineAsync(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.Boolean value)
    // Offset: 0x5771AFC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Boolean value)
    void Write(bool value);
    // public override System.Void Write(System.Decimal value)
    // Offset: 0x5771B5C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Decimal value)
    void Write(::System::Decimal value);
    // public override System.Threading.Tasks.Task FlushAsync()
    // Offset: 0x5771B90
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::FlushAsync()
    ::System::Threading::Tasks::Task* FlushAsync();
    // public override System.String ToString()
    // Offset: 0x5771C18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Cysharp.Text.ZStringWriter
  #pragma pack(pop)
  static check_size<sizeof(ZStringWriter), 72 + sizeof(::System::Text::UnicodeEncoding*)> __Cysharp_Text_ZStringWriterSizeCheck;
  static_assert(sizeof(ZStringWriter) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::AssertNotDisposed
// Il2CppName: AssertNotDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)()>(&Cysharp::Text::ZStringWriter::AssertNotDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "AssertNotDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)()>(&Cysharp::Text::ZStringWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(bool)>(&Cysharp::Text::ZStringWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (Cysharp::Text::ZStringWriter::*)()>(&Cysharp::Text::ZStringWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(::Il2CppChar)>(&Cysharp::Text::ZStringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&Cysharp::Text::ZStringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(::StringW)>(&Cysharp::Text::ZStringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::Il2CppChar)>(&Cysharp::Text::ZStringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::StringW)>(&Cysharp::Text::ZStringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&Cysharp::Text::ZStringWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::Il2CppChar)>(&Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::StringW)>(&Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::WriteLineAsync
// Il2CppName: WriteLineAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "WriteLineAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(bool)>(&Cysharp::Text::ZStringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cysharp::Text::ZStringWriter::*)(::System::Decimal)>(&Cysharp::Text::ZStringWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::FlushAsync
// Il2CppName: FlushAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Cysharp::Text::ZStringWriter::*)()>(&Cysharp::Text::ZStringWriter::FlushAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "FlushAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::ZStringWriter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Cysharp::Text::ZStringWriter::*)()>(&Cysharp::Text::ZStringWriter::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::ZStringWriter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};