// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVirtualKeyboard
#include "GlobalNamespace/OVRVirtualKeyboard.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard::CommitTextUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::CommitTextUnityEvent*, "", "OVRVirtualKeyboard/CommitTextUnityEvent");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRVirtualKeyboard/CommitTextUnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboard::CommitTextUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x493AEE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboard::CommitTextUnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboard::CommitTextUnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboard::CommitTextUnityEvent*, creationType>()));
    }
  }; // OVRVirtualKeyboard/CommitTextUnityEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::CommitTextUnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!