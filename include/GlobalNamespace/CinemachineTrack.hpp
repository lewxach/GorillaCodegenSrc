// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Playable because it is already included!
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CinemachineTrack
  class CinemachineTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CinemachineTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CinemachineTrack*, "", "CinemachineTrack");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CinemachineTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackColorAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: FFFFFFFF
  // [TrackBindingTypeAttribute] Offset: FFFFFFFF
  class CinemachineTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A7E1C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CinemachineTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineTrack*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0x2A7E0E8
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: UnityEngine.Playables.Playable TrackAsset::CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int inputCount);
  }; // CinemachineTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CinemachineTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CinemachineTrack::CreateTrackMixer
// Il2CppName: CreateTrackMixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (GlobalNamespace::CinemachineTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int)>(&GlobalNamespace::CinemachineTrack::CreateTrackMixer)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CinemachineTrack*), "CreateTrackMixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go, inputCount});
  }
};