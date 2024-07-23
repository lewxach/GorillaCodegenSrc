// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
#include "UnityEngine/InputSystem/LowLevel/IInputStateTypeInfo.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Forward declaring type: GyroscopeState
  struct GyroscopeState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GyroscopeState, "UnityEngine.InputSystem.LowLevel", "GyroscopeState");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.GyroscopeState
  // [TokenAttribute] Offset: FFFFFFFF
  struct GyroscopeState/*, public ::System::ValueType, public ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*/ {
    public:
    public:
    // public UnityEngine.Vector3 angularVelocity
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 angularVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: GyroscopeState
    constexpr GyroscopeState(::UnityEngine::Vector3 angularVelocity_ = {}) noexcept : angularVelocity{angularVelocity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
    operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Vector3
    constexpr operator ::UnityEngine::Vector3() const noexcept {
      return angularVelocity;
    }
    // Get instance field reference: public UnityEngine.Vector3 angularVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_angularVelocity();
    // static public UnityEngine.InputSystem.Utilities.FourCC get_kFormat()
    // Offset: 0x514B500
    static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();
    // public UnityEngine.InputSystem.Utilities.FourCC get_format()
    // Offset: 0x514B530
    ::UnityEngine::InputSystem::Utilities::FourCC get_format();
  }; // UnityEngine.InputSystem.LowLevel.GyroscopeState
  #pragma pack(pop)
  static check_size<sizeof(GyroscopeState), 0 + sizeof(::UnityEngine::Vector3)> __UnityEngine_InputSystem_LowLevel_GyroscopeStateSizeCheck;
  static_assert(sizeof(GyroscopeState) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GyroscopeState::get_kFormat
// Il2CppName: get_kFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::GyroscopeState::get_kFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::GyroscopeState), "get_kFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::GyroscopeState::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::GyroscopeState::*)()>(&UnityEngine::InputSystem::LowLevel::GyroscopeState::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::GyroscopeState), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};