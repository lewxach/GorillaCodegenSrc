// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.UIElements.MouseButton
#include "UnityEngine/UIElements/MouseButton.hpp"
// Including type: UnityEngine.EventModifiers
#include "UnityEngine/EventModifiers.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IMouseEvent
  class IMouseEvent;
  // Forward declaring type: IPointerEvent
  class IPointerEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ManipulatorActivationFilter
  struct ManipulatorActivationFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ManipulatorActivationFilter, "UnityEngine.UIElements", "ManipulatorActivationFilter");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.ManipulatorActivationFilter
  // [TokenAttribute] Offset: FFFFFFFF
  struct ManipulatorActivationFilter/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*/ {
    public:
    public:
    // private UnityEngine.UIElements.MouseButton <button>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::MouseButton button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::MouseButton) == 0x4);
    // private UnityEngine.EventModifiers <modifiers>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    ::UnityEngine::EventModifiers modifiers;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventModifiers) == 0x4);
    // private System.Int32 <clickCount>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int clickCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ManipulatorActivationFilter
    constexpr ManipulatorActivationFilter(::UnityEngine::UIElements::MouseButton button_ = {}, ::UnityEngine::EventModifiers modifiers_ = {}, int clickCount_ = {}) noexcept : button{button_}, modifiers{modifiers_}, clickCount{clickCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.MouseButton <button>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::MouseButton& dyn_$button$k__BackingField();
    // Get instance field reference: private UnityEngine.EventModifiers <modifiers>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventModifiers& dyn_$modifiers$k__BackingField();
    // Get instance field reference: private System.Int32 <clickCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$clickCount$k__BackingField();
    // public UnityEngine.UIElements.MouseButton get_button()
    // Offset: 0x566403C
    ::UnityEngine::UIElements::MouseButton get_button();
    // public System.Void set_button(UnityEngine.UIElements.MouseButton value)
    // Offset: 0x5664044
    void set_button(::UnityEngine::UIElements::MouseButton value);
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0x566404C
    ::UnityEngine::EventModifiers get_modifiers();
    // public System.Void set_modifiers(UnityEngine.EventModifiers value)
    // Offset: 0x5664054
    void set_modifiers(::UnityEngine::EventModifiers value);
    // public System.Int32 get_clickCount()
    // Offset: 0x566405C
    int get_clickCount();
    // public System.Boolean Equals(UnityEngine.UIElements.ManipulatorActivationFilter other)
    // Offset: 0x56640FC
    bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter other);
    // public System.Boolean Matches(UnityEngine.UIElements.IMouseEvent e)
    // Offset: 0x56641B4
    bool Matches(::UnityEngine::UIElements::IMouseEvent* e);
    // private System.Boolean HasModifiers(UnityEngine.UIElements.IMouseEvent e)
    // Offset: 0x5664304
    bool HasModifiers(::UnityEngine::UIElements::IMouseEvent* e);
    // public System.Boolean Matches(UnityEngine.UIElements.IPointerEvent e)
    // Offset: 0x566454C
    bool Matches(::UnityEngine::UIElements::IPointerEvent* e);
    // private System.Boolean HasModifiers(UnityEngine.UIElements.IPointerEvent e)
    // Offset: 0x566469C
    bool HasModifiers(::UnityEngine::UIElements::IPointerEvent* e);
    // private System.Boolean MatchModifiers(System.Boolean alt, System.Boolean ctrl, System.Boolean shift, System.Boolean command)
    // Offset: 0x56644F8
    bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x5664064
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5664130
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.ManipulatorActivationFilter
  #pragma pack(pop)
  static check_size<sizeof(ManipulatorActivationFilter), 8 + sizeof(int)> __UnityEngine_UIElements_ManipulatorActivationFilterSizeCheck;
  static_assert(sizeof(ManipulatorActivationFilter) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseButton (UnityEngine::UIElements::ManipulatorActivationFilter::*)()>(&UnityEngine::UIElements::ManipulatorActivationFilter::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::set_button
// Il2CppName: set_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::MouseButton)>(&UnityEngine::UIElements::ManipulatorActivationFilter::set_button)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "MouseButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "set_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::get_modifiers
// Il2CppName: get_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (UnityEngine::UIElements::ManipulatorActivationFilter::*)()>(&UnityEngine::UIElements::ManipulatorActivationFilter::get_modifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "get_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::set_modifiers
// Il2CppName: set_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::EventModifiers)>(&UnityEngine::UIElements::ManipulatorActivationFilter::set_modifiers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "EventModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "set_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::get_clickCount
// Il2CppName: get_clickCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::ManipulatorActivationFilter::*)()>(&UnityEngine::UIElements::ManipulatorActivationFilter::get_clickCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "get_clickCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::ManipulatorActivationFilter)>(&UnityEngine::UIElements::ManipulatorActivationFilter::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ManipulatorActivationFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::IMouseEvent*)>(&UnityEngine::UIElements::ManipulatorActivationFilter::Matches)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IMouseEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::HasModifiers
// Il2CppName: HasModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::IMouseEvent*)>(&UnityEngine::UIElements::ManipulatorActivationFilter::HasModifiers)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IMouseEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "HasModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::ManipulatorActivationFilter::Matches)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::HasModifiers
// Il2CppName: HasModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::ManipulatorActivationFilter::HasModifiers)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "HasModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::MatchModifiers
// Il2CppName: MatchModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(bool, bool, bool, bool)>(&UnityEngine::UIElements::ManipulatorActivationFilter::MatchModifiers)> {
  static const MethodInfo* get() {
    static auto* alt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ctrl = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* shift = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* command = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "MatchModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alt, ctrl, shift, command});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ManipulatorActivationFilter::*)(::Il2CppObject*)>(&UnityEngine::UIElements::ManipulatorActivationFilter::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ManipulatorActivationFilter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::ManipulatorActivationFilter::*)()>(&UnityEngine::UIElements::ManipulatorActivationFilter::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ManipulatorActivationFilter), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};