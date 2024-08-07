// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.UIElements.TemplateAsset/AttributeOverride
#include "UnityEngine/UIElements/TemplateAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: VisualTreeAsset
  class VisualTreeAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: CreationContext
  struct CreationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext, "UnityEngine.UIElements", "CreationContext");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.CreationContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct CreationContext/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*/ {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement <target>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::VisualElement* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    // private UnityEngine.UIElements.VisualTreeAsset <visualTreeAsset>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::UIElements::VisualTreeAsset* visualTreeAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> <slotInsertionPoints>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> <attributeOverrides>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* attributeOverrides;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>*) == 0x8);
    public:
    // Creating value type constructor for type: CreationContext
    constexpr CreationContext(::UnityEngine::UIElements::VisualElement* target_ = {}, ::UnityEngine::UIElements::VisualTreeAsset* visualTreeAsset_ = {}, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints_ = {}, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* attributeOverrides_ = {}) noexcept : target{target_}, visualTreeAsset{visualTreeAsset_}, slotInsertionPoints{slotInsertionPoints_}, attributeOverrides{attributeOverrides_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*>(this);
    }
    // Get static field: static public readonly UnityEngine.UIElements.CreationContext Default
    static ::UnityEngine::UIElements::CreationContext _get_Default();
    // Set static field: static public readonly UnityEngine.UIElements.CreationContext Default
    static void _set_Default(::UnityEngine::UIElements::CreationContext value);
    // Get instance field reference: private UnityEngine.UIElements.VisualElement <target>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_$target$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.VisualTreeAsset <visualTreeAsset>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualTreeAsset*& dyn_$visualTreeAsset$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> <slotInsertionPoints>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*& dyn_$slotInsertionPoints$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> <attributeOverrides>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>*& dyn_$attributeOverrides$k__BackingField();
    // public UnityEngine.UIElements.VisualElement get_target()
    // Offset: 0x55C0958
    ::UnityEngine::UIElements::VisualElement* get_target();
    // private System.Void set_target(UnityEngine.UIElements.VisualElement value)
    // Offset: 0x55C0960
    void set_target(::UnityEngine::UIElements::VisualElement* value);
    // public UnityEngine.UIElements.VisualTreeAsset get_visualTreeAsset()
    // Offset: 0x55C0968
    ::UnityEngine::UIElements::VisualTreeAsset* get_visualTreeAsset();
    // private System.Void set_visualTreeAsset(UnityEngine.UIElements.VisualTreeAsset value)
    // Offset: 0x55C0970
    void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> get_slotInsertionPoints()
    // Offset: 0x55C0978
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* get_slotInsertionPoints();
    // private System.Void set_slotInsertionPoints(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> value)
    // Offset: 0x55C0980
    void set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);
    // System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> get_attributeOverrides()
    // Offset: 0x55C0988
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* get_attributeOverrides();
    // private System.Void set_attributeOverrides(System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> value)
    // Offset: 0x55C0990
    void set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* value);
    // System.Void .ctor(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> slotInsertionPoints, UnityEngine.UIElements.VisualTreeAsset vta, UnityEngine.UIElements.VisualElement target)
    // Offset: 0x55C0998
    CreationContext(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints, ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target);
    // System.Void .ctor(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> slotInsertionPoints, System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> attributeOverrides, UnityEngine.UIElements.VisualTreeAsset vta, UnityEngine.UIElements.VisualElement target)
    // Offset: 0x55C09A8
    CreationContext(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* attributeOverrides, ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target);
    // public System.Boolean Equals(UnityEngine.UIElements.CreationContext other)
    // Offset: 0x55C0A94
    bool Equals(::UnityEngine::UIElements::CreationContext other);
    // static private System.Void .cctor()
    // Offset: 0x55C0C74
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x55C0A0C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x55C0B84
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.CreationContext
  #pragma pack(pop)
  static check_size<sizeof(CreationContext), 24 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>*)> __UnityEngine_UIElements_CreationContextSizeCheck;
  static_assert(sizeof(CreationContext) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::get_target
// Il2CppName: get_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::CreationContext::*)()>(&UnityEngine::UIElements::CreationContext::get_target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "get_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::set_target
// Il2CppName: set_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::CreationContext::set_target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "set_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::get_visualTreeAsset
// Il2CppName: get_visualTreeAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualTreeAsset* (UnityEngine::UIElements::CreationContext::*)()>(&UnityEngine::UIElements::CreationContext::get_visualTreeAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "get_visualTreeAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::set_visualTreeAsset
// Il2CppName: set_visualTreeAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(&UnityEngine::UIElements::CreationContext::set_visualTreeAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualTreeAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "set_visualTreeAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::get_slotInsertionPoints
// Il2CppName: get_slotInsertionPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* (UnityEngine::UIElements::CreationContext::*)()>(&UnityEngine::UIElements::CreationContext::get_slotInsertionPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "get_slotInsertionPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::set_slotInsertionPoints
// Il2CppName: set_slotInsertionPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*)>(&UnityEngine::UIElements::CreationContext::set_slotInsertionPoints)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "set_slotInsertionPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::get_attributeOverrides
// Il2CppName: get_attributeOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>* (UnityEngine::UIElements::CreationContext::*)()>(&UnityEngine::UIElements::CreationContext::get_attributeOverrides)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "get_attributeOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::set_attributeOverrides
// Il2CppName: set_attributeOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset::AttributeOverride>*)>(&UnityEngine::UIElements::CreationContext::set_attributeOverrides)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TemplateAsset/AttributeOverride")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "set_attributeOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::CreationContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::CreationContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::CreationContext::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::CreationContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::CreationContext::*)(::Il2CppObject*)>(&UnityEngine::UIElements::CreationContext::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CreationContext::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::CreationContext::*)()>(&UnityEngine::UIElements::CreationContext::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CreationContext), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
