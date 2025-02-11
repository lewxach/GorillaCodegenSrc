// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.CreationContext
#include "UnityEngine/UIElements/CreationContext.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlTypeRestriction
  class UxmlTypeRestriction;
  // Skipping declaration: Use because it is already included!
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlAttributeDescription
  class UxmlAttributeDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeDescription*, "UnityEngine.UIElements", "UxmlAttributeDescription");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UxmlAttributeDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlAttributeDescription : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::UxmlAttributeDescription::Use
    struct Use;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UIElements.UxmlAttributeDescription/Use
    // [TokenAttribute] Offset: FFFFFFFF
    struct Use/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Use
      constexpr Use(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UIElements.UxmlAttributeDescription/Use None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use None
      static ::UnityEngine::UIElements::UxmlAttributeDescription::Use _get_None();
      // Set static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use None
      static void _set_None(::UnityEngine::UIElements::UxmlAttributeDescription::Use value);
      // static field const value: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Optional
      static constexpr const int Optional = 1;
      // Get static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Optional
      static ::UnityEngine::UIElements::UxmlAttributeDescription::Use _get_Optional();
      // Set static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Optional
      static void _set_Optional(::UnityEngine::UIElements::UxmlAttributeDescription::Use value);
      // static field const value: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Prohibited
      static constexpr const int Prohibited = 2;
      // Get static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Prohibited
      static ::UnityEngine::UIElements::UxmlAttributeDescription::Use _get_Prohibited();
      // Set static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Prohibited
      static void _set_Prohibited(::UnityEngine::UIElements::UxmlAttributeDescription::Use value);
      // static field const value: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Required
      static constexpr const int Required = 3;
      // Get static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Required
      static ::UnityEngine::UIElements::UxmlAttributeDescription::Use _get_Required();
      // Set static field: static public UnityEngine.UIElements.UxmlAttributeDescription/Use Required
      static void _set_Required(::UnityEngine::UIElements::UxmlAttributeDescription::Use value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UIElements.UxmlAttributeDescription/Use
    #pragma pack(pop)
    static check_size<sizeof(UxmlAttributeDescription::Use), 0 + sizeof(int)> __UnityEngine_UIElements_UxmlAttributeDescription_UseSizeCheck;
    static_assert(sizeof(UxmlAttributeDescription::Use) == 0x4);
    public:
    // private System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] m_ObsoleteNames
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> m_ObsoleteNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String <type>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <typeNamespace>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW typeNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.UIElements.UxmlAttributeDescription/Use <use>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::UIElements::UxmlAttributeDescription::Use use;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlAttributeDescription::Use) == 0x4);
    // Padding between fields: use and: restriction
    char __padding4[0x4] = {};
    // private UnityEngine.UIElements.UxmlTypeRestriction <restriction>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UIElements::UxmlTypeRestriction* restriction;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlTypeRestriction*) == 0x8);
    public:
    // Get instance field reference: private System.String <name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$name$k__BackingField();
    // Get instance field reference: private System.String[] m_ObsoleteNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_ObsoleteNames();
    // Get instance field reference: private System.String <type>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$type$k__BackingField();
    // Get instance field reference: private System.String <typeNamespace>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$typeNamespace$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.UxmlAttributeDescription/Use <use>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlAttributeDescription::Use& dyn_$use$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.UxmlTypeRestriction <restriction>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlTypeRestriction*& dyn_$restriction$k__BackingField();
    // protected System.Void .ctor()
    // Offset: 0x56C4E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlAttributeDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlAttributeDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlAttributeDescription*, creationType>()));
    }
    // public System.String get_name()
    // Offset: 0x56C4E54
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x56C4E5C
    void set_name(::StringW value);
    // public System.Void set_obsoleteNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0x56C4E64
    void set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);
    // protected System.Void set_type(System.String value)
    // Offset: 0x56C4EC8
    void set_type(::StringW value);
    // protected System.Void set_typeNamespace(System.String value)
    // Offset: 0x56C4ED0
    void set_typeNamespace(::StringW value);
    // public System.Void set_use(UnityEngine.UIElements.UxmlAttributeDescription/Use value)
    // Offset: 0x56C4ED8
    void set_use(::UnityEngine::UIElements::UxmlAttributeDescription::Use value);
    // public System.Void set_restriction(UnityEngine.UIElements.UxmlTypeRestriction value)
    // Offset: 0x56C4EE0
    void set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction* value);
    // System.Boolean TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc, out System.String value)
    // Offset: 0x56C4EE8
    bool TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ByRef<::StringW> value);
    // protected System.Boolean TryGetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc, System.Func`3<System.String,T,T> converterFunc, T defaultValue, ref T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue, ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetValueFromBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bag), ::il2cpp_utils::ExtractType(cc), ::il2cpp_utils::ExtractType(converterFunc), ::il2cpp_utils::ExtractType(defaultValue), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, bag, cc, converterFunc, defaultValue, byref(value));
    }
    // protected T GetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc, System.Func`3<System.String,T,T> converterFunc, T defaultValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlAttributeDescription::GetValueFromBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValueFromBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bag), ::il2cpp_utils::ExtractType(cc), ::il2cpp_utils::ExtractType(converterFunc), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, bag, cc, converterFunc, defaultValue);
    }
  }; // UnityEngine.UIElements.UxmlAttributeDescription
  #pragma pack(pop)
  static check_size<sizeof(UxmlAttributeDescription), 56 + sizeof(::UnityEngine::UIElements::UxmlTypeRestriction*)> __UnityEngine_UIElements_UxmlAttributeDescriptionSizeCheck;
  static_assert(sizeof(UxmlAttributeDescription) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeDescription::Use, "UnityEngine.UIElements", "UxmlAttributeDescription/Use");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UxmlAttributeDescription::*)()>(&UnityEngine::UIElements::UxmlAttributeDescription::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames
// Il2CppName: set_obsoleteNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_obsoleteNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_type
// Il2CppName: set_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace
// Il2CppName: set_typeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_typeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_use
// Il2CppName: set_use
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlAttributeDescription::Use)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_use)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "UxmlAttributeDescription/Use")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_use", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::set_restriction
// Il2CppName: set_restriction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(&UnityEngine::UIElements::UxmlAttributeDescription::set_restriction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "UxmlTypeRestriction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "set_restriction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString
// Il2CppName: TryGetValueFromBagAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ByRef<::StringW>)>(&UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeDescription*), "TryGetValueFromBagAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBag
// Il2CppName: TryGetValueFromBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeDescription::GetValueFromBag
// Il2CppName: GetValueFromBag
// Cannot write MetadataGetter for generic methods!
