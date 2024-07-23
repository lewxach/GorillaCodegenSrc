// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ScrollView
  class ScrollView;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: ReusableCollectionItem
  class ReusableCollectionItem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: CollectionVirtualizationController
  class CollectionVirtualizationController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::CollectionVirtualizationController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CollectionVirtualizationController*, "UnityEngine.UIElements", "CollectionVirtualizationController");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.CollectionVirtualizationController
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionVirtualizationController : public ::Il2CppObject {
    public:
    public:
    // protected readonly UnityEngine.UIElements.ScrollView m_ScrollView
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::ScrollView* m_ScrollView;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ScrollView*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::ScrollView*
    constexpr operator ::UnityEngine::UIElements::ScrollView*() const noexcept {
      return m_ScrollView;
    }
    // Get instance field reference: protected readonly UnityEngine.UIElements.ScrollView m_ScrollView
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ScrollView*& dyn_m_ScrollView();
    // public System.Int32 get_firstVisibleIndex()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_firstVisibleIndex();
    // protected System.Void set_firstVisibleIndex(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_firstVisibleIndex(int value);
    // public System.Int32 get_visibleItemCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_visibleItemCount();
    // protected System.Void .ctor(UnityEngine.UIElements.ScrollView scrollView)
    // Offset: 0x55A0614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionVirtualizationController* New_ctor(::UnityEngine::UIElements::ScrollView* scrollView) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::CollectionVirtualizationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionVirtualizationController*, creationType>(scrollView)));
    }
    // public System.Void Refresh(System.Boolean rebuild)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Refresh(bool rebuild);
    // public System.Void ScrollToItem(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ScrollToItem(int id);
    // public System.Void Resize(UnityEngine.Vector2 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Resize(::UnityEngine::Vector2 size);
    // public System.Void OnScroll(UnityEngine.Vector2 offset)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnScroll(::UnityEngine::Vector2 offset);
    // public System.Int32 GetIndexFromPosition(UnityEngine.Vector2 position)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetIndexFromPosition(::UnityEngine::Vector2 position);
    // public System.Single GetExpectedItemHeight(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetExpectedItemHeight(int index);
    // public System.Single GetExpectedContentHeight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetExpectedContentHeight();
    // public System.Void OnFocus(UnityEngine.UIElements.VisualElement leafTarget)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget);
    // public System.Void OnBlur(UnityEngine.UIElements.VisualElement willFocus)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnBlur(::UnityEngine::UIElements::VisualElement* willFocus);
    // public System.Void UpdateBackground()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateBackground();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem> get_activeItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();
    // System.Void StartDragItem(UnityEngine.UIElements.ReusableCollectionItem item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item);
    // System.Void EndDrag(System.Int32 dropIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void EndDrag(int dropIndex);
  }; // UnityEngine.UIElements.CollectionVirtualizationController
  #pragma pack(pop)
  static check_size<sizeof(CollectionVirtualizationController), 16 + sizeof(::UnityEngine::UIElements::ScrollView*)> __UnityEngine_UIElements_CollectionVirtualizationControllerSizeCheck;
  static_assert(sizeof(CollectionVirtualizationController) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::get_firstVisibleIndex
// Il2CppName: get_firstVisibleIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::CollectionVirtualizationController::*)()>(&UnityEngine::UIElements::CollectionVirtualizationController::get_firstVisibleIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "get_firstVisibleIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::set_firstVisibleIndex
// Il2CppName: set_firstVisibleIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(int)>(&UnityEngine::UIElements::CollectionVirtualizationController::set_firstVisibleIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "set_firstVisibleIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::get_visibleItemCount
// Il2CppName: get_visibleItemCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::CollectionVirtualizationController::*)()>(&UnityEngine::UIElements::CollectionVirtualizationController::get_visibleItemCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "get_visibleItemCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(bool)>(&UnityEngine::UIElements::CollectionVirtualizationController::Refresh)> {
  static const MethodInfo* get() {
    static auto* rebuild = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rebuild});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::ScrollToItem
// Il2CppName: ScrollToItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(int)>(&UnityEngine::UIElements::CollectionVirtualizationController::ScrollToItem)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "ScrollToItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::CollectionVirtualizationController::Resize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::OnScroll
// Il2CppName: OnScroll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::CollectionVirtualizationController::OnScroll)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "OnScroll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::GetIndexFromPosition
// Il2CppName: GetIndexFromPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::CollectionVirtualizationController::GetIndexFromPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "GetIndexFromPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::GetExpectedItemHeight
// Il2CppName: GetExpectedItemHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::CollectionVirtualizationController::*)(int)>(&UnityEngine::UIElements::CollectionVirtualizationController::GetExpectedItemHeight)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "GetExpectedItemHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::GetExpectedContentHeight
// Il2CppName: GetExpectedContentHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::CollectionVirtualizationController::*)()>(&UnityEngine::UIElements::CollectionVirtualizationController::GetExpectedContentHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "GetExpectedContentHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::OnFocus
// Il2CppName: OnFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::CollectionVirtualizationController::OnFocus)> {
  static const MethodInfo* get() {
    static auto* leafTarget = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "OnFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leafTarget});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::OnBlur
// Il2CppName: OnBlur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::CollectionVirtualizationController::OnBlur)> {
  static const MethodInfo* get() {
    static auto* willFocus = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "OnBlur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{willFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::UpdateBackground
// Il2CppName: UpdateBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)()>(&UnityEngine::UIElements::CollectionVirtualizationController::UpdateBackground)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "UpdateBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::get_activeItems
// Il2CppName: get_activeItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* (UnityEngine::UIElements::CollectionVirtualizationController::*)()>(&UnityEngine::UIElements::CollectionVirtualizationController::get_activeItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "get_activeItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::StartDragItem
// Il2CppName: StartDragItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(&UnityEngine::UIElements::CollectionVirtualizationController::StartDragItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "StartDragItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CollectionVirtualizationController::EndDrag
// Il2CppName: EndDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CollectionVirtualizationController::*)(int)>(&UnityEngine::UIElements::CollectionVirtualizationController::EndDrag)> {
  static const MethodInfo* get() {
    static auto* dropIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CollectionVirtualizationController*), "EndDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropIndex});
  }
};