// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DynamicSceneManagerHelper
namespace DynamicSceneManagerHelper {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRAnchor
  struct OVRAnchor;
}
// Completed forward declares
// Type namespace: DynamicSceneManagerHelper
namespace DynamicSceneManagerHelper {
  // Forward declaring type: UnityObjectUpdater
  class UnityObjectUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DynamicSceneManagerHelper::UnityObjectUpdater);
DEFINE_IL2CPP_ARG_TYPE(::DynamicSceneManagerHelper::UnityObjectUpdater*, "DynamicSceneManagerHelper", "UnityObjectUpdater");
// Type namespace: DynamicSceneManagerHelper
namespace DynamicSceneManagerHelper {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DynamicSceneManagerHelper.UnityObjectUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityObjectUpdater : public ::Il2CppObject {
    public:
    // Nested type: ::DynamicSceneManagerHelper::UnityObjectUpdater::$CreateUnityObject$d__0
    struct $CreateUnityObject$d__0;
    // public System.Threading.Tasks.Task`1<UnityEngine.GameObject> CreateUnityObject(OVRAnchor anchor, UnityEngine.GameObject parent)
    // Offset: 0x281F3DC
    ::System::Threading::Tasks::Task_1<::UnityEngine::GameObject*>* CreateUnityObject(::GlobalNamespace::OVRAnchor anchor, ::UnityEngine::GameObject* parent);
    // public System.Void UpdateUnityObject(OVRAnchor anchor, UnityEngine.GameObject gameObject)
    // Offset: 0x281F4F8
    void UpdateUnityObject(::GlobalNamespace::OVRAnchor anchor, ::UnityEngine::GameObject* gameObject);
    // public System.Void .ctor()
    // Offset: 0x281F694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityObjectUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DynamicSceneManagerHelper::UnityObjectUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityObjectUpdater*, creationType>()));
    }
  }; // DynamicSceneManagerHelper.UnityObjectUpdater
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DynamicSceneManagerHelper::UnityObjectUpdater::CreateUnityObject
// Il2CppName: CreateUnityObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::GameObject*>* (DynamicSceneManagerHelper::UnityObjectUpdater::*)(::GlobalNamespace::OVRAnchor, ::UnityEngine::GameObject*)>(&DynamicSceneManagerHelper::UnityObjectUpdater::CreateUnityObject)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DynamicSceneManagerHelper::UnityObjectUpdater*), "CreateUnityObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor, parent});
  }
};
// Writing MetadataGetter for method: DynamicSceneManagerHelper::UnityObjectUpdater::UpdateUnityObject
// Il2CppName: UpdateUnityObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DynamicSceneManagerHelper::UnityObjectUpdater::*)(::GlobalNamespace::OVRAnchor, ::UnityEngine::GameObject*)>(&DynamicSceneManagerHelper::UnityObjectUpdater::UpdateUnityObject)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DynamicSceneManagerHelper::UnityObjectUpdater*), "UpdateUnityObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor, gameObject});
  }
};
// Writing MetadataGetter for method: DynamicSceneManagerHelper::UnityObjectUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
