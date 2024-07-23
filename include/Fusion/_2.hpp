// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: Fusion.IFixedStorage
#include "Fusion/IFixedStorage.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: _2
  struct _2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::_2, "Fusion", "_2");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion._2
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct _2/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::Fusion::IFixedStorage*/ {
    public:
    // Nested type: ::Fusion::_2::$Data$e__FixedBuffer
    struct $Data$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion._2/<Data>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $Data$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt32 FixedElementField
      // Size: 0x4
      // Offset: 0x0
      uint FixedElementField;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: $Data$e__FixedBuffer
      constexpr $Data$e__FixedBuffer(uint FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint
      constexpr operator uint() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.UInt32 FixedElementField
      [[deprecated("Use field access instead!")]] uint& dyn_FixedElementField();
    }; // Fusion._2/<Data>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(_2::$Data$e__FixedBuffer), 0 + sizeof(uint)> __Fusion__2_$Data$e__FixedBufferSizeCheck;
    static_assert(sizeof(_2::$Data$e__FixedBuffer) == 0x4);
    public:
    // Creating union for fields at offset: 0x0
    union {
      // public Fusion._2/<Data>e__FixedBuffer Data
      // Size: 0x4
      // Offset: 0x0
      ::Fusion::_2::$Data$e__FixedBuffer Data;
      // Field size check
      static_assert(sizeof(::Fusion::_2::$Data$e__FixedBuffer) == 0x4);
      // private System.UInt32 _data0
      // Size: 0x4
      // Offset: 0x0
      uint data0;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
    };
    // private System.UInt32 _data1
    // Size: 0x4
    // Offset: 0x4
    uint data1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: _2
    constexpr _2(::Fusion::_2::$Data$e__FixedBuffer Data_ = {}, uint data1_ = {}) noexcept : Data{Data_}, data1{data1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::IFixedStorage
    operator ::Fusion::IFixedStorage() noexcept {
      return *reinterpret_cast<::Fusion::IFixedStorage*>(this);
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 8;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion._2/<Data>e__FixedBuffer Data
    [[deprecated("Use field access instead!")]] ::Fusion::_2::$Data$e__FixedBuffer& dyn_Data();
    // Get instance field reference: private System.UInt32 _data0
    [[deprecated("Use field access instead!")]] uint& dyn__data0();
    // Get instance field reference: private System.UInt32 _data1
    [[deprecated("Use field access instead!")]] uint& dyn__data1();
  }; // Fusion._2
  #pragma pack(pop)
  static check_size<sizeof(_2), 4 + sizeof(uint)> __Fusion__2SizeCheck;
  static_assert(sizeof(_2) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::_2::$Data$e__FixedBuffer, "Fusion", "_2/<Data>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"