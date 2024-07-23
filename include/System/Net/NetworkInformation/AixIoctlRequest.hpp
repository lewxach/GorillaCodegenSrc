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
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: AixIoctlRequest
  struct AixIoctlRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIoctlRequest, "System.Net.NetworkInformation", "AixIoctlRequest");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.AixIoctlRequest
  // [TokenAttribute] Offset: FFFFFFFF
  struct AixIoctlRequest/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: AixIoctlRequest
    constexpr AixIoctlRequest(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGSIZIFCONF
    static constexpr const uint SIOCGSIZIFCONF = 1074030954u;
    // Get static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGSIZIFCONF
    static ::System::Net::NetworkInformation::AixIoctlRequest _get_SIOCGSIZIFCONF();
    // Set static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGSIZIFCONF
    static void _set_SIOCGSIZIFCONF(::System::Net::NetworkInformation::AixIoctlRequest value);
    // static field const value: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFCONF
    static constexpr const uint SIOCGIFCONF = 3222300997u;
    // Get static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFCONF
    static ::System::Net::NetworkInformation::AixIoctlRequest _get_SIOCGIFCONF();
    // Set static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFCONF
    static void _set_SIOCGIFCONF(::System::Net::NetworkInformation::AixIoctlRequest value);
    // static field const value: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFFLAGS
    static constexpr const uint SIOCGIFFLAGS = 3223873809u;
    // Get static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFFLAGS
    static ::System::Net::NetworkInformation::AixIoctlRequest _get_SIOCGIFFLAGS();
    // Set static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFFLAGS
    static void _set_SIOCGIFFLAGS(::System::Net::NetworkInformation::AixIoctlRequest value);
    // static field const value: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFNETMASK
    static constexpr const uint SIOCGIFNETMASK = 3223873829u;
    // Get static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFNETMASK
    static ::System::Net::NetworkInformation::AixIoctlRequest _get_SIOCGIFNETMASK();
    // Set static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFNETMASK
    static void _set_SIOCGIFNETMASK(::System::Net::NetworkInformation::AixIoctlRequest value);
    // static field const value: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFMTU
    static constexpr const uint SIOCGIFMTU = 3223873878u;
    // Get static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFMTU
    static ::System::Net::NetworkInformation::AixIoctlRequest _get_SIOCGIFMTU();
    // Set static field: static public System.Net.NetworkInformation.AixIoctlRequest SIOCGIFMTU
    static void _set_SIOCGIFMTU(::System::Net::NetworkInformation::AixIoctlRequest value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // System.Net.NetworkInformation.AixIoctlRequest
  #pragma pack(pop)
  static check_size<sizeof(AixIoctlRequest), 0 + sizeof(uint)> __System_Net_NetworkInformation_AixIoctlRequestSizeCheck;
  static_assert(sizeof(AixIoctlRequest) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"