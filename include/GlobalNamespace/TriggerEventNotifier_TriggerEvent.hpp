// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TriggerEventNotifier
#include "GlobalNamespace/TriggerEventNotifier.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TriggerEventNotifier::TriggerEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerEventNotifier::TriggerEvent*, "", "TriggerEventNotifier/TriggerEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: TriggerEventNotifier/TriggerEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TriggerEventNotifier::TriggerEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2774D74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerEventNotifier::TriggerEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TriggerEventNotifier::TriggerEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerEventNotifier::TriggerEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(TriggerEventNotifier notifier, UnityEngine.Collider collider)
    // Offset: 0x2782DE8
    void Invoke(::GlobalNamespace::TriggerEventNotifier* notifier, ::UnityEngine::Collider* collider);
    // public System.IAsyncResult BeginInvoke(TriggerEventNotifier notifier, UnityEngine.Collider collider, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2782DFC
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::TriggerEventNotifier* notifier, ::UnityEngine::Collider* collider, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2782E24
    void EndInvoke(::System::IAsyncResult* result);
  }; // TriggerEventNotifier/TriggerEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TriggerEventNotifier::TriggerEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TriggerEventNotifier::TriggerEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TriggerEventNotifier::TriggerEvent::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&GlobalNamespace::TriggerEventNotifier::TriggerEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* notifier = &::il2cpp_utils::GetClassFromName("", "TriggerEventNotifier")->byval_arg;
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerEventNotifier::TriggerEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notifier, collider});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TriggerEventNotifier::TriggerEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::TriggerEventNotifier::TriggerEvent::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::TriggerEventNotifier::TriggerEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* notifier = &::il2cpp_utils::GetClassFromName("", "TriggerEventNotifier")->byval_arg;
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerEventNotifier::TriggerEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notifier, collider, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TriggerEventNotifier::TriggerEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TriggerEventNotifier::TriggerEvent::*)(::System::IAsyncResult*)>(&GlobalNamespace::TriggerEventNotifier::TriggerEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerEventNotifier::TriggerEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};