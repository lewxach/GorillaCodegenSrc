// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Vector2f
#include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::ControllerState6, "", "OVRPlugin/ControllerState6");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/ControllerState6
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::ControllerState6/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 ConnectedControllers
    // Size: 0x4
    // Offset: 0x0
    uint ConnectedControllers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Buttons
    // Size: 0x4
    // Offset: 0x4
    uint Buttons;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 Touches
    // Size: 0x4
    // Offset: 0x8
    uint Touches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NearTouches
    // Size: 0x4
    // Offset: 0xC
    uint NearTouches;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single LIndexTrigger
    // Size: 0x4
    // Offset: 0x10
    float LIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    float RIndexTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LHandTrigger
    // Size: 0x4
    // Offset: 0x18
    float LHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RHandTrigger
    // Size: 0x4
    // Offset: 0x1C
    float RHandTrigger;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Vector2f LThumbstick
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RThumbstick
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f LTouchpad
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRPlugin::Vector2f LTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public OVRPlugin/Vector2f RTouchpad
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRPlugin::Vector2f RTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2f) == 0x8);
    // public System.Byte LBatteryPercentRemaining
    // Size: 0x1
    // Offset: 0x40
    uint8_t LBatteryPercentRemaining;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte RBatteryPercentRemaining
    // Size: 0x1
    // Offset: 0x41
    uint8_t RBatteryPercentRemaining;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte LRecenterCount
    // Size: 0x1
    // Offset: 0x42
    uint8_t LRecenterCount;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte RRecenterCount
    // Size: 0x1
    // Offset: 0x43
    uint8_t RRecenterCount;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Single LThumbRestForce
    // Size: 0x4
    // Offset: 0x44
    float LThumbRestForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RThumbRestForce
    // Size: 0x4
    // Offset: 0x48
    float RThumbRestForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LStylusForce
    // Size: 0x4
    // Offset: 0x4C
    float LStylusForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RStylusForce
    // Size: 0x4
    // Offset: 0x50
    float RStylusForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LIndexTriggerCurl
    // Size: 0x4
    // Offset: 0x54
    float LIndexTriggerCurl;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTriggerCurl
    // Size: 0x4
    // Offset: 0x58
    float RIndexTriggerCurl;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LIndexTriggerSlide
    // Size: 0x4
    // Offset: 0x5C
    float LIndexTriggerSlide;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTriggerSlide
    // Size: 0x4
    // Offset: 0x60
    float RIndexTriggerSlide;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single LIndexTriggerForce
    // Size: 0x4
    // Offset: 0x64
    float LIndexTriggerForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RIndexTriggerForce
    // Size: 0x4
    // Offset: 0x68
    float RIndexTriggerForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ControllerState6
    constexpr ControllerState6(uint ConnectedControllers_ = {}, uint Buttons_ = {}, uint Touches_ = {}, uint NearTouches_ = {}, float LIndexTrigger_ = {}, float RIndexTrigger_ = {}, float LHandTrigger_ = {}, float RHandTrigger_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RThumbstick_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f LTouchpad_ = {}, ::GlobalNamespace::OVRPlugin::Vector2f RTouchpad_ = {}, uint8_t LBatteryPercentRemaining_ = {}, uint8_t RBatteryPercentRemaining_ = {}, uint8_t LRecenterCount_ = {}, uint8_t RRecenterCount_ = {}, float LThumbRestForce_ = {}, float RThumbRestForce_ = {}, float LStylusForce_ = {}, float RStylusForce_ = {}, float LIndexTriggerCurl_ = {}, float RIndexTriggerCurl_ = {}, float LIndexTriggerSlide_ = {}, float RIndexTriggerSlide_ = {}, float LIndexTriggerForce_ = {}, float RIndexTriggerForce_ = {}) noexcept : ConnectedControllers{ConnectedControllers_}, Buttons{Buttons_}, Touches{Touches_}, NearTouches{NearTouches_}, LIndexTrigger{LIndexTrigger_}, RIndexTrigger{RIndexTrigger_}, LHandTrigger{LHandTrigger_}, RHandTrigger{RHandTrigger_}, LThumbstick{LThumbstick_}, RThumbstick{RThumbstick_}, LTouchpad{LTouchpad_}, RTouchpad{RTouchpad_}, LBatteryPercentRemaining{LBatteryPercentRemaining_}, RBatteryPercentRemaining{RBatteryPercentRemaining_}, LRecenterCount{LRecenterCount_}, RRecenterCount{RRecenterCount_}, LThumbRestForce{LThumbRestForce_}, RThumbRestForce{RThumbRestForce_}, LStylusForce{LStylusForce_}, RStylusForce{RStylusForce_}, LIndexTriggerCurl{LIndexTriggerCurl_}, RIndexTriggerCurl{RIndexTriggerCurl_}, LIndexTriggerSlide{LIndexTriggerSlide_}, RIndexTriggerSlide{RIndexTriggerSlide_}, LIndexTriggerForce{LIndexTriggerForce_}, RIndexTriggerForce{RIndexTriggerForce_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 ConnectedControllers
    [[deprecated("Use field access instead!")]] uint& dyn_ConnectedControllers();
    // Get instance field reference: public System.UInt32 Buttons
    [[deprecated("Use field access instead!")]] uint& dyn_Buttons();
    // Get instance field reference: public System.UInt32 Touches
    [[deprecated("Use field access instead!")]] uint& dyn_Touches();
    // Get instance field reference: public System.UInt32 NearTouches
    [[deprecated("Use field access instead!")]] uint& dyn_NearTouches();
    // Get instance field reference: public System.Single LIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTrigger();
    // Get instance field reference: public System.Single RIndexTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTrigger();
    // Get instance field reference: public System.Single LHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_LHandTrigger();
    // Get instance field reference: public System.Single RHandTrigger
    [[deprecated("Use field access instead!")]] float& dyn_RHandTrigger();
    // Get instance field reference: public OVRPlugin/Vector2f LThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f RThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RThumbstick();
    // Get instance field reference: public OVRPlugin/Vector2f LTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_LTouchpad();
    // Get instance field reference: public OVRPlugin/Vector2f RTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector2f& dyn_RTouchpad();
    // Get instance field reference: public System.Byte LBatteryPercentRemaining
    [[deprecated("Use field access instead!")]] uint8_t& dyn_LBatteryPercentRemaining();
    // Get instance field reference: public System.Byte RBatteryPercentRemaining
    [[deprecated("Use field access instead!")]] uint8_t& dyn_RBatteryPercentRemaining();
    // Get instance field reference: public System.Byte LRecenterCount
    [[deprecated("Use field access instead!")]] uint8_t& dyn_LRecenterCount();
    // Get instance field reference: public System.Byte RRecenterCount
    [[deprecated("Use field access instead!")]] uint8_t& dyn_RRecenterCount();
    // Get instance field reference: public System.Single LThumbRestForce
    [[deprecated("Use field access instead!")]] float& dyn_LThumbRestForce();
    // Get instance field reference: public System.Single RThumbRestForce
    [[deprecated("Use field access instead!")]] float& dyn_RThumbRestForce();
    // Get instance field reference: public System.Single LStylusForce
    [[deprecated("Use field access instead!")]] float& dyn_LStylusForce();
    // Get instance field reference: public System.Single RStylusForce
    [[deprecated("Use field access instead!")]] float& dyn_RStylusForce();
    // Get instance field reference: public System.Single LIndexTriggerCurl
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTriggerCurl();
    // Get instance field reference: public System.Single RIndexTriggerCurl
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTriggerCurl();
    // Get instance field reference: public System.Single LIndexTriggerSlide
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTriggerSlide();
    // Get instance field reference: public System.Single RIndexTriggerSlide
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTriggerSlide();
    // Get instance field reference: public System.Single LIndexTriggerForce
    [[deprecated("Use field access instead!")]] float& dyn_LIndexTriggerForce();
    // Get instance field reference: public System.Single RIndexTriggerForce
    [[deprecated("Use field access instead!")]] float& dyn_RIndexTriggerForce();
    // public System.Void .ctor(OVRPlugin/ControllerState5 cs)
    // Offset: 0x49054F4
    ControllerState6(::GlobalNamespace::OVRPlugin::ControllerState5 cs);
  }; // OVRPlugin/ControllerState6
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::ControllerState6), 104 + sizeof(float)> __GlobalNamespace_OVRPlugin_ControllerState6SizeCheck;
  static_assert(sizeof(OVRPlugin::ControllerState6) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::ControllerState6::ControllerState6
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!