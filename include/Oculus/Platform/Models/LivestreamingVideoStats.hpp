// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LivestreamingVideoStats
  class LivestreamingVideoStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingVideoStats*, "Oculus.Platform.Models", "LivestreamingVideoStats");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LivestreamingVideoStats
  // [TokenAttribute] Offset: FFFFFFFF
  class LivestreamingVideoStats : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 CommentCount
    // Size: 0x4
    // Offset: 0x10
    int CommentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 ReactionCount
    // Size: 0x4
    // Offset: 0x14
    int ReactionCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String TotalViews
    // Size: 0x8
    // Offset: 0x18
    ::StringW TotalViews;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 CommentCount
    [[deprecated("Use field access instead!")]] int& dyn_CommentCount();
    // Get instance field reference: public readonly System.Int32 ReactionCount
    [[deprecated("Use field access instead!")]] int& dyn_ReactionCount();
    // Get instance field reference: public readonly System.String TotalViews
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TotalViews();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x4888E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingVideoStats* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LivestreamingVideoStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingVideoStats*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingVideoStats
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingVideoStats), 24 + sizeof(::StringW)> __Oculus_Platform_Models_LivestreamingVideoStatsSizeCheck;
  static_assert(sizeof(LivestreamingVideoStats) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LivestreamingVideoStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
