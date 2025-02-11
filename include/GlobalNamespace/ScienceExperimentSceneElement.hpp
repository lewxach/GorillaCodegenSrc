// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ITickSystemPost
#include "GlobalNamespace/ITickSystemPost.hpp"
// Including type: ScienceExperimentElementID
#include "GlobalNamespace/ScienceExperimentElementID.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScienceExperimentSceneElement
  class ScienceExperimentSceneElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScienceExperimentSceneElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScienceExperimentSceneElement*, "", "ScienceExperimentSceneElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: ScienceExperimentSceneElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ScienceExperimentSceneElement : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ITickSystemPost*/ {
    public:
    public:
    // public ScienceExperimentElementID elementID
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::ScienceExperimentElementID elementID;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScienceExperimentElementID) == 0x4);
    // Padding between fields: elementID and: followElement
    char __padding0[0x4] = {};
    // private UnityEngine.Transform followElement
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* followElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean <ITickSystemPost.PostTickRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool PostTickRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ITickSystemPost
    operator ::GlobalNamespace::ITickSystemPost() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ITickSystemPost*>(this);
    }
    // Get instance field reference: public ScienceExperimentElementID elementID
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScienceExperimentElementID& dyn_elementID();
    // Get instance field reference: private UnityEngine.Transform followElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_followElement();
    // Get instance field reference: private System.Boolean <ITickSystemPost.PostTickRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ITickSystemPost_PostTickRunning$k__BackingField();
    // private System.Boolean ITickSystemPost.get_PostTickRunning()
    // Offset: 0x272F840
    bool ITickSystemPost_get_PostTickRunning();
    // private System.Void ITickSystemPost.set_PostTickRunning(System.Boolean value)
    // Offset: 0x272F848
    void ITickSystemPost_set_PostTickRunning(bool value);
    // private System.Void ITickSystemPost.PostTick()
    // Offset: 0x272F854
    void ITickSystemPost_PostTick();
    // private System.Void Start()
    // Offset: 0x272F904
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x272F9C4
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x272FA30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScienceExperimentSceneElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScienceExperimentSceneElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScienceExperimentSceneElement*, creationType>()));
    }
  }; // ScienceExperimentSceneElement
  #pragma pack(pop)
  static check_size<sizeof(ScienceExperimentSceneElement), 48 + sizeof(bool)> __GlobalNamespace_ScienceExperimentSceneElementSizeCheck;
  static_assert(sizeof(ScienceExperimentSceneElement) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_get_PostTickRunning
// Il2CppName: ITickSystemPost.get_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ScienceExperimentSceneElement::*)()>(&GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_get_PostTickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScienceExperimentSceneElement*), "ITickSystemPost.get_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_set_PostTickRunning
// Il2CppName: ITickSystemPost.set_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScienceExperimentSceneElement::*)(bool)>(&GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_set_PostTickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScienceExperimentSceneElement*), "ITickSystemPost.set_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_PostTick
// Il2CppName: ITickSystemPost.PostTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScienceExperimentSceneElement::*)()>(&GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_PostTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScienceExperimentSceneElement*), "ITickSystemPost.PostTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScienceExperimentSceneElement::*)()>(&GlobalNamespace::ScienceExperimentSceneElement::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScienceExperimentSceneElement*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScienceExperimentSceneElement::*)()>(&GlobalNamespace::ScienceExperimentSceneElement::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScienceExperimentSceneElement*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScienceExperimentSceneElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
