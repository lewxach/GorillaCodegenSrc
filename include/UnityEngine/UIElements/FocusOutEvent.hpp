// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.FocusEventBase`1
#include "UnityEngine/UIElements/FocusEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusOutEvent
  class FocusOutEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent*, "UnityEngine.UIElements", "FocusOutEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.FocusOutEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent*> {
    public:
    // Nested type: ::UnityEngine::UIElements::FocusOutEvent::$$c
    class $$c;
    // static private System.Void .cctor()
    // Offset: 0x564B66C
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.cctor()
    static void _cctor();
    // protected override System.Void Init()
    // Offset: 0x564B750
    // Implemented from: UnityEngine.UIElements.FocusEventBase`1
    // Base method: System.Void FocusEventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x564B7A4
    // Implemented from: UnityEngine.UIElements.FocusEventBase`1
    // Base method: System.Void FocusEventBase_1::LocalInit()
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // public System.Void .ctor()
    // Offset: 0x564B7B0
    // Implemented from: UnityEngine.UIElements.FocusEventBase`1
    // Base method: System.Void FocusEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FocusOutEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FocusOutEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FocusOutEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.FocusOutEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusOutEvent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::FocusOutEvent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusOutEvent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusOutEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusOutEvent::*)()>(&UnityEngine::UIElements::FocusOutEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusOutEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusOutEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusOutEvent::*)()>(&UnityEngine::UIElements::FocusOutEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusOutEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusOutEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!