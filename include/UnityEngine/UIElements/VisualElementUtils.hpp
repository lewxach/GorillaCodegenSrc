// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElementUtils
  class VisualElementUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementUtils*, "UnityEngine.UIElements", "VisualElementUtils");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualElementUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VisualElementUtils : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::VisualElementUtils::$$c
    class $$c;
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<System.String> s_usedNames
    static ::System::Collections::Generic::HashSet_1<::StringW>* _get_s_usedNames();
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<System.String> s_usedNames
    static void _set_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW>* value);
    // Get static field: static private readonly System.Type s_FoldoutType
    static ::System::Type* _get_s_FoldoutType();
    // Set static field: static private readonly System.Type s_FoldoutType
    static void _set_s_FoldoutType(::System::Type* value);
    // Get static field: static private readonly System.String s_InspectorElementUssClassName
    static ::StringW _get_s_InspectorElementUssClassName();
    // Set static field: static private readonly System.String s_InspectorElementUssClassName
    static void _set_s_InspectorElementUssClassName(::StringW value);
    // static public System.String GetUniqueName(System.String nameBase)
    // Offset: 0x55C4674
    static ::StringW GetUniqueName(::StringW nameBase);
    // static System.Int32 GetFoldoutDepth(UnityEngine.UIElements.VisualElement element)
    // Offset: 0x55C4788
    static int GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element);
    // static System.Void AssignInspectorStyleIfNecessary(UnityEngine.UIElements.VisualElement element, System.String classNameToEnable)
    // Offset: 0x55C486C
    static void AssignInspectorStyleIfNecessary(::UnityEngine::UIElements::VisualElement* element, ::StringW classNameToEnable);
    // static private System.Void .cctor()
    // Offset: 0x55C4974
    static void _cctor();
  }; // UnityEngine.UIElements.VisualElementUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementUtils::GetUniqueName
// Il2CppName: GetUniqueName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::UIElements::VisualElementUtils::GetUniqueName)> {
  static const MethodInfo* get() {
    static auto* nameBase = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementUtils*), "GetUniqueName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameBase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth
// Il2CppName: GetFoldoutDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementUtils*), "GetFoldoutDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary
// Il2CppName: AssignInspectorStyleIfNecessary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::StringW)>(&UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* classNameToEnable = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementUtils*), "AssignInspectorStyleIfNecessary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, classNameToEnable});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::VisualElementUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};