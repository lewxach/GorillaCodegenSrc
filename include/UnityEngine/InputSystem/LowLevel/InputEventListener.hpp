// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IObservable`1
#include "System/IObservable_1.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: IObserver`1<T>
  template<typename T>
  class IObserver_1;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEventListener
  struct InputEventListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventListener, "UnityEngine.InputSystem.LowLevel", "InputEventListener");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputEventListener
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputEventListener/*, public ::System::ValueType, public ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputEventListener::ObserverState
    class ObserverState;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputEventListener::DisposableObserver
    class DisposableObserver;
    // Creating value type constructor for type: InputEventListener
    constexpr InputEventListener() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>
    operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() noexcept {
      return *reinterpret_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(this);
    }
    // Get static field: static UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState s_ObserverState
    static ::UnityEngine::InputSystem::LowLevel::InputEventListener::ObserverState* _get_s_ObserverState();
    // Set static field: static UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState s_ObserverState
    static void _set_s_ObserverState(::UnityEngine::InputSystem::LowLevel::InputEventListener::ObserverState* value);
    // public System.IDisposable Subscribe(System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> observer)
    // Offset: 0x514DA1C
    ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer);
  }; // UnityEngine.InputSystem.LowLevel.InputEventListener
  #pragma pack(pop)
  // static public UnityEngine.InputSystem.LowLevel.InputEventListener op_Addition(UnityEngine.InputSystem.LowLevel.InputEventListener _, System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> callback)
  // Offset: 0x51478B4
  ::UnityEngine::InputSystem::LowLevel::InputEventListener operator+(const ::UnityEngine::InputSystem::LowLevel::InputEventListener& _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>& callback);
  // static public UnityEngine.InputSystem.LowLevel.InputEventListener op_Subtraction(UnityEngine.InputSystem.LowLevel.InputEventListener _, System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> callback)
  // Offset: 0x5147B90
  ::UnityEngine::InputSystem::LowLevel::InputEventListener operator-(const ::UnityEngine::InputSystem::LowLevel::InputEventListener& _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>& callback);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe
// Il2CppName: Subscribe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (UnityEngine::InputSystem::LowLevel::InputEventListener::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe)> {
  static const MethodInfo* get() {
    static auto* observer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "IObserver`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventListener), "Subscribe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observer});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventListener::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventListener::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
