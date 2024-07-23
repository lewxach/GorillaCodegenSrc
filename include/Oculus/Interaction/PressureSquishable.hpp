// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.HandGrab.IHandGrabUseDelegate
#include "Oculus/Interaction/HandGrab/IHandGrabUseDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PressureSquishable
  class PressureSquishable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PressureSquishable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PressureSquishable*, "Oculus.Interaction", "PressureSquishable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PressureSquishable
  // [TokenAttribute] Offset: FFFFFFFF
  class PressureSquishable : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*/ {
    public:
    public:
    // private UnityEngine.GameObject _squishableObject
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* squishableObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _maxSquish
    // Size: 0x4
    // Offset: 0x28
    float maxSquish;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxStretch
    // Size: 0x4
    // Offset: 0x2C
    float maxStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: initialScale
    char __padding3[0x3] = {};
    // private UnityEngine.Vector3 _initialScale
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 initialScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate
    operator ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(this);
    }
    // Get instance field reference: private UnityEngine.GameObject _squishableObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__squishableObject();
    // Get instance field reference: private System.Single _maxSquish
    [[deprecated("Use field access instead!")]] float& dyn__maxSquish();
    // Get instance field reference: private System.Single _maxStretch
    [[deprecated("Use field access instead!")]] float& dyn__maxStretch();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private UnityEngine.Vector3 _initialScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__initialScale();
    // protected System.Void Start()
    // Offset: 0x479901C
    void Start();
    // public System.Void BeginUse()
    // Offset: 0x4799054
    void BeginUse();
    // public System.Void EndUse()
    // Offset: 0x4799058
    void EndUse();
    // public System.Single ComputeUseStrength(System.Single strength)
    // Offset: 0x479908C
    float ComputeUseStrength(float strength);
    // public System.Void .ctor()
    // Offset: 0x4799134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PressureSquishable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PressureSquishable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PressureSquishable*, creationType>()));
    }
  }; // Oculus.Interaction.PressureSquishable
  #pragma pack(pop)
  static check_size<sizeof(PressureSquishable), 52 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_PressureSquishableSizeCheck;
  static_assert(sizeof(PressureSquishable) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PressureSquishable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PressureSquishable::*)()>(&Oculus::Interaction::PressureSquishable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PressureSquishable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PressureSquishable::BeginUse
// Il2CppName: BeginUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PressureSquishable::*)()>(&Oculus::Interaction::PressureSquishable::BeginUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PressureSquishable*), "BeginUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PressureSquishable::EndUse
// Il2CppName: EndUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PressureSquishable::*)()>(&Oculus::Interaction::PressureSquishable::EndUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PressureSquishable*), "EndUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PressureSquishable::ComputeUseStrength
// Il2CppName: ComputeUseStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PressureSquishable::*)(float)>(&Oculus::Interaction::PressureSquishable::ComputeUseStrength)> {
  static const MethodInfo* get() {
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PressureSquishable*), "ComputeUseStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strength});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PressureSquishable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!