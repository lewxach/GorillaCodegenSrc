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
// Including type: Oculus.Interaction.HandGrab.PoseTravelData
#include "Oculus/Interaction/HandGrab/PoseTravelData.hpp"
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
  // Forward declaring type: MoveTowardsTargetProvider
  class MoveTowardsTargetProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::MoveTowardsTargetProvider);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::MoveTowardsTargetProvider*, "Oculus.Interaction.HandGrab", "MoveTowardsTargetProvider");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.MoveTowardsTargetProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MoveTowardsTargetProvider : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IMovementProvider*/ {
    public:
    public:
    // private Oculus.Interaction.HandGrab.PoseTravelData _travellingData
    // Size: 0x10
    // Offset: 0x20
    ::Oculus::Interaction::HandGrab::PoseTravelData travellingData;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandGrab::PoseTravelData) == 0x10);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IMovementProvider
    operator ::Oculus::Interaction::IMovementProvider() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IMovementProvider*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.HandGrab.PoseTravelData _travellingData
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandGrab::PoseTravelData& dyn__travellingData();
    // public Oculus.Interaction.IMovement CreateMovement()
    // Offset: 0x482EC14
    ::Oculus::Interaction::IMovement* CreateMovement();
    // public System.Void InjectAllMoveTowardsTargetProvider(Oculus.Interaction.HandGrab.PoseTravelData travellingData)
    // Offset: 0x482ECC4
    void InjectAllMoveTowardsTargetProvider(::Oculus::Interaction::HandGrab::PoseTravelData travellingData);
    // public System.Void InjectTravellingData(Oculus.Interaction.HandGrab.PoseTravelData travellingData)
    // Offset: 0x482ECD4
    void InjectTravellingData(::Oculus::Interaction::HandGrab::PoseTravelData travellingData);
    // public System.Void .ctor()
    // Offset: 0x482ECE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveTowardsTargetProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveTowardsTargetProvider*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.MoveTowardsTargetProvider
  #pragma pack(pop)
  static check_size<sizeof(MoveTowardsTargetProvider), 32 + sizeof(::Oculus::Interaction::HandGrab::PoseTravelData)> __Oculus_Interaction_HandGrab_MoveTowardsTargetProviderSizeCheck;
  static_assert(sizeof(MoveTowardsTargetProvider) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::CreateMovement
// Il2CppName: CreateMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IMovement* (Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::*)()>(&Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::CreateMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::MoveTowardsTargetProvider*), "CreateMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::InjectAllMoveTowardsTargetProvider
// Il2CppName: InjectAllMoveTowardsTargetProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::*)(::Oculus::Interaction::HandGrab::PoseTravelData)>(&Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::InjectAllMoveTowardsTargetProvider)> {
  static const MethodInfo* get() {
    static auto* travellingData = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "PoseTravelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::MoveTowardsTargetProvider*), "InjectAllMoveTowardsTargetProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{travellingData});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::InjectTravellingData
// Il2CppName: InjectTravellingData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::*)(::Oculus::Interaction::HandGrab::PoseTravelData)>(&Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::InjectTravellingData)> {
  static const MethodInfo* get() {
    static auto* travellingData = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "PoseTravelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::MoveTowardsTargetProvider*), "InjectTravellingData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{travellingData});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::MoveTowardsTargetProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
