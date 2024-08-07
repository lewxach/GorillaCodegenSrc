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
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Forward declaring type: ProfilerRecorderOptions
  struct ProfilerRecorderOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorderOptions, "Unity.Profiling", "ProfilerRecorderOptions");
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Profiling.ProfilerRecorderOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ProfilerRecorderOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ProfilerRecorderOptions
    constexpr ProfilerRecorderOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions None
    static constexpr const int None = 0;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions None
    static ::Unity::Profiling::ProfilerRecorderOptions _get_None();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions None
    static void _set_None(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions StartImmediately
    static constexpr const int StartImmediately = 1;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions StartImmediately
    static ::Unity::Profiling::ProfilerRecorderOptions _get_StartImmediately();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions StartImmediately
    static void _set_StartImmediately(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions KeepAliveDuringDomainReload
    static constexpr const int KeepAliveDuringDomainReload = 2;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions KeepAliveDuringDomainReload
    static ::Unity::Profiling::ProfilerRecorderOptions _get_KeepAliveDuringDomainReload();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions KeepAliveDuringDomainReload
    static void _set_KeepAliveDuringDomainReload(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions CollectOnlyOnCurrentThread
    static constexpr const int CollectOnlyOnCurrentThread = 4;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions CollectOnlyOnCurrentThread
    static ::Unity::Profiling::ProfilerRecorderOptions _get_CollectOnlyOnCurrentThread();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions CollectOnlyOnCurrentThread
    static void _set_CollectOnlyOnCurrentThread(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions WrapAroundWhenCapacityReached
    static constexpr const int WrapAroundWhenCapacityReached = 8;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions WrapAroundWhenCapacityReached
    static ::Unity::Profiling::ProfilerRecorderOptions _get_WrapAroundWhenCapacityReached();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions WrapAroundWhenCapacityReached
    static void _set_WrapAroundWhenCapacityReached(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions SumAllSamplesInFrame
    static constexpr const int SumAllSamplesInFrame = 16;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions SumAllSamplesInFrame
    static ::Unity::Profiling::ProfilerRecorderOptions _get_SumAllSamplesInFrame();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions SumAllSamplesInFrame
    static void _set_SumAllSamplesInFrame(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions GpuRecorder
    static constexpr const int GpuRecorder = 64;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions GpuRecorder
    static ::Unity::Profiling::ProfilerRecorderOptions _get_GpuRecorder();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions GpuRecorder
    static void _set_GpuRecorder(::Unity::Profiling::ProfilerRecorderOptions value);
    // static field const value: static public Unity.Profiling.ProfilerRecorderOptions Default
    static constexpr const int Default = 24;
    // Get static field: static public Unity.Profiling.ProfilerRecorderOptions Default
    static ::Unity::Profiling::ProfilerRecorderOptions _get_Default();
    // Set static field: static public Unity.Profiling.ProfilerRecorderOptions Default
    static void _set_Default(::Unity::Profiling::ProfilerRecorderOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Profiling.ProfilerRecorderOptions
  #pragma pack(pop)
  static check_size<sizeof(ProfilerRecorderOptions), 0 + sizeof(int)> __Unity_Profiling_ProfilerRecorderOptionsSizeCheck;
  static_assert(sizeof(ProfilerRecorderOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
