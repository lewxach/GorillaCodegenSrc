// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineHelpURLAttribute
  class TimelineHelpURLAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineHelpURLAttribute*, "UnityEngine.Timeline", "TimelineHelpURLAttribute");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineHelpURLAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  class TimelineHelpURLAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.Type type)
    // Offset: 0x53BE120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineHelpURLAttribute* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimelineHelpURLAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineHelpURLAttribute*, creationType>(type)));
    }
  }; // UnityEngine.Timeline.TimelineHelpURLAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineHelpURLAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
