// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IMovementProvider
#include "Oculus/Interaction/IMovementProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IMovement
  class IMovement;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: MoveAtSourceProvider
  class MoveAtSourceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::MoveAtSourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::MoveAtSourceProvider*, "Oculus.Interaction.HandGrab", "MoveAtSourceProvider");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.MoveAtSourceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MoveAtSourceProvider : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IMovementProvider*/ {
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IMovementProvider
    operator ::Oculus::Interaction::IMovementProvider() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IMovementProvider*>(this);
    }
    // public Oculus.Interaction.IMovement CreateMovement()
    // Offset: 0x482E8D0
    ::Oculus::Interaction::IMovement* CreateMovement();
    // public System.Void .ctor()
    // Offset: 0x482E9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveAtSourceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::MoveAtSourceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveAtSourceProvider*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.MoveAtSourceProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveAtSourceProvider::CreateMovement
// Il2CppName: CreateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IMovement* (Oculus::Interaction::HandGrab::MoveAtSourceProvider::*)()>(&Oculus::Interaction::HandGrab::MoveAtSourceProvider::CreateMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::MoveAtSourceProvider*), "CreateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveAtSourceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
