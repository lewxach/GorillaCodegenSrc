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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Skipping declaration: FourCC because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: QueryKeyboardLayoutCommand
  struct QueryKeyboardLayoutCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand
  // [TokenAttribute] Offset: FFFFFFFF
  struct QueryKeyboardLayoutCommand/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer
    struct $nameBuffer$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $nameBuffer$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $nameBuffer$e__FixedBuffer
      constexpr $nameBuffer$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
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
    }; // UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_InputSystem_LowLevel_QueryKeyboardLayoutCommand_$nameBuffer$e__FixedBufferSizeCheck;
    static_assert(sizeof(QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer) == 0x1);
    public:
    // public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand) == 0x8);
    // public UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer nameBuffer
    // Size: 0x1
    // Offset: 0x8
    ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer nameBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer) == 0x1);
    public:
    // Creating value type constructor for type: QueryKeyboardLayoutCommand
    constexpr QueryKeyboardLayoutCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand_ = {}, ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer nameBuffer_ = {}) noexcept : baseCommand{baseCommand_}, nameBuffer{nameBuffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(this);
    }
    // static field const value: static System.Int32 kMaxNameLength
    static constexpr const int kMaxNameLength = 256;
    // Get static field: static System.Int32 kMaxNameLength
    static int _get_kMaxNameLength();
    // Set static field: static System.Int32 kMaxNameLength
    static void _set_kMaxNameLength(int value);
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputDeviceCommand baseCommand
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& dyn_baseCommand();
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer nameBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer& dyn_nameBuffer();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_Type()
    // Offset: 0x514A5D4
    static ::UnityEngine::InputSystem::Utilities::FourCC get_Type();
    // public System.String ReadLayoutName()
    // Offset: 0x514A604
    ::StringW ReadLayoutName();
    // public System.Void WriteLayoutName(System.String name)
    // Offset: 0x514A614
    void WriteLayoutName(::StringW name);
    // public UnityEngine.InputSystem.Utilities.FourCC get_typeStatic()
    // Offset: 0x514A638
    ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();
    // static public UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand Create()
    // Offset: 0x514A668
    static ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand Create();
  }; // UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand
  #pragma pack(pop)
  static check_size<sizeof(QueryKeyboardLayoutCommand), 8 + sizeof(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer)> __UnityEngine_InputSystem_LowLevel_QueryKeyboardLayoutCommandSizeCheck;
  static_assert(sizeof(QueryKeyboardLayoutCommand) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::$nameBuffer$e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName
// Il2CppName: ReadLayoutName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand), "ReadLayoutName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName
// Il2CppName: WriteLayoutName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand), "WriteLayoutName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic
// Il2CppName: get_typeStatic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand), "get_typeStatic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand (*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
