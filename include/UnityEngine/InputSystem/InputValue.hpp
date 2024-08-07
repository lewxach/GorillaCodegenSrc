// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.InputSystem.InputAction/CallbackContext
#include "UnityEngine/InputSystem/InputAction_CallbackContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputValue
  class InputValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputValue*, "UnityEngine.InputSystem", "InputValue");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.InputValue
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  class InputValue : public ::Il2CppObject {
    public:
    public:
    // System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> m_Context
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> m_Context;
    public:
    // Creating conversion operator: operator ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext>
    constexpr operator ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext>() const noexcept {
      return m_Context;
    }
    // Get instance field reference: System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> m_Context
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext>& dyn_m_Context();
    // public System.Object Get()
    // Offset: 0x511CD00
    ::Il2CppObject* Get();
    // public TValue Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    TValue Get() {
      static_assert(std::is_convertible_v<TValue, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputValue::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method);
    }
    // public System.Boolean get_isPressed()
    // Offset: 0x511CD64
    bool get_isPressed();
    // public System.Void .ctor()
    // Offset: 0x511CDE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputValue*, creationType>()));
    }
  }; // UnityEngine.InputSystem.InputValue
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputValue::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputValue::*)()>(&UnityEngine::InputSystem::InputValue::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputValue*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputValue::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputValue::get_isPressed
// Il2CppName: get_isPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputValue::*)()>(&UnityEngine::InputSystem::InputValue::get_isPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputValue*), "get_isPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
