// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.IManipulator
#include "UnityEngine/UIElements/IManipulator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Manipulator
  class Manipulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Manipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Manipulator*, "UnityEngine.UIElements", "Manipulator");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Manipulator
  // [TokenAttribute] Offset: FFFFFFFF
  class Manipulator : public ::Il2CppObject/*, public ::UnityEngine::UIElements::IManipulator*/ {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement m_Target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::VisualElement* m_Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IManipulator
    operator ::UnityEngine::UIElements::IManipulator() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IManipulator*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::UIElements::VisualElement*
    constexpr operator ::UnityEngine::UIElements::VisualElement*() const noexcept {
      return m_Target;
    }
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Target
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Target();
    // protected System.Void RegisterCallbacksOnTarget()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterCallbacksOnTarget();
    // protected System.Void UnregisterCallbacksFromTarget()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterCallbacksFromTarget();
    // public UnityEngine.UIElements.VisualElement get_target()
    // Offset: 0x5663C00
    ::UnityEngine::UIElements::VisualElement* get_target();
    // public System.Void set_target(UnityEngine.UIElements.VisualElement value)
    // Offset: 0x5664890
    void set_target(::UnityEngine::UIElements::VisualElement* value);
    // protected System.Void .ctor()
    // Offset: 0x56639F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Manipulator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Manipulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Manipulator*, creationType>()));
    }
  }; // UnityEngine.UIElements.Manipulator
  #pragma pack(pop)
  static check_size<sizeof(Manipulator), 16 + sizeof(::UnityEngine::UIElements::VisualElement*)> __UnityEngine_UIElements_ManipulatorSizeCheck;
  static_assert(sizeof(Manipulator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Manipulator::RegisterCallbacksOnTarget
// Il2CppName: RegisterCallbacksOnTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::RegisterCallbacksOnTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Manipulator*), "RegisterCallbacksOnTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Manipulator::UnregisterCallbacksFromTarget
// Il2CppName: UnregisterCallbacksFromTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::UnregisterCallbacksFromTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Manipulator*), "UnregisterCallbacksFromTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Manipulator::get_target
// Il2CppName: get_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (UnityEngine::UIElements::Manipulator::*)()>(&UnityEngine::UIElements::Manipulator::get_target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Manipulator*), "get_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Manipulator::set_target
// Il2CppName: set_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Manipulator::*)(::UnityEngine::UIElements::VisualElement*)>(&UnityEngine::UIElements::Manipulator::set_target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Manipulator*), "set_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Manipulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!