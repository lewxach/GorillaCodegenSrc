// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IActiveState
#include "Oculus/Interaction/IActiveState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: Sequence
  class Sequence;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: SequenceActiveState
  class SequenceActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::SequenceActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::SequenceActiveState*, "Oculus.Interaction.PoseDetection", "SequenceActiveState");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.SequenceActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class SequenceActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    // Nested type: ::Oculus::Interaction::PoseDetection::SequenceActiveState::DebugModel
    class DebugModel;
    public:
    // private Oculus.Interaction.PoseDetection.Sequence _sequence
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::Sequence* sequence;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::Sequence*) == 0x8);
    // private System.Boolean _activateIfStepsStarted
    // Size: 0x1
    // Offset: 0x28
    bool activateIfStepsStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _activateIfStepsComplete
    // Size: 0x1
    // Offset: 0x29
    bool activateIfStepsComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.PoseDetection.Sequence _sequence
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::Sequence*& dyn__sequence();
    // Get instance field reference: private System.Boolean _activateIfStepsStarted
    [[deprecated("Use field access instead!")]] bool& dyn__activateIfStepsStarted();
    // Get instance field reference: private System.Boolean _activateIfStepsComplete
    [[deprecated("Use field access instead!")]] bool& dyn__activateIfStepsComplete();
    // protected System.Void Start()
    // Offset: 0x47F1E20
    void Start();
    // public System.Boolean get_Active()
    // Offset: 0x47F1E24
    bool get_Active();
    // static private System.Void .cctor()
    // Offset: 0x47F1E84
    static void _cctor();
    // public System.Void InjectAllSequenceActiveState(Oculus.Interaction.PoseDetection.Sequence sequence, System.Boolean activateIfStepsStarted, System.Boolean activateIfStepsComplete)
    // Offset: 0x47F1F58
    void InjectAllSequenceActiveState(::Oculus::Interaction::PoseDetection::Sequence* sequence, bool activateIfStepsStarted, bool activateIfStepsComplete);
    // public System.Void InjectSequence(Oculus.Interaction.PoseDetection.Sequence sequence)
    // Offset: 0x47F1F94
    void InjectSequence(::Oculus::Interaction::PoseDetection::Sequence* sequence);
    // public System.Void InjectActivateIfStepsStarted(System.Boolean activateIfStepsStarted)
    // Offset: 0x47F1F9C
    void InjectActivateIfStepsStarted(bool activateIfStepsStarted);
    // public System.Void InjectActivateIfStepsComplete(System.Boolean activateIfStepsComplete)
    // Offset: 0x47F1FA8
    void InjectActivateIfStepsComplete(bool activateIfStepsComplete);
    // public System.Void .ctor()
    // Offset: 0x47F1FB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SequenceActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::SequenceActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SequenceActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.SequenceActiveState
  #pragma pack(pop)
  static check_size<sizeof(SequenceActiveState), 41 + sizeof(bool)> __Oculus_Interaction_PoseDetection_SequenceActiveStateSizeCheck;
  static_assert(sizeof(SequenceActiveState) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::SequenceActiveState::*)()>(&Oculus::Interaction::PoseDetection::SequenceActiveState::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PoseDetection::SequenceActiveState::*)()>(&Oculus::Interaction::PoseDetection::SequenceActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::PoseDetection::SequenceActiveState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::InjectAllSequenceActiveState
// Il2CppName: InjectAllSequenceActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::SequenceActiveState::*)(::Oculus::Interaction::PoseDetection::Sequence*, bool, bool)>(&Oculus::Interaction::PoseDetection::SequenceActiveState::InjectAllSequenceActiveState)> {
  static const MethodInfo* get() {
    static auto* sequence = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "Sequence")->byval_arg;
    static auto* activateIfStepsStarted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* activateIfStepsComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "InjectAllSequenceActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequence, activateIfStepsStarted, activateIfStepsComplete});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::InjectSequence
// Il2CppName: InjectSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::SequenceActiveState::*)(::Oculus::Interaction::PoseDetection::Sequence*)>(&Oculus::Interaction::PoseDetection::SequenceActiveState::InjectSequence)> {
  static const MethodInfo* get() {
    static auto* sequence = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.PoseDetection", "Sequence")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "InjectSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequence});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsStarted
// Il2CppName: InjectActivateIfStepsStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::SequenceActiveState::*)(bool)>(&Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsStarted)> {
  static const MethodInfo* get() {
    static auto* activateIfStepsStarted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "InjectActivateIfStepsStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activateIfStepsStarted});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsComplete
// Il2CppName: InjectActivateIfStepsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::SequenceActiveState::*)(bool)>(&Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsComplete)> {
  static const MethodInfo* get() {
    static auto* activateIfStepsComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::SequenceActiveState*), "InjectActivateIfStepsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activateIfStepsComplete});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::SequenceActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
