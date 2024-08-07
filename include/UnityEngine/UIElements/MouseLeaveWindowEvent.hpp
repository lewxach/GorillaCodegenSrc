// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MouseEventBase`1
#include "UnityEngine/UIElements/MouseEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPanel
  class IPanel;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Event
  class Event;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MouseLeaveWindowEvent
  class MouseLeaveWindowEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveWindowEvent*, "UnityEngine.UIElements", "MouseLeaveWindowEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.MouseLeaveWindowEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [EventCategoryAttribute] Offset: FFFFFFFF
  class MouseLeaveWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveWindowEvent*> {
    public:
    // Nested type: ::UnityEngine::UIElements::MouseLeaveWindowEvent::$$c
    class $$c;
    // static public UnityEngine.UIElements.MouseLeaveWindowEvent GetPooled(UnityEngine.Event systemEvent)
    // Offset: 0x5651210
    static ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* systemEvent);
    // static private System.Void .cctor()
    // Offset: 0x5650FE8
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.cctor()
    static void _cctor();
    // protected override System.Void Init()
    // Offset: 0x56510CC
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x565111C
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::LocalInit()
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // public System.Void .ctor()
    // Offset: 0x56511C0
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseLeaveWindowEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MouseLeaveWindowEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseLeaveWindowEvent*, creationType>()));
    }
    // protected internal override System.Void PostDispatch(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5651340
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::PostDispatch(UnityEngine.UIElements.IPanel panel)
    void PostDispatch(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.MouseLeaveWindowEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseLeaveWindowEvent* (*)(::UnityEngine::Event*)>(&UnityEngine::UIElements::MouseLeaveWindowEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* systemEvent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveWindowEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::MouseLeaveWindowEvent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveWindowEvent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseLeaveWindowEvent::*)()>(&UnityEngine::UIElements::MouseLeaveWindowEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveWindowEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseLeaveWindowEvent::*)()>(&UnityEngine::UIElements::MouseLeaveWindowEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveWindowEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseLeaveWindowEvent::PostDispatch
// Il2CppName: PostDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MouseLeaveWindowEvent::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::MouseLeaveWindowEvent::PostDispatch)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseLeaveWindowEvent*), "PostDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
