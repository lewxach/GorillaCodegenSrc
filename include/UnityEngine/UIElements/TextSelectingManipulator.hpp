// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextSelectingUtilities
  class TextSelectingUtilities;
  // Forward declaring type: Event
  class Event;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextElement
  class TextElement;
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: FocusEvent
  class FocusEvent;
  // Forward declaring type: BlurEvent
  class BlurEvent;
  // Forward declaring type: KeyDownEvent
  class KeyDownEvent;
  // Forward declaring type: PointerDownEvent
  class PointerDownEvent;
  // Forward declaring type: PointerMoveEvent
  class PointerMoveEvent;
  // Forward declaring type: PointerUpEvent
  class PointerUpEvent;
  // Forward declaring type: ValidateCommandEvent
  class ValidateCommandEvent;
  // Forward declaring type: ExecuteCommandEvent
  class ExecuteCommandEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextSelectingManipulator
  class TextSelectingManipulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TextSelectingManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextSelectingManipulator*, "UnityEngine.UIElements", "TextSelectingManipulator");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.TextSelectingManipulator
  // [TokenAttribute] Offset: FFFFFFFF
  class TextSelectingManipulator : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.TextSelectingUtilities m_SelectingUtilities
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TextSelectingUtilities* m_SelectingUtilities;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextSelectingUtilities*) == 0x8);
    // private System.Boolean selectAllOnMouseUp
    // Size: 0x1
    // Offset: 0x18
    bool selectAllOnMouseUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: selectAllOnMouseUp and: m_TextElement
    char __padding1[0x7] = {};
    // private UnityEngine.UIElements.TextElement m_TextElement
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::TextElement* m_TextElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextElement*) == 0x8);
    // private UnityEngine.Vector2 m_ClickStartPosition
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 m_ClickStartPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean m_Dragged
    // Size: 0x1
    // Offset: 0x30
    bool m_Dragged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsClicking
    // Size: 0x1
    // Offset: 0x31
    bool m_IsClicking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsClicking and: m_ConsecutiveMouseDownCount
    char __padding5[0x2] = {};
    // private System.Int32 m_ConsecutiveMouseDownCount
    // Size: 0x4
    // Offset: 0x34
    int m_ConsecutiveMouseDownCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 m_LastMouseDownTimeStamp
    // Size: 0x8
    // Offset: 0x38
    int64_t m_LastMouseDownTimeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly UnityEngine.Event m_ImguiEvent
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Event* m_ImguiEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Event*) == 0x8);
    public:
    // static field const value: static private System.Int32 k_DragThresholdSqr
    static constexpr const int k_DragThresholdSqr = 16;
    // Get static field: static private System.Int32 k_DragThresholdSqr
    static int _get_k_DragThresholdSqr();
    // Set static field: static private System.Int32 k_DragThresholdSqr
    static void _set_k_DragThresholdSqr(int value);
    // Get instance field reference: UnityEngine.TextSelectingUtilities m_SelectingUtilities
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextSelectingUtilities*& dyn_m_SelectingUtilities();
    // Get instance field reference: private System.Boolean selectAllOnMouseUp
    [[deprecated("Use field access instead!")]] bool& dyn_selectAllOnMouseUp();
    // Get instance field reference: private UnityEngine.UIElements.TextElement m_TextElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextElement*& dyn_m_TextElement();
    // Get instance field reference: private UnityEngine.Vector2 m_ClickStartPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_ClickStartPosition();
    // Get instance field reference: private System.Boolean m_Dragged
    [[deprecated("Use field access instead!")]] bool& dyn_m_Dragged();
    // Get instance field reference: private System.Boolean m_IsClicking
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsClicking();
    // Get instance field reference: private System.Int32 m_ConsecutiveMouseDownCount
    [[deprecated("Use field access instead!")]] int& dyn_m_ConsecutiveMouseDownCount();
    // Get instance field reference: private System.Int64 m_LastMouseDownTimeStamp
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_LastMouseDownTimeStamp();
    // Get instance field reference: private readonly UnityEngine.Event m_ImguiEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Event*& dyn_m_ImguiEvent();
    // System.Boolean get_isClicking()
    // Offset: 0x56B52F4
    bool get_isClicking();
    // System.Void set_isClicking(System.Boolean value)
    // Offset: 0x56B52FC
    void set_isClicking(bool value);
    // public System.Void .ctor(UnityEngine.UIElements.TextElement textElement)
    // Offset: 0x56B5314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSelectingManipulator* New_ctor(::UnityEngine::UIElements::TextElement* textElement) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextSelectingManipulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSelectingManipulator*, creationType>(textElement)));
    }
    // System.Int32 get_cursorIndex()
    // Offset: 0x56B55AC
    int get_cursorIndex();
    // System.Void set_cursorIndex(System.Int32 value)
    // Offset: 0x56B55C4
    void set_cursorIndex(int value);
    // System.Int32 get_selectIndex()
    // Offset: 0x56B55E0
    int get_selectIndex();
    // System.Void set_selectIndex(System.Int32 value)
    // Offset: 0x56B55F8
    void set_selectIndex(int value);
    // private System.Void OnRevealCursor()
    // Offset: 0x56B5614
    void OnRevealCursor();
    // private System.Void OnSelectIndexChange()
    // Offset: 0x56B5634
    void OnSelectIndexChange();
    // private System.Void OnCursorIndexChange()
    // Offset: 0x56B5798
    void OnCursorIndexChange();
    // System.Boolean RevealCursor()
    // Offset: 0x56B58E0
    bool RevealCursor();
    // System.Boolean HasSelection()
    // Offset: 0x56B577C
    bool HasSelection();
    // System.Boolean HasFocus()
    // Offset: 0x56B58FC
    bool HasFocus();
    // System.Void ExecuteDefaultActionAtTarget(UnityEngine.UIElements.EventBase evt)
    // Offset: 0x56B5950
    void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);
    // private System.Void OnFocusEvent(UnityEngine.UIElements.FocusEvent evt)
    // Offset: 0x56B5B9C
    void OnFocusEvent(::UnityEngine::UIElements::FocusEvent* evt);
    // private System.Void OnBlurEvent(UnityEngine.UIElements.BlurEvent evt)
    // Offset: 0x56B5DD0
    void OnBlurEvent(::UnityEngine::UIElements::BlurEvent* evt);
    // private System.Void OnKeyDown(UnityEngine.UIElements.KeyDownEvent evt)
    // Offset: 0x56B61F4
    void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);
    // private System.Void OnPointerDownEvent(UnityEngine.UIElements.PointerDownEvent evt)
    // Offset: 0x56B5E80
    void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);
    // private System.Void OnPointerMoveEvent(UnityEngine.UIElements.PointerMoveEvent evt)
    // Offset: 0x56B6264
    void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);
    // private System.Void OnPointerUpEvent(UnityEngine.UIElements.PointerUpEvent evt)
    // Offset: 0x56B6470
    void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);
    // private System.Void OnValidateCommandEvent(UnityEngine.UIElements.ValidateCommandEvent evt)
    // Offset: 0x56B652C
    void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt);
    // private System.Void OnExecuteCommandEvent(UnityEngine.UIElements.ExecuteCommandEvent evt)
    // Offset: 0x56B66AC
    void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt);
    // private System.Boolean MoveDistanceQualifiesForDrag(UnityEngine.Vector2 start, UnityEngine.Vector2 current)
    // Offset: 0x56B67C8
    bool MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current);
  }; // UnityEngine.UIElements.TextSelectingManipulator
  #pragma pack(pop)
  static check_size<sizeof(TextSelectingManipulator), 64 + sizeof(::UnityEngine::Event*)> __UnityEngine_UIElements_TextSelectingManipulatorSizeCheck;
  static_assert(sizeof(TextSelectingManipulator) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::get_isClicking
// Il2CppName: get_isClicking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::get_isClicking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "get_isClicking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::set_isClicking
// Il2CppName: set_isClicking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(bool)>(&UnityEngine::UIElements::TextSelectingManipulator::set_isClicking)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "set_isClicking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::get_cursorIndex
// Il2CppName: get_cursorIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::get_cursorIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "get_cursorIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::set_cursorIndex
// Il2CppName: set_cursorIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(int)>(&UnityEngine::UIElements::TextSelectingManipulator::set_cursorIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "set_cursorIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::get_selectIndex
// Il2CppName: get_selectIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::get_selectIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "get_selectIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::set_selectIndex
// Il2CppName: set_selectIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(int)>(&UnityEngine::UIElements::TextSelectingManipulator::set_selectIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "set_selectIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnRevealCursor
// Il2CppName: OnRevealCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::OnRevealCursor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnRevealCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnSelectIndexChange
// Il2CppName: OnSelectIndexChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::OnSelectIndexChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnSelectIndexChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnCursorIndexChange
// Il2CppName: OnCursorIndexChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::OnCursorIndexChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnCursorIndexChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::RevealCursor
// Il2CppName: RevealCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::RevealCursor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "RevealCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::HasSelection
// Il2CppName: HasSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::HasSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "HasSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::HasFocus
// Il2CppName: HasFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextSelectingManipulator::*)()>(&UnityEngine::UIElements::TextSelectingManipulator::HasFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "HasFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::ExecuteDefaultActionAtTarget
// Il2CppName: ExecuteDefaultActionAtTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::TextSelectingManipulator::ExecuteDefaultActionAtTarget)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "ExecuteDefaultActionAtTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnFocusEvent
// Il2CppName: OnFocusEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::FocusEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnFocusEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnFocusEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnBlurEvent
// Il2CppName: OnBlurEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::BlurEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnBlurEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BlurEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnBlurEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnKeyDown
// Il2CppName: OnKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::KeyDownEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnKeyDown)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "KeyDownEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnPointerDownEvent
// Il2CppName: OnPointerDownEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerDownEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnPointerDownEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDownEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnPointerDownEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnPointerMoveEvent
// Il2CppName: OnPointerMoveEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnPointerMoveEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerMoveEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnPointerMoveEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnPointerUpEvent
// Il2CppName: OnPointerUpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::PointerUpEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnPointerUpEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerUpEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnPointerUpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnValidateCommandEvent
// Il2CppName: OnValidateCommandEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::ValidateCommandEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnValidateCommandEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ValidateCommandEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnValidateCommandEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::OnExecuteCommandEvent
// Il2CppName: OnExecuteCommandEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::UIElements::ExecuteCommandEvent*)>(&UnityEngine::UIElements::TextSelectingManipulator::OnExecuteCommandEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ExecuteCommandEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "OnExecuteCommandEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TextSelectingManipulator::MoveDistanceQualifiesForDrag
// Il2CppName: MoveDistanceQualifiesForDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TextSelectingManipulator::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::UIElements::TextSelectingManipulator::MoveDistanceQualifiesForDrag)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* current = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TextSelectingManipulator*), "MoveDistanceQualifiesForDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, current});
  }
};