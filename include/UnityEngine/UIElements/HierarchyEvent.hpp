// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: HierarchyChangeType
  struct HierarchyChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: HierarchyEvent
  class HierarchyEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::HierarchyEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyEvent*, "UnityEngine.UIElements", "HierarchyEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.HierarchyEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class HierarchyEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x56656BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HierarchyEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::HierarchyEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HierarchyEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.HierarchyChangeType changeType)
    // Offset: 0x56657C8
    void Invoke(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);
  }; // UnityEngine.UIElements.HierarchyEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::HierarchyEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::HierarchyEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::HierarchyEvent::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&UnityEngine::UIElements::HierarchyEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* changeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "HierarchyChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::HierarchyEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, changeType});
  }
};