// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseFieldTraits`2
#include "UnityEngine/UIElements/BaseFieldTraits_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TypedUxmlAttributeDescription`1<T>
  template<typename T>
  class TypedUxmlAttributeDescription_1;
  // Forward declaring type: UxmlBoolAttributeDescription
  class UxmlBoolAttributeDescription;
  // Skipping declaration: VisualElement because it is already included!
  // Forward declaring type: IUxmlAttributes
  class IUxmlAttributes;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
  template<typename TValueType, typename TValueUxmlAttributeType>
  class TextValueFieldTraits_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextValueFieldTraits_2, "UnityEngine.UIElements", "TextValueFieldTraits`2");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.TextValueFieldTraits`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  template<typename TValueType, typename TValueUxmlAttributeType>
  class TextValueFieldTraits_2 : public ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType> {
    public:
    public:
    // private UnityEngine.UIElements.UxmlBoolAttributeDescription m_IsReadOnly
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsReadOnly;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    // private UnityEngine.UIElements.UxmlBoolAttributeDescription m_IsDelayed
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsDelayed;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UxmlBoolAttributeDescription*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.UIElements.UxmlBoolAttributeDescription m_IsReadOnly
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextValueFieldTraits_2::dyn_m_IsReadOnly");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_IsReadOnly"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlBoolAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.UIElements.UxmlBoolAttributeDescription m_IsDelayed
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& dyn_m_IsDelayed() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextValueFieldTraits_2::dyn_m_IsDelayed");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_IsDelayed"))->offset;
      return *reinterpret_cast<::UnityEngine::UIElements::UxmlBoolAttributeDescription**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public override System.Void Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseFieldTraits`2
    // Base method: System.Void BaseFieldTraits_2::Init(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.IUxmlAttributes bag, UnityEngine.UIElements.CreationContext cc)
    void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextValueFieldTraits_2::Init");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, ve, bag, cc);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.UIElements.BaseFieldTraits`2
    // Base method: System.Void BaseFieldTraits_2::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void UxmlTraits::.ctor()
    // Base method: System.Void BaseUxmlTraits::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::TextValueFieldTraits_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*, creationType>()));
    }
  }; // UnityEngine.UIElements.TextValueFieldTraits`2
  // Could not write size check! Type: UnityEngine.UIElements.TextValueFieldTraits`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"