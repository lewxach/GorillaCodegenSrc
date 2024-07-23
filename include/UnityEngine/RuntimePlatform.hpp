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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RuntimePlatform
  struct RuntimePlatform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimePlatform, "UnityEngine", "RuntimePlatform");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RuntimePlatform
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimePlatform/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RuntimePlatform
    constexpr RuntimePlatform(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RuntimePlatform OSXEditor
    static constexpr const int OSXEditor = 0;
    // Get static field: static public UnityEngine.RuntimePlatform OSXEditor
    static ::UnityEngine::RuntimePlatform _get_OSXEditor();
    // Set static field: static public UnityEngine.RuntimePlatform OSXEditor
    static void _set_OSXEditor(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform OSXPlayer
    static constexpr const int OSXPlayer = 1;
    // Get static field: static public UnityEngine.RuntimePlatform OSXPlayer
    static ::UnityEngine::RuntimePlatform _get_OSXPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform OSXPlayer
    static void _set_OSXPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WindowsPlayer
    static constexpr const int WindowsPlayer = 2;
    // Get static field: static public UnityEngine.RuntimePlatform WindowsPlayer
    static ::UnityEngine::RuntimePlatform _get_WindowsPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform WindowsPlayer
    static void _set_WindowsPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform OSXWebPlayer
    static constexpr const int OSXWebPlayer = 3;
    // Get static field: static public UnityEngine.RuntimePlatform OSXWebPlayer
    static ::UnityEngine::RuntimePlatform _get_OSXWebPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform OSXWebPlayer
    static void _set_OSXWebPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform OSXDashboardPlayer
    static constexpr const int OSXDashboardPlayer = 4;
    // Get static field: static public UnityEngine.RuntimePlatform OSXDashboardPlayer
    static ::UnityEngine::RuntimePlatform _get_OSXDashboardPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform OSXDashboardPlayer
    static void _set_OSXDashboardPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WindowsWebPlayer
    static constexpr const int WindowsWebPlayer = 5;
    // Get static field: static public UnityEngine.RuntimePlatform WindowsWebPlayer
    static ::UnityEngine::RuntimePlatform _get_WindowsWebPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform WindowsWebPlayer
    static void _set_WindowsWebPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WindowsEditor
    static constexpr const int WindowsEditor = 7;
    // Get static field: static public UnityEngine.RuntimePlatform WindowsEditor
    static ::UnityEngine::RuntimePlatform _get_WindowsEditor();
    // Set static field: static public UnityEngine.RuntimePlatform WindowsEditor
    static void _set_WindowsEditor(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform IPhonePlayer
    static constexpr const int IPhonePlayer = 8;
    // Get static field: static public UnityEngine.RuntimePlatform IPhonePlayer
    static ::UnityEngine::RuntimePlatform _get_IPhonePlayer();
    // Set static field: static public UnityEngine.RuntimePlatform IPhonePlayer
    static void _set_IPhonePlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform XBOX360
    static constexpr const int XBOX360 = 10;
    // Get static field: static public UnityEngine.RuntimePlatform XBOX360
    static ::UnityEngine::RuntimePlatform _get_XBOX360();
    // Set static field: static public UnityEngine.RuntimePlatform XBOX360
    static void _set_XBOX360(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform PS3
    static constexpr const int PS3 = 9;
    // Get static field: static public UnityEngine.RuntimePlatform PS3
    static ::UnityEngine::RuntimePlatform _get_PS3();
    // Set static field: static public UnityEngine.RuntimePlatform PS3
    static void _set_PS3(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform Android
    static constexpr const int Android = 11;
    // Get static field: static public UnityEngine.RuntimePlatform Android
    static ::UnityEngine::RuntimePlatform _get_Android();
    // Set static field: static public UnityEngine.RuntimePlatform Android
    static void _set_Android(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform NaCl
    static constexpr const int NaCl = 12;
    // Get static field: static public UnityEngine.RuntimePlatform NaCl
    static ::UnityEngine::RuntimePlatform _get_NaCl();
    // Set static field: static public UnityEngine.RuntimePlatform NaCl
    static void _set_NaCl(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform FlashPlayer
    static constexpr const int FlashPlayer = 15;
    // Get static field: static public UnityEngine.RuntimePlatform FlashPlayer
    static ::UnityEngine::RuntimePlatform _get_FlashPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform FlashPlayer
    static void _set_FlashPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform LinuxPlayer
    static constexpr const int LinuxPlayer = 13;
    // Get static field: static public UnityEngine.RuntimePlatform LinuxPlayer
    static ::UnityEngine::RuntimePlatform _get_LinuxPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform LinuxPlayer
    static void _set_LinuxPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform LinuxEditor
    static constexpr const int LinuxEditor = 16;
    // Get static field: static public UnityEngine.RuntimePlatform LinuxEditor
    static ::UnityEngine::RuntimePlatform _get_LinuxEditor();
    // Set static field: static public UnityEngine.RuntimePlatform LinuxEditor
    static void _set_LinuxEditor(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WebGLPlayer
    static constexpr const int WebGLPlayer = 17;
    // Get static field: static public UnityEngine.RuntimePlatform WebGLPlayer
    static ::UnityEngine::RuntimePlatform _get_WebGLPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform WebGLPlayer
    static void _set_WebGLPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform MetroPlayerX86
    static constexpr const int MetroPlayerX86 = 18;
    // Get static field: static public UnityEngine.RuntimePlatform MetroPlayerX86
    static ::UnityEngine::RuntimePlatform _get_MetroPlayerX86();
    // Set static field: static public UnityEngine.RuntimePlatform MetroPlayerX86
    static void _set_MetroPlayerX86(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WSAPlayerX86
    static constexpr const int WSAPlayerX86 = 18;
    // Get static field: static public UnityEngine.RuntimePlatform WSAPlayerX86
    static ::UnityEngine::RuntimePlatform _get_WSAPlayerX86();
    // Set static field: static public UnityEngine.RuntimePlatform WSAPlayerX86
    static void _set_WSAPlayerX86(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform MetroPlayerX64
    static constexpr const int MetroPlayerX64 = 19;
    // Get static field: static public UnityEngine.RuntimePlatform MetroPlayerX64
    static ::UnityEngine::RuntimePlatform _get_MetroPlayerX64();
    // Set static field: static public UnityEngine.RuntimePlatform MetroPlayerX64
    static void _set_MetroPlayerX64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WSAPlayerX64
    static constexpr const int WSAPlayerX64 = 19;
    // Get static field: static public UnityEngine.RuntimePlatform WSAPlayerX64
    static ::UnityEngine::RuntimePlatform _get_WSAPlayerX64();
    // Set static field: static public UnityEngine.RuntimePlatform WSAPlayerX64
    static void _set_WSAPlayerX64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform MetroPlayerARM
    static constexpr const int MetroPlayerARM = 20;
    // Get static field: static public UnityEngine.RuntimePlatform MetroPlayerARM
    static ::UnityEngine::RuntimePlatform _get_MetroPlayerARM();
    // Set static field: static public UnityEngine.RuntimePlatform MetroPlayerARM
    static void _set_MetroPlayerARM(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WSAPlayerARM
    static constexpr const int WSAPlayerARM = 20;
    // Get static field: static public UnityEngine.RuntimePlatform WSAPlayerARM
    static ::UnityEngine::RuntimePlatform _get_WSAPlayerARM();
    // Set static field: static public UnityEngine.RuntimePlatform WSAPlayerARM
    static void _set_WSAPlayerARM(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WP8Player
    static constexpr const int WP8Player = 21;
    // Get static field: static public UnityEngine.RuntimePlatform WP8Player
    static ::UnityEngine::RuntimePlatform _get_WP8Player();
    // Set static field: static public UnityEngine.RuntimePlatform WP8Player
    static void _set_WP8Player(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform BlackBerryPlayer
    static constexpr const int BlackBerryPlayer = 22;
    // Get static field: static public UnityEngine.RuntimePlatform BlackBerryPlayer
    static ::UnityEngine::RuntimePlatform _get_BlackBerryPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform BlackBerryPlayer
    static void _set_BlackBerryPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform TizenPlayer
    static constexpr const int TizenPlayer = 23;
    // Get static field: static public UnityEngine.RuntimePlatform TizenPlayer
    static ::UnityEngine::RuntimePlatform _get_TizenPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform TizenPlayer
    static void _set_TizenPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform PSP2
    static constexpr const int PSP2 = 24;
    // Get static field: static public UnityEngine.RuntimePlatform PSP2
    static ::UnityEngine::RuntimePlatform _get_PSP2();
    // Set static field: static public UnityEngine.RuntimePlatform PSP2
    static void _set_PSP2(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform PS4
    static constexpr const int PS4 = 25;
    // Get static field: static public UnityEngine.RuntimePlatform PS4
    static ::UnityEngine::RuntimePlatform _get_PS4();
    // Set static field: static public UnityEngine.RuntimePlatform PS4
    static void _set_PS4(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform PSM
    static constexpr const int PSM = 26;
    // Get static field: static public UnityEngine.RuntimePlatform PSM
    static ::UnityEngine::RuntimePlatform _get_PSM();
    // Set static field: static public UnityEngine.RuntimePlatform PSM
    static void _set_PSM(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform XboxOne
    static constexpr const int XboxOne = 27;
    // Get static field: static public UnityEngine.RuntimePlatform XboxOne
    static ::UnityEngine::RuntimePlatform _get_XboxOne();
    // Set static field: static public UnityEngine.RuntimePlatform XboxOne
    static void _set_XboxOne(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform SamsungTVPlayer
    static constexpr const int SamsungTVPlayer = 28;
    // Get static field: static public UnityEngine.RuntimePlatform SamsungTVPlayer
    static ::UnityEngine::RuntimePlatform _get_SamsungTVPlayer();
    // Set static field: static public UnityEngine.RuntimePlatform SamsungTVPlayer
    static void _set_SamsungTVPlayer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WiiU
    static constexpr const int WiiU = 30;
    // Get static field: static public UnityEngine.RuntimePlatform WiiU
    static ::UnityEngine::RuntimePlatform _get_WiiU();
    // Set static field: static public UnityEngine.RuntimePlatform WiiU
    static void _set_WiiU(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform tvOS
    static constexpr const int tvOS = 31;
    // Get static field: static public UnityEngine.RuntimePlatform tvOS
    static ::UnityEngine::RuntimePlatform _get_tvOS();
    // Set static field: static public UnityEngine.RuntimePlatform tvOS
    static void _set_tvOS(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform Switch
    static constexpr const int Switch = 32;
    // Get static field: static public UnityEngine.RuntimePlatform Switch
    static ::UnityEngine::RuntimePlatform _get_Switch();
    // Set static field: static public UnityEngine.RuntimePlatform Switch
    static void _set_Switch(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform Lumin
    static constexpr const int Lumin = 33;
    // Get static field: static public UnityEngine.RuntimePlatform Lumin
    static ::UnityEngine::RuntimePlatform _get_Lumin();
    // Set static field: static public UnityEngine.RuntimePlatform Lumin
    static void _set_Lumin(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform Stadia
    static constexpr const int Stadia = 34;
    // Get static field: static public UnityEngine.RuntimePlatform Stadia
    static ::UnityEngine::RuntimePlatform _get_Stadia();
    // Set static field: static public UnityEngine.RuntimePlatform Stadia
    static void _set_Stadia(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform CloudRendering
    static constexpr const int CloudRendering = 35;
    // Get static field: static public UnityEngine.RuntimePlatform CloudRendering
    static ::UnityEngine::RuntimePlatform _get_CloudRendering();
    // Set static field: static public UnityEngine.RuntimePlatform CloudRendering
    static void _set_CloudRendering(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform GameCoreScarlett
    static constexpr const int GameCoreScarlett = -1;
    // Get static field: static public UnityEngine.RuntimePlatform GameCoreScarlett
    static ::UnityEngine::RuntimePlatform _get_GameCoreScarlett();
    // Set static field: static public UnityEngine.RuntimePlatform GameCoreScarlett
    static void _set_GameCoreScarlett(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform GameCoreXboxSeries
    static constexpr const int GameCoreXboxSeries = 36;
    // Get static field: static public UnityEngine.RuntimePlatform GameCoreXboxSeries
    static ::UnityEngine::RuntimePlatform _get_GameCoreXboxSeries();
    // Set static field: static public UnityEngine.RuntimePlatform GameCoreXboxSeries
    static void _set_GameCoreXboxSeries(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform GameCoreXboxOne
    static constexpr const int GameCoreXboxOne = 37;
    // Get static field: static public UnityEngine.RuntimePlatform GameCoreXboxOne
    static ::UnityEngine::RuntimePlatform _get_GameCoreXboxOne();
    // Set static field: static public UnityEngine.RuntimePlatform GameCoreXboxOne
    static void _set_GameCoreXboxOne(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform PS5
    static constexpr const int PS5 = 38;
    // Get static field: static public UnityEngine.RuntimePlatform PS5
    static ::UnityEngine::RuntimePlatform _get_PS5();
    // Set static field: static public UnityEngine.RuntimePlatform PS5
    static void _set_PS5(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm64
    static constexpr const int EmbeddedLinuxArm64 = 39;
    // Get static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm64
    static ::UnityEngine::RuntimePlatform _get_EmbeddedLinuxArm64();
    // Set static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm64
    static void _set_EmbeddedLinuxArm64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm32
    static constexpr const int EmbeddedLinuxArm32 = 40;
    // Get static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm32
    static ::UnityEngine::RuntimePlatform _get_EmbeddedLinuxArm32();
    // Set static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxArm32
    static void _set_EmbeddedLinuxArm32(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform EmbeddedLinuxX64
    static constexpr const int EmbeddedLinuxX64 = 41;
    // Get static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxX64
    static ::UnityEngine::RuntimePlatform _get_EmbeddedLinuxX64();
    // Set static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxX64
    static void _set_EmbeddedLinuxX64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform EmbeddedLinuxX86
    static constexpr const int EmbeddedLinuxX86 = 42;
    // Get static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxX86
    static ::UnityEngine::RuntimePlatform _get_EmbeddedLinuxX86();
    // Set static field: static public UnityEngine.RuntimePlatform EmbeddedLinuxX86
    static void _set_EmbeddedLinuxX86(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform LinuxServer
    static constexpr const int LinuxServer = 43;
    // Get static field: static public UnityEngine.RuntimePlatform LinuxServer
    static ::UnityEngine::RuntimePlatform _get_LinuxServer();
    // Set static field: static public UnityEngine.RuntimePlatform LinuxServer
    static void _set_LinuxServer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform WindowsServer
    static constexpr const int WindowsServer = 44;
    // Get static field: static public UnityEngine.RuntimePlatform WindowsServer
    static ::UnityEngine::RuntimePlatform _get_WindowsServer();
    // Set static field: static public UnityEngine.RuntimePlatform WindowsServer
    static void _set_WindowsServer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform OSXServer
    static constexpr const int OSXServer = 45;
    // Get static field: static public UnityEngine.RuntimePlatform OSXServer
    static ::UnityEngine::RuntimePlatform _get_OSXServer();
    // Set static field: static public UnityEngine.RuntimePlatform OSXServer
    static void _set_OSXServer(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform QNXArm32
    static constexpr const int QNXArm32 = 46;
    // Get static field: static public UnityEngine.RuntimePlatform QNXArm32
    static ::UnityEngine::RuntimePlatform _get_QNXArm32();
    // Set static field: static public UnityEngine.RuntimePlatform QNXArm32
    static void _set_QNXArm32(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform QNXArm64
    static constexpr const int QNXArm64 = 47;
    // Get static field: static public UnityEngine.RuntimePlatform QNXArm64
    static ::UnityEngine::RuntimePlatform _get_QNXArm64();
    // Set static field: static public UnityEngine.RuntimePlatform QNXArm64
    static void _set_QNXArm64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform QNXX64
    static constexpr const int QNXX64 = 48;
    // Get static field: static public UnityEngine.RuntimePlatform QNXX64
    static ::UnityEngine::RuntimePlatform _get_QNXX64();
    // Set static field: static public UnityEngine.RuntimePlatform QNXX64
    static void _set_QNXX64(::UnityEngine::RuntimePlatform value);
    // static field const value: static public UnityEngine.RuntimePlatform QNXX86
    static constexpr const int QNXX86 = 49;
    // Get static field: static public UnityEngine.RuntimePlatform QNXX86
    static ::UnityEngine::RuntimePlatform _get_QNXX86();
    // Set static field: static public UnityEngine.RuntimePlatform QNXX86
    static void _set_QNXX86(::UnityEngine::RuntimePlatform value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RuntimePlatform
  #pragma pack(pop)
  static check_size<sizeof(RuntimePlatform), 0 + sizeof(int)> __UnityEngine_RuntimePlatformSizeCheck;
  static_assert(sizeof(RuntimePlatform) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"