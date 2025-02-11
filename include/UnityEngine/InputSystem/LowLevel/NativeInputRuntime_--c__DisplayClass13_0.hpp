// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.NativeInputRuntime
#include "UnityEngine/InputSystem/LowLevel/NativeInputRuntime.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputUpdateType
#include "UnityEngine/InputSystem/LowLevel/InputUpdateType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0*, "UnityEngine.InputSystem.LowLevel", "NativeInputRuntime/<>c__DisplayClass13_0");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NativeInputRuntime::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`2<UnityEngine.InputSystem.LowLevel.InputUpdateType,System.Boolean> value
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value;
    // Field size check
    static_assert(sizeof(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*
    constexpr operator ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Func`2<UnityEngine.InputSystem.LowLevel.InputUpdateType,System.Boolean> value
    [[deprecated("Use field access instead!")]] ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x5153B64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeInputRuntime::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeInputRuntime::$$c__DisplayClass13_0*, creationType>()));
    }
    // System.Boolean <set_onShouldRunUpdate>b__0(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x515420C
    bool $set_onShouldRunUpdate$b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType);
  }; // UnityEngine.InputSystem.LowLevel.NativeInputRuntime/<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(NativeInputRuntime::$$c__DisplayClass13_0), 16 + sizeof(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*)> __UnityEngine_InputSystem_LowLevel_NativeInputRuntime_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(NativeInputRuntime::$$c__DisplayClass13_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0::$set_onShouldRunUpdate$b__0
// Il2CppName: <set_onShouldRunUpdate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0::*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0::$set_onShouldRunUpdate$b__0)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::NativeInputRuntime::$$c__DisplayClass13_0*), "<set_onShouldRunUpdate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
