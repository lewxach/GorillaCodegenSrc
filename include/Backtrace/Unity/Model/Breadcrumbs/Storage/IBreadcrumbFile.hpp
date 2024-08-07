// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Breadcrumbs.Storage
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
  // Forward declaring type: IBreadcrumbFile
  class IBreadcrumbFile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*, "Backtrace.Unity.Model.Breadcrumbs.Storage", "IBreadcrumbFile");
// Type namespace: Backtrace.Unity.Model.Breadcrumbs.Storage
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Breadcrumbs.Storage.IBreadcrumbFile
  // [TokenAttribute] Offset: FFFFFFFF
  class IBreadcrumbFile {
    public:
    // public System.Boolean Exists()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Exists();
    // public System.Void Delete()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Delete();
    // public System.IO.Stream GetCreateStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::Stream* GetCreateStream();
    // public System.IO.Stream GetIOStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::Stream* GetIOStream();
    // public System.IO.Stream GetWriteStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::Stream* GetWriteStream();
  }; // Backtrace.Unity.Model.Breadcrumbs.Storage.IBreadcrumbFile
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Exists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetCreateStream
// Il2CppName: GetCreateStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetCreateStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*), "GetCreateStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetIOStream
// Il2CppName: GetIOStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetIOStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*), "GetIOStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetWriteStream
// Il2CppName: GetWriteStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetWriteStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*), "GetWriteStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
