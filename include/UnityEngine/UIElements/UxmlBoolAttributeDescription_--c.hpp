// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlBoolAttributeDescription
#include "UnityEngine/UIElements/UxmlBoolAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c*, "UnityEngine.UIElements", "UxmlBoolAttributeDescription/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UxmlBoolAttributeDescription/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UxmlBoolAttributeDescription::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.UxmlBoolAttributeDescription/<>c <>9
    static ::UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.UxmlBoolAttributeDescription/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c* value);
    // Get static field: static public System.Func`3<System.String,System.Boolean,System.Boolean> <>9__3_0
    static ::System::Func_3<::StringW, bool, bool>* _get_$$9__3_0();
    // Set static field: static public System.Func`3<System.String,System.Boolean,System.Boolean> <>9__3_0
    static void _set_$$9__3_0(::System::Func_3<::StringW, bool, bool>* value);
    // Get static field: static public System.Func`3<System.String,System.Boolean,System.Boolean> <>9__4_0
    static ::System::Func_3<::StringW, bool, bool>* _get_$$9__4_0();
    // Set static field: static public System.Func`3<System.String,System.Boolean,System.Boolean> <>9__4_0
    static void _set_$$9__4_0(::System::Func_3<::StringW, bool, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x56C6D74
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x56C6DDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlBoolAttributeDescription::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlBoolAttributeDescription::$$c*, creationType>()));
    }
    // System.Boolean <GetValueFromBag>b__3_0(System.String s, System.Boolean b)
    // Offset: 0x56C6DE4
    bool $GetValueFromBag$b__3_0(::StringW s, bool b);
    // System.Boolean <TryGetValueFromBag>b__4_0(System.String s, System.Boolean b)
    // Offset: 0x56C6DF4
    bool $TryGetValueFromBag$b__4_0(::StringW s, bool b);
  }; // UnityEngine.UIElements.UxmlBoolAttributeDescription/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::$GetValueFromBag$b__3_0
// Il2CppName: <GetValueFromBag>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::*)(::StringW, bool)>(&UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::$GetValueFromBag$b__3_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c*), "<GetValueFromBag>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::$TryGetValueFromBag$b__4_0
// Il2CppName: <TryGetValueFromBag>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::*)(::StringW, bool)>(&UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c::$TryGetValueFromBag$b__4_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlBoolAttributeDescription::$$c*), "<TryGetValueFromBag>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, b});
  }
};