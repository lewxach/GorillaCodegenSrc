// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IUxmlAttributes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUxmlAttributes*, "UnityEngine.UIElements", "IUxmlAttributes");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IUxmlAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  class IUxmlAttributes {
    public:
    // public System.Boolean TryGetAttributeValue(System.String attributeName, out System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetAttributeValue(::StringW attributeName, ByRef<::StringW> value);
  }; // UnityEngine.UIElements.IUxmlAttributes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue
// Il2CppName: TryGetAttributeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUxmlAttributes::*)(::StringW, ByRef<::StringW>)>(&UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue)> {
  static const MethodInfo* get() {
    static auto* attributeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUxmlAttributes*), "TryGetAttributeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeName, value});
  }
};
