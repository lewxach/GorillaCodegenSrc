// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Utilities.VoiceServiceReference
#include "Meta/WitAi/Utilities/VoiceServiceReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: VoiceService
  class VoiceService;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Utilities::VoiceServiceReference::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Utilities::VoiceServiceReference::$$c*, "Meta.WitAi.Utilities", "VoiceServiceReference/<>c");
// Type namespace: Meta.WitAi.Utilities
namespace Meta::WitAi::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Utilities.VoiceServiceReference/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VoiceServiceReference::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Meta.WitAi.Utilities.VoiceServiceReference/<>c <>9
    static ::Meta::WitAi::Utilities::VoiceServiceReference::$$c* _get_$$9();
    // Set static field: static public readonly Meta.WitAi.Utilities.VoiceServiceReference/<>c <>9
    static void _set_$$9(::Meta::WitAi::Utilities::VoiceServiceReference::$$c* value);
    // Get static field: static public System.Predicate`1<Meta.WitAi.VoiceService> <>9__2_0
    static ::System::Predicate_1<::Meta::WitAi::VoiceService*>* _get_$$9__2_0();
    // Set static field: static public System.Predicate`1<Meta.WitAi.VoiceService> <>9__2_0
    static void _set_$$9__2_0(::System::Predicate_1<::Meta::WitAi::VoiceService*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4437314
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x443737C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceServiceReference::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Utilities::VoiceServiceReference::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceServiceReference::$$c*, creationType>()));
    }
    // System.Boolean <get_VoiceService>b__2_0(Meta.WitAi.VoiceService o)
    // Offset: 0x4437384
    bool $get_VoiceService$b__2_0(::Meta::WitAi::VoiceService* o);
  }; // Meta.WitAi.Utilities.VoiceServiceReference/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Utilities::VoiceServiceReference::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::WitAi::Utilities::VoiceServiceReference::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Utilities::VoiceServiceReference::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Utilities::VoiceServiceReference::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Utilities::VoiceServiceReference::$$c::$get_VoiceService$b__2_0
// Il2CppName: <get_VoiceService>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Utilities::VoiceServiceReference::$$c::*)(::Meta::WitAi::VoiceService*)>(&Meta::WitAi::Utilities::VoiceServiceReference::$$c::$get_VoiceService$b__2_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("Meta.WitAi", "VoiceService")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Utilities::VoiceServiceReference::$$c*), "<get_VoiceService>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
