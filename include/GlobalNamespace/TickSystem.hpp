// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TickSystem`1
#include "GlobalNamespace/TickSystem_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TickSystem
  class TickSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TickSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TickSystem*, "", "TickSystem");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TickSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class TickSystem : public ::GlobalNamespace::TickSystem_1<::Il2CppObject*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x27713E8
    // Implemented from: TickSystem`1
    // Base method: System.Void TickSystem_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TickSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickSystem*, creationType>()));
    }
  }; // TickSystem
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TickSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
