// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
#include "UnityEngine/UIElements/TypedUxmlAttributeDescription_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlFloatAttributeDescription
  class UxmlFloatAttributeDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlFloatAttributeDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlFloatAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float> {
    public:
    // Nested type: ::UnityEngine::UIElements::UxmlFloatAttributeDescription::$$c
    class $$c;
    // public System.Single GetValueFromBag(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x56C5758
    float GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // static private System.Single ConvertValueToFloat(System.String v, System.Single defaultValue)
    // Offset: 0x56C58AC
    static float ConvertValueToFloat(::StringW v, float defaultValue);
    // public System.Void .ctor()
    // Offset: 0x56C56AC
    // Implemented from: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
    // Base method: System.Void TypedUxmlAttributeDescription_1::.ctor()
    // Base method: System.Void UxmlAttributeDescription::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlFloatAttributeDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlFloatAttributeDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlFloatAttributeDescription*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlFloatAttributeDescription
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::GetValueFromBag
// Il2CppName: GetValueFromBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::UxmlFloatAttributeDescription::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UxmlFloatAttributeDescription::GetValueFromBag)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlFloatAttributeDescription*), "GetValueFromBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::ConvertValueToFloat
// Il2CppName: ConvertValueToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, float)>(&UnityEngine::UIElements::UxmlFloatAttributeDescription::ConvertValueToFloat)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlFloatAttributeDescription*), "ConvertValueToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlFloatAttributeDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
