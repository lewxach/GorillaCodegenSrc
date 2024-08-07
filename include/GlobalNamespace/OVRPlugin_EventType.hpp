// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::EventType, "", "OVRPlugin/EventType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/EventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::EventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventType
    constexpr EventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/EventType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public OVRPlugin/EventType Unknown
    static ::GlobalNamespace::OVRPlugin::EventType _get_Unknown();
    // Set static field: static public OVRPlugin/EventType Unknown
    static void _set_Unknown(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static constexpr const int DisplayRefreshRateChanged = 1;
    // Get static field: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static ::GlobalNamespace::OVRPlugin::EventType _get_DisplayRefreshRateChanged();
    // Set static field: static public OVRPlugin/EventType DisplayRefreshRateChanged
    static void _set_DisplayRefreshRateChanged(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpatialAnchorCreateComplete
    static constexpr const int SpatialAnchorCreateComplete = 49;
    // Get static field: static public OVRPlugin/EventType SpatialAnchorCreateComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpatialAnchorCreateComplete();
    // Set static field: static public OVRPlugin/EventType SpatialAnchorCreateComplete
    static void _set_SpatialAnchorCreateComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceSetComponentStatusComplete
    static constexpr const int SpaceSetComponentStatusComplete = 50;
    // Get static field: static public OVRPlugin/EventType SpaceSetComponentStatusComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceSetComponentStatusComplete();
    // Set static field: static public OVRPlugin/EventType SpaceSetComponentStatusComplete
    static void _set_SpaceSetComponentStatusComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceQueryResults
    static constexpr const int SpaceQueryResults = 51;
    // Get static field: static public OVRPlugin/EventType SpaceQueryResults
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceQueryResults();
    // Set static field: static public OVRPlugin/EventType SpaceQueryResults
    static void _set_SpaceQueryResults(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceQueryComplete
    static constexpr const int SpaceQueryComplete = 52;
    // Get static field: static public OVRPlugin/EventType SpaceQueryComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceQueryComplete();
    // Set static field: static public OVRPlugin/EventType SpaceQueryComplete
    static void _set_SpaceQueryComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceSaveComplete
    static constexpr const int SpaceSaveComplete = 53;
    // Get static field: static public OVRPlugin/EventType SpaceSaveComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceSaveComplete();
    // Set static field: static public OVRPlugin/EventType SpaceSaveComplete
    static void _set_SpaceSaveComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceEraseComplete
    static constexpr const int SpaceEraseComplete = 54;
    // Get static field: static public OVRPlugin/EventType SpaceEraseComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceEraseComplete();
    // Set static field: static public OVRPlugin/EventType SpaceEraseComplete
    static void _set_SpaceEraseComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceShareResult
    static constexpr const int SpaceShareResult = 56;
    // Get static field: static public OVRPlugin/EventType SpaceShareResult
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceShareResult();
    // Set static field: static public OVRPlugin/EventType SpaceShareResult
    static void _set_SpaceShareResult(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SpaceListSaveResult
    static constexpr const int SpaceListSaveResult = 57;
    // Get static field: static public OVRPlugin/EventType SpaceListSaveResult
    static ::GlobalNamespace::OVRPlugin::EventType _get_SpaceListSaveResult();
    // Set static field: static public OVRPlugin/EventType SpaceListSaveResult
    static void _set_SpaceListSaveResult(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType SceneCaptureComplete
    static constexpr const int SceneCaptureComplete = 100;
    // Get static field: static public OVRPlugin/EventType SceneCaptureComplete
    static ::GlobalNamespace::OVRPlugin::EventType _get_SceneCaptureComplete();
    // Set static field: static public OVRPlugin/EventType SceneCaptureComplete
    static void _set_SceneCaptureComplete(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType VirtualKeyboardCommitText
    static constexpr const int VirtualKeyboardCommitText = 201;
    // Get static field: static public OVRPlugin/EventType VirtualKeyboardCommitText
    static ::GlobalNamespace::OVRPlugin::EventType _get_VirtualKeyboardCommitText();
    // Set static field: static public OVRPlugin/EventType VirtualKeyboardCommitText
    static void _set_VirtualKeyboardCommitText(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType VirtualKeyboardBackspace
    static constexpr const int VirtualKeyboardBackspace = 202;
    // Get static field: static public OVRPlugin/EventType VirtualKeyboardBackspace
    static ::GlobalNamespace::OVRPlugin::EventType _get_VirtualKeyboardBackspace();
    // Set static field: static public OVRPlugin/EventType VirtualKeyboardBackspace
    static void _set_VirtualKeyboardBackspace(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType VirtualKeyboardEnter
    static constexpr const int VirtualKeyboardEnter = 203;
    // Get static field: static public OVRPlugin/EventType VirtualKeyboardEnter
    static ::GlobalNamespace::OVRPlugin::EventType _get_VirtualKeyboardEnter();
    // Set static field: static public OVRPlugin/EventType VirtualKeyboardEnter
    static void _set_VirtualKeyboardEnter(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType VirtualKeyboardShown
    static constexpr const int VirtualKeyboardShown = 204;
    // Get static field: static public OVRPlugin/EventType VirtualKeyboardShown
    static ::GlobalNamespace::OVRPlugin::EventType _get_VirtualKeyboardShown();
    // Set static field: static public OVRPlugin/EventType VirtualKeyboardShown
    static void _set_VirtualKeyboardShown(::GlobalNamespace::OVRPlugin::EventType value);
    // static field const value: static public OVRPlugin/EventType VirtualKeyboardHidden
    static constexpr const int VirtualKeyboardHidden = 205;
    // Get static field: static public OVRPlugin/EventType VirtualKeyboardHidden
    static ::GlobalNamespace::OVRPlugin::EventType _get_VirtualKeyboardHidden();
    // Set static field: static public OVRPlugin/EventType VirtualKeyboardHidden
    static void _set_VirtualKeyboardHidden(::GlobalNamespace::OVRPlugin::EventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/EventType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::EventType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_EventTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::EventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
