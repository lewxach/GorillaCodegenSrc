// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation.AixStructs
namespace System::Net::NetworkInformation::AixStructs {
  // Forward declaring type: ifreq_mtu
  struct ifreq_mtu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_mtu, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu");
// Type namespace: System.Net.NetworkInformation.AixStructs
namespace System::Net::NetworkInformation::AixStructs {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.AixStructs.ifreq_mtu
  // [TokenAttribute] Offset: FFFFFFFF
  struct ifreq_mtu/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer
    struct $ifr_name$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Net.NetworkInformation.AixStructs.ifreq_mtu/<ifr_name>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $ifr_name$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $ifr_name$e__FixedBuffer
      constexpr $ifr_name$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // System.Net.NetworkInformation.AixStructs.ifreq_mtu/<ifr_name>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(ifreq_mtu::$ifr_name$e__FixedBuffer), 0 + sizeof(uint8_t)> __System_Net_NetworkInformation_AixStructs_ifreq_mtu_$ifr_name$e__FixedBufferSizeCheck;
    static_assert(sizeof(ifreq_mtu::$ifr_name$e__FixedBuffer) == 0x1);
    public:
    // public System.Net.NetworkInformation.AixStructs.ifreq_mtu/<ifr_name>e__FixedBuffer ifr_name
    // Size: 0x1
    // Offset: 0x0
    ::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer ifr_name;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer) == 0x1);
    // Padding between fields: ifr_name and: ifru_mtu
    char __padding0[0xF] = {};
    // public System.Int32 ifru_mtu
    // Size: 0x4
    // Offset: 0x10
    int ifru_mtu;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ifreq_mtu
    constexpr ifreq_mtu(::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer ifr_name_ = {}, int ifru_mtu_ = {}) noexcept : ifr_name{ifr_name_}, ifru_mtu{ifru_mtu_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Net.NetworkInformation.AixStructs.ifreq_mtu/<ifr_name>e__FixedBuffer ifr_name
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer& dyn_ifr_name();
    // Get instance field reference: public System.Int32 ifru_mtu
    [[deprecated("Use field access instead!")]] int& dyn_ifru_mtu();
  }; // System.Net.NetworkInformation.AixStructs.ifreq_mtu
  #pragma pack(pop)
  static check_size<sizeof(ifreq_mtu), 16 + sizeof(int)> __System_Net_NetworkInformation_AixStructs_ifreq_mtuSizeCheck;
  static_assert(sizeof(ifreq_mtu) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_mtu::$ifr_name$e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu/<ifr_name>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"