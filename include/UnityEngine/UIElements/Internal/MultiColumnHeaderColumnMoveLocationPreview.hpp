// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // Forward declaring type: MultiColumnHeaderColumnMoveLocationPreview
  class MultiColumnHeaderColumnMoveLocationPreview;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnMoveLocationPreview");
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.Internal.MultiColumnHeaderColumnMoveLocationPreview
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiColumnHeaderColumnMoveLocationPreview : public ::UnityEngine::UIElements::VisualElement {
    public:
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get static field: static public readonly System.String visualUssClassName
    static ::StringW _get_visualUssClassName();
    // Set static field: static public readonly System.String visualUssClassName
    static void _set_visualUssClassName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x5606A30
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnHeaderColumnMoveLocationPreview* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnHeaderColumnMoveLocationPreview*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5606B1C
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.Internal.MultiColumnHeaderColumnMoveLocationPreview
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};