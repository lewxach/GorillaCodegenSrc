// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.RepeatButton
#include "UnityEngine/UIElements/RepeatButton.hpp"
// Including type: UnityEngine.UIElements.UxmlFactory`2
#include "UnityEngine/UIElements/UxmlFactory_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton::UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton::UxmlFactory*, "UnityEngine.UIElements", "RepeatButton/UxmlFactory");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.RepeatButton/UxmlFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class RepeatButton::UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RepeatButton*, ::UnityEngine::UIElements::RepeatButton::UxmlTraits*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x5626B7C
    // Implemented from: UnityEngine.UIElements.UxmlFactory`2
    // Base method: System.Void UxmlFactory_2::.ctor()
    // Base method: System.Void BaseUxmlFactory_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RepeatButton::UxmlFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::RepeatButton::UxmlFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RepeatButton::UxmlFactory*, creationType>()));
    }
  }; // UnityEngine.UIElements.RepeatButton/UxmlFactory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::RepeatButton::UxmlFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!