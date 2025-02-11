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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneSampler
  class SceneSampler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneSampler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneSampler*, "", "SceneSampler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SceneSampler
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneSampler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 currentSceneIndex
    // Size: 0x4
    // Offset: 0x20
    int currentSceneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentSceneIndex and: displayText
    char __padding0[0x4] = {};
    // public UnityEngine.GameObject displayText
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* displayText;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 currentSceneIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentSceneIndex();
    // Get instance field reference: public UnityEngine.GameObject displayText
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_displayText();
    // private System.Void Awake()
    // Offset: 0x293C234
    void Awake();
    // private System.Void Update()
    // Offset: 0x293C2A0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x293C594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSampler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneSampler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSampler*, creationType>()));
    }
  }; // SceneSampler
  #pragma pack(pop)
  static check_size<sizeof(SceneSampler), 40 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_SceneSamplerSizeCheck;
  static_assert(sizeof(SceneSampler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneSampler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneSampler::*)()>(&GlobalNamespace::SceneSampler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneSampler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneSampler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneSampler::*)()>(&GlobalNamespace::SceneSampler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneSampler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneSampler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
