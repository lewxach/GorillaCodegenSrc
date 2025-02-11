// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionAsset
  class InputActionAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
  // Forward declaring type: InputActionManager
  class InputActionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionManager");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Inputs
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class InputActionManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> m_ActionAssets
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>* m_ActionAssets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> m_ActionAssets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>*& dyn_m_ActionAssets();
    // public System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> get_actionAssets()
    // Offset: 0x54321AC
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>* get_actionAssets();
    // public System.Void set_actionAssets(System.Collections.Generic.List`1<UnityEngine.InputSystem.InputActionAsset> value)
    // Offset: 0x54321B4
    void set_actionAssets(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>* value);
    // protected System.Void OnEnable()
    // Offset: 0x5432220
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x54323B8
    void OnDisable();
    // public System.Void EnableInput()
    // Offset: 0x5432224
    void EnableInput();
    // public System.Void DisableInput()
    // Offset: 0x54323BC
    void DisableInput();
    // public System.Void .ctor()
    // Offset: 0x5432550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputActionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputActionManager*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager
  #pragma pack(pop)
  static check_size<sizeof(InputActionManager), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>*)> __UnityEngine_XR_Interaction_Toolkit_Inputs_InputActionManagerSizeCheck;
  static_assert(sizeof(InputActionManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::get_actionAssets
// Il2CppName: get_actionAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>* (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::get_actionAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "get_actionAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::set_actionAssets
// Il2CppName: set_actionAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionAsset*>*)>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::set_actionAssets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputActionAsset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "set_actionAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::EnableInput
// Il2CppName: EnableInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::EnableInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "EnableInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::DisableInput
// Il2CppName: DisableInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::*)()>(&UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::DisableInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*), "DisableInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
