// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo
#include "UnityEngine/InputSystem/LowLevel/IInputEventTypeInfo.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEvent
#include "UnityEngine/InputSystem/LowLevel/InputEvent.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEventPtr
  struct InputEventPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: DeviceConfigurationEvent
  struct DeviceConfigurationEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, "UnityEngine.InputSystem.LowLevel", "DeviceConfigurationEvent");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct DeviceConfigurationEvent/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*/ {
    public:
    public:
    // public UnityEngine.InputSystem.LowLevel.InputEvent baseEvent
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEvent) == 0x14);
    public:
    // Creating value type constructor for type: DeviceConfigurationEvent
    constexpr DeviceConfigurationEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent_ = {}) noexcept : baseEvent{baseEvent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::InputSystem::LowLevel::InputEvent
    constexpr operator ::UnityEngine::InputSystem::LowLevel::InputEvent() const noexcept {
      return baseEvent;
    }
    // static field const value: static public System.Int32 Type
    static constexpr const int Type = 1145259591;
    // Get static field: static public System.Int32 Type
    static int _get_Type();
    // Set static field: static public System.Int32 Type
    static void _set_Type(int value);
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputEvent baseEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEvent& dyn_baseEvent();
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x514C424
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // public UnityEngine.InputSystem.LowLevel.InputEventPtr ToEventPtr()
    // Offset: 0x514C430
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr();
    // static public UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent Create(System.Int32 deviceId, System.Double time)
    // Offset: 0x514C434
    static ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent Create(int deviceId, double time);
  }; // UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent
  #pragma pack(pop)
  static check_size<sizeof(DeviceConfigurationEvent), 0 + sizeof(::UnityEngine::InputSystem::LowLevel::InputEvent)> __UnityEngine_InputSystem_LowLevel_DeviceConfigurationEventSizeCheck;
  static_assert(sizeof(DeviceConfigurationEvent) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr
// Il2CppName: ToEventPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent), "ToEventPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent (*)(int, double)>(&UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, time});
  }
};
