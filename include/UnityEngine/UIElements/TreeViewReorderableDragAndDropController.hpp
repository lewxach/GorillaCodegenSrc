// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseReorderableDragAndDropController
#include "UnityEngine/UIElements/BaseReorderableDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BaseTreeView
  class BaseTreeView;
  // Forward declaring type: IVisualElementScheduledItem
  class IVisualElementScheduledItem;
  // Skipping declaration: StartDragArgs because it is already included!
  // Skipping declaration: DragVisualMode because it is already included!
  // Forward declaring type: IListDragAndDropArgs
  class IListDragAndDropArgs;
  // Forward declaring type: ReusableCollectionItem
  class ReusableCollectionItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TreeViewReorderableDragAndDropController
  class TreeViewReorderableDragAndDropController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*, "UnityEngine.UIElements", "TreeViewReorderableDragAndDropController");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.TreeViewReorderableDragAndDropController
  // [TokenAttribute] Offset: FFFFFFFF
  class TreeViewReorderableDragAndDropController : public ::UnityEngine::UIElements::BaseReorderableDragAndDropController {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    // Nested type: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DropData
    class DropData;
    public:
    // protected UnityEngine.UIElements.TreeViewReorderableDragAndDropController/DropData m_DropData
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DropData* m_DropData;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DropData*) == 0x8);
    // protected readonly UnityEngine.UIElements.BaseTreeView m_TreeView
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UIElements::BaseTreeView* m_TreeView;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::BaseTreeView*) == 0x8);
    // private UnityEngine.UIElements.IVisualElementScheduledItem m_ExpandDropItemScheduledItem
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ExpandDropItemScheduledItem;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IVisualElementScheduledItem*) == 0x8);
    // private System.Action m_ExpandDropItemCallback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* m_ExpandDropItemCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: protected UnityEngine.UIElements.TreeViewReorderableDragAndDropController/DropData m_DropData
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DropData*& dyn_m_DropData();
    // Get instance field reference: protected readonly UnityEngine.UIElements.BaseTreeView m_TreeView
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::BaseTreeView*& dyn_m_TreeView();
    // Get instance field reference: private UnityEngine.UIElements.IVisualElementScheduledItem m_ExpandDropItemScheduledItem
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IVisualElementScheduledItem*& dyn_m_ExpandDropItemScheduledItem();
    // Get instance field reference: private System.Action m_ExpandDropItemCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_m_ExpandDropItemCallback();
    // public System.Void .ctor(UnityEngine.UIElements.BaseTreeView view)
    // Offset: 0x5642430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeViewReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseTreeView* view) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeViewReorderableDragAndDropController*, creationType>(view)));
    }
    // private System.Void RestoreExpanded(System.Collections.Generic.List`1<System.Int32> ids)
    // Offset: 0x56435EC
    void RestoreExpanded(::System::Collections::Generic::List_1<int>* ids);
    // private System.Void DelayExpandDropItem()
    // Offset: 0x5643A7C
    void DelayExpandDropItem();
    // private System.Void ExpandDropItem()
    // Offset: 0x5643CA0
    void ExpandDropItem();
    // protected override System.Int32 CompareId(System.Int32 id1, System.Int32 id2)
    // Offset: 0x5642514
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: System.Int32 BaseReorderableDragAndDropController::CompareId(System.Int32 id1, System.Int32 id2)
    int CompareId(int id1, int id2);
    // public override UnityEngine.UIElements.StartDragArgs SetupDragAndDrop(System.Collections.Generic.IEnumerable`1<System.Int32> itemIds, System.Boolean skipText)
    // Offset: 0x5642B58
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: UnityEngine.UIElements.StartDragArgs BaseReorderableDragAndDropController::SetupDragAndDrop(System.Collections.Generic.IEnumerable`1<System.Int32> itemIds, System.Boolean skipText)
    ::UnityEngine::UIElements::StartDragArgs SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int>* itemIds, bool skipText);
    // public override UnityEngine.UIElements.DragVisualMode HandleDragAndDrop(UnityEngine.UIElements.IListDragAndDropArgs args)
    // Offset: 0x5642C08
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: UnityEngine.UIElements.DragVisualMode BaseReorderableDragAndDropController::HandleDragAndDrop(UnityEngine.UIElements.IListDragAndDropArgs args)
    ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);
    // public override System.Void OnDrop(UnityEngine.UIElements.IListDragAndDropArgs args)
    // Offset: 0x5642CF0
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: System.Void BaseReorderableDragAndDropController::OnDrop(UnityEngine.UIElements.IListDragAndDropArgs args)
    void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);
    // public override System.Void DragCleanup()
    // Offset: 0x564349C
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: System.Void BaseReorderableDragAndDropController::DragCleanup()
    void DragCleanup();
    // public override System.Void HandleAutoExpand(UnityEngine.UIElements.ReusableCollectionItem item, UnityEngine.Vector2 pointerPosition)
    // Offset: 0x5643948
    // Implemented from: UnityEngine.UIElements.BaseReorderableDragAndDropController
    // Base method: System.Void BaseReorderableDragAndDropController::HandleAutoExpand(UnityEngine.UIElements.ReusableCollectionItem item, UnityEngine.Vector2 pointerPosition)
    void HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition);
  }; // UnityEngine.UIElements.TreeViewReorderableDragAndDropController
  #pragma pack(pop)
  static check_size<sizeof(TreeViewReorderableDragAndDropController), 64 + sizeof(::System::Action*)> __UnityEngine_UIElements_TreeViewReorderableDragAndDropControllerSizeCheck;
  static_assert(sizeof(TreeViewReorderableDragAndDropController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded
// Il2CppName: RestoreExpanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::System::Collections::Generic::List_1<int>*)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded)> {
  static const MethodInfo* get() {
    static auto* ids = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "RestoreExpanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ids});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem
// Il2CppName: DelayExpandDropItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "DelayExpandDropItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem
// Il2CppName: ExpandDropItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "ExpandDropItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId
// Il2CppName: CompareId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(int, int)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId)> {
  static const MethodInfo* get() {
    static auto* id1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* id2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "CompareId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id1, id2});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop
// Il2CppName: SetupDragAndDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::System::Collections::Generic::IEnumerable_1<int>*, bool)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop)> {
  static const MethodInfo* get() {
    static auto* itemIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* skipText = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "SetupDragAndDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemIds, skipText});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop
// Il2CppName: HandleDragAndDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs*)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IListDragAndDropArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "HandleDragAndDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop
// Il2CppName: OnDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs*)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IListDragAndDropArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "OnDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup
// Il2CppName: DragCleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "DragCleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand
// Il2CppName: HandleAutoExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::UnityEngine::Vector2)>(&UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")->byval_arg;
    static auto* pointerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TreeViewReorderableDragAndDropController*), "HandleAutoExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, pointerPosition});
  }
};
