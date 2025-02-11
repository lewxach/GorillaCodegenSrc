// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
// Including type: UnityEngine.UIElements.TwoPaneSplitViewOrientation
#include "UnityEngine/UIElements/TwoPaneSplitViewOrientation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TwoPaneSplitViewResizer
  class TwoPaneSplitViewResizer;
  // Forward declaring type: GeometryChangedEvent
  class GeometryChangedEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TwoPaneSplitView
  class TwoPaneSplitView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView*, "UnityEngine.UIElements", "TwoPaneSplitView");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.TwoPaneSplitView
  // [TokenAttribute] Offset: FFFFFFFF
  class TwoPaneSplitView : public ::UnityEngine::UIElements::VisualElement {
    public:
    // Nested type: ::UnityEngine::UIElements::TwoPaneSplitView::UxmlFactory
    class UxmlFactory;
    // Nested type: ::UnityEngine::UIElements::TwoPaneSplitView::UxmlTraits
    class UxmlTraits;
    public:
    // private UnityEngine.UIElements.VisualElement m_LeftPane
    // Size: 0x8
    // Offset: 0x3C0
    ::UnityEngine::UIElements::VisualElement* m_LeftPane;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_RightPane
    // Size: 0x8
    // Offset: 0x3C8
    ::UnityEngine::UIElements::VisualElement* m_RightPane;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_FixedPane
    // Size: 0x8
    // Offset: 0x3D0
    ::UnityEngine::UIElements::VisualElement* m_FixedPane;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_FlexedPane
    // Size: 0x8
    // Offset: 0x3D8
    ::UnityEngine::UIElements::VisualElement* m_FlexedPane;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private System.Single m_FixedPaneDimension
    // Size: 0x4
    // Offset: 0x3E0
    float m_FixedPaneDimension;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.UIElements.VisualElement m_DragLine
    // Size: 0x8
    // Offset: 0x3E8
    ::UnityEngine::UIElements::VisualElement* m_DragLine;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElement m_DragLineAnchor
    // Size: 0x8
    // Offset: 0x3F0
    ::UnityEngine::UIElements::VisualElement* m_DragLineAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private System.Boolean m_CollapseMode
    // Size: 0x1
    // Offset: 0x3F8
    bool m_CollapseMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.UIElements.VisualElement m_Content
    // Size: 0x8
    // Offset: 0x400
    ::UnityEngine::UIElements::VisualElement* m_Content;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.TwoPaneSplitViewOrientation m_Orientation
    // Size: 0x4
    // Offset: 0x408
    ::UnityEngine::UIElements::TwoPaneSplitViewOrientation m_Orientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TwoPaneSplitViewOrientation) == 0x4);
    // private System.Int32 m_FixedPaneIndex
    // Size: 0x4
    // Offset: 0x40C
    int m_FixedPaneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_FixedPaneInitialDimension
    // Size: 0x4
    // Offset: 0x410
    float m_FixedPaneInitialDimension;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // UnityEngine.UIElements.TwoPaneSplitViewResizer m_Resizer
    // Size: 0x8
    // Offset: 0x418
    ::UnityEngine::UIElements::TwoPaneSplitViewResizer* m_Resizer;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TwoPaneSplitViewResizer*) == 0x8);
    public:
    // Get static field: static private readonly System.String s_UssClassName
    static ::StringW _get_s_UssClassName();
    // Set static field: static private readonly System.String s_UssClassName
    static void _set_s_UssClassName(::StringW value);
    // Get static field: static private readonly System.String s_ContentContainerClassName
    static ::StringW _get_s_ContentContainerClassName();
    // Set static field: static private readonly System.String s_ContentContainerClassName
    static void _set_s_ContentContainerClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineClassName
    static ::StringW _get_s_HandleDragLineClassName();
    // Set static field: static private readonly System.String s_HandleDragLineClassName
    static void _set_s_HandleDragLineClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineVerticalClassName
    static ::StringW _get_s_HandleDragLineVerticalClassName();
    // Set static field: static private readonly System.String s_HandleDragLineVerticalClassName
    static void _set_s_HandleDragLineVerticalClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineHorizontalClassName
    static ::StringW _get_s_HandleDragLineHorizontalClassName();
    // Set static field: static private readonly System.String s_HandleDragLineHorizontalClassName
    static void _set_s_HandleDragLineHorizontalClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineAnchorClassName
    static ::StringW _get_s_HandleDragLineAnchorClassName();
    // Set static field: static private readonly System.String s_HandleDragLineAnchorClassName
    static void _set_s_HandleDragLineAnchorClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineAnchorVerticalClassName
    static ::StringW _get_s_HandleDragLineAnchorVerticalClassName();
    // Set static field: static private readonly System.String s_HandleDragLineAnchorVerticalClassName
    static void _set_s_HandleDragLineAnchorVerticalClassName(::StringW value);
    // Get static field: static private readonly System.String s_HandleDragLineAnchorHorizontalClassName
    static ::StringW _get_s_HandleDragLineAnchorHorizontalClassName();
    // Set static field: static private readonly System.String s_HandleDragLineAnchorHorizontalClassName
    static void _set_s_HandleDragLineAnchorHorizontalClassName(::StringW value);
    // Get static field: static private readonly System.String s_VerticalClassName
    static ::StringW _get_s_VerticalClassName();
    // Set static field: static private readonly System.String s_VerticalClassName
    static void _set_s_VerticalClassName(::StringW value);
    // Get static field: static private readonly System.String s_HorizontalClassName
    static ::StringW _get_s_HorizontalClassName();
    // Set static field: static private readonly System.String s_HorizontalClassName
    static void _set_s_HorizontalClassName(::StringW value);
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_LeftPane
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_LeftPane();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_RightPane
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_RightPane();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_FixedPane
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_FixedPane();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_FlexedPane
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_FlexedPane();
    // Get instance field reference: private System.Single m_FixedPaneDimension
    [[deprecated("Use field access instead!")]] float& dyn_m_FixedPaneDimension();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_DragLine
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_DragLine();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_DragLineAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_DragLineAnchor();
    // Get instance field reference: private System.Boolean m_CollapseMode
    [[deprecated("Use field access instead!")]] bool& dyn_m_CollapseMode();
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Content
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Content();
    // Get instance field reference: private UnityEngine.UIElements.TwoPaneSplitViewOrientation m_Orientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& dyn_m_Orientation();
    // Get instance field reference: private System.Int32 m_FixedPaneIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_FixedPaneIndex();
    // Get instance field reference: private System.Single m_FixedPaneInitialDimension
    [[deprecated("Use field access instead!")]] float& dyn_m_FixedPaneInitialDimension();
    // Get instance field reference: UnityEngine.UIElements.TwoPaneSplitViewResizer m_Resizer
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TwoPaneSplitViewResizer*& dyn_m_Resizer();
    // public UnityEngine.UIElements.VisualElement get_fixedPane()
    // Offset: 0x5630DFC
    ::UnityEngine::UIElements::VisualElement* get_fixedPane();
    // public UnityEngine.UIElements.VisualElement get_flexedPane()
    // Offset: 0x5630E04
    ::UnityEngine::UIElements::VisualElement* get_flexedPane();
    // public System.Int32 get_fixedPaneIndex()
    // Offset: 0x5630E0C
    int get_fixedPaneIndex();
    // public UnityEngine.UIElements.TwoPaneSplitViewOrientation get_orientation()
    // Offset: 0x5630E14
    ::UnityEngine::UIElements::TwoPaneSplitViewOrientation get_orientation();
    // System.Single get_fixedPaneDimension()
    // Offset: 0x5630E1C
    float get_fixedPaneDimension();
    // System.Void set_fixedPaneDimension(System.Single value)
    // Offset: 0x5630E50
    void set_fixedPaneDimension(float value);
    // System.Void Init(System.Int32 fixedPaneIndex, System.Single fixedPaneInitialDimension, UnityEngine.UIElements.TwoPaneSplitViewOrientation orientation)
    // Offset: 0x56310AC
    void Init(int fixedPaneIndex, float fixedPaneInitialDimension, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation);
    // private System.Void OnPostDisplaySetup(UnityEngine.UIElements.GeometryChangedEvent evt)
    // Offset: 0x56325C4
    void OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent* evt);
    // private System.Void PostDisplaySetup()
    // Offset: 0x5631394
    void PostDisplaySetup();
    // private System.Void OnSizeChange(UnityEngine.UIElements.GeometryChangedEvent evt)
    // Offset: 0x56327A8
    void OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent* evt);
    // private System.Void UpdateLayout(System.Boolean updateFixedPane, System.Boolean updateDragLine)
    // Offset: 0x56327B4
    void UpdateLayout(bool updateFixedPane, bool updateDragLine);
    // private System.Void SetDragLineOffset(System.Single offset)
    // Offset: 0x56331B0
    void SetDragLineOffset(float offset);
    // private System.Void SetFixedPaneDimension(System.Single dimension)
    // Offset: 0x56332D8
    void SetFixedPaneDimension(float dimension);
    // public System.Void .ctor()
    // Offset: 0x5630E6C
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.ctor()
    // Base method: System.Void Focusable::.ctor()
    // Base method: System.Void CallbackEventHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwoPaneSplitView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TwoPaneSplitView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwoPaneSplitView*, creationType>()));
    }
    // public override UnityEngine.UIElements.VisualElement get_contentContainer()
    // Offset: 0x5633400
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: UnityEngine.UIElements.VisualElement VisualElement::get_contentContainer()
    ::UnityEngine::UIElements::VisualElement* get_contentContainer();
    // override System.Void OnViewDataReady()
    // Offset: 0x5633408
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::OnViewDataReady()
    void OnViewDataReady();
    // static private System.Void .cctor()
    // Offset: 0x5633444
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.TwoPaneSplitView
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_fixedPane
// Il2CppName: get_fixedPane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_fixedPane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_fixedPane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_flexedPane
// Il2CppName: get_flexedPane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_flexedPane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_flexedPane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneIndex
// Il2CppName: get_fixedPaneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_fixedPaneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_orientation
// Il2CppName: get_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TwoPaneSplitViewOrientation (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneDimension
// Il2CppName: get_fixedPaneDimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_fixedPaneDimension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_fixedPaneDimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::set_fixedPaneDimension
// Il2CppName: set_fixedPaneDimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(float)>(&UnityEngine::UIElements::TwoPaneSplitView::set_fixedPaneDimension)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "set_fixedPaneDimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(int, float, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation)>(&UnityEngine::UIElements::TwoPaneSplitView::Init)> {
  static const MethodInfo* get() {
    static auto* fixedPaneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fixedPaneInitialDimension = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TwoPaneSplitViewOrientation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixedPaneIndex, fixedPaneInitialDimension, orientation});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::OnPostDisplaySetup
// Il2CppName: OnPostDisplaySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&UnityEngine::UIElements::TwoPaneSplitView::OnPostDisplaySetup)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "GeometryChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "OnPostDisplaySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::PostDisplaySetup
// Il2CppName: PostDisplaySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::PostDisplaySetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "PostDisplaySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange
// Il2CppName: OnSizeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&UnityEngine::UIElements::TwoPaneSplitView::OnSizeChange)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "GeometryChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "OnSizeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::UpdateLayout
// Il2CppName: UpdateLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(bool, bool)>(&UnityEngine::UIElements::TwoPaneSplitView::UpdateLayout)> {
  static const MethodInfo* get() {
    static auto* updateFixedPane = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateDragLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "UpdateLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateFixedPane, updateDragLine});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::SetDragLineOffset
// Il2CppName: SetDragLineOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(float)>(&UnityEngine::UIElements::TwoPaneSplitView::SetDragLineOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "SetDragLineOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::SetFixedPaneDimension
// Il2CppName: SetFixedPaneDimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)(float)>(&UnityEngine::UIElements::TwoPaneSplitView::SetFixedPaneDimension)> {
  static const MethodInfo* get() {
    static auto* dimension = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "SetFixedPaneDimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimension});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::get_contentContainer
// Il2CppName: get_contentContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::get_contentContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "get_contentContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::OnViewDataReady
// Il2CppName: OnViewDataReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TwoPaneSplitView::*)()>(&UnityEngine::UIElements::TwoPaneSplitView::OnViewDataReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), "OnViewDataReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TwoPaneSplitView::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::TwoPaneSplitView::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TwoPaneSplitView*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
