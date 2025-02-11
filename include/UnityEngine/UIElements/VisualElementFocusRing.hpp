// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.IFocusRing
#include "UnityEngine/UIElements/IFocusRing.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: FocusController
  class FocusController;
  // Skipping declaration: DefaultFocusOrder because it is already included!
  // Forward declaring type: Focusable
  class Focusable;
  // Forward declaring type: FocusChangeDirection
  class FocusChangeDirection;
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElementFocusRing
  class VisualElementFocusRing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusRing*, "UnityEngine.UIElements", "VisualElementFocusRing");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualElementFocusRing
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualElementFocusRing : public ::Il2CppObject/*, public ::UnityEngine::UIElements::IFocusRing*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder
    struct DefaultFocusOrder;
    // Nested type: ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord
    class FocusRingRecord;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder
    // [TokenAttribute] Offset: FFFFFFFF
    struct DefaultFocusOrder/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DefaultFocusOrder
      constexpr DefaultFocusOrder(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder ChildOrder
      static constexpr const int ChildOrder = 0;
      // Get static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder ChildOrder
      static ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder _get_ChildOrder();
      // Set static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder ChildOrder
      static void _set_ChildOrder(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder value);
      // static field const value: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionXY
      static constexpr const int PositionXY = 1;
      // Get static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionXY
      static ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder _get_PositionXY();
      // Set static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionXY
      static void _set_PositionXY(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder value);
      // static field const value: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionYX
      static constexpr const int PositionYX = 2;
      // Get static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionYX
      static ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder _get_PositionYX();
      // Set static field: static public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder PositionYX
      static void _set_PositionYX(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder
    #pragma pack(pop)
    static check_size<sizeof(VisualElementFocusRing::DefaultFocusOrder), 0 + sizeof(int)> __UnityEngine_UIElements_VisualElementFocusRing_DefaultFocusOrderSizeCheck;
    static_assert(sizeof(VisualElementFocusRing::DefaultFocusOrder) == 0x4);
    public:
    // private readonly UnityEngine.UIElements.VisualElement root
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::VisualElement* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder <defaultFocusOrder>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder defaultFocusOrder;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder) == 0x4);
    // Padding between fields: defaultFocusOrder and: m_FocusRing
    char __padding1[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord> m_FocusRing
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>* m_FocusRing;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IFocusRing
    operator ::UnityEngine::UIElements::IFocusRing() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IFocusRing*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.UIElements.VisualElement root
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_root();
    // Get instance field reference: private UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder <defaultFocusOrder>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder& dyn_$defaultFocusOrder$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord> m_FocusRing
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>*& dyn_m_FocusRing();
    // public System.Void .ctor(UnityEngine.UIElements.VisualElement root, UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder dfo)
    // Offset: 0x55C26E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualElementFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder dfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualElementFocusRing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualElementFocusRing*, creationType>(root, dfo)));
    }
    // private UnityEngine.UIElements.FocusController get_focusController()
    // Offset: 0x55C2790
    ::UnityEngine::UIElements::FocusController* get_focusController();
    // public UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder get_defaultFocusOrder()
    // Offset: 0x55C27B4
    ::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder get_defaultFocusOrder();
    // public System.Void set_defaultFocusOrder(UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder value)
    // Offset: 0x55C27BC
    void set_defaultFocusOrder(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder value);
    // private System.Int32 FocusRingAutoIndexSort(UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord a, UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord b)
    // Offset: 0x55C27C4
    int FocusRingAutoIndexSort(::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord* a, ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord* b);
    // private System.Int32 FocusRingSort(UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord a, UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord b)
    // Offset: 0x55C2ADC
    int FocusRingSort(::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord* a, ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord* b);
    // private System.Void DoUpdate()
    // Offset: 0x55C2BCC
    void DoUpdate();
    // private System.Void BuildRingForScopeRecursive(UnityEngine.UIElements.VisualElement ve, ref System.Int32 scopeIndex, System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord> scopeList)
    // Offset: 0x55C2C9C
    void BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement* ve, ByRef<int> scopeIndex, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>* scopeList);
    // private System.Void SortAndFlattenScopeLists(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord> rootScopeList)
    // Offset: 0x55C2FCC
    void SortAndFlattenScopeLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>* rootScopeList);
    // private System.Int32 GetFocusableInternalIndex(UnityEngine.UIElements.Focusable f)
    // Offset: 0x55C32AC
    int GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable* f);
    // public UnityEngine.UIElements.FocusChangeDirection GetFocusChangeDirection(UnityEngine.UIElements.Focusable currentFocusable, UnityEngine.UIElements.EventBase e)
    // Offset: 0x55C3354
    ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);
    // public UnityEngine.UIElements.Focusable GetNextFocusable(UnityEngine.UIElements.Focusable currentFocusable, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0x55C370C
    ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // static UnityEngine.UIElements.Focusable GetNextFocusableInTree(UnityEngine.UIElements.VisualElement currentFocusable)
    // Offset: 0x55C3B00
    static ::UnityEngine::UIElements::Focusable* GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable);
    // static UnityEngine.UIElements.Focusable GetPreviousFocusableInTree(UnityEngine.UIElements.VisualElement currentFocusable)
    // Offset: 0x55C3B9C
    static ::UnityEngine::UIElements::Focusable* GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable);
  }; // UnityEngine.UIElements.VisualElementFocusRing
  #pragma pack(pop)
  static check_size<sizeof(VisualElementFocusRing), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>*)> __UnityEngine_UIElements_VisualElementFocusRingSizeCheck;
  static_assert(sizeof(VisualElementFocusRing) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder, "UnityEngine.UIElements", "VisualElementFocusRing/DefaultFocusOrder");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::get_focusController
// Il2CppName: get_focusController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (UnityEngine::UIElements::VisualElementFocusRing::*)()>(&UnityEngine::UIElements::VisualElementFocusRing::get_focusController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "get_focusController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder
// Il2CppName: get_defaultFocusOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder (UnityEngine::UIElements::VisualElementFocusRing::*)()>(&UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "get_defaultFocusOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder
// Il2CppName: set_defaultFocusOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing::DefaultFocusOrder)>(&UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/DefaultFocusOrder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "set_defaultFocusOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort
// Il2CppName: FocusRingAutoIndexSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*, ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*)>(&UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "FocusRingAutoIndexSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort
// Il2CppName: FocusRingSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*, ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*)>(&UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "FocusRingSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::DoUpdate
// Il2CppName: DoUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementFocusRing::*)()>(&UnityEngine::UIElements::VisualElementFocusRing::DoUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "DoUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive
// Il2CppName: BuildRingForScopeRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElement*, ByRef<int>, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>*)>(&UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* scopeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* scopeList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "BuildRingForScopeRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, scopeIndex, scopeList});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists
// Il2CppName: SortAndFlattenScopeLists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualElementFocusRing::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing::FocusRingRecord*>*)>(&UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists)> {
  static const MethodInfo* get() {
    static auto* rootScopeList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "SortAndFlattenScopeLists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootScopeList});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex
// Il2CppName: GetFocusableInternalIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*)>(&UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "GetFocusableInternalIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection
// Il2CppName: GetFocusChangeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "GetFocusChangeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable
// Il2CppName: GetNextFocusable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "GetNextFocusable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree
// Il2CppName: GetNextFocusableInTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "GetNextFocusableInTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree
// Il2CppName: GetPreviousFocusableInTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusRing*), "GetPreviousFocusableInTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable});
  }
};
