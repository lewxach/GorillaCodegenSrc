// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MultiColumnTreeViewController
#include "UnityEngine/UIElements/MultiColumnTreeViewController.hpp"
// Including type: UnityEngine.UIElements.TreeViewItemData`1
#include "UnityEngine/UIElements/TreeViewItemData_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TreeDataController`1<T>
  template<typename T>
  class TreeDataController_1;
  // Forward declaring type: Columns
  class Columns;
  // Forward declaring type: SortColumnDescriptions
  class SortColumnDescriptions;
  // Forward declaring type: SortColumnDescription
  class SortColumnDescription;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DefaultMultiColumnTreeViewController`1<T>
  template<typename T>
  class DefaultMultiColumnTreeViewController_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1, "UnityEngine.UIElements", "DefaultMultiColumnTreeViewController`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.DefaultMultiColumnTreeViewController`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class DefaultMultiColumnTreeViewController_1 : public ::UnityEngine::UIElements::MultiColumnTreeViewController {
    public:
    public:
    // private UnityEngine.UIElements.TreeDataController`1<T> m_TreeDataController
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::TreeDataController_1<T>* m_TreeDataController;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TreeDataController_1<T>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::UnityEngine::UIElements::MultiColumnController*
    constexpr operator ::UnityEngine::UIElements::MultiColumnController*() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.UIElements.TreeDataController`1<T> m_TreeDataController
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TreeDataController_1<T>*& dyn_m_TreeDataController() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::dyn_m_TreeDataController");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_TreeDataController"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::TreeDataController_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private UnityEngine.UIElements.TreeDataController`1<T> get_treeDataController()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::TreeDataController_1<T>* get_treeDataController() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::get_treeDataController");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_treeDataController", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::UIElements::TreeDataController_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void SetRootItems(System.Collections.Generic.IList`1<UnityEngine.UIElements.TreeViewItemData`1<T>> items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::SetRootItems");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, items);
    }
    // private System.Boolean IsChildOf(System.Int32 childId, System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsChildOf(int childId, int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::IsChildOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsChildOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(childId), ::il2cpp_utils::ExtractType(id)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, childId, id);
    }
    // public System.Void .ctor(UnityEngine.UIElements.Columns columns, UnityEngine.UIElements.SortColumnDescriptions sortDescriptions, System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> sortedColumns)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.MultiColumnTreeViewController
    // Base method: System.Void MultiColumnTreeViewController::.ctor(UnityEngine.UIElements.Columns columns, UnityEngine.UIElements.SortColumnDescriptions sortDescriptions, System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> sortedColumns)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultMultiColumnTreeViewController_1<T>* New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultMultiColumnTreeViewController_1<T>*, creationType>(columns, sortDescriptions, sortedColumns)));
    }
    // public override System.Collections.IList get_itemsSource()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Collections.IList BaseTreeViewController::get_itemsSource()
    ::System::Collections::IList* get_itemsSource() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::get_itemsSource");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal__method);
    }
    // public override System.Void set_itemsSource(System.Collections.IList value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Void BaseTreeViewController::set_itemsSource(System.Collections.IList value)
    void set_itemsSource(::System::Collections::IList* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::set_itemsSource");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public override System.Object GetItemForIndex(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionViewController
    // Base method: System.Object CollectionViewController::GetItemForIndex(System.Int32 index)
    ::Il2CppObject* GetItemForIndex(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::GetItemForIndex");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, index);
    }
    // public override System.Int32 GetParentId(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Int32 BaseTreeViewController::GetParentId(System.Int32 id)
    int GetParentId(int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::GetParentId");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, id);
    }
    // public override System.Boolean HasChildren(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Boolean BaseTreeViewController::HasChildren(System.Int32 id)
    bool HasChildren(int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::HasChildren");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, id);
    }
    // public override System.Collections.Generic.IEnumerable`1<System.Int32> GetChildrenIds(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Collections.Generic.IEnumerable`1<System.Int32> BaseTreeViewController::GetChildrenIds(System.Int32 id)
    ::System::Collections::Generic::IEnumerable_1<int>* GetChildrenIds(int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::GetChildrenIds");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int>*, false>(this, ___internal__method, id);
    }
    // public override System.Void Move(System.Int32 id, System.Int32 newParentId, System.Int32 childIndex, System.Boolean rebuildTree)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Void BaseTreeViewController::Move(System.Int32 id, System.Int32 newParentId, System.Int32 childIndex, System.Boolean rebuildTree)
    void Move(int id, int newParentId, int childIndex, bool rebuildTree) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::Move");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, id, newParentId, childIndex, rebuildTree);
    }
    // public override System.Collections.Generic.IEnumerable`1<System.Int32> GetAllItemIds(System.Collections.Generic.IEnumerable`1<System.Int32> rootIds)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseTreeViewController
    // Base method: System.Collections.Generic.IEnumerable`1<System.Int32> BaseTreeViewController::GetAllItemIds(System.Collections.Generic.IEnumerable`1<System.Int32> rootIds)
    ::System::Collections::Generic::IEnumerable_1<int>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int>* rootIds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultMultiColumnTreeViewController_1::GetAllItemIds");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseTreeViewController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int>*, false>(this, ___internal__method, rootIds);
    }
  }; // UnityEngine.UIElements.DefaultMultiColumnTreeViewController`1
  // Could not write size check! Type: UnityEngine.UIElements.DefaultMultiColumnTreeViewController`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
