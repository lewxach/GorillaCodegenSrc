// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zip.ZipProgressEventArgs
#include "Pathfinding/Ionic/Zip/ZipProgressEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipEntry
  class ZipEntry;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: SaveProgressEventArgs
  class SaveProgressEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::SaveProgressEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::SaveProgressEventArgs*, "Pathfinding.Ionic.Zip", "SaveProgressEventArgs");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.SaveProgressEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SaveProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
    public:
    public:
    // private System.Int32 _entriesSaved
    // Size: 0x4
    // Offset: 0x40
    int entriesSaved;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return entriesSaved;
    }
    // Get instance field reference: private System.Int32 _entriesSaved
    [[deprecated("Use field access instead!")]] int& dyn__entriesSaved();
    // System.Void .ctor(System.String archiveName, System.Boolean before, System.Int32 entriesTotal, System.Int32 entriesSaved, Pathfinding.Ionic.Zip.ZipEntry entry)
    // Offset: 0x499D92C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveProgressEventArgs* New_ctor(::StringW archiveName, bool before, int entriesTotal, int entriesSaved, ::Pathfinding::Ionic::Zip::ZipEntry* entry) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::SaveProgressEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveProgressEventArgs*, creationType>(archiveName, before, entriesTotal, entriesSaved, entry)));
    }
    // static Pathfinding.Ionic.Zip.SaveProgressEventArgs ByteUpdate(System.String archiveName, Pathfinding.Ionic.Zip.ZipEntry entry, System.Int64 bytesXferred, System.Int64 totalBytes)
    // Offset: 0x499D984
    static ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* ByteUpdate(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipEntry* entry, int64_t bytesXferred, int64_t totalBytes);
    // static Pathfinding.Ionic.Zip.SaveProgressEventArgs Started(System.String archiveName)
    // Offset: 0x499DA28
    static ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Started(::StringW archiveName);
    // static Pathfinding.Ionic.Zip.SaveProgressEventArgs Completed(System.String archiveName)
    // Offset: 0x499DA84
    static ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Completed(::StringW archiveName);
    // System.Void .ctor(System.String archiveName, Pathfinding.Ionic.Zip.ZipProgressEventType flavor)
    // Offset: 0x499D980
    // Implemented from: Pathfinding.Ionic.Zip.ZipProgressEventArgs
    // Base method: System.Void ZipProgressEventArgs::.ctor(System.String archiveName, Pathfinding.Ionic.Zip.ZipProgressEventType flavor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveProgressEventArgs* New_ctor(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType flavor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::SaveProgressEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveProgressEventArgs*, creationType>(archiveName, flavor)));
    }
  }; // Pathfinding.Ionic.Zip.SaveProgressEventArgs
  #pragma pack(pop)
  static check_size<sizeof(SaveProgressEventArgs), 64 + sizeof(int)> __Pathfinding_Ionic_Zip_SaveProgressEventArgsSizeCheck;
  static_assert(sizeof(SaveProgressEventArgs) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SaveProgressEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SaveProgressEventArgs::ByteUpdate
// Il2CppName: ByteUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&Pathfinding::Ionic::Zip::SaveProgressEventArgs::ByteUpdate)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entry = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zip", "ZipEntry")->byval_arg;
    static auto* bytesXferred = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* totalBytes = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::SaveProgressEventArgs*), "ByteUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName, entry, bytesXferred, totalBytes});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SaveProgressEventArgs::Started
// Il2CppName: Started
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW)>(&Pathfinding::Ionic::Zip::SaveProgressEventArgs::Started)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::SaveProgressEventArgs*), "Started", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SaveProgressEventArgs::Completed
// Il2CppName: Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::SaveProgressEventArgs* (*)(::StringW)>(&Pathfinding::Ionic::Zip::SaveProgressEventArgs::Completed)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::SaveProgressEventArgs*), "Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SaveProgressEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
