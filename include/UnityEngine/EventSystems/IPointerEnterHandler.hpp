// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IPointerEnterHandler
  class IPointerEnterHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerEnterHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerEnterHandler*, "UnityEngine.EventSystems", "IPointerEnterHandler");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IPointerEnterHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IPointerEnterHandler/*, public ::UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IEventSystemHandler
    operator ::UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IPointerEnterHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IPointerEnterHandler::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IPointerEnterHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::IPointerEnterHandler::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IPointerEnterHandler*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
