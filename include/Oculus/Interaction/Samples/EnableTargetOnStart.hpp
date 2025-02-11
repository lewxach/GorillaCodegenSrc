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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Forward declaring type: EnableTargetOnStart
  class EnableTargetOnStart;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::EnableTargetOnStart);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::EnableTargetOnStart*, "Oculus.Interaction.Samples", "EnableTargetOnStart");
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.EnableTargetOnStart
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableTargetOnStart : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.MonoBehaviour[] _components
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::MonoBehaviour*> components;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MonoBehaviour*>) == 0x8);
    // public UnityEngine.GameObject[] _gameObjects
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> gameObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.MonoBehaviour[] _components
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MonoBehaviour*>& dyn__components();
    // Get instance field reference: public UnityEngine.GameObject[] _gameObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__gameObjects();
    // private System.Void Start()
    // Offset: 0x479E888
    void Start();
    // public System.Void .ctor()
    // Offset: 0x479E940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableTargetOnStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::EnableTargetOnStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableTargetOnStart*, creationType>()));
    }
  }; // Oculus.Interaction.Samples.EnableTargetOnStart
  #pragma pack(pop)
  static check_size<sizeof(EnableTargetOnStart), 40 + sizeof(::ArrayW<::UnityEngine::GameObject*>)> __Oculus_Interaction_Samples_EnableTargetOnStartSizeCheck;
  static_assert(sizeof(EnableTargetOnStart) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::EnableTargetOnStart::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::EnableTargetOnStart::*)()>(&Oculus::Interaction::Samples::EnableTargetOnStart::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::EnableTargetOnStart*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::EnableTargetOnStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
