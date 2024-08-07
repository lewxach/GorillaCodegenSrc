// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap
#include "UnityEngine/InputSystem/InputActionMap.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap/BindingJson
#include "UnityEngine/InputSystem/InputActionMap_BindingJson.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputAction
  class InputAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap::ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionMap/ReadActionJson
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionMap::ReadActionJson/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String type
    // Size: 0x8
    // Offset: 0x8
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String expectedControlType
    // Size: 0x8
    // Offset: 0x18
    ::StringW expectedControlType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String expectedControlLayout
    // Size: 0x8
    // Offset: 0x20
    ::StringW expectedControlLayout;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String processors
    // Size: 0x8
    // Offset: 0x28
    ::StringW processors;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String interactions
    // Size: 0x8
    // Offset: 0x30
    ::StringW interactions;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean passThrough
    // Size: 0x1
    // Offset: 0x38
    bool passThrough;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean initialStateCheck
    // Size: 0x1
    // Offset: 0x39
    bool initialStateCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialStateCheck and: bindings
    char __padding8[0x6] = {};
    // public UnityEngine.InputSystem.InputActionMap/BindingJson[] bindings
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson> bindings;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson>) == 0x8);
    public:
    // Creating value type constructor for type: ReadActionJson
    constexpr ReadActionJson(::StringW name_ = {}, ::StringW type_ = {}, ::StringW id_ = {}, ::StringW expectedControlType_ = {}, ::StringW expectedControlLayout_ = {}, ::StringW processors_ = {}, ::StringW interactions_ = {}, bool passThrough_ = {}, bool initialStateCheck_ = {}, ::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson> bindings_ = ::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson>(static_cast<void*>(nullptr))) noexcept : name{name_}, type{type_}, id{id_}, expectedControlType{expectedControlType_}, expectedControlLayout{expectedControlLayout_}, processors{processors_}, interactions{interactions_}, passThrough{passThrough_}, initialStateCheck{initialStateCheck_}, bindings{bindings_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.String expectedControlType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expectedControlType();
    // Get instance field reference: public System.String expectedControlLayout
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expectedControlLayout();
    // Get instance field reference: public System.String processors
    [[deprecated("Use field access instead!")]] ::StringW& dyn_processors();
    // Get instance field reference: public System.String interactions
    [[deprecated("Use field access instead!")]] ::StringW& dyn_interactions();
    // Get instance field reference: public System.Boolean passThrough
    [[deprecated("Use field access instead!")]] bool& dyn_passThrough();
    // Get instance field reference: public System.Boolean initialStateCheck
    [[deprecated("Use field access instead!")]] bool& dyn_initialStateCheck();
    // Get instance field reference: public UnityEngine.InputSystem.InputActionMap/BindingJson[] bindings
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson>& dyn_bindings();
    // public UnityEngine.InputSystem.InputAction ToAction(System.String actionName)
    // Offset: 0x5096834
    ::UnityEngine::InputSystem::InputAction* ToAction(::StringW actionName);
  }; // UnityEngine.InputSystem.InputActionMap/ReadActionJson
  #pragma pack(pop)
  static check_size<sizeof(InputActionMap::ReadActionJson), 64 + sizeof(::ArrayW<::UnityEngine::InputSystem::InputActionMap::BindingJson>)> __UnityEngine_InputSystem_InputActionMap_ReadActionJsonSizeCheck;
  static_assert(sizeof(InputActionMap::ReadActionJson) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionMap::ReadActionJson::ToAction
// Il2CppName: ToAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::InputActionMap::ReadActionJson::*)(::StringW)>(&UnityEngine::InputSystem::InputActionMap::ReadActionJson::ToAction)> {
  static const MethodInfo* get() {
    static auto* actionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionMap::ReadActionJson), "ToAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionName});
  }
};
