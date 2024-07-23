// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ListViewDragger
#include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ReusableCollectionItem
  class ReusableCollectionItem;
  // Forward declaring type: BaseVerticalCollectionView
  class BaseVerticalCollectionView;
  // Forward declaring type: StartDragArgs
  struct StartDragArgs;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ListViewDraggerAnimated
  class ListViewDraggerAnimated;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDraggerAnimated);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDraggerAnimated*, "UnityEngine.UIElements", "ListViewDraggerAnimated");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0xA9
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ListViewDraggerAnimated
  // [TokenAttribute] Offset: FFFFFFFF
  class ListViewDraggerAnimated : public ::UnityEngine::UIElements::ListViewDragger {
    public:
    public:
    // private System.Int32 m_DragStartIndex
    // Size: 0x4
    // Offset: 0x78
    int m_DragStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_CurrentIndex
    // Size: 0x4
    // Offset: 0x7C
    int m_CurrentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_SelectionHeight
    // Size: 0x4
    // Offset: 0x80
    float m_SelectionHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_LocalOffsetOnStart
    // Size: 0x4
    // Offset: 0x84
    float m_LocalOffsetOnStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_CurrentPointerPosition
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 m_CurrentPointerPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: m_CurrentPointerPosition and: m_Item
    char __padding4[0x4] = {};
    // private UnityEngine.UIElements.ReusableCollectionItem m_Item
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UIElements::ReusableCollectionItem* m_Item;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ReusableCollectionItem*) == 0x8);
    // private UnityEngine.UIElements.ReusableCollectionItem m_OffsetItem
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UIElements::ReusableCollectionItem* m_OffsetItem;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ReusableCollectionItem*) == 0x8);
    // private System.Boolean <isDragging>k__BackingField
    // Size: 0x1
    // Offset: 0xA8
    bool isDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 m_DragStartIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_DragStartIndex();
    // Get instance field reference: private System.Int32 m_CurrentIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentIndex();
    // Get instance field reference: private System.Single m_SelectionHeight
    [[deprecated("Use field access instead!")]] float& dyn_m_SelectionHeight();
    // Get instance field reference: private System.Single m_LocalOffsetOnStart
    [[deprecated("Use field access instead!")]] float& dyn_m_LocalOffsetOnStart();
    // Get instance field reference: private UnityEngine.Vector3 m_CurrentPointerPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_CurrentPointerPosition();
    // Get instance field reference: private UnityEngine.UIElements.ReusableCollectionItem m_Item
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ReusableCollectionItem*& dyn_m_Item();
    // Get instance field reference: private UnityEngine.UIElements.ReusableCollectionItem m_OffsetItem
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ReusableCollectionItem*& dyn_m_OffsetItem();
    // Get instance field reference: private System.Boolean <isDragging>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isDragging$k__BackingField();
    // public System.Boolean get_isDragging()
    // Offset: 0x56407B0
    bool get_isDragging();
    // private System.Void set_isDragging(System.Boolean value)
    // Offset: 0x56407B8
    void set_isDragging(bool value);
    // public UnityEngine.UIElements.ReusableCollectionItem get_draggedItem()
    // Offset: 0x56407C4
    ::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem();
    // private System.Void Animate(UnityEngine.UIElements.ReusableCollectionItem element, System.Single paddingTop)
    // Offset: 0x5640F00
    void Animate(::UnityEngine::UIElements::ReusableCollectionItem* element, float paddingTop);
    // protected override System.Boolean get_supportsDragEvents()
    // Offset: 0x56407CC
    // Implemented from: UnityEngine.UIElements.DragEventsProcessor
    // Base method: System.Boolean DragEventsProcessor::get_supportsDragEvents()
    bool get_supportsDragEvents();
    // public System.Void .ctor(UnityEngine.UIElements.BaseVerticalCollectionView listView)
    // Offset: 0x56407D4
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: System.Void ListViewDragger::.ctor(UnityEngine.UIElements.BaseVerticalCollectionView listView)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListViewDraggerAnimated* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ListViewDraggerAnimated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListViewDraggerAnimated*, creationType>(listView)));
    }
    // protected internal override UnityEngine.UIElements.StartDragArgs StartDrag(UnityEngine.Vector3 pointerPosition)
    // Offset: 0x56407E0
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: UnityEngine.UIElements.StartDragArgs ListViewDragger::StartDrag(UnityEngine.Vector3 pointerPosition)
    ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3 pointerPosition);
    // protected internal override System.Void UpdateDrag(UnityEngine.Vector3 pointerPosition)
    // Offset: 0x564124C
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: System.Void ListViewDragger::UpdateDrag(UnityEngine.Vector3 pointerPosition)
    void UpdateDrag(::UnityEngine::Vector3 pointerPosition);
    // protected internal override System.Void OnDrop(UnityEngine.Vector3 pointerPosition)
    // Offset: 0x5641B88
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: System.Void ListViewDragger::OnDrop(UnityEngine.Vector3 pointerPosition)
    void OnDrop(::UnityEngine::Vector3 pointerPosition);
    // protected override System.Void ClearDragAndDropUI(System.Boolean dragCancelled)
    // Offset: 0x5641FB8
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: System.Void ListViewDragger::ClearDragAndDropUI(System.Boolean dragCancelled)
    void ClearDragAndDropUI(bool dragCancelled);
    // protected override System.Boolean TryGetDragPosition(UnityEngine.Vector2 pointerPosition, ref UnityEngine.UIElements.ListViewDragger/DragPosition dragPosition)
    // Offset: 0x5641FBC
    // Implemented from: UnityEngine.UIElements.ListViewDragger
    // Base method: System.Boolean ListViewDragger::TryGetDragPosition(UnityEngine.Vector2 pointerPosition, ref UnityEngine.UIElements.ListViewDragger/DragPosition dragPosition)
    bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::ListViewDragger::DragPosition> dragPosition);
  }; // UnityEngine.UIElements.ListViewDraggerAnimated
  #pragma pack(pop)
  static check_size<sizeof(ListViewDraggerAnimated), 168 + sizeof(bool)> __UnityEngine_UIElements_ListViewDraggerAnimatedSizeCheck;
  static_assert(sizeof(ListViewDraggerAnimated) == 0xA9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::get_isDragging
// Il2CppName: get_isDragging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListViewDraggerAnimated::*)()>(&UnityEngine::UIElements::ListViewDraggerAnimated::get_isDragging)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "get_isDragging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::set_isDragging
// Il2CppName: set_isDragging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListViewDraggerAnimated::*)(bool)>(&UnityEngine::UIElements::ListViewDraggerAnimated::set_isDragging)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "set_isDragging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::get_draggedItem
// Il2CppName: get_draggedItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (UnityEngine::UIElements::ListViewDraggerAnimated::*)()>(&UnityEngine::UIElements::ListViewDraggerAnimated::get_draggedItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "get_draggedItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListViewDraggerAnimated::*)(::UnityEngine::UIElements::ReusableCollectionItem*, float)>(&UnityEngine::UIElements::ListViewDraggerAnimated::Animate)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")->byval_arg;
    static auto* paddingTop = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, paddingTop});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::get_supportsDragEvents
// Il2CppName: get_supportsDragEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListViewDraggerAnimated::*)()>(&UnityEngine::UIElements::ListViewDraggerAnimated::get_supportsDragEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "get_supportsDragEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::StartDrag
// Il2CppName: StartDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs (UnityEngine::UIElements::ListViewDraggerAnimated::*)(::UnityEngine::Vector3)>(&UnityEngine::UIElements::ListViewDraggerAnimated::StartDrag)> {
  static const MethodInfo* get() {
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "StartDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListViewDraggerAnimated::*)(::UnityEngine::Vector3)>(&UnityEngine::UIElements::ListViewDraggerAnimated::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::OnDrop
// Il2CppName: OnDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListViewDraggerAnimated::*)(::UnityEngine::Vector3)>(&UnityEngine::UIElements::ListViewDraggerAnimated::OnDrop)> {
  static const MethodInfo* get() {
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "OnDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::ClearDragAndDropUI
// Il2CppName: ClearDragAndDropUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListViewDraggerAnimated::*)(bool)>(&UnityEngine::UIElements::ListViewDraggerAnimated::ClearDragAndDropUI)> {
  static const MethodInfo* get() {
    static auto* dragCancelled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "ClearDragAndDropUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dragCancelled});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ListViewDraggerAnimated::TryGetDragPosition
// Il2CppName: TryGetDragPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListViewDraggerAnimated::*)(::UnityEngine::Vector2, ByRef<::UnityEngine::UIElements::ListViewDragger::DragPosition>)>(&UnityEngine::UIElements::ListViewDraggerAnimated::TryGetDragPosition)> {
  static const MethodInfo* get() {
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* dragPosition = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ListViewDragger/DragPosition")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ListViewDraggerAnimated*), "TryGetDragPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerPosition, dragPosition});
  }
};