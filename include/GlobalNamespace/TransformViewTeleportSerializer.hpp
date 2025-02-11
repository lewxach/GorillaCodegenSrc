// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonTransformView
  class PhotonTransformView;
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TransformViewTeleportSerializer
  class TransformViewTeleportSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TransformViewTeleportSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformViewTeleportSerializer*, "", "TransformViewTeleportSerializer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: TransformViewTeleportSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformViewTeleportSerializer : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    public:
    // private System.Boolean willTeleport
    // Size: 0x1
    // Offset: 0x28
    bool willTeleport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: willTeleport and: transformView
    char __padding0[0x7] = {};
    // private Photon.Pun.PhotonTransformView transformView
    // Size: 0x8
    // Offset: 0x30
    ::Photon::Pun::PhotonTransformView* transformView;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformView*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: private System.Boolean willTeleport
    [[deprecated("Use field access instead!")]] bool& dyn_willTeleport();
    // Get instance field reference: private Photon.Pun.PhotonTransformView transformView
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformView*& dyn_transformView();
    // private System.Void Start()
    // Offset: 0x275B984
    void Start();
    // public System.Void SetWillTeleport()
    // Offset: 0x275B9DC
    void SetWillTeleport();
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x275B9E8
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x275BAC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformViewTeleportSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TransformViewTeleportSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformViewTeleportSerializer*, creationType>()));
    }
  }; // TransformViewTeleportSerializer
  #pragma pack(pop)
  static check_size<sizeof(TransformViewTeleportSerializer), 48 + sizeof(::Photon::Pun::PhotonTransformView*)> __GlobalNamespace_TransformViewTeleportSerializerSizeCheck;
  static_assert(sizeof(TransformViewTeleportSerializer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransformViewTeleportSerializer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformViewTeleportSerializer::*)()>(&GlobalNamespace::TransformViewTeleportSerializer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformViewTeleportSerializer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformViewTeleportSerializer::SetWillTeleport
// Il2CppName: SetWillTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformViewTeleportSerializer::*)()>(&GlobalNamespace::TransformViewTeleportSerializer::SetWillTeleport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformViewTeleportSerializer*), "SetWillTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformViewTeleportSerializer::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransformViewTeleportSerializer::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::TransformViewTeleportSerializer::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransformViewTeleportSerializer*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransformViewTeleportSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
