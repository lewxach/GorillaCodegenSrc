// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UxmlFactory`2
#include "UnityEngine/UIElements/UxmlFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: UxmlAttributeOverridesTraits
  class UxmlAttributeOverridesTraits;
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlAttributeOverridesFactory
  class UxmlAttributeOverridesFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesFactory*, "UnityEngine.UIElements", "UxmlAttributeOverridesFactory");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UxmlAttributeOverridesFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class UxmlAttributeOverridesFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlAttributeOverridesTraits*> {
    public:
    // public override System.String get_uxmlName()
    // Offset: 0x56C4BF0
    // Implemented from: UnityEngine.UIElements.BaseUxmlFactory`2
    // Base method: System.String BaseUxmlFactory_2::get_uxmlName()
    ::StringW get_uxmlName();
    // public override System.String get_uxmlQualifiedName()
    // Offset: 0x56C4C30
    // Implemented from: UnityEngine.UIElements.BaseUxmlFactory`2
    // Base method: System.String BaseUxmlFactory_2::get_uxmlQualifiedName()
    ::StringW get_uxmlQualifiedName();
    // public override UnityEngine.UIElements.VisualElement Create(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x56C4CA4
    // Implemented from: UnityEngine.UIElements.UxmlFactory`2
    // Base method: UnityEngine.UIElements.VisualElement UxmlFactory_2::Create(UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // public System.Void .ctor()
    // Offset: 0x56C4CAC
    // Implemented from: UnityEngine.UIElements.UxmlFactory`2
    // Base method: System.Void UxmlFactory_2::.ctor()
    // Base method: System.Void BaseUxmlFactory_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UxmlAttributeOverridesFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UxmlAttributeOverridesFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UxmlAttributeOverridesFactory*, creationType>()));
    }
  }; // UnityEngine.UIElements.UxmlAttributeOverridesFactory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlName
// Il2CppName: get_uxmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)()>(&UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeOverridesFactory*), "get_uxmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlQualifiedName
// Il2CppName: get_uxmlQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)()>(&UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlQualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeOverridesFactory*), "get_uxmlQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeOverridesFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UxmlAttributeOverridesFactory::Create)> {
  static const MethodInfo* get() {
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UxmlAttributeOverridesFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UxmlAttributeOverridesFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
