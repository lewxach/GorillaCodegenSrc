// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ScrollRect
  class ScrollRect;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: ButtonInsideScrollList
  class ButtonInsideScrollList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::ButtonInsideScrollList);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::ButtonInsideScrollList*, "Photon.Pun.UtilityScripts", "ButtonInsideScrollList");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.ButtonInsideScrollList
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonInsideScrollList : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerDownHandler, public ::UnityEngine::EventSystems::IPointerUpHandler*/ {
    public:
    public:
    // private UnityEngine.UI.ScrollRect scrollRect
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::ScrollRect* scrollRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::ScrollRect*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerDownHandler
    operator ::UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerUpHandler
    operator ::UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.ScrollRect scrollRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::ScrollRect*& dyn_scrollRect();
    // private System.Void Start()
    // Offset: 0x4A57864
    void Start();
    // private System.Void UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A578BC
    void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A5795C
    void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x4A579F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonInsideScrollList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::ButtonInsideScrollList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonInsideScrollList*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.ButtonInsideScrollList
  #pragma pack(pop)
  static check_size<sizeof(ButtonInsideScrollList), 32 + sizeof(::UnityEngine::UI::ScrollRect*)> __Photon_Pun_UtilityScripts_ButtonInsideScrollListSizeCheck;
  static_assert(sizeof(ButtonInsideScrollList) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::ButtonInsideScrollList::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)()>(&Photon::Pun::UtilityScripts::ButtonInsideScrollList::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::ButtonInsideScrollList*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown
// Il2CppName: UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::ButtonInsideScrollList*), "UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp
// Il2CppName: UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::ButtonInsideScrollList::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::ButtonInsideScrollList::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::ButtonInsideScrollList*), "UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::ButtonInsideScrollList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
