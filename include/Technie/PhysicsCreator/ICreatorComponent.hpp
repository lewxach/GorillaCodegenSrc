// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: IEditorData
  class IEditorData;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: ICreatorComponent
  class ICreatorComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::ICreatorComponent);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::ICreatorComponent*, "Technie.PhysicsCreator", "ICreatorComponent");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.ICreatorComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class ICreatorComponent {
    public:
    // public UnityEngine.GameObject GetGameObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::GameObject* GetGameObject();
    // public System.Boolean HasEditorData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool HasEditorData();
    // public Technie.PhysicsCreator.IEditorData GetEditorData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Technie::PhysicsCreator::IEditorData* GetEditorData();
  }; // Technie.PhysicsCreator.ICreatorComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::ICreatorComponent::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Technie::PhysicsCreator::ICreatorComponent::*)()>(&Technie::PhysicsCreator::ICreatorComponent::GetGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ICreatorComponent*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ICreatorComponent::HasEditorData
// Il2CppName: HasEditorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Technie::PhysicsCreator::ICreatorComponent::*)()>(&Technie::PhysicsCreator::ICreatorComponent::HasEditorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ICreatorComponent*), "HasEditorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ICreatorComponent::GetEditorData
// Il2CppName: GetEditorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::IEditorData* (Technie::PhysicsCreator::ICreatorComponent::*)()>(&Technie::PhysicsCreator::ICreatorComponent::GetEditorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ICreatorComponent*), "GetEditorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
