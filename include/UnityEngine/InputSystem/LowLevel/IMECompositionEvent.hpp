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
// Including type: UnityEngine.InputSystem.LowLevel.IMECompositionString
#include "UnityEngine/InputSystem/LowLevel/IMECompositionString.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: IMECompositionEvent
  struct IMECompositionEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, "UnityEngine.InputSystem.LowLevel", "IMECompositionEvent");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x1A
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.IMECompositionEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct IMECompositionEvent/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*/ {
    public:
    public:
    // public UnityEngine.InputSystem.LowLevel.InputEvent baseEvent
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEvent) == 0x14);
    // public UnityEngine.InputSystem.LowLevel.IMECompositionString compositionString
    // Size: 0x6
    // Offset: 0x14
    ::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::IMECompositionString) == 0x6);
    public:
    // Creating value type constructor for type: IMECompositionEvent
    constexpr IMECompositionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent_ = {}, ::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString_ = {}) noexcept : baseEvent{baseEvent_}, compositionString{compositionString_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(this);
    }
    // static field const value: static System.Int32 kIMECharBufferSize
    static constexpr const int kIMECharBufferSize = 64;
    // Get static field: static System.Int32 kIMECharBufferSize
    static int _get_kIMECharBufferSize();
    // Set static field: static System.Int32 kIMECharBufferSize
    static void _set_kIMECharBufferSize(int value);
    // static field const value: static public System.Int32 Type
    static constexpr const int Type = 1229800787;
    // Get static field: static public System.Int32 Type
    static int _get_Type();
    // Set static field: static public System.Int32 Type
    static void _set_Type(int value);
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputEvent baseEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEvent& dyn_baseEvent();
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.IMECompositionString compositionString
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::IMECompositionString& dyn_compositionString();
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x514C5BC
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // static public UnityEngine.InputSystem.LowLevel.IMECompositionEvent Create(System.Int32 deviceId, System.String compositionString, System.Double time)
    // Offset: 0x514C5C8
    static ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent Create(int deviceId, ::StringW compositionString, double time);
  }; // UnityEngine.InputSystem.LowLevel.IMECompositionEvent
  #pragma pack(pop)
  static check_size<sizeof(IMECompositionEvent), 20 + sizeof(::UnityEngine::InputSystem::LowLevel::IMECompositionString)> __UnityEngine_InputSystem_LowLevel_IMECompositionEventSizeCheck;
  static_assert(sizeof(IMECompositionEvent) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::IMECompositionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::IMECompositionEvent), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent (*)(int, ::StringW, double)>(&UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* compositionString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::IMECompositionEvent), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, compositionString, time});
  }
};