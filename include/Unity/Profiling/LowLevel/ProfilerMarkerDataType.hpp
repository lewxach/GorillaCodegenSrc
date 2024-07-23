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
// Type namespace: Unity.Profiling.LowLevel
namespace Unity::Profiling::LowLevel {
  // Forward declaring type: ProfilerMarkerDataType
  struct ProfilerMarkerDataType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::ProfilerMarkerDataType, "Unity.Profiling.LowLevel", "ProfilerMarkerDataType");
// Type namespace: Unity.Profiling.LowLevel
namespace Unity::Profiling::LowLevel {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Profiling.LowLevel.ProfilerMarkerDataType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ProfilerMarkerDataType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ProfilerMarkerDataType
    constexpr ProfilerMarkerDataType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType InstanceId
    static constexpr const uint8_t InstanceId = 1u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType InstanceId
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_InstanceId();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType InstanceId
    static void _set_InstanceId(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int32
    static constexpr const uint8_t Int32 = 2u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int32
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_Int32();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int32
    static void _set_Int32(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt32
    static constexpr const uint8_t UInt32 = 3u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt32
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_UInt32();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt32
    static void _set_UInt32(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int64
    static constexpr const uint8_t Int64 = 4u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int64
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_Int64();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Int64
    static void _set_Int64(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt64
    static constexpr const uint8_t UInt64 = 5u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt64
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_UInt64();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType UInt64
    static void _set_UInt64(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Float
    static constexpr const uint8_t Float = 6u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Float
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_Float();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Float
    static void _set_Float(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Double
    static constexpr const uint8_t Double = 7u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Double
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_Double();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Double
    static void _set_Double(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType String16
    static constexpr const uint8_t String16 = 9u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType String16
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_String16();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType String16
    static void _set_String16(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Blob8
    static constexpr const uint8_t Blob8 = 11u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Blob8
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_Blob8();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType Blob8
    static void _set_Blob8(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // static field const value: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType GfxResourceId
    static constexpr const uint8_t GfxResourceId = 12u;
    // Get static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType GfxResourceId
    static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType _get_GfxResourceId();
    // Set static field: static public Unity.Profiling.LowLevel.ProfilerMarkerDataType GfxResourceId
    static void _set_GfxResourceId(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Unity.Profiling.LowLevel.ProfilerMarkerDataType
  #pragma pack(pop)
  static check_size<sizeof(ProfilerMarkerDataType), 0 + sizeof(uint8_t)> __Unity_Profiling_LowLevel_ProfilerMarkerDataTypeSizeCheck;
  static_assert(sizeof(ProfilerMarkerDataType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"