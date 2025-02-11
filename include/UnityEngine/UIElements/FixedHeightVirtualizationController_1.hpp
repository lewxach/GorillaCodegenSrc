// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VerticalVirtualizationController`1
#include "UnityEngine/UIElements/VerticalVirtualizationController_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FixedHeightVirtualizationController`1<T>
  template<typename T>
  class FixedHeightVirtualizationController_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FixedHeightVirtualizationController_1, "UnityEngine.UIElements", "FixedHeightVirtualizationController`1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.FixedHeightVirtualizationController`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class FixedHeightVirtualizationController_1 : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
    public:
    // private System.Single get_resolvedItemHeight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_resolvedItemHeight() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::get_resolvedItemHeight");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_resolvedItemHeight", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // protected override System.Boolean VisibleItemPredicate(T i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.VerticalVirtualizationController`1
    // Base method: System.Boolean VerticalVirtualizationController_1::VisibleItemPredicate(T i)
    bool VisibleItemPredicate(T i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::VisibleItemPredicate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, i);
    }
    // public System.Void .ctor(UnityEngine.UIElements.BaseVerticalCollectionView collectionView)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.VerticalVirtualizationController`1
    // Base method: System.Void VerticalVirtualizationController_1::.ctor(UnityEngine.UIElements.BaseVerticalCollectionView collectionView)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedHeightVirtualizationController_1<T>*, creationType>(collectionView)));
    }
    // public override System.Int32 GetIndexFromPosition(UnityEngine.Vector2 position)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Int32 CollectionVirtualizationController::GetIndexFromPosition(UnityEngine.Vector2 position)
    int GetIndexFromPosition(::UnityEngine::Vector2 position) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::GetIndexFromPosition");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, position);
    }
    // public override System.Single GetExpectedItemHeight(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Single CollectionVirtualizationController::GetExpectedItemHeight(System.Int32 index)
    float GetExpectedItemHeight(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::GetExpectedItemHeight");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method, index);
    }
    // public override System.Single GetExpectedContentHeight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Single CollectionVirtualizationController::GetExpectedContentHeight()
    float GetExpectedContentHeight() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::GetExpectedContentHeight");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // public override System.Void ScrollToItem(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Void CollectionVirtualizationController::ScrollToItem(System.Int32 index)
    void ScrollToItem(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::ScrollToItem");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public override System.Void Resize(UnityEngine.Vector2 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Void CollectionVirtualizationController::Resize(UnityEngine.Vector2 size)
    void Resize(::UnityEngine::Vector2 size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::Resize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, size);
    }
    // public override System.Void OnScroll(UnityEngine.Vector2 scrollOffset)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.CollectionVirtualizationController
    // Base method: System.Void CollectionVirtualizationController::OnScroll(UnityEngine.Vector2 scrollOffset)
    void OnScroll(::UnityEngine::Vector2 scrollOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::OnScroll");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::CollectionVirtualizationController*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, scrollOffset);
    }
    // override T GetOrMakeItemAtIndex(System.Int32 activeItemIndex, System.Int32 scrollViewIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.VerticalVirtualizationController`1
    // Base method: T VerticalVirtualizationController_1::GetOrMakeItemAtIndex(System.Int32 activeItemIndex, System.Int32 scrollViewIndex)
    T GetOrMakeItemAtIndex(int activeItemIndex, int scrollViewIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::GetOrMakeItemAtIndex");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, activeItemIndex, scrollViewIndex);
    }
    // override System.Void EndDrag(System.Int32 dropIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.VerticalVirtualizationController`1
    // Base method: System.Void VerticalVirtualizationController_1::EndDrag(System.Int32 dropIndex)
    void EndDrag(int dropIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FixedHeightVirtualizationController_1::EndDrag");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::VerticalVirtualizationController_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, dropIndex);
    }
  }; // UnityEngine.UIElements.FixedHeightVirtualizationController`1
  // Could not write size check! Type: UnityEngine.UIElements.FixedHeightVirtualizationController`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
