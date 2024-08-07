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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: Pathfinding::Ionic::Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipEntry
  class ZipEntry;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipErrorEventArgs
  class ZipErrorEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::ZipErrorEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ZipErrorEventArgs*, "Pathfinding.Ionic.Zip", "ZipErrorEventArgs");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.ZipErrorEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class ZipErrorEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
    public:
    public:
    // private System.Exception _exc
    // Size: 0x8
    // Offset: 0x40
    ::System::Exception* exc;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Exception*
    constexpr operator ::System::Exception*() const noexcept {
      return exc;
    }
    // Get instance field reference: private System.Exception _exc
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn__exc();
    // static Pathfinding.Ionic.Zip.ZipErrorEventArgs Saving(System.String archiveName, Pathfinding.Ionic.Zip.ZipEntry entry, System.Exception exception)
    // Offset: 0x499DD7C
    static ::Pathfinding::Ionic::Zip::ZipErrorEventArgs* Saving(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipEntry* entry, ::System::Exception* exception);
    // private System.Void .ctor()
    // Offset: 0x499DD78
    // Implemented from: Pathfinding.Ionic.Zip.ZipProgressEventArgs
    // Base method: System.Void ZipProgressEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipErrorEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::ZipErrorEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipErrorEventArgs*, creationType>()));
    }
  }; // Pathfinding.Ionic.Zip.ZipErrorEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ZipErrorEventArgs), 64 + sizeof(::System::Exception*)> __Pathfinding_Ionic_Zip_ZipErrorEventArgsSizeCheck;
  static_assert(sizeof(ZipErrorEventArgs) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipErrorEventArgs::Saving
// Il2CppName: Saving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ZipErrorEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, ::System::Exception*)>(&Pathfinding::Ionic::Zip::ZipErrorEventArgs::Saving)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entry = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zip", "ZipEntry")->byval_arg;
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipErrorEventArgs*), "Saving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName, entry, exception});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipErrorEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
