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
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackStatus
  struct AndroidAssetPackStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackStatus, "UnityEngine.Android", "AndroidAssetPackStatus");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPackStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct AndroidAssetPackStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AndroidAssetPackStatus
    constexpr AndroidAssetPackStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Unknown
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Unknown();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Unknown
    static void _set_Unknown(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Pending
    static constexpr const int Pending = 1;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Pending
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Pending();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Pending
    static void _set_Pending(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Downloading
    static constexpr const int Downloading = 2;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Downloading
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Downloading();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Downloading
    static void _set_Downloading(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Transferring
    static constexpr const int Transferring = 3;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Transferring
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Transferring();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Transferring
    static void _set_Transferring(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Completed
    static constexpr const int Completed = 4;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Completed
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Completed();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Completed
    static void _set_Completed(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Failed
    static constexpr const int Failed = 5;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Failed
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Failed();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Failed
    static void _set_Failed(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus Canceled
    static constexpr const int Canceled = 6;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus Canceled
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_Canceled();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus Canceled
    static void _set_Canceled(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus WaitingForWifi
    static constexpr const int WaitingForWifi = 7;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus WaitingForWifi
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_WaitingForWifi();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus WaitingForWifi
    static void _set_WaitingForWifi(::UnityEngine::Android::AndroidAssetPackStatus value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackStatus NotInstalled
    static constexpr const int NotInstalled = 8;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackStatus NotInstalled
    static ::UnityEngine::Android::AndroidAssetPackStatus _get_NotInstalled();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackStatus NotInstalled
    static void _set_NotInstalled(::UnityEngine::Android::AndroidAssetPackStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Android.AndroidAssetPackStatus
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPackStatus), 0 + sizeof(int)> __UnityEngine_Android_AndroidAssetPackStatusSizeCheck;
  static_assert(sizeof(AndroidAssetPackStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"