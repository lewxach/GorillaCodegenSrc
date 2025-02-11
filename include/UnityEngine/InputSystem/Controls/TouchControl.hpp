// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputControl`1
#include "UnityEngine/InputSystem/InputControl_1.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.TouchState
#include "UnityEngine/InputSystem/LowLevel/TouchState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: TouchPressControl
  class TouchPressControl;
  // Forward declaring type: IntegerControl
  class IntegerControl;
  // Forward declaring type: Vector2Control
  class Vector2Control;
  // Forward declaring type: DeltaControl
  class DeltaControl;
  // Forward declaring type: AxisControl
  class AxisControl;
  // Forward declaring type: TouchPhaseControl
  class TouchPhaseControl;
  // Forward declaring type: ButtonControl
  class ButtonControl;
  // Forward declaring type: DoubleControl
  class DoubleControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: TouchControl
  class TouchControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::TouchControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::TouchControl*, "UnityEngine.InputSystem.Controls", "TouchControl");
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Controls.TouchControl
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class TouchControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState> {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.TouchPressControl <press>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::TouchPressControl* press;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::TouchPressControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.IntegerControl <displayIndex>k__BackingField
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::InputSystem::Controls::IntegerControl* displayIndex;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::IntegerControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.IntegerControl <touchId>k__BackingField
    // Size: 0x8
    // Offset: 0x180
    ::UnityEngine::InputSystem::Controls::IntegerControl* touchId;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::IntegerControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <position>k__BackingField
    // Size: 0x8
    // Offset: 0x188
    ::UnityEngine::InputSystem::Controls::Vector2Control* position;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.DeltaControl <delta>k__BackingField
    // Size: 0x8
    // Offset: 0x190
    ::UnityEngine::InputSystem::Controls::DeltaControl* delta;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::DeltaControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <pressure>k__BackingField
    // Size: 0x8
    // Offset: 0x198
    ::UnityEngine::InputSystem::Controls::AxisControl* pressure;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <radius>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::InputSystem::Controls::Vector2Control* radius;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    // private UnityEngine.InputSystem.Controls.TouchPhaseControl <phase>k__BackingField
    // Size: 0x8
    // Offset: 0x1A8
    ::UnityEngine::InputSystem::Controls::TouchPhaseControl* phase;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::TouchPhaseControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <indirectTouch>k__BackingField
    // Size: 0x8
    // Offset: 0x1B0
    ::UnityEngine::InputSystem::Controls::ButtonControl* indirectTouch;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <tap>k__BackingField
    // Size: 0x8
    // Offset: 0x1B8
    ::UnityEngine::InputSystem::Controls::ButtonControl* tap;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.IntegerControl <tapCount>k__BackingField
    // Size: 0x8
    // Offset: 0x1C0
    ::UnityEngine::InputSystem::Controls::IntegerControl* tapCount;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::IntegerControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.DoubleControl <startTime>k__BackingField
    // Size: 0x8
    // Offset: 0x1C8
    ::UnityEngine::InputSystem::Controls::DoubleControl* startTime;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::DoubleControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.Vector2Control <startPosition>k__BackingField
    // Size: 0x8
    // Offset: 0x1D0
    ::UnityEngine::InputSystem::Controls::Vector2Control* startPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector2Control*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.TouchPressControl <press>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::TouchPressControl*& dyn_$press$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.IntegerControl <displayIndex>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::IntegerControl*& dyn_$displayIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.IntegerControl <touchId>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::IntegerControl*& dyn_$touchId$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.DeltaControl <delta>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::DeltaControl*& dyn_$delta$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <pressure>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$pressure$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <radius>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$radius$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.TouchPhaseControl <phase>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::TouchPhaseControl*& dyn_$phase$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <indirectTouch>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$indirectTouch$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <tap>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$tap$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.IntegerControl <tapCount>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::IntegerControl*& dyn_$tapCount$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.DoubleControl <startTime>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::DoubleControl*& dyn_$startTime$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector2Control <startPosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector2Control*& dyn_$startPosition$k__BackingField();
    // public UnityEngine.InputSystem.Controls.TouchPressControl get_press()
    // Offset: 0x516DD34
    ::UnityEngine::InputSystem::Controls::TouchPressControl* get_press();
    // public System.Void set_press(UnityEngine.InputSystem.Controls.TouchPressControl value)
    // Offset: 0x516DD3C
    void set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* value);
    // public UnityEngine.InputSystem.Controls.IntegerControl get_displayIndex()
    // Offset: 0x516DD4C
    ::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex();
    // public System.Void set_displayIndex(UnityEngine.InputSystem.Controls.IntegerControl value)
    // Offset: 0x516DD54
    void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value);
    // public UnityEngine.InputSystem.Controls.IntegerControl get_touchId()
    // Offset: 0x516DD64
    ::UnityEngine::InputSystem::Controls::IntegerControl* get_touchId();
    // public System.Void set_touchId(UnityEngine.InputSystem.Controls.IntegerControl value)
    // Offset: 0x516DD6C
    void set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_position()
    // Offset: 0x516DD7C
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_position();
    // public System.Void set_position(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x516DD84
    void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.DeltaControl get_delta()
    // Offset: 0x516DD94
    ::UnityEngine::InputSystem::Controls::DeltaControl* get_delta();
    // public System.Void set_delta(UnityEngine.InputSystem.Controls.DeltaControl value)
    // Offset: 0x516DD9C
    void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_pressure()
    // Offset: 0x516DDAC
    ::UnityEngine::InputSystem::Controls::AxisControl* get_pressure();
    // public System.Void set_pressure(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516DDB4
    void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_radius()
    // Offset: 0x516DDC4
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_radius();
    // public System.Void set_radius(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x516DDCC
    void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public UnityEngine.InputSystem.Controls.TouchPhaseControl get_phase()
    // Offset: 0x516DDDC
    ::UnityEngine::InputSystem::Controls::TouchPhaseControl* get_phase();
    // public System.Void set_phase(UnityEngine.InputSystem.Controls.TouchPhaseControl value)
    // Offset: 0x516DDE4
    void set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_indirectTouch()
    // Offset: 0x516DDF4
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_indirectTouch();
    // public System.Void set_indirectTouch(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x516DDFC
    void set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_tap()
    // Offset: 0x516DE0C
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_tap();
    // public System.Void set_tap(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x516DE14
    void set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.IntegerControl get_tapCount()
    // Offset: 0x516DE24
    ::UnityEngine::InputSystem::Controls::IntegerControl* get_tapCount();
    // public System.Void set_tapCount(UnityEngine.InputSystem.Controls.IntegerControl value)
    // Offset: 0x516DE2C
    void set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* value);
    // public UnityEngine.InputSystem.Controls.DoubleControl get_startTime()
    // Offset: 0x516DE3C
    ::UnityEngine::InputSystem::Controls::DoubleControl* get_startTime();
    // public System.Void set_startTime(UnityEngine.InputSystem.Controls.DoubleControl value)
    // Offset: 0x516DE44
    void set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* value);
    // public UnityEngine.InputSystem.Controls.Vector2Control get_startPosition()
    // Offset: 0x516DE54
    ::UnityEngine::InputSystem::Controls::Vector2Control* get_startPosition();
    // public System.Void set_startPosition(UnityEngine.InputSystem.Controls.Vector2Control value)
    // Offset: 0x516DE5C
    void set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* value);
    // public System.Boolean get_isInProgress()
    // Offset: 0x516DE6C
    bool get_isInProgress();
    // public UnityEngine.InputSystem.LowLevel.TouchState ReadUnprocessedValueFromState(System.Void* statePtr)
    // Offset: 0x516E304
    ::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(void* statePtr);
    // public System.Void WriteValueIntoState(UnityEngine.InputSystem.LowLevel.TouchState value, System.Void* statePtr)
    // Offset: 0x516E328
    void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState value, void* statePtr);
    // public System.Void .ctor()
    // Offset: 0x516DEE0
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Controls::TouchControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchControl*, creationType>()));
    }
    // protected override System.Void FinishSetup()
    // Offset: 0x516DF58
    // Implemented from: UnityEngine.InputSystem.InputControl`1
    // Base method: System.Void InputControl_1::FinishSetup()
    void FinishSetup();
  }; // UnityEngine.InputSystem.Controls.TouchControl
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_press
// Il2CppName: get_press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::TouchPressControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_press)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_press
// Il2CppName: set_press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::TouchPressControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_press)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchPressControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_displayIndex
// Il2CppName: get_displayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_displayIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_displayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_displayIndex
// Il2CppName: set_displayIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_displayIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "IntegerControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_displayIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_touchId
// Il2CppName: get_touchId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_touchId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_touchId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_touchId
// Il2CppName: set_touchId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_touchId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "IntegerControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_touchId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_delta
// Il2CppName: get_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_delta
// Il2CppName: set_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::DeltaControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_delta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "DeltaControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_pressure
// Il2CppName: get_pressure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_pressure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_pressure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_pressure
// Il2CppName: set_pressure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_pressure)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_pressure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_radius
// Il2CppName: set_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_phase
// Il2CppName: get_phase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::TouchPhaseControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_phase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_phase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_phase
// Il2CppName: set_phase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::TouchPhaseControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_phase)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchPhaseControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_phase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_indirectTouch
// Il2CppName: get_indirectTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_indirectTouch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_indirectTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_indirectTouch
// Il2CppName: set_indirectTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_indirectTouch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_indirectTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_tap
// Il2CppName: get_tap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_tap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_tap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_tap
// Il2CppName: set_tap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_tap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_tap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_tapCount
// Il2CppName: get_tapCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_tapCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_tapCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_tapCount
// Il2CppName: set_tapCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_tapCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "IntegerControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_tapCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::DoubleControl* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_startTime
// Il2CppName: set_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::DoubleControl*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_startTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "DoubleControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_startPosition
// Il2CppName: get_startPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_startPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_startPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::set_startPosition
// Il2CppName: set_startPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&UnityEngine::InputSystem::Controls::TouchControl::set_startPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector2Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "set_startPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::get_isInProgress
// Il2CppName: get_isInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::get_isInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "get_isInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::ReadUnprocessedValueFromState
// Il2CppName: ReadUnprocessedValueFromState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState (UnityEngine::InputSystem::Controls::TouchControl::*)(void*)>(&UnityEngine::InputSystem::Controls::TouchControl::ReadUnprocessedValueFromState)> {
  static const MethodInfo* get() {
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "ReadUnprocessedValueFromState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::WriteValueIntoState
// Il2CppName: WriteValueIntoState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)(::UnityEngine::InputSystem::LowLevel::TouchState, void*)>(&UnityEngine::InputSystem::Controls::TouchControl::WriteValueIntoState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "TouchState")->byval_arg;
    static auto* statePtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "WriteValueIntoState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, statePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::TouchControl::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchControl::*)()>(&UnityEngine::InputSystem::Controls::TouchControl::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::TouchControl*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
