// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Unity.IO.Archive
namespace Unity::IO::Archive {
  // Forward declaring type: ArchiveStatus
  struct ArchiveStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveStatus, "Unity.IO.Archive", "ArchiveStatus");
// Type namespace: Unity.IO.Archive
namespace Unity::IO::Archive {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.IO.Archive.ArchiveStatus
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  struct ArchiveStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ArchiveStatus
    constexpr ArchiveStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.IO.Archive.ArchiveStatus InProgress
    static constexpr const int InProgress = 0;
    // Get static field: static public Unity.IO.Archive.ArchiveStatus InProgress
    static ::Unity::IO::Archive::ArchiveStatus _get_InProgress();
    // Set static field: static public Unity.IO.Archive.ArchiveStatus InProgress
    static void _set_InProgress(::Unity::IO::Archive::ArchiveStatus value);
    // static field const value: static public Unity.IO.Archive.ArchiveStatus Complete
    static constexpr const int Complete = 1;
    // Get static field: static public Unity.IO.Archive.ArchiveStatus Complete
    static ::Unity::IO::Archive::ArchiveStatus _get_Complete();
    // Set static field: static public Unity.IO.Archive.ArchiveStatus Complete
    static void _set_Complete(::Unity::IO::Archive::ArchiveStatus value);
    // static field const value: static public Unity.IO.Archive.ArchiveStatus Failed
    static constexpr const int Failed = 2;
    // Get static field: static public Unity.IO.Archive.ArchiveStatus Failed
    static ::Unity::IO::Archive::ArchiveStatus _get_Failed();
    // Set static field: static public Unity.IO.Archive.ArchiveStatus Failed
    static void _set_Failed(::Unity::IO::Archive::ArchiveStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.IO.Archive.ArchiveStatus
  #pragma pack(pop)
  static check_size<sizeof(ArchiveStatus), 0 + sizeof(int)> __Unity_IO_Archive_ArchiveStatusSizeCheck;
  static_assert(sizeof(ArchiveStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"