// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.SliderInt
#include "UnityEngine/UIElements/SliderInt.hpp"
// Including type: UnityEngine.UIElements.BaseFieldTraits`2
#include "UnityEngine/UIElements/BaseFieldTraits_2.hpp"
// Including type: UnityEngine.UIElements.SliderDirection
#include "UnityEngine/UIElements/SliderDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UxmlIntAttributeDescription
  class UxmlIntAttributeDescription;
  // Forward declaring type: UxmlBoolAttributeDescription
  class UxmlBoolAttributeDescription;
  // Forward declaring type: UxmlEnumAttributeDescription`1<T>
  template<typename T>
  class UxmlEnumAttributeDescription_1;
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
  // Skipping declaration: CreationContext because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::SliderInt::UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SliderInt::UxmlTraits*, "UnityEngine.UIElements", "SliderInt/UxmlTraits");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.SliderInt/UxmlTraits
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderInt::UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
    public:
    public:
    // private UnityEngine.UIElements.UxmlIntAttributeDescription m_LowValue
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_LowValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlIntAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlIntAttributeDescription m_HighValue
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_HighValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlIntAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlIntAttributeDescription m_PageSize
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_PageSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlIntAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlBoolAttributeDescription m_ShowInputField
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowInputField;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlEnumAttributeDescription`1<UnityEngine.UIElements.SliderDirection> m_Direction
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*) == 0x8);
    // private UnityEngine.UIElements.UxmlBoolAttributeDescription m_Inverted
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Inverted;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.UxmlIntAttributeDescription m_LowValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlIntAttributeDescription*& dyn_m_LowValue();
    // Get instance field reference: private UnityEngine.UIElements.UxmlIntAttributeDescription m_HighValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlIntAttributeDescription*& dyn_m_HighValue();
    // Get instance field reference: private UnityEngine.UIElements.UxmlIntAttributeDescription m_PageSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlIntAttributeDescription*& dyn_m_PageSize();
    // Get instance field reference: private UnityEngine.UIElements.UxmlBoolAttributeDescription m_ShowInputField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_ShowInputField();
    // Get instance field reference: private UnityEngine.UIElements.UxmlEnumAttributeDescription`1<UnityEngine.UIElements.SliderDirection> m_Direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& dyn_m_Direction();
    // Get instance field reference: private UnityEngine.UIElements.UxmlBoolAttributeDescription m_Inverted
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_Inverted();
    // public override System.Void Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0x562FE1C
    // Implemented from: UnityEngine.UIElements.BaseFieldTraits`2
    // Base method: System.Void BaseFieldTraits_2::Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);
    // public System.Void .ctor()
    // Offset: 0x56300DC
    // Implemented from: UnityEngine.UIElements.BaseFieldTraits`2
    // Base method: System.Void BaseFieldTraits_2::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderInt::UxmlTraits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::SliderInt::UxmlTraits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderInt::UxmlTraits*, creationType>()));
    }
  }; // UnityEngine.UIElements.SliderInt/UxmlTraits
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::UxmlTraits::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::SliderInt::UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::SliderInt::UxmlTraits::Init)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* bag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUxmlAttributes")->byval_arg;
    static auto* cc = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "CreationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::SliderInt::UxmlTraits*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, bag, cc});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::SliderInt::UxmlTraits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
