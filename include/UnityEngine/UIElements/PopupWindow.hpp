// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TextElement
#include "UnityEngine/UIElements/TextElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PopupWindow
  class PopupWindow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PopupWindow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PopupWindow*, "UnityEngine.UIElements", "PopupWindow");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PopupWindow
  // [TokenAttribute] Offset: FFFFFFFF
  class PopupWindow : public ::UnityEngine::UIElements::TextElement {
    public:
    // Nested type: ::UnityEngine::UIElements::PopupWindow::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::PopupWindow::UxmlTraits
    class UxmlTraits;
    public:
    // private UnityEngine.UIElements.VisualElement m_ContentContainer
    // Size: 0x8
    // Offset: 0x498
    ::UnityEngine::UIElements::VisualElement* m_ContentContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::VisualElement*
    constexpr operator ::UnityEngine::UIElements::VisualElement*() const noexcept {
      return m_ContentContainer;
    }
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String contentUssClassName
    static ::StringW _get_contentUssClassName();
    // Set static field: static public readonly System.String contentUssClassName
    static void _set_contentUssClassName(::StringW value);
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_ContentContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_ContentContainer();
    // public System.Void .ctor()
    // Offset: 0x5623D38
    // Implemented from: UnityEngine.UIElements.TextElement
    // Base method: System.Void TextElement::.ctor()
    // Base method: System.Void BindableElement::.ctor()
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PopupWindow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PopupWindow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PopupWindow*, creationType>()));
    }
    // public override UnityEngine.UIElements.VisualElement get_contentContainer()
    // Offset: 0x5623E74
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: UnityEngine.UIElements.VisualElement VisualElement::get_contentContainer()
    ::UnityEngine::UIElements::VisualElement* get_contentContainer();
    // static private System.Void .cctor()
    // Offset: 0x5623E7C
    // Implemented from: UnityEngine.UIElements.TextElement
    // Base method: System.Void TextElement::.cctor()
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.PopupWindow
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PopupWindow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::PopupWindow::get_contentContainer
// Il2CppName: get_contentContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::PopupWindow::*)()>(&UnityEngine::UIElements::PopupWindow::get_contentContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PopupWindow*), "get_contentContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PopupWindow::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::PopupWindow::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PopupWindow*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};