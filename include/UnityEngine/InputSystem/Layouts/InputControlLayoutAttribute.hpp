// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputControlLayoutAttribute
  class InputControlLayoutAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*, "UnityEngine.InputSystem.Layouts", "InputControlLayoutAttribute");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class InputControlLayoutAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type <stateType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* stateType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.String <stateFormat>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW stateFormat;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] <commonUsages>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> commonUsages;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String <variants>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW variants;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <isNoisy>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isNoisy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Nullable`1<System.Boolean> canRunInBackgroundInternal
    // Size: 0xFFFFFFFF
    // Offset: 0x31
    ::System::Nullable_1<bool> canRunInBackgroundInternal;
    // System.Nullable`1<System.Boolean> updateBeforeRenderInternal
    // Size: 0xFFFFFFFF
    // Offset: 0x33
    ::System::Nullable_1<bool> updateBeforeRenderInternal;
    // private System.Boolean <isGenericTypeOfDevice>k__BackingField
    // Size: 0x1
    // Offset: 0x35
    bool isGenericTypeOfDevice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <description>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::StringW description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <hideInUI>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool hideInUI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Type <stateType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$stateType$k__BackingField();
    // Get instance field reference: private System.String <stateFormat>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$stateFormat$k__BackingField();
    // Get instance field reference: private System.String[] <commonUsages>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_$commonUsages$k__BackingField();
    // Get instance field reference: private System.String <variants>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$variants$k__BackingField();
    // Get instance field reference: private System.Boolean <isNoisy>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isNoisy$k__BackingField();
    // Get instance field reference: System.Nullable`1<System.Boolean> canRunInBackgroundInternal
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_canRunInBackgroundInternal();
    // Get instance field reference: System.Nullable`1<System.Boolean> updateBeforeRenderInternal
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_updateBeforeRenderInternal();
    // Get instance field reference: private System.Boolean <isGenericTypeOfDevice>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isGenericTypeOfDevice$k__BackingField();
    // Get instance field reference: private System.String <displayName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.String <description>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$description$k__BackingField();
    // Get instance field reference: private System.Boolean <hideInUI>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$hideInUI$k__BackingField();
    // public System.Type get_stateType()
    // Offset: 0x5164E08
    ::System::Type* get_stateType();
    // public System.Void set_stateType(System.Type value)
    // Offset: 0x5164E10
    void set_stateType(::System::Type* value);
    // public System.String get_stateFormat()
    // Offset: 0x5164E18
    ::StringW get_stateFormat();
    // public System.Void set_stateFormat(System.String value)
    // Offset: 0x5164E20
    void set_stateFormat(::StringW value);
    // public System.String[] get_commonUsages()
    // Offset: 0x5164E28
    ::ArrayW<::StringW> get_commonUsages();
    // public System.Void set_commonUsages(System.String[] value)
    // Offset: 0x5164E30
    void set_commonUsages(::ArrayW<::StringW> value);
    // public System.String get_variants()
    // Offset: 0x5164E38
    ::StringW get_variants();
    // public System.Void set_variants(System.String value)
    // Offset: 0x5164E40
    void set_variants(::StringW value);
    // public System.Boolean get_isNoisy()
    // Offset: 0x5164E48
    bool get_isNoisy();
    // public System.Void set_isNoisy(System.Boolean value)
    // Offset: 0x5164E50
    void set_isNoisy(bool value);
    // public System.Boolean get_canRunInBackground()
    // Offset: 0x5164E5C
    bool get_canRunInBackground();
    // public System.Void set_canRunInBackground(System.Boolean value)
    // Offset: 0x5164EA4
    void set_canRunInBackground(bool value);
    // public System.Boolean get_updateBeforeRender()
    // Offset: 0x5164F0C
    bool get_updateBeforeRender();
    // public System.Void set_updateBeforeRender(System.Boolean value)
    // Offset: 0x5164F54
    void set_updateBeforeRender(bool value);
    // public System.Boolean get_isGenericTypeOfDevice()
    // Offset: 0x5164FBC
    bool get_isGenericTypeOfDevice();
    // public System.Void set_isGenericTypeOfDevice(System.Boolean value)
    // Offset: 0x5164FC4
    void set_isGenericTypeOfDevice(bool value);
    // public System.String get_displayName()
    // Offset: 0x5164FD0
    ::StringW get_displayName();
    // public System.Void set_displayName(System.String value)
    // Offset: 0x5164FD8
    void set_displayName(::StringW value);
    // public System.String get_description()
    // Offset: 0x5164FE0
    ::StringW get_description();
    // public System.Void set_description(System.String value)
    // Offset: 0x5164FE8
    void set_description(::StringW value);
    // public System.Boolean get_hideInUI()
    // Offset: 0x5164FF0
    bool get_hideInUI();
    // public System.Void set_hideInUI(System.Boolean value)
    // Offset: 0x5164FF8
    void set_hideInUI(bool value);
    // public System.Void .ctor()
    // Offset: 0x5165004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputControlLayoutAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputControlLayoutAttribute*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_stateType
// Il2CppName: get_stateType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_stateType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_stateType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_stateType
// Il2CppName: set_stateType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::System::Type*)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_stateType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_stateType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_stateFormat
// Il2CppName: get_stateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_stateFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_stateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_stateFormat
// Il2CppName: set_stateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_stateFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_stateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_commonUsages
// Il2CppName: get_commonUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_commonUsages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_commonUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_commonUsages
// Il2CppName: set_commonUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::ArrayW<::StringW>)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_commonUsages)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_commonUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_variants
// Il2CppName: get_variants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_variants)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_variants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_variants
// Il2CppName: set_variants
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_variants)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_variants", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_isNoisy
// Il2CppName: get_isNoisy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_isNoisy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_isNoisy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_isNoisy
// Il2CppName: set_isNoisy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_isNoisy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_isNoisy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_canRunInBackground
// Il2CppName: get_canRunInBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_canRunInBackground)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_canRunInBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_canRunInBackground
// Il2CppName: set_canRunInBackground
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_canRunInBackground)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_canRunInBackground", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_updateBeforeRender
// Il2CppName: get_updateBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_updateBeforeRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_updateBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_updateBeforeRender
// Il2CppName: set_updateBeforeRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_updateBeforeRender)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_updateBeforeRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_isGenericTypeOfDevice
// Il2CppName: get_isGenericTypeOfDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_isGenericTypeOfDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_isGenericTypeOfDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_isGenericTypeOfDevice
// Il2CppName: set_isGenericTypeOfDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_isGenericTypeOfDevice)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_isGenericTypeOfDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_description
// Il2CppName: get_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_description
// Il2CppName: set_description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_description)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_hideInUI
// Il2CppName: get_hideInUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::get_hideInUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "get_hideInUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_hideInUI
// Il2CppName: set_hideInUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::set_hideInUI)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*), "set_hideInUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
