// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EnumData
#include "UnityEngine/EnumData.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EnumDataUtility
  class EnumDataUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EnumDataUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EnumDataUtility*, "UnityEngine", "EnumDataUtility");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EnumDataUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumDataUtility : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::EnumDataUtility::$$c
    class $$c;
    // Nested type: ::UnityEngine::EnumDataUtility::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::UnityEngine::EnumDataUtility::$$c__DisplayClass8_0
    struct $$c__DisplayClass8_0;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.EnumData> s_NonObsoleteEnumData
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::EnumData>* _get_s_NonObsoleteEnumData();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.EnumData> s_NonObsoleteEnumData
    static void _set_s_NonObsoleteEnumData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::EnumData>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.EnumData> s_EnumData
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::EnumData>* _get_s_EnumData();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.EnumData> s_EnumData
    static void _set_s_EnumData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::EnumData>* value);
    // static UnityEngine.EnumData GetCachedEnumData(System.Type enumType, System.Boolean excludeObsolete, System.Func`2<System.String,System.String> nicifyName)
    // Offset: 0x54C39C4
    static ::UnityEngine::EnumData GetCachedEnumData(::System::Type* enumType, bool excludeObsolete, ::System::Func_2<::StringW, ::StringW>* nicifyName);
    // static System.Void HandleInspectorOrderAttribute(System.Type enumType, ref UnityEngine.EnumData enumData)
    // Offset: 0x54C4A40
    static void HandleInspectorOrderAttribute(::System::Type* enumType, ByRef<::UnityEngine::EnumData> enumData);
    // static private System.Boolean CheckObsoleteAddition(System.Reflection.FieldInfo field, System.Boolean excludeObsolete)
    // Offset: 0x54C492C
    static bool CheckObsoleteAddition(::System::Reflection::FieldInfo* field, bool excludeObsolete);
    // static private System.String EnumTooltipFromEnumField(System.Reflection.FieldInfo field)
    // Offset: 0x54C4F38
    static ::StringW EnumTooltipFromEnumField(::System::Reflection::FieldInfo* field);
    // static private System.String EnumNameFromEnumField(System.Reflection.FieldInfo field, System.Func`2<System.String,System.String> nicifyName)
    // Offset: 0x54C5070
    static ::StringW EnumNameFromEnumField(::System::Reflection::FieldInfo* field, ::System::Func_2<::StringW, ::StringW>* nicifyName);
    // static private System.Void .cctor()
    // Offset: 0x54C52BC
    static void _cctor();
    // static System.String <EnumNameFromEnumField>g__NicifyName|8_0(ref UnityEngine.EnumDataUtility/<>c__DisplayClass8_0 )
    // Offset: 0x54C526C
    static ::StringW $EnumNameFromEnumField$g__NicifyName_8_0(ByRef<::UnityEngine::EnumDataUtility::$$c__DisplayClass8_0> param_0);
  }; // UnityEngine.EnumDataUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::GetCachedEnumData
// Il2CppName: GetCachedEnumData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EnumData (*)(::System::Type*, bool, ::System::Func_2<::StringW, ::StringW>*)>(&UnityEngine::EnumDataUtility::GetCachedEnumData)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* excludeObsolete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* nicifyName = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "GetCachedEnumData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, excludeObsolete, nicifyName});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute
// Il2CppName: HandleInspectorOrderAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ByRef<::UnityEngine::EnumData>)>(&UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* enumData = &::il2cpp_utils::GetClassFromName("UnityEngine", "EnumData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "HandleInspectorOrderAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, enumData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::CheckObsoleteAddition
// Il2CppName: CheckObsoleteAddition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::FieldInfo*, bool)>(&UnityEngine::EnumDataUtility::CheckObsoleteAddition)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* excludeObsolete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "CheckObsoleteAddition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field, excludeObsolete});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::EnumTooltipFromEnumField
// Il2CppName: EnumTooltipFromEnumField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*)>(&UnityEngine::EnumDataUtility::EnumTooltipFromEnumField)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "EnumTooltipFromEnumField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::EnumNameFromEnumField
// Il2CppName: EnumNameFromEnumField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*, ::System::Func_2<::StringW, ::StringW>*)>(&UnityEngine::EnumDataUtility::EnumNameFromEnumField)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* nicifyName = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "EnumNameFromEnumField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field, nicifyName});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EnumDataUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EnumDataUtility::$EnumNameFromEnumField$g__NicifyName_8_0
// Il2CppName: <EnumNameFromEnumField>g__NicifyName|8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::EnumDataUtility::$$c__DisplayClass8_0>)>(&UnityEngine::EnumDataUtility::$EnumNameFromEnumField$g__NicifyName_8_0)> {
  static const MethodInfo* get() {
    static auto* param_0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "EnumDataUtility/<>c__DisplayClass8_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EnumDataUtility*), "<EnumNameFromEnumField>g__NicifyName|8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param_0});
  }
};
