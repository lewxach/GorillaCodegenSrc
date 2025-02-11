// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
  // Forward declaring type: InputDeviceCharacteristics
  struct InputDeviceCharacteristics;
  // Forward declaring type: ConnectionChangeType
  struct ConnectionChangeType;
  // Forward declaring type: HapticCapabilities
  struct HapticCapabilities;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputDevices
  class InputDevices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevices
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  class InputDevices : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> s_InputDeviceList
    static ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* _get_s_InputDeviceList();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> s_InputDeviceList
    static void _set_s_InputDeviceList(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceConnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static void _set_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceDisconnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static void _set_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceConfigChanged();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static void _set_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static public UnityEngine.XR.InputDevice GetDeviceAtXRNode(UnityEngine.XR.XRNode node)
    // Offset: 0x57144BC
    static ::UnityEngine::XR::InputDevice GetDeviceAtXRNode(::UnityEngine::XR::XRNode node);
    // static public System.Void GetDevicesAtXRNode(UnityEngine.XR.XRNode node, System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> inputDevices)
    // Offset: 0x5714500
    static void GetDevicesAtXRNode(::UnityEngine::XR::XRNode node, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* inputDevices);
    // static public System.Void GetDevices(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> inputDevices)
    // Offset: 0x57147DC
    static void GetDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* inputDevices);
    // static public System.Void GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics desiredCharacteristics, System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> inputDevices)
    // Offset: 0x57148CC
    static void GetDevicesWithCharacteristics(::UnityEngine::XR::InputDeviceCharacteristics desiredCharacteristics, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* inputDevices);
    // static public System.Void add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice> value)
    // Offset: 0x5714BF4
    static void add_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static public System.Void remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice> value)
    // Offset: 0x5714CC4
    static void remove_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static public System.Void add_deviceDisconnected(System.Action`1<UnityEngine.XR.InputDevice> value)
    // Offset: 0x5714D94
    static void add_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static public System.Void remove_deviceDisconnected(System.Action`1<UnityEngine.XR.InputDevice> value)
    // Offset: 0x5714E64
    static void remove_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static private System.Void InvokeConnectionEvent(System.UInt64 deviceId, UnityEngine.XR.ConnectionChangeType change)
    // Offset: 0x5714F34
    static void InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change);
    // static private System.Void GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> inputDevices)
    // Offset: 0x5714890
    static void GetDevices_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* inputDevices);
    // static System.Boolean SendHapticImpulse(System.UInt64 deviceId, System.UInt32 channel, System.Single amplitude, System.Single duration)
    // Offset: 0x5713944
    static bool SendHapticImpulse(uint64_t deviceId, uint channel, float amplitude, float duration);
    // static System.Boolean TryGetHapticCapabilities(System.UInt64 deviceId, out UnityEngine.XR.HapticCapabilities capabilities)
    // Offset: 0x5713A40
    static bool TryGetHapticCapabilities(uint64_t deviceId, ByRef<::UnityEngine::XR::HapticCapabilities> capabilities);
    // static System.Boolean TryGetFeatureValue_bool(System.UInt64 deviceId, System.String usage, out System.Boolean value)
    // Offset: 0x5713B38
    static bool TryGetFeatureValue_bool(uint64_t deviceId, ::StringW usage, ByRef<bool> value);
    // static System.Boolean TryGetFeatureValue_UInt32(System.UInt64 deviceId, System.String usage, out System.UInt32 value)
    // Offset: 0x571405C
    static bool TryGetFeatureValue_UInt32(uint64_t deviceId, ::StringW usage, ByRef<uint> value);
    // static System.Boolean TryGetFeatureValue_float(System.UInt64 deviceId, System.String usage, out System.Single value)
    // Offset: 0x5713C40
    static bool TryGetFeatureValue_float(uint64_t deviceId, ::StringW usage, ByRef<float> value);
    // static System.Boolean TryGetFeatureValue_Vector2f(System.UInt64 deviceId, System.String usage, out UnityEngine.Vector2 value)
    // Offset: 0x5713D48
    static bool TryGetFeatureValue_Vector2f(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Vector2> value);
    // static System.Boolean TryGetFeatureValue_Vector3f(System.UInt64 deviceId, System.String usage, out UnityEngine.Vector3 value)
    // Offset: 0x5713E50
    static bool TryGetFeatureValue_Vector3f(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Vector3> value);
    // static System.Boolean TryGetFeatureValue_Quaternionf(System.UInt64 deviceId, System.String usage, out UnityEngine.Quaternion value)
    // Offset: 0x5713F58
    static bool TryGetFeatureValue_Quaternionf(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Quaternion> value);
    // static System.Boolean IsDeviceValid(System.UInt64 deviceId)
    // Offset: 0x57136E0
    static bool IsDeviceValid(uint64_t deviceId);
    // static System.String GetDeviceName(System.UInt64 deviceId)
    // Offset: 0x5713778
    static ::StringW GetDeviceName(uint64_t deviceId);
    // static UnityEngine.XR.InputDeviceCharacteristics GetDeviceCharacteristics(System.UInt64 deviceId)
    // Offset: 0x5713810
    static ::UnityEngine::XR::InputDeviceCharacteristics GetDeviceCharacteristics(uint64_t deviceId);
  }; // UnityEngine.XR.InputDevices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDeviceAtXRNode
// Il2CppName: GetDeviceAtXRNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDevice (*)(::UnityEngine::XR::XRNode)>(&UnityEngine::XR::InputDevices::GetDeviceAtXRNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDeviceAtXRNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDevicesAtXRNode
// Il2CppName: GetDevicesAtXRNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::XRNode, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::GetDevicesAtXRNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* inputDevices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDevicesAtXRNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, inputDevices});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDevices
// Il2CppName: GetDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::GetDevices)> {
  static const MethodInfo* get() {
    static auto* inputDevices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevices});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDevicesWithCharacteristics
// Il2CppName: GetDevicesWithCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::InputDeviceCharacteristics, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::GetDevicesWithCharacteristics)> {
  static const MethodInfo* get() {
    static auto* desiredCharacteristics = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDeviceCharacteristics")->byval_arg;
    static auto* inputDevices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDevicesWithCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desiredCharacteristics, inputDevices});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::add_deviceConnected
// Il2CppName: add_deviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::add_deviceConnected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "add_deviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::remove_deviceConnected
// Il2CppName: remove_deviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::remove_deviceConnected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "remove_deviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::add_deviceDisconnected
// Il2CppName: add_deviceDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::add_deviceDisconnected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "add_deviceDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::remove_deviceDisconnected
// Il2CppName: remove_deviceDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::remove_deviceDisconnected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "remove_deviceDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::InvokeConnectionEvent
// Il2CppName: InvokeConnectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* change = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "ConnectionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "InvokeConnectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, change});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDevices_Internal
// Il2CppName: GetDevices_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&UnityEngine::XR::InputDevices::GetDevices_Internal)> {
  static const MethodInfo* get() {
    static auto* inputDevices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDevices_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevices});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::SendHapticImpulse
// Il2CppName: SendHapticImpulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, uint, float, float)>(&UnityEngine::XR::InputDevices::SendHapticImpulse)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "SendHapticImpulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, channel, amplitude, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetHapticCapabilities
// Il2CppName: TryGetHapticCapabilities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ByRef<::UnityEngine::XR::HapticCapabilities>)>(&UnityEngine::XR::InputDevices::TryGetHapticCapabilities)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* capabilities = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "HapticCapabilities")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetHapticCapabilities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, capabilities});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_bool
// Il2CppName: TryGetFeatureValue_bool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<bool>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_bool)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_bool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32
// Il2CppName: TryGetFeatureValue_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<uint>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_float
// Il2CppName: TryGetFeatureValue_float
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<float>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_float)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_float", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f
// Il2CppName: TryGetFeatureValue_Vector2f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<::UnityEngine::Vector2>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_Vector2f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f
// Il2CppName: TryGetFeatureValue_Vector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_Vector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf
// Il2CppName: TryGetFeatureValue_Quaternionf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::StringW, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* usage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "TryGetFeatureValue_Quaternionf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, usage, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::IsDeviceValid
// Il2CppName: IsDeviceValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t)>(&UnityEngine::XR::InputDevices::IsDeviceValid)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "IsDeviceValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDeviceName
// Il2CppName: GetDeviceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t)>(&UnityEngine::XR::InputDevices::GetDeviceName)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDeviceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::GetDeviceCharacteristics
// Il2CppName: GetDeviceCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)(uint64_t)>(&UnityEngine::XR::InputDevices::GetDeviceCharacteristics)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "GetDeviceCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId});
  }
};
