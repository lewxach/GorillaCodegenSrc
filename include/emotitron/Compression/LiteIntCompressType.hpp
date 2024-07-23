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
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Forward declaring type: LiteIntCompressType
  struct LiteIntCompressType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::emotitron::Compression::LiteIntCompressType, "emotitron.Compression", "LiteIntCompressType");
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: emotitron.Compression.LiteIntCompressType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LiteIntCompressType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LiteIntCompressType
    constexpr LiteIntCompressType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public emotitron.Compression.LiteIntCompressType PackSigned
    static constexpr const int PackSigned = 0;
    // Get static field: static public emotitron.Compression.LiteIntCompressType PackSigned
    static ::emotitron::Compression::LiteIntCompressType _get_PackSigned();
    // Set static field: static public emotitron.Compression.LiteIntCompressType PackSigned
    static void _set_PackSigned(::emotitron::Compression::LiteIntCompressType value);
    // static field const value: static public emotitron.Compression.LiteIntCompressType PackUnsigned
    static constexpr const int PackUnsigned = 1;
    // Get static field: static public emotitron.Compression.LiteIntCompressType PackUnsigned
    static ::emotitron::Compression::LiteIntCompressType _get_PackUnsigned();
    // Set static field: static public emotitron.Compression.LiteIntCompressType PackUnsigned
    static void _set_PackUnsigned(::emotitron::Compression::LiteIntCompressType value);
    // static field const value: static public emotitron.Compression.LiteIntCompressType Range
    static constexpr const int Range = 2;
    // Get static field: static public emotitron.Compression.LiteIntCompressType Range
    static ::emotitron::Compression::LiteIntCompressType _get_Range();
    // Set static field: static public emotitron.Compression.LiteIntCompressType Range
    static void _set_Range(::emotitron::Compression::LiteIntCompressType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // emotitron.Compression.LiteIntCompressType
  #pragma pack(pop)
  static check_size<sizeof(LiteIntCompressType), 0 + sizeof(int)> __emotitron_Compression_LiteIntCompressTypeSizeCheck;
  static_assert(sizeof(LiteIntCompressType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"