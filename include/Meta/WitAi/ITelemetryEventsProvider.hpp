// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: TelemetryEvents
  class TelemetryEvents;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: ITelemetryEventsProvider
  class ITelemetryEventsProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::ITelemetryEventsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::ITelemetryEventsProvider*, "Meta.WitAi", "ITelemetryEventsProvider");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.ITelemetryEventsProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ITelemetryEventsProvider {
    public:
    // public Meta.WitAi.Events.TelemetryEvents get_TelemetryEvents()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents();
  }; // Meta.WitAi.ITelemetryEventsProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::ITelemetryEventsProvider::get_TelemetryEvents
// Il2CppName: get_TelemetryEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (Meta::WitAi::ITelemetryEventsProvider::*)()>(&Meta::WitAi::ITelemetryEventsProvider::get_TelemetryEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::ITelemetryEventsProvider*), "get_TelemetryEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};