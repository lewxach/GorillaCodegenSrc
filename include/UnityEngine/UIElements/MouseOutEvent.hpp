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
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MouseOutEvent
  class MouseOutEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MouseOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOutEvent*, "UnityEngine.UIElements", "MouseOutEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.MouseOutEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [EventCategoryAttribute] Offset: FFFFFFFF
  class MouseOutEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOutEvent*> {
    public:
    // Nested type: ::UnityEngine::UIElements::MouseOutEvent::$$c
    class $$c;
    // static private System.Void .cctor()
    // Offset: 0x5651748
    // Implemented from: UnityEngine.UIElements.EventBase`1
    // Base method: System.Void EventBase_1::.cctor()
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x565182C
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseOutEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MouseOutEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseOutEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.MouseOutEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseOutEvent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::MouseOutEvent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseOutEvent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseOutEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
