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
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: ConnectMethod
  struct ConnectMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::ConnectMethod, "Photon.Pun", "ConnectMethod");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.ConnectMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConnectMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConnectMethod
    constexpr ConnectMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Pun.ConnectMethod NotCalled
    static constexpr const int NotCalled = 0;
    // Get static field: static public Photon.Pun.ConnectMethod NotCalled
    static ::Photon::Pun::ConnectMethod _get_NotCalled();
    // Set static field: static public Photon.Pun.ConnectMethod NotCalled
    static void _set_NotCalled(::Photon::Pun::ConnectMethod value);
    // static field const value: static public Photon.Pun.ConnectMethod ConnectToMaster
    static constexpr const int ConnectToMaster = 1;
    // Get static field: static public Photon.Pun.ConnectMethod ConnectToMaster
    static ::Photon::Pun::ConnectMethod _get_ConnectToMaster();
    // Set static field: static public Photon.Pun.ConnectMethod ConnectToMaster
    static void _set_ConnectToMaster(::Photon::Pun::ConnectMethod value);
    // static field const value: static public Photon.Pun.ConnectMethod ConnectToRegion
    static constexpr const int ConnectToRegion = 2;
    // Get static field: static public Photon.Pun.ConnectMethod ConnectToRegion
    static ::Photon::Pun::ConnectMethod _get_ConnectToRegion();
    // Set static field: static public Photon.Pun.ConnectMethod ConnectToRegion
    static void _set_ConnectToRegion(::Photon::Pun::ConnectMethod value);
    // static field const value: static public Photon.Pun.ConnectMethod ConnectToBest
    static constexpr const int ConnectToBest = 3;
    // Get static field: static public Photon.Pun.ConnectMethod ConnectToBest
    static ::Photon::Pun::ConnectMethod _get_ConnectToBest();
    // Set static field: static public Photon.Pun.ConnectMethod ConnectToBest
    static void _set_ConnectToBest(::Photon::Pun::ConnectMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Pun.ConnectMethod
  #pragma pack(pop)
  static check_size<sizeof(ConnectMethod), 0 + sizeof(int)> __Photon_Pun_ConnectMethodSizeCheck;
  static_assert(sizeof(ConnectMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
