// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineComponentBase
#include "Cinemachine/CinemachineComponentBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CameraState
  struct CameraState;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineHardLookAt
  class CinemachineHardLookAt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineHardLookAt);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineHardLookAt*, "Cinemachine", "CinemachineHardLookAt");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineHardLookAt
  // [TokenAttribute] Offset: FFFFFFFF
  // [SaveDuringPlayAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  class CinemachineHardLookAt : public ::Cinemachine::CinemachineComponentBase {
    public:
    // public override System.Boolean get_IsValid()
    // Offset: 0x2AA1570
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Boolean CinemachineComponentBase::get_IsValid()
    bool get_IsValid();
    // public override Cinemachine.CinemachineCore/Stage get_Stage()
    // Offset: 0x2AA1600
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: Cinemachine.CinemachineCore/Stage CinemachineComponentBase::get_Stage()
    ::Cinemachine::CinemachineCore::Stage get_Stage();
    // public override System.Void MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x2AA1608
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::MutateCameraState(ref Cinemachine.CameraState curState, System.Single deltaTime)
    void MutateCameraState(ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x2AA1878
    // Implemented from: Cinemachine.CinemachineComponentBase
    // Base method: System.Void CinemachineComponentBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineHardLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineHardLookAt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineHardLookAt*, creationType>()));
    }
  }; // Cinemachine.CinemachineHardLookAt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineHardLookAt::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineHardLookAt::*)()>(&Cinemachine::CinemachineHardLookAt::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineHardLookAt*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineHardLookAt::get_Stage
// Il2CppName: get_Stage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineCore::Stage (Cinemachine::CinemachineHardLookAt::*)()>(&Cinemachine::CinemachineHardLookAt::get_Stage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineHardLookAt*), "get_Stage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineHardLookAt::MutateCameraState
// Il2CppName: MutateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineHardLookAt::*)(ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineHardLookAt::MutateCameraState)> {
  static const MethodInfo* get() {
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineHardLookAt*), "MutateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curState, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineHardLookAt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!