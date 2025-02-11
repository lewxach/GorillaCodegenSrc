// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: EventContents
  class EventContents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::EventsModels::EventContents);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::EventsModels::EventContents*, "PlayFab.EventsModels", "EventContents");
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.EventsModels.EventContents
  // [TokenAttribute] Offset: FFFFFFFF
  class EventContents : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.EventsModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::EventsModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::EventsModels::EntityKey*) == 0x8);
    // public System.String EventNamespace
    // Size: 0x8
    // Offset: 0x18
    ::StringW EventNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String OriginalId
    // Size: 0x8
    // Offset: 0x28
    ::StringW OriginalId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> OriginalTimestamp
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<::System::DateTime> OriginalTimestamp;
    // public System.Object Payload
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* Payload;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String PayloadJSON
    // Size: 0x8
    // Offset: 0x48
    ::StringW PayloadJSON;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public PlayFab.EventsModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::EventsModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.String EventNamespace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EventNamespace();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.String OriginalId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OriginalId();
    // Get instance field reference: public System.Nullable`1<System.DateTime> OriginalTimestamp
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_OriginalTimestamp();
    // Get instance field reference: public System.Object Payload
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Payload();
    // Get instance field reference: public System.String PayloadJSON
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PayloadJSON();
    // public System.Void .ctor()
    // Offset: 0x4B6144C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventContents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::EventsModels::EventContents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventContents*, creationType>()));
    }
  }; // PlayFab.EventsModels.EventContents
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::EventsModels::EventContents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
