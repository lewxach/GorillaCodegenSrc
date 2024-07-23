// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputBindingComposite
#include "UnityEngine/InputSystem/InputBindingComposite.hpp"
// Including type: UnityEngine.InputSystem.InputBindingCompositeContext
#include "UnityEngine/InputSystem/InputBindingCompositeContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputBindingComposite`1<TValue>
  template<typename TValue>
  class InputBindingComposite_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputBindingComposite_1, "UnityEngine.InputSystem", "InputBindingComposite`1");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.InputBindingComposite`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class InputBindingComposite_1 : public ::UnityEngine::InputSystem::InputBindingComposite {
    public:
    // public TValue ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::ReadValue");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, byref(context));
    }
    // public override System.Type get_valueType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Type InputBindingComposite::get_valueType()
    ::System::Type* get_valueType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::get_valueType");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::InputBindingComposite*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // public override System.Int32 get_valueSizeInBytes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Int32 InputBindingComposite::get_valueSizeInBytes()
    int get_valueSizeInBytes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::get_valueSizeInBytes");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::InputBindingComposite*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Void ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context, System.Void* buffer, System.Int32 bufferSize)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Void InputBindingComposite::ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context, System.Void* buffer, System.Int32 bufferSize)
    void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::ReadValue");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::InputBindingComposite*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(context), buffer, bufferSize);
    }
    // public override System.Object ReadValueAsObject(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Object InputBindingComposite::ReadValueAsObject(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    ::Il2CppObject* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::ReadValueAsObject");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::InputSystem::InputBindingComposite*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, byref(context));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Void InputBindingComposite::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputBindingComposite_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputBindingComposite_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputBindingComposite_1<TValue>*, creationType>()));
    }
  }; // UnityEngine.InputSystem.InputBindingComposite`1
  // Could not write size check! Type: UnityEngine.InputSystem.InputBindingComposite`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"