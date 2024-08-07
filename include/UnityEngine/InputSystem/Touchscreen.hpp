// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Pointer
#include "UnityEngine/InputSystem/Pointer.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IEventMerger
#include "UnityEngine/InputSystem/LowLevel/IEventMerger.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.ICustomDeviceReset
#include "UnityEngine/InputSystem/LowLevel/ICustomDeviceReset.hpp"
// Including type: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
#include "UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: TouchControl
  class TouchControl;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEventPtr
  struct InputEventPtr;
  // Forward declaring type: TouchState
  struct TouchState;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Skipping declaration: InputControl because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: Touchscreen
  class Touchscreen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Touchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Touchscreen*, "UnityEngine.InputSystem", "Touchscreen");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Touchscreen
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class Touchscreen : public ::UnityEngine::InputSystem::Pointer/*, public ::UnityEngine::InputSystem::LowLevel::IEventMerger, public ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*/ {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.TouchControl <primaryTouch>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::InputSystem::Controls::TouchControl* primaryTouch;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::TouchControl*) == 0x8);
    // private UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> <touches>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x1A8
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> touches;
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IEventMerger
    operator ::UnityEngine::InputSystem::LowLevel::IEventMerger() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset
    operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(this);
    }
    // Get static field: static private UnityEngine.InputSystem.Touchscreen <current>k__BackingField
    static ::UnityEngine::InputSystem::Touchscreen* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.Touchscreen <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);
    // Get static field: static System.Single s_TapTime
    static float _get_s_TapTime();
    // Set static field: static System.Single s_TapTime
    static void _set_s_TapTime(float value);
    // Get static field: static System.Single s_TapDelayTime
    static float _get_s_TapDelayTime();
    // Set static field: static System.Single s_TapDelayTime
    static void _set_s_TapDelayTime(float value);
    // Get static field: static System.Single s_TapRadiusSquared
    static float _get_s_TapRadiusSquared();
    // Set static field: static System.Single s_TapRadiusSquared
    static void _set_s_TapRadiusSquared(float value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.TouchControl <primaryTouch>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::TouchControl*& dyn_$primaryTouch$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> <touches>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>& dyn_$touches$k__BackingField();
    // public UnityEngine.InputSystem.Controls.TouchControl get_primaryTouch()
    // Offset: 0x510ABE0
    ::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch();
    // protected System.Void set_primaryTouch(UnityEngine.InputSystem.Controls.TouchControl value)
    // Offset: 0x510ABE8
    void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value);
    // public UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> get_touches()
    // Offset: 0x510ABF8
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches();
    // protected System.Void set_touches(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> value)
    // Offset: 0x510AC04
    void set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value);
    // protected UnityEngine.InputSystem.Controls.TouchControl[] get_touchControlArray()
    // Offset: 0x510AC18
    ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> get_touchControlArray();
    // protected System.Void set_touchControlArray(UnityEngine.InputSystem.Controls.TouchControl[] value)
    // Offset: 0x510AC20
    void set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> value);
    // static public UnityEngine.InputSystem.Touchscreen get_current()
    // Offset: 0x510AC9C
    static ::UnityEngine::InputSystem::Touchscreen* get_current();
    // static System.Void set_current(UnityEngine.InputSystem.Touchscreen value)
    // Offset: 0x510ACE4
    static void set_current(::UnityEngine::InputSystem::Touchscreen* value);
    // private System.Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
    // Offset: 0x510BC10
    void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();
    // private System.Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x510BC14
    void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // private System.Boolean UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent(UnityEngine.InputSystem.InputControl control, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr, ref System.UInt32 offset)
    // Offset: 0x510BC18
    bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint> offset);
    // private System.Void UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset()
    // Offset: 0x510BE50
    void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset();
    // static System.Boolean MergeForward(UnityEngine.InputSystem.LowLevel.InputEventPtr currentEventPtr, UnityEngine.InputSystem.LowLevel.InputEventPtr nextEventPtr)
    // Offset: 0x510C1F4
    static bool MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);
    // private System.Boolean UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward(UnityEngine.InputSystem.LowLevel.InputEventPtr currentEventPtr, UnityEngine.InputSystem.LowLevel.InputEventPtr nextEventPtr)
    // Offset: 0x510C30C
    bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr);
    // static private System.Void TriggerTap(UnityEngine.InputSystem.Controls.TouchControl control, ref UnityEngine.InputSystem.LowLevel.TouchState state, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x510BB44
    static void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> state, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // public override System.Void MakeCurrent()
    // Offset: 0x510AD3C
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0x510AD9C
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0x510AE38
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::FinishSetup()
    void FinishSetup();
    // protected System.Void OnNextUpdate()
    // Offset: 0x510B238
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::OnNextUpdate()
    // Base method: System.Void Pointer::UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
    void OnNextUpdate();
    // protected System.Void OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x510B510
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Base method: System.Void Pointer::UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // public System.Void .ctor()
    // Offset: 0x510C318
    // Implemented from: UnityEngine.InputSystem.Pointer
    // Base method: System.Void Pointer::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Touchscreen* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Touchscreen::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Touchscreen*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Touchscreen
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::get_primaryTouch
// Il2CppName: get_primaryTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::get_primaryTouch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "get_primaryTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::set_primaryTouch
// Il2CppName: set_primaryTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(&UnityEngine::InputSystem::Touchscreen::set_primaryTouch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "set_primaryTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::get_touches
// Il2CppName: get_touches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::get_touches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "get_touches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::set_touches
// Il2CppName: set_touches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>)>(&UnityEngine::InputSystem::Touchscreen::set_touches)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchControl")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "set_touches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::get_touchControlArray
// Il2CppName: get_touchControlArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::get_touchControlArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "get_touchControlArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::set_touchControlArray
// Il2CppName: set_touchControlArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*>)>(&UnityEngine::InputSystem::Touchscreen::set_touchControlArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchControl"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "set_touchControlArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Touchscreen* (*)()>(&UnityEngine::InputSystem::Touchscreen::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&UnityEngine::InputSystem::Touchscreen::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "Touchscreen")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent
// Il2CppName: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ByRef<uint>)>(&UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, eventPtr, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset
// Il2CppName: UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::MergeForward
// Il2CppName: MergeForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Touchscreen::MergeForward)> {
  static const MethodInfo* get() {
    static auto* currentEventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* nextEventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "MergeForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentEventPtr, nextEventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
// Il2CppName: UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  static const MethodInfo* get() {
    static auto* currentEventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* nextEventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentEventPtr, nextEventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::TriggerTap
// Il2CppName: TriggerTap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Controls::TouchControl*, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Touchscreen::TriggerTap)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "TouchControl")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "TouchState")->this_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "TriggerTap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, state, eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::OnNextUpdate
// Il2CppName: OnNextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)()>(&UnityEngine::InputSystem::Touchscreen::OnNextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "OnNextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::OnStateEvent
// Il2CppName: OnStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::Touchscreen::OnStateEvent)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Touchscreen*), "OnStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Touchscreen::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
