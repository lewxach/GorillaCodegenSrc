// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MonoIOError
  struct MonoIOError;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
  // Forward declaring type: MonoFileType
  struct MonoFileType;
  // Forward declaring type: FileMode
  struct FileMode;
  // Forward declaring type: FileAccess
  struct FileAccess;
  // Forward declaring type: FileShare
  struct FileShare;
  // Forward declaring type: FileOptions
  struct FileOptions;
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: MonoIO
  class MonoIO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIO*, "System.IO", "MonoIO");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.MonoIO
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoIO : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.IntPtr InvalidHandle
    static ::System::IntPtr _get_InvalidHandle();
    // Set static field: static public readonly System.IntPtr InvalidHandle
    static void _set_InvalidHandle(::System::IntPtr value);
    // Get static field: static private System.Boolean dump_handles
    static bool _get_dump_handles();
    // Set static field: static private System.Boolean dump_handles
    static void _set_dump_handles(bool value);
    // static public System.Exception GetException(System.IO.MonoIOError error)
    // Offset: 0x45CA7F0
    static ::System::Exception* GetException(::System::IO::MonoIOError error);
    // static public System.Exception GetException(System.String path, System.IO.MonoIOError error)
    // Offset: 0x45CC5F0
    static ::System::Exception* GetException(::StringW path, ::System::IO::MonoIOError error);
    // static public System.String GetCurrentDirectory(out System.IO.MonoIOError error)
    // Offset: 0x45CA7EC
    static ::StringW GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error);
    // static private System.Boolean SetFileAttributes(System.Char* path, System.IO.FileAttributes attrs, out System.IO.MonoIOError error)
    // Offset: 0x45DD358
    static bool SetFileAttributes(::Il2CppChar* path, ::System::IO::FileAttributes attrs, ByRef<::System::IO::MonoIOError> error);
    // static public System.Boolean SetFileAttributes(System.String path, System.IO.FileAttributes attrs, out System.IO.MonoIOError error)
    // Offset: 0x45CC574
    static bool SetFileAttributes(::StringW path, ::System::IO::FileAttributes attrs, ByRef<::System::IO::MonoIOError> error);
    // static private System.IO.MonoFileType GetFileType(System.IntPtr handle, out System.IO.MonoIOError error)
    // Offset: 0x45DD35C
    static ::System::IO::MonoFileType GetFileType(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);
    // static public System.IO.MonoFileType GetFileType(System.Runtime.InteropServices.SafeHandle safeHandle, out System.IO.MonoIOError error)
    // Offset: 0x45DA0FC
    static ::System::IO::MonoFileType GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);
    // static private System.IntPtr Open(System.Char* filename, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.IO.FileOptions options, out System.IO.MonoIOError error)
    // Offset: 0x45DD360
    static ::System::IntPtr Open(::Il2CppChar* filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ByRef<::System::IO::MonoIOError> error);
    // static public System.IntPtr Open(System.String filename, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare share, System.IO.FileOptions options, out System.IO.MonoIOError error)
    // Offset: 0x45D9FE8
    static ::System::IntPtr Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options, ByRef<::System::IO::MonoIOError> error);
    // static private System.Boolean Cancel_internal(System.IntPtr handle, out System.IO.MonoIOError error)
    // Offset: 0x45DD364
    static bool Cancel_internal(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);
    // static System.Boolean Cancel(System.Runtime.InteropServices.SafeHandle safeHandle, out System.IO.MonoIOError error)
    // Offset: 0x45DD368
    static bool Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);
    // static public System.Boolean Close(System.IntPtr handle, out System.IO.MonoIOError error)
    // Offset: 0x45DD01C
    static bool Close(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);
    // static private System.Int32 Read(System.IntPtr handle, System.Byte[] dest, System.Int32 dest_offset, System.Int32 count, out System.IO.MonoIOError error)
    // Offset: 0x45DD4A0
    static int Read(::System::IntPtr handle, ::ArrayW<uint8_t> dest, int dest_offset, int count, ByRef<::System::IO::MonoIOError> error);
    // static public System.Int32 Read(System.Runtime.InteropServices.SafeHandle safeHandle, System.Byte[] dest, System.Int32 dest_offset, System.Int32 count, out System.IO.MonoIOError error)
    // Offset: 0x45DD0AC
    static int Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t> dest, int dest_offset, int count, ByRef<::System::IO::MonoIOError> error);
    // static private System.Int32 Write(System.IntPtr handle, in System.Byte[] src, System.Int32 src_offset, System.Int32 count, out System.IO.MonoIOError error)
    // Offset: 0x45DD4A4
    static int Write(::System::IntPtr handle, ByRef<::ArrayW<uint8_t>> src, int src_offset, int count, ByRef<::System::IO::MonoIOError> error);
    // static public System.Int32 Write(System.Runtime.InteropServices.SafeHandle safeHandle, System.Byte[] src, System.Int32 src_offset, System.Int32 count, out System.IO.MonoIOError error)
    // Offset: 0x45DBDC8
    static int Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t> src, int src_offset, int count, ByRef<::System::IO::MonoIOError> error);
    // static private System.Int64 Seek(System.IntPtr handle, System.Int64 offset, System.IO.SeekOrigin origin, out System.IO.MonoIOError error)
    // Offset: 0x45DD4A8
    static int64_t Seek(::System::IntPtr handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);
    // static public System.Int64 Seek(System.Runtime.InteropServices.SafeHandle safeHandle, System.Int64 offset, System.IO.SeekOrigin origin, out System.IO.MonoIOError error)
    // Offset: 0x45DA51C
    static int64_t Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error);
    // static private System.Int64 GetLength(System.IntPtr handle, out System.IO.MonoIOError error)
    // Offset: 0x45DD4AC
    static int64_t GetLength(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error);
    // static public System.Int64 GetLength(System.Runtime.InteropServices.SafeHandle safeHandle, out System.IO.MonoIOError error)
    // Offset: 0x45DA810
    static int64_t GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error);
    // static private System.Boolean SetLength(System.IntPtr handle, System.Int64 length, out System.IO.MonoIOError error)
    // Offset: 0x45DD4B0
    static bool SetLength(::System::IntPtr handle, int64_t length, ByRef<::System::IO::MonoIOError> error);
    // static public System.Boolean SetLength(System.Runtime.InteropServices.SafeHandle safeHandle, System.Int64 length, out System.IO.MonoIOError error)
    // Offset: 0x45DCA78
    static bool SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error);
    // static public System.IntPtr get_ConsoleOutput()
    // Offset: 0x45DD4B4
    static ::System::IntPtr get_ConsoleOutput();
    // static public System.IntPtr get_ConsoleInput()
    // Offset: 0x45DD4B8
    static ::System::IntPtr get_ConsoleInput();
    // static public System.IntPtr get_ConsoleError()
    // Offset: 0x45DD4BC
    static ::System::IntPtr get_ConsoleError();
    // static public System.Boolean CreatePipe(out System.IntPtr read_handle, out System.IntPtr write_handle, out System.IO.MonoIOError error)
    // Offset: 0x45DD4C0
    static bool CreatePipe(ByRef<::System::IntPtr> read_handle, ByRef<::System::IntPtr> write_handle, ByRef<::System::IO::MonoIOError> error);
    // static public System.Boolean DuplicateHandle(System.IntPtr source_process_handle, System.IntPtr source_handle, System.IntPtr target_process_handle, out System.IntPtr target_handle, System.Int32 access, System.Int32 inherit, System.Int32 options, out System.IO.MonoIOError error)
    // Offset: 0x45DD4C4
    static bool DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ByRef<::System::IntPtr> target_handle, int access, int inherit, int options, ByRef<::System::IO::MonoIOError> error);
    // static public System.Char get_VolumeSeparatorChar()
    // Offset: 0x45DD4C8
    static ::Il2CppChar get_VolumeSeparatorChar();
    // static public System.Char get_DirectorySeparatorChar()
    // Offset: 0x45DD4CC
    static ::Il2CppChar get_DirectorySeparatorChar();
    // static public System.Char get_AltDirectorySeparatorChar()
    // Offset: 0x45DD4D0
    static ::Il2CppChar get_AltDirectorySeparatorChar();
    // static public System.Char get_PathSeparator()
    // Offset: 0x45DD4D4
    static ::Il2CppChar get_PathSeparator();
    // static private System.Void DumpHandles()
    // Offset: 0x45DD354
    static void DumpHandles();
    // static public System.Boolean RemapPath(System.String path, out System.String newPath)
    // Offset: 0x45DD4D8
    static bool RemapPath(::StringW path, ByRef<::StringW> newPath);
    // static private System.Void .cctor()
    // Offset: 0x45DD4DC
    static void _cctor();
  }; // System.IO.MonoIO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::MonoIO::GetException
// Il2CppName: GetException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::IO::MonoIOError)>(&System::IO::MonoIO::GetException)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetException
// Il2CppName: GetException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, ::System::IO::MonoIOError)>(&System::IO::MonoIO::GetException)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetCurrentDirectory
// Il2CppName: GetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::GetCurrentDirectory)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::SetFileAttributes
// Il2CppName: SetFileAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, ::System::IO::FileAttributes, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::SetFileAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("System.IO", "FileAttributes")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "SetFileAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, attrs, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::SetFileAttributes
// Il2CppName: SetFileAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::IO::FileAttributes, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::SetFileAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("System.IO", "FileAttributes")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "SetFileAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, attrs, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetFileType
// Il2CppName: GetFileType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::GetFileType)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetFileType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetFileType
// Il2CppName: GetFileType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::GetFileType)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetFileType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Il2CppChar*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Open)> {
  static const MethodInfo* get() {
    static auto* filename = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* share = &::il2cpp_utils::GetClassFromName("System.IO", "FileShare")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.IO", "FileOptions")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename, mode, access, share, options, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Open)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* share = &::il2cpp_utils::GetClassFromName("System.IO", "FileShare")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.IO", "FileOptions")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename, mode, access, share, options, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Cancel_internal
// Il2CppName: Cancel_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Cancel_internal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Cancel_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Cancel)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Close)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::ArrayW<uint8_t>, int, int, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Read)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dest_offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, dest, dest_offset, count, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t>, int, int, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Read)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dest_offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, dest, dest_offset, count, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ByRef<::ArrayW<uint8_t>>, int, int, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Write)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* src_offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, src, src_offset, count, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t>, int, int, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Write)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* src_offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, src, src_offset, count, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Seek)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, offset, origin, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::Seek)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, offset, origin, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::GetLength)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::GetLength)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int64_t, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::SetLength)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, length, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::SetLength)> {
  static const MethodInfo* get() {
    static auto* safeHandle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeHandle, length, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_ConsoleOutput
// Il2CppName: get_ConsoleOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&System::IO::MonoIO::get_ConsoleOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_ConsoleOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_ConsoleInput
// Il2CppName: get_ConsoleInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&System::IO::MonoIO::get_ConsoleInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_ConsoleInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_ConsoleError
// Il2CppName: get_ConsoleError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&System::IO::MonoIO::get_ConsoleError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_ConsoleError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::CreatePipe
// Il2CppName: CreatePipe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::CreatePipe)> {
  static const MethodInfo* get() {
    static auto* read_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* write_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "CreatePipe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{read_handle, write_handle, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::DuplicateHandle
// Il2CppName: DuplicateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ByRef<::System::IntPtr>, int, int, int, ByRef<::System::IO::MonoIOError>)>(&System::IO::MonoIO::DuplicateHandle)> {
  static const MethodInfo* get() {
    static auto* source_process_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* source_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* target_process_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* target_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "DuplicateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_VolumeSeparatorChar
// Il2CppName: get_VolumeSeparatorChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)()>(&System::IO::MonoIO::get_VolumeSeparatorChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_VolumeSeparatorChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_DirectorySeparatorChar
// Il2CppName: get_DirectorySeparatorChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)()>(&System::IO::MonoIO::get_DirectorySeparatorChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_DirectorySeparatorChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_AltDirectorySeparatorChar
// Il2CppName: get_AltDirectorySeparatorChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)()>(&System::IO::MonoIO::get_AltDirectorySeparatorChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_AltDirectorySeparatorChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::get_PathSeparator
// Il2CppName: get_PathSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)()>(&System::IO::MonoIO::get_PathSeparator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "get_PathSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::DumpHandles
// Il2CppName: DumpHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::MonoIO::DumpHandles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "DumpHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::RemapPath
// Il2CppName: RemapPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&System::IO::MonoIO::RemapPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* newPath = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), "RemapPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, newPath});
  }
};
// Writing MetadataGetter for method: System::IO::MonoIO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::MonoIO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MonoIO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};