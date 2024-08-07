// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.NativeInputRuntime
#include "UnityEngine/InputSystem/LowLevel/NativeInputRuntime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputUpdateDelegate
  class InputUpdateDelegate;
}
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
  // Forward declaring type: NativeInputEventBuffer
  struct NativeInputEventBuffer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass7_0");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NativeInputRuntime::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.InputSystem.LowLevel.InputUpdateDelegate value
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*
    constexpr operator ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*() const noexcept {
      return value;
    }
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputUpdateDelegate value
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x51538E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeInputRuntime::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeInputRuntime::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Void <set_onUpdate>b__0(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* eventBufferPtr)
    // Offset: 0x5154230
    void $set_onUpdate$b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::UnityEngineInternal::Input::NativeInputEventBuffer* eventBufferPtr);
  }; // UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(NativeInputRuntime::$$c__DisplayClass7_0), 16 + sizeof(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*)> __UnityEngine_InputSystem_LowLevel_NativeInputRuntime_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(NativeInputRuntime::$$c__DisplayClass7_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0::$set_onUpdate$b__0
// Il2CppName: <set_onUpdate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0::*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*)>(&UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0::$set_onUpdate$b__0)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* eventBufferPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputEventBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass7_0*), "<set_onUpdate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, eventBufferPtr});
  }
};
