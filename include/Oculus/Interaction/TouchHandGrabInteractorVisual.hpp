// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: TouchHandGrabInteractor
  class TouchHandGrabInteractor;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: SyntheticHand
  class SyntheticHand;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: TouchHandGrabInteractorVisual
  class TouchHandGrabInteractorVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::TouchHandGrabInteractorVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::TouchHandGrabInteractorVisual*, "Oculus.Interaction", "TouchHandGrabInteractorVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.TouchHandGrabInteractorVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class TouchHandGrabInteractorVisual : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::TouchHandGrabInteractorVisual::$$c
    class $$c;
    public:
    // private Oculus.Interaction.TouchHandGrabInteractor _interactor
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::TouchHandGrabInteractor* interactor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractor*) == 0x8);
    // private Oculus.Interaction.Input.SyntheticHand _syntheticHand
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::SyntheticHand* syntheticHand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::SyntheticHand*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Oculus.Interaction.TouchHandGrabInteractor _interactor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::TouchHandGrabInteractor*& dyn__interactor();
    // Get instance field reference: private Oculus.Interaction.Input.SyntheticHand _syntheticHand
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::SyntheticHand*& dyn__syntheticHand();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // protected System.Void Start()
    // Offset: 0x47C0448
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47C0480
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47C0518
    void OnDisable();
    // private System.Void UpdateLocks()
    // Offset: 0x47C05B0
    void UpdateLocks();
    // protected System.Void Update()
    // Offset: 0x47C07D0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x47C07D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchHandGrabInteractorVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::TouchHandGrabInteractorVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchHandGrabInteractorVisual*, creationType>()));
    }
  }; // Oculus.Interaction.TouchHandGrabInteractorVisual
  #pragma pack(pop)
  static check_size<sizeof(TouchHandGrabInteractorVisual), 48 + sizeof(bool)> __Oculus_Interaction_TouchHandGrabInteractorVisualSizeCheck;
  static_assert(sizeof(TouchHandGrabInteractorVisual) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractorVisual::*)()>(&Oculus::Interaction::TouchHandGrabInteractorVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractorVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractorVisual::*)()>(&Oculus::Interaction::TouchHandGrabInteractorVisual::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractorVisual*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractorVisual::*)()>(&Oculus::Interaction::TouchHandGrabInteractorVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractorVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::UpdateLocks
// Il2CppName: UpdateLocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractorVisual::*)()>(&Oculus::Interaction::TouchHandGrabInteractorVisual::UpdateLocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractorVisual*), "UpdateLocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractorVisual::*)()>(&Oculus::Interaction::TouchHandGrabInteractorVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractorVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractorVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
