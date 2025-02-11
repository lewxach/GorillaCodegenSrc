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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: TitleActivationStatus
  struct TitleActivationStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::TitleActivationStatus, "PlayFab.ClientModels", "TitleActivationStatus");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.TitleActivationStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct TitleActivationStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TitleActivationStatus
    constexpr TitleActivationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.ClientModels.TitleActivationStatus None
    static constexpr const int None = 0;
    // Get static field: static public PlayFab.ClientModels.TitleActivationStatus None
    static ::PlayFab::ClientModels::TitleActivationStatus _get_None();
    // Set static field: static public PlayFab.ClientModels.TitleActivationStatus None
    static void _set_None(::PlayFab::ClientModels::TitleActivationStatus value);
    // static field const value: static public PlayFab.ClientModels.TitleActivationStatus ActivatedTitleKey
    static constexpr const int ActivatedTitleKey = 1;
    // Get static field: static public PlayFab.ClientModels.TitleActivationStatus ActivatedTitleKey
    static ::PlayFab::ClientModels::TitleActivationStatus _get_ActivatedTitleKey();
    // Set static field: static public PlayFab.ClientModels.TitleActivationStatus ActivatedTitleKey
    static void _set_ActivatedTitleKey(::PlayFab::ClientModels::TitleActivationStatus value);
    // static field const value: static public PlayFab.ClientModels.TitleActivationStatus PendingSteam
    static constexpr const int PendingSteam = 2;
    // Get static field: static public PlayFab.ClientModels.TitleActivationStatus PendingSteam
    static ::PlayFab::ClientModels::TitleActivationStatus _get_PendingSteam();
    // Set static field: static public PlayFab.ClientModels.TitleActivationStatus PendingSteam
    static void _set_PendingSteam(::PlayFab::ClientModels::TitleActivationStatus value);
    // static field const value: static public PlayFab.ClientModels.TitleActivationStatus ActivatedSteam
    static constexpr const int ActivatedSteam = 3;
    // Get static field: static public PlayFab.ClientModels.TitleActivationStatus ActivatedSteam
    static ::PlayFab::ClientModels::TitleActivationStatus _get_ActivatedSteam();
    // Set static field: static public PlayFab.ClientModels.TitleActivationStatus ActivatedSteam
    static void _set_ActivatedSteam(::PlayFab::ClientModels::TitleActivationStatus value);
    // static field const value: static public PlayFab.ClientModels.TitleActivationStatus RevokedSteam
    static constexpr const int RevokedSteam = 4;
    // Get static field: static public PlayFab.ClientModels.TitleActivationStatus RevokedSteam
    static ::PlayFab::ClientModels::TitleActivationStatus _get_RevokedSteam();
    // Set static field: static public PlayFab.ClientModels.TitleActivationStatus RevokedSteam
    static void _set_RevokedSteam(::PlayFab::ClientModels::TitleActivationStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.ClientModels.TitleActivationStatus
  #pragma pack(pop)
  static check_size<sizeof(TitleActivationStatus), 0 + sizeof(int)> __PlayFab_ClientModels_TitleActivationStatusSizeCheck;
  static_assert(sizeof(TitleActivationStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
