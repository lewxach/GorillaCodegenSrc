// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Timers
namespace System::Timers {
  // Forward declaring type: ElapsedEventArgs
  class ElapsedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Timers::ElapsedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Timers::ElapsedEventArgs*, "System.Timers", "ElapsedEventArgs");
// Type namespace: System.Timers
namespace System::Timers {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Timers.ElapsedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class ElapsedEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.DateTime time
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime time;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Creating conversion operator: operator ::System::DateTime
    constexpr operator ::System::DateTime() const noexcept {
      return time;
    }
    // Get instance field reference: private System.DateTime time
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_time();
    // System.Void .ctor(System.DateTime time)
    // Offset: 0x4F6880C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElapsedEventArgs* New_ctor(::System::DateTime time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Timers::ElapsedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElapsedEventArgs*, creationType>(time)));
    }
  }; // System.Timers.ElapsedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ElapsedEventArgs), 16 + sizeof(::System::DateTime)> __System_Timers_ElapsedEventArgsSizeCheck;
  static_assert(sizeof(ElapsedEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Timers::ElapsedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
