// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: OnStartDelete
  class OnStartDelete;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnStartDelete);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnStartDelete*, "Photon.Pun.UtilityScripts", "OnStartDelete");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.OnStartDelete
  // [TokenAttribute] Offset: FFFFFFFF
  class OnStartDelete : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Start()
    // Offset: 0x4A556C0
    void Start();
    // public System.Void .ctor()
    // Offset: 0x4A5572C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnStartDelete* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::OnStartDelete::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnStartDelete*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.OnStartDelete
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnStartDelete::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnStartDelete::*)()>(&Photon::Pun::UtilityScripts::OnStartDelete::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnStartDelete*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnStartDelete::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!