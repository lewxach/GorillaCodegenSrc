// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionSetupExtensions
#include "UnityEngine/InputSystem/InputActionSetupExtensions.hpp"
// Including type: UnityEngine.InputSystem.InputBinding
#include "UnityEngine/InputSystem/InputBinding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0*, "UnityEngine.InputSystem", "InputActionSetupExtensions/<>c__DisplayClass5_0");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputActionSetupExtensions/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputActionSetupExtensions::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.InputSystem.InputBinding binding
    // Size: 0x58
    // Offset: 0x10
    ::UnityEngine::InputSystem::InputBinding binding;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputBinding) == 0x58);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::InputBinding
    constexpr operator ::UnityEngine::InputSystem::InputBinding() const noexcept {
      return binding;
    }
    // Get instance field reference: public UnityEngine.InputSystem.InputBinding binding
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputBinding& dyn_binding();
    // public System.Void .ctor()
    // Offset: 0x50A5628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputActionSetupExtensions::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputActionSetupExtensions::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Boolean <RemoveAction>b__0(UnityEngine.InputSystem.InputBinding b)
    // Offset: 0x50A5630
    bool $RemoveAction$b__0(::UnityEngine::InputSystem::InputBinding b);
  }; // UnityEngine.InputSystem.InputActionSetupExtensions/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(InputActionSetupExtensions::$$c__DisplayClass5_0), 16 + sizeof(::UnityEngine::InputSystem::InputBinding)> __UnityEngine_InputSystem_InputActionSetupExtensions_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(InputActionSetupExtensions::$$c__DisplayClass5_0) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0::$RemoveAction$b__0
// Il2CppName: <RemoveAction>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0::*)(::UnityEngine::InputSystem::InputBinding)>(&UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0::$RemoveAction$b__0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBinding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionSetupExtensions::$$c__DisplayClass5_0*), "<RemoveAction>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
