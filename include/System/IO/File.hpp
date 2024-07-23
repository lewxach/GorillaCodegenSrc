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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: StreamWriter
  class StreamWriter;
  // Forward declaring type: FileStream
  class FileStream;
  // Forward declaring type: FileMode
  struct FileMode;
  // Forward declaring type: FileAccess
  struct FileAccess;
  // Forward declaring type: FileShare
  struct FileShare;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: File
  class File;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.File
  // [TokenAttribute] Offset: FFFFFFFF
  class File : public ::Il2CppObject {
    public:
    // static public System.IO.StreamReader OpenText(System.String path)
    // Offset: 0x45CB54C
    static ::System::IO::StreamReader* OpenText(::StringW path);
    // static public System.IO.StreamWriter CreateText(System.String path)
    // Offset: 0x45CB5F4
    static ::System::IO::StreamWriter* CreateText(::StringW path);
    // static public System.IO.StreamWriter AppendText(System.String path)
    // Offset: 0x45CB6A0
    static ::System::IO::StreamWriter* AppendText(::StringW path);
    // static public System.Void Copy(System.String sourceFileName, System.String destFileName)
    // Offset: 0x45CB74C
    static void Copy(::StringW sourceFileName, ::StringW destFileName);
    // static public System.Void Copy(System.String sourceFileName, System.String destFileName, System.Boolean overwrite)
    // Offset: 0x45CB754
    static void Copy(::StringW sourceFileName, ::StringW destFileName, bool overwrite);
    // static public System.IO.FileStream Create(System.String path)
    // Offset: 0x45CBD2C
    static ::System::IO::FileStream* Create(::StringW path);
    // static public System.IO.FileStream Create(System.String path, System.Int32 bufferSize)
    // Offset: 0x45CBD34
    static ::System::IO::FileStream* Create(::StringW path, int bufferSize);
    // static public System.Void Delete(System.String path)
    // Offset: 0x45CBDD8
    static void Delete(::StringW path);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x45CC02C
    static bool Exists(::StringW path);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode)
    // Offset: 0x45CC26C
    static ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share)
    // Offset: 0x45CC280
    static ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);
    // static public System.IO.FileAttributes GetAttributes(System.String path)
    // Offset: 0x45CC338
    static ::System::IO::FileAttributes GetAttributes(::StringW path);
    // static public System.Void SetAttributes(System.String path, System.IO.FileAttributes fileAttributes)
    // Offset: 0x45CC410
    static void SetAttributes(::StringW path, ::System::IO::FileAttributes fileAttributes);
    // static public System.IO.FileStream OpenRead(System.String path)
    // Offset: 0x45CCDB4
    static ::System::IO::FileStream* OpenRead(::StringW path);
    // static public System.IO.FileStream OpenWrite(System.String path)
    // Offset: 0x45CCE2C
    static ::System::IO::FileStream* OpenWrite(::StringW path);
    // static public System.String ReadAllText(System.String path)
    // Offset: 0x45CCEA4
    static ::StringW ReadAllText(::StringW path);
    // static private System.String InternalReadAllText(System.String path, System.Text.Encoding encoding)
    // Offset: 0x45CCF68
    static ::StringW InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding);
    // static public System.Void WriteAllText(System.String path, System.String contents)
    // Offset: 0x45CD11C
    static void WriteAllText(::StringW path, ::StringW contents);
    // static public System.Byte[] ReadAllBytes(System.String path)
    // Offset: 0x45CD35C
    static ::ArrayW<uint8_t> ReadAllBytes(::StringW path);
    // static private System.Byte[] ReadAllBytesUnknownLength(System.IO.FileStream fs)
    // Offset: 0x45CD624
    static ::ArrayW<uint8_t> ReadAllBytesUnknownLength(::System::IO::FileStream* fs);
    // static public System.Void WriteAllBytes(System.String path, System.Byte[] bytes)
    // Offset: 0x45CDA6C
    static void WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);
    // static private System.Void InternalWriteAllBytes(System.String path, System.Byte[] bytes)
    // Offset: 0x45CDB68
    static void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);
    // static public System.String[] ReadAllLines(System.String path)
    // Offset: 0x45CDD38
    static ::ArrayW<::StringW> ReadAllLines(::StringW path);
    // static private System.String[] InternalReadAllLines(System.String path, System.Text.Encoding encoding)
    // Offset: 0x45CDDFC
    static ::ArrayW<::StringW> InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding);
    // static public System.Void Move(System.String sourceFileName, System.String destFileName)
    // Offset: 0x45CE094
    static void Move(::StringW sourceFileName, ::StringW destFileName);
  }; // System.IO.File
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::File::OpenText
// Il2CppName: OpenText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (*)(::StringW)>(&System::IO::File::OpenText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&System::IO::File::CreateText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::AppendText
// Il2CppName: AppendText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&System::IO::File::AppendText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "AppendText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::Copy)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName});
  }
};
// Writing MetadataGetter for method: System::IO::File::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, bool)>(&System::IO::File::Copy)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* overwrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName, overwrite});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, int)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bufferSize});
  }
};
// Writing MetadataGetter for method: System::IO::File::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::File::Delete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::File::Exists)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode)>(&System::IO::File::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode});
  }
};
// Writing MetadataGetter for method: System::IO::File::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(&System::IO::File::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* share = &::il2cpp_utils::GetClassFromName("System.IO", "FileShare")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode, access, share});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&System::IO::File::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::SetAttributes
// Il2CppName: SetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::IO::FileAttributes)>(&System::IO::File::SetAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fileAttributes = &::il2cpp_utils::GetClassFromName("System.IO", "FileAttributes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "SetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, fileAttributes});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenRead
// Il2CppName: OpenRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::OpenRead)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenWrite
// Il2CppName: OpenWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::OpenWrite)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllText
// Il2CppName: ReadAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::File::ReadAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::InternalReadAllText
// Il2CppName: InternalReadAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&System::IO::File::InternalReadAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "InternalReadAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, encoding});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllText
// Il2CppName: WriteAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::WriteAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllBytes
// Il2CppName: ReadAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::IO::File::ReadAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllBytesUnknownLength
// Il2CppName: ReadAllBytesUnknownLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::FileStream*)>(&System::IO::File::ReadAllBytesUnknownLength)> {
  static const MethodInfo* get() {
    static auto* fs = &::il2cpp_utils::GetClassFromName("System.IO", "FileStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllBytesUnknownLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fs});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllBytes
// Il2CppName: WriteAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&System::IO::File::WriteAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bytes});
  }
};
// Writing MetadataGetter for method: System::IO::File::InternalWriteAllBytes
// Il2CppName: InternalWriteAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&System::IO::File::InternalWriteAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "InternalWriteAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bytes});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllLines
// Il2CppName: ReadAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::IO::File::ReadAllLines)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::InternalReadAllLines
// Il2CppName: InternalReadAllLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::System::Text::Encoding*)>(&System::IO::File::InternalReadAllLines)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "InternalReadAllLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, encoding});
  }
};
// Writing MetadataGetter for method: System::IO::File::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::Move)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName});
  }
};