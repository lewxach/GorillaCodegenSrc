// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionAsset
#include "UnityEngine/InputSystem/InputActionAsset.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap/WriteMapJson
#include "UnityEngine/InputSystem/InputActionMap_WriteMapJson.hpp"
// Including type: UnityEngine.InputSystem.InputControlScheme/SchemeJson
#include "UnityEngine/InputSystem/InputControlScheme_SchemeJson.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionAsset::WriteFileJson, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJson");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionAsset/WriteFileJson
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionAsset::WriteFileJson/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.InputSystem.InputActionMap/WriteMapJson[] maps
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::UnityEngine::InputSystem::InputActionMap::WriteMapJson> maps;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::InputActionMap::WriteMapJson>) == 0x8);
    // public UnityEngine.InputSystem.InputControlScheme/SchemeJson[] controlSchemes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson> controlSchemes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson>) == 0x8);
    public:
    // Creating value type constructor for type: WriteFileJson
    constexpr WriteFileJson(::StringW name_ = {}, ::ArrayW<::UnityEngine::InputSystem::InputActionMap::WriteMapJson> maps_ = ::ArrayW<::UnityEngine::InputSystem::InputActionMap::WriteMapJson>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson> controlSchemes_ = ::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson>(static_cast<void*>(nullptr))) noexcept : name{name_}, maps{maps_}, controlSchemes{controlSchemes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public UnityEngine.InputSystem.InputActionMap/WriteMapJson[] maps
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::InputActionMap::WriteMapJson>& dyn_maps();
    // Get instance field reference: public UnityEngine.InputSystem.InputControlScheme/SchemeJson[] controlSchemes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson>& dyn_controlSchemes();
  }; // UnityEngine.InputSystem.InputActionAsset/WriteFileJson
  #pragma pack(pop)
  static check_size<sizeof(InputActionAsset::WriteFileJson), 16 + sizeof(::ArrayW<::UnityEngine::InputSystem::InputControlScheme::SchemeJson>)> __UnityEngine_InputSystem_InputActionAsset_WriteFileJsonSizeCheck;
  static_assert(sizeof(InputActionAsset::WriteFileJson) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"