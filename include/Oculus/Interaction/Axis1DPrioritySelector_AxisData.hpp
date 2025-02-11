// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Axis1DPrioritySelector
#include "Oculus/Interaction/Axis1DPrioritySelector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IAxis1D
  class IAxis1D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Axis1DPrioritySelector::AxisData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Axis1DPrioritySelector::AxisData*, "Oculus.Interaction", "Axis1DPrioritySelector/AxisData");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Axis1DPrioritySelector/AxisData
  // [TokenAttribute] Offset: FFFFFFFF
  class Axis1DPrioritySelector::AxisData : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Object _activeState
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Object* activeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // public Oculus.Interaction.IActiveState ActiveState
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Interaction::IActiveState* ActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IActiveState*) == 0x8);
    // private UnityEngine.Object _axis
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // public Oculus.Interaction.Input.IAxis1D Axis
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IAxis1D* Axis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Object _activeState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__activeState();
    // Get instance field reference: public Oculus.Interaction.IActiveState ActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IActiveState*& dyn_ActiveState();
    // Get instance field reference: private UnityEngine.Object _axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__axis();
    // Get instance field reference: public Oculus.Interaction.Input.IAxis1D Axis
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_Axis();
    // public System.Void Initialize()
    // Offset: 0x4777FD0
    void Initialize();
    // public System.Void Validate(UnityEngine.Component context)
    // Offset: 0x47780D0
    void Validate(::UnityEngine::Component* context);
    // public System.Void .ctor()
    // Offset: 0x47782A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Axis1DPrioritySelector::AxisData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Axis1DPrioritySelector::AxisData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Axis1DPrioritySelector::AxisData*, creationType>()));
    }
  }; // Oculus.Interaction.Axis1DPrioritySelector/AxisData
  #pragma pack(pop)
  static check_size<sizeof(Axis1DPrioritySelector::AxisData), 40 + sizeof(::Oculus::Interaction::Input::IAxis1D*)> __Oculus_Interaction_Axis1DPrioritySelector_AxisDataSizeCheck;
  static_assert(sizeof(Axis1DPrioritySelector::AxisData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DPrioritySelector::AxisData::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DPrioritySelector::AxisData::*)()>(&Oculus::Interaction::Axis1DPrioritySelector::AxisData::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DPrioritySelector::AxisData*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DPrioritySelector::AxisData::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DPrioritySelector::AxisData::*)(::UnityEngine::Component*)>(&Oculus::Interaction::Axis1DPrioritySelector::AxisData::Validate)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DPrioritySelector::AxisData*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DPrioritySelector::AxisData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
