// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.EventSystem
#include "UnityEngine/EventSystems/EventSystem.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0*, "UnityEngine.EventSystems", "EventSystem/<>c__DisplayClass56_0");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventSystem/<>c__DisplayClass56_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EventSystem::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject go
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* go;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept {
      return go;
    }
    // Get instance field reference: public UnityEngine.GameObject go
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_go();
    // public System.Void .ctor()
    // Offset: 0x56FE1D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSystem::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSystem::$$c__DisplayClass56_0*, creationType>()));
    }
    // System.Void <CreateUIToolkitPanelGameObject>b__0()
    // Offset: 0x56FEB60
    void $CreateUIToolkitPanelGameObject$b__0();
  }; // UnityEngine.EventSystems.EventSystem/<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(EventSystem::$$c__DisplayClass56_0), 16 + sizeof(::UnityEngine::GameObject*)> __UnityEngine_EventSystems_EventSystem_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(EventSystem::$$c__DisplayClass56_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0::$CreateUIToolkitPanelGameObject$b__0
// Il2CppName: <CreateUIToolkitPanelGameObject>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0::*)()>(&UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0::$CreateUIToolkitPanelGameObject$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem::$$c__DisplayClass56_0*), "<CreateUIToolkitPanelGameObject>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
