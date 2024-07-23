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
  // Forward declaring type: _32
  struct _32;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::_32, "Fusion", "_32");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion._32
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct _32/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::Fusion::IFixedStorage*/ {
    public:
    // Nested type: ::Fusion::_32::$Data$e__FixedBuffer
    struct $Data$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion._32/<Data>e__FixedBuffer
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
    }; // Fusion._32/<Data>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(_32::$Data$e__FixedBuffer), 0 + sizeof(uint)> __Fusion__32_$Data$e__FixedBufferSizeCheck;
    static_assert(sizeof(_32::$Data$e__FixedBuffer) == 0x4);
    public:
    // Creating union for fields at offset: 0x0
    union {
      // public Fusion._32/<Data>e__FixedBuffer Data
      // Size: 0x4
      // Offset: 0x0
      ::Fusion::_32::$Data$e__FixedBuffer Data;
      // Field size check
      static_assert(sizeof(::Fusion::_32::$Data$e__FixedBuffer) == 0x4);
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
    // private System.UInt32 _data2
    // Size: 0x4
    // Offset: 0x8
    uint data2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data3
    // Size: 0x4
    // Offset: 0xC
    uint data3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data4
    // Size: 0x4
    // Offset: 0x10
    uint data4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data5
    // Size: 0x4
    // Offset: 0x14
    uint data5;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data6
    // Size: 0x4
    // Offset: 0x18
    uint data6;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data7
    // Size: 0x4
    // Offset: 0x1C
    uint data7;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data8
    // Size: 0x4
    // Offset: 0x20
    uint data8;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data9
    // Size: 0x4
    // Offset: 0x24
    uint data9;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data10
    // Size: 0x4
    // Offset: 0x28
    uint data10;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data11
    // Size: 0x4
    // Offset: 0x2C
    uint data11;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data12
    // Size: 0x4
    // Offset: 0x30
    uint data12;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data13
    // Size: 0x4
    // Offset: 0x34
    uint data13;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data14
    // Size: 0x4
    // Offset: 0x38
    uint data14;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data15
    // Size: 0x4
    // Offset: 0x3C
    uint data15;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data16
    // Size: 0x4
    // Offset: 0x40
    uint data16;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data17
    // Size: 0x4
    // Offset: 0x44
    uint data17;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data18
    // Size: 0x4
    // Offset: 0x48
    uint data18;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data19
    // Size: 0x4
    // Offset: 0x4C
    uint data19;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data20
    // Size: 0x4
    // Offset: 0x50
    uint data20;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data21
    // Size: 0x4
    // Offset: 0x54
    uint data21;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data22
    // Size: 0x4
    // Offset: 0x58
    uint data22;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data23
    // Size: 0x4
    // Offset: 0x5C
    uint data23;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data24
    // Size: 0x4
    // Offset: 0x60
    uint data24;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data25
    // Size: 0x4
    // Offset: 0x64
    uint data25;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data26
    // Size: 0x4
    // Offset: 0x68
    uint data26;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data27
    // Size: 0x4
    // Offset: 0x6C
    uint data27;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data28
    // Size: 0x4
    // Offset: 0x70
    uint data28;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data29
    // Size: 0x4
    // Offset: 0x74
    uint data29;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data30
    // Size: 0x4
    // Offset: 0x78
    uint data30;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _data31
    // Size: 0x4
    // Offset: 0x7C
    uint data31;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: _32
    constexpr _32(::Fusion::_32::$Data$e__FixedBuffer Data_ = {}, uint data1_ = {}, uint data2_ = {}, uint data3_ = {}, uint data4_ = {}, uint data5_ = {}, uint data6_ = {}, uint data7_ = {}, uint data8_ = {}, uint data9_ = {}, uint data10_ = {}, uint data11_ = {}, uint data12_ = {}, uint data13_ = {}, uint data14_ = {}, uint data15_ = {}, uint data16_ = {}, uint data17_ = {}, uint data18_ = {}, uint data19_ = {}, uint data20_ = {}, uint data21_ = {}, uint data22_ = {}, uint data23_ = {}, uint data24_ = {}, uint data25_ = {}, uint data26_ = {}, uint data27_ = {}, uint data28_ = {}, uint data29_ = {}, uint data30_ = {}, uint data31_ = {}) noexcept : Data{Data_}, data1{data1_}, data2{data2_}, data3{data3_}, data4{data4_}, data5{data5_}, data6{data6_}, data7{data7_}, data8{data8_}, data9{data9_}, data10{data10_}, data11{data11_}, data12{data12_}, data13{data13_}, data14{data14_}, data15{data15_}, data16{data16_}, data17{data17_}, data18{data18_}, data19{data19_}, data20{data20_}, data21{data21_}, data22{data22_}, data23{data23_}, data24{data24_}, data25{data25_}, data26{data26_}, data27{data27_}, data28{data28_}, data29{data29_}, data30{data30_}, data31{data31_} {}
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
    static constexpr const int SIZE = 128;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion._32/<Data>e__FixedBuffer Data
    [[deprecated("Use field access instead!")]] ::Fusion::_32::$Data$e__FixedBuffer& dyn_Data();
    // Get instance field reference: private System.UInt32 _data0
    [[deprecated("Use field access instead!")]] uint& dyn__data0();
    // Get instance field reference: private System.UInt32 _data1
    [[deprecated("Use field access instead!")]] uint& dyn__data1();
    // Get instance field reference: private System.UInt32 _data2
    [[deprecated("Use field access instead!")]] uint& dyn__data2();
    // Get instance field reference: private System.UInt32 _data3
    [[deprecated("Use field access instead!")]] uint& dyn__data3();
    // Get instance field reference: private System.UInt32 _data4
    [[deprecated("Use field access instead!")]] uint& dyn__data4();
    // Get instance field reference: private System.UInt32 _data5
    [[deprecated("Use field access instead!")]] uint& dyn__data5();
    // Get instance field reference: private System.UInt32 _data6
    [[deprecated("Use field access instead!")]] uint& dyn__data6();
    // Get instance field reference: private System.UInt32 _data7
    [[deprecated("Use field access instead!")]] uint& dyn__data7();
    // Get instance field reference: private System.UInt32 _data8
    [[deprecated("Use field access instead!")]] uint& dyn__data8();
    // Get instance field reference: private System.UInt32 _data9
    [[deprecated("Use field access instead!")]] uint& dyn__data9();
    // Get instance field reference: private System.UInt32 _data10
    [[deprecated("Use field access instead!")]] uint& dyn__data10();
    // Get instance field reference: private System.UInt32 _data11
    [[deprecated("Use field access instead!")]] uint& dyn__data11();
    // Get instance field reference: private System.UInt32 _data12
    [[deprecated("Use field access instead!")]] uint& dyn__data12();
    // Get instance field reference: private System.UInt32 _data13
    [[deprecated("Use field access instead!")]] uint& dyn__data13();
    // Get instance field reference: private System.UInt32 _data14
    [[deprecated("Use field access instead!")]] uint& dyn__data14();
    // Get instance field reference: private System.UInt32 _data15
    [[deprecated("Use field access instead!")]] uint& dyn__data15();
    // Get instance field reference: private System.UInt32 _data16
    [[deprecated("Use field access instead!")]] uint& dyn__data16();
    // Get instance field reference: private System.UInt32 _data17
    [[deprecated("Use field access instead!")]] uint& dyn__data17();
    // Get instance field reference: private System.UInt32 _data18
    [[deprecated("Use field access instead!")]] uint& dyn__data18();
    // Get instance field reference: private System.UInt32 _data19
    [[deprecated("Use field access instead!")]] uint& dyn__data19();
    // Get instance field reference: private System.UInt32 _data20
    [[deprecated("Use field access instead!")]] uint& dyn__data20();
    // Get instance field reference: private System.UInt32 _data21
    [[deprecated("Use field access instead!")]] uint& dyn__data21();
    // Get instance field reference: private System.UInt32 _data22
    [[deprecated("Use field access instead!")]] uint& dyn__data22();
    // Get instance field reference: private System.UInt32 _data23
    [[deprecated("Use field access instead!")]] uint& dyn__data23();
    // Get instance field reference: private System.UInt32 _data24
    [[deprecated("Use field access instead!")]] uint& dyn__data24();
    // Get instance field reference: private System.UInt32 _data25
    [[deprecated("Use field access instead!")]] uint& dyn__data25();
    // Get instance field reference: private System.UInt32 _data26
    [[deprecated("Use field access instead!")]] uint& dyn__data26();
    // Get instance field reference: private System.UInt32 _data27
    [[deprecated("Use field access instead!")]] uint& dyn__data27();
    // Get instance field reference: private System.UInt32 _data28
    [[deprecated("Use field access instead!")]] uint& dyn__data28();
    // Get instance field reference: private System.UInt32 _data29
    [[deprecated("Use field access instead!")]] uint& dyn__data29();
    // Get instance field reference: private System.UInt32 _data30
    [[deprecated("Use field access instead!")]] uint& dyn__data30();
    // Get instance field reference: private System.UInt32 _data31
    [[deprecated("Use field access instead!")]] uint& dyn__data31();
  }; // Fusion._32
  #pragma pack(pop)
  static check_size<sizeof(_32), 124 + sizeof(uint)> __Fusion__32SizeCheck;
  static_assert(sizeof(_32) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::_32::$Data$e__FixedBuffer, "Fusion", "_32/<Data>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"