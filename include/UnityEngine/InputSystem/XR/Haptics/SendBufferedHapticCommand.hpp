// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo
#include "UnityEngine/InputSystem/LowLevel/IInputDeviceCommandInfo.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputDeviceCommand
#include "UnityEngine/InputSystem/LowLevel/InputDeviceCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: FourCC because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.XR.Haptics
namespace UnityEngine::InputSystem::XR::Haptics {
  // Forward declaring type: SendBufferedHapticCommand
  struct SendBufferedHapticCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand");
// Type namespace: UnityEngine.InputSystem.XR.Haptics
namespace UnityEngine::InputSystem::XR::Haptics {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand
  // [TokenAttribute] Offset: FFFFFFFF
  struct SendBufferedHapticCommand/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer
    struct $buffer$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $buffer$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $buffer$e__FixedBuffer
      constexpr $buffer$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(SendBufferedHapticCommand::$buffer$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_$buffer$e__FixedBufferSizeCheck;
    static_assert(sizeof(SendBufferedHapticCommand::$buffer$e__FixedBuffer) == 0x1);
    public:
    // private UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand) == 0x8);
    // private System.Int32 channel
    // Size: 0x4
    // Offset: 0x8
    int channel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufferSize
    // Size: 0x4
    // Offset: 0xC
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer buffer
    // Size: 0x1
    // Offset: 0x10
    ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer buffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer) == 0x1);
    public:
    // Creating value type constructor for type: SendBufferedHapticCommand
    constexpr SendBufferedHapticCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand_ = {}, int channel_ = {}, int bufferSize_ = {}, ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer buffer_ = {}) noexcept : baseCommand{baseCommand_}, channel{channel_}, bufferSize{bufferSize_}, buffer{buffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(this);
    }
    // static field const value: static private System.Int32 kMaxHapticBufferSize
    static constexpr const int kMaxHapticBufferSize = 1024;
    // Get static field: static private System.Int32 kMaxHapticBufferSize
    static int _get_kMaxHapticBufferSize();
    // Set static field: static private System.Int32 kMaxHapticBufferSize
    static void _set_kMaxHapticBufferSize(int value);
    // static field const value: static private System.Int32 kSize
    static constexpr const int kSize = 1040;
    // Get static field: static private System.Int32 kSize
    static int _get_kSize();
    // Set static field: static private System.Int32 kSize
    static void _set_kSize(int value);
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& dyn_baseCommand();
    // Get instance field reference: private System.Int32 channel
    [[deprecated("Use field access instead!")]] int& dyn_channel();
    // Get instance field reference: private System.Int32 bufferSize
    [[deprecated("Use field access instead!")]] int& dyn_bufferSize();
    // Get instance field reference: private UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer buffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer& dyn_buffer();
    // static private UnityEngine.InputSystem.Utilities.FourCC get_Type()
    // Offset: 0x512B118
    static ::UnityEngine::InputSystem::Utilities::FourCC get_Type();
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x512B148
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // static public UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand Create(System.Byte[] rumbleBuffer)
    // Offset: 0x512AE38
    static ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand Create(::ArrayW<uint8_t> rumbleBuffer);
  }; // UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand
  #pragma pack(pop)
  static check_size<sizeof(SendBufferedHapticCommand), 16 + sizeof(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer)> __UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommandSizeCheck;
  static_assert(sizeof(SendBufferedHapticCommand) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::$buffer$e__FixedBuffer, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand/<buffer>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::*)()>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand (*)(::ArrayW<uint8_t>)>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create)> {
  static const MethodInfo* get() {
    static auto* rumbleBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rumbleBuffer});
  }
};
