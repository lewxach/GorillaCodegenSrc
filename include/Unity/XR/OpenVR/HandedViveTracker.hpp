// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.OpenVR.ViveTracker
#include "Unity/XR/OpenVR/ViveTracker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: AxisControl
  class AxisControl;
  // Forward declaring type: ButtonControl
  class ButtonControl;
}
// Completed forward declares
// Type namespace: Unity.XR.OpenVR
namespace Unity::XR::OpenVR {
  // Forward declaring type: HandedViveTracker
  class HandedViveTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::OpenVR::HandedViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::HandedViveTracker*, "Unity.XR.OpenVR", "HandedViveTracker");
// Type namespace: Unity.XR.OpenVR
namespace Unity::XR::OpenVR {
  // Size: 0x1C8
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.OpenVR.HandedViveTracker
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <grip>k__BackingField
    // Size: 0x8
    // Offset: 0x1A0
    ::UnityEngine::InputSystem::Controls::AxisControl* grip;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <gripPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x1A8
    ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <primary>k__BackingField
    // Size: 0x8
    // Offset: 0x1B0
    ::UnityEngine::InputSystem::Controls::ButtonControl* primary;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <trackpadPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x1B8
    ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.ButtonControl <triggerPressed>k__BackingField
    // Size: 0x8
    // Offset: 0x1C0
    ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <grip>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$grip$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <gripPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$gripPressed$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <primary>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$primary$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <trackpadPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$trackpadPressed$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <triggerPressed>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$triggerPressed$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_grip()
    // Offset: 0x508C640
    ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();
    // private System.Void set_grip(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x508C648
    void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_gripPressed()
    // Offset: 0x508C658
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();
    // private System.Void set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C660
    void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_primary()
    // Offset: 0x508C670
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();
    // private System.Void set_primary(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C678
    void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_trackpadPressed()
    // Offset: 0x508C688
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();
    // private System.Void set_trackpadPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C690
    void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_triggerPressed()
    // Offset: 0x508C6A0
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();
    // private System.Void set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x508C6A8
    void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // protected override System.Void FinishSetup()
    // Offset: 0x508C6B8
    // Implemented from: Unity.XR.OpenVR.ViveTracker
    // Base method: System.Void ViveTracker::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x508C82C
    // Implemented from: Unity.XR.OpenVR.ViveTracker
    // Base method: System.Void ViveTracker::.ctor()
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandedViveTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::OpenVR::HandedViveTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandedViveTracker*, creationType>()));
    }
  }; // Unity.XR.OpenVR.HandedViveTracker
  #pragma pack(pop)
  static check_size<sizeof(HandedViveTracker), 448 + sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*)> __Unity_XR_OpenVR_HandedViveTrackerSizeCheck;
  static_assert(sizeof(HandedViveTracker) == 0x1C8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::get_grip
// Il2CppName: get_grip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::get_grip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "get_grip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::set_grip
// Il2CppName: set_grip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&Unity::XR::OpenVR::HandedViveTracker::set_grip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "set_grip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::get_gripPressed
// Il2CppName: get_gripPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::get_gripPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "get_gripPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::set_gripPressed
// Il2CppName: set_gripPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::HandedViveTracker::set_gripPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "set_gripPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::get_primary
// Il2CppName: get_primary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::get_primary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "get_primary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::set_primary
// Il2CppName: set_primary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::HandedViveTracker::set_primary)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "set_primary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::get_trackpadPressed
// Il2CppName: get_trackpadPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::get_trackpadPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "get_trackpadPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::set_trackpadPressed
// Il2CppName: set_trackpadPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::HandedViveTracker::set_trackpadPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "set_trackpadPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::get_triggerPressed
// Il2CppName: get_triggerPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::get_triggerPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "get_triggerPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::set_triggerPressed
// Il2CppName: set_triggerPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::OpenVR::HandedViveTracker::set_triggerPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "set_triggerPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::OpenVR::HandedViveTracker::*)()>(&Unity::XR::OpenVR::HandedViveTracker::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::OpenVR::HandedViveTracker*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::OpenVR::HandedViveTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
